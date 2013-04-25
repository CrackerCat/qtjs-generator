/*
  cpgf Library
  Copyright (C) 2011, 2012 Wang Qi http://www.cpgf.org/
  All rights reserved.

  Licensed under the Apache License, Version 2.0 (the "License");
  you may not use this file except in compliance with the License.
  You may obtain a copy of the License at

     http://www.apache.org/licenses/LICENSE-2.0

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.
*/


#include "cpgf/gmetadefine.h"
#include "cpgf/scriptbind/gscriptbindutil.h"
#include "cpgf/gscopedinterface.h"

#include "../samplescriptbindutil.h"

#include <iostream>
#include <string.h>

using namespace cpgf;
using namespace std;

void registerOpenGL(GMetaClass * metaClass);
void registerOpenGLU(GMetaClass * metaClass);
void registerOpenGLUT(GMetaClass * metaClass);
void registerOpenGLUT2(GMetaClass * metaClass);
void registerOpenGLUT3(GMetaClass * metaClass);

ScriptLanguage lang = slJavascript;

void exitDemo()
{
	finalizeScriptEngine(lang);
	exit(0);
}

int main(int argc, char * argv[])
{
	GDefineMetaNamespace define = GDefineMetaNamespace::declare("gl");

	registerOpenGL(define.getMetaClass());
	registerOpenGLU(define.getMetaClass());
	registerOpenGLUT(define.getMetaClass());
	registerOpenGLUT2(define.getMetaClass());
	registerOpenGLUT3(define.getMetaClass());

	GDefineMetaGlobal()
		._method("exitDemo", &exitDemo);

	const char * fileName = "opengl.js";
	
	if(argc > 1) {
		fileName = argv[1];
	}

	lang = getScriptLanguageFromFileName(fileName);
	
	cout << "Running " << getLanguageText(lang) << " script." << endl;
	cout << "Press ESC in the window to exit." << endl
		<< "Don't click X button because GLUT doesn't exit main loop well." << endl
	;

	intializeScriptEngine(lang);
	
	GScopedPointer<GScriptRunner> runner;
	GScopedInterface<IMetaService> service(createDefaultMetaService());
	
	runner.reset(createScriptRunnerFromScriptLanguage(lang, service.get()));

	GScopedInterface<IScriptObject> scriptObject(runner->getScripeObject());

	scriptObject->bindCoreService("cpgf", NULL);
	
	GScopedInterface<IMetaClass> glMetaClass(static_cast<IMetaClass *>(metaItemToInterface(define.getMetaClass())));
	scriptObject->bindClass("gl", glMetaClass.get());
	GScopedInterface<IMetaMethod> method(static_cast<IMetaMethod *>(metaItemToInterface(getGlobalMetaClass()->getMethod("exitDemo"))));
	scriptObject->bindMethod("exitDemo", NULL, method.get());
	
	if(runner->executeFile(fileName)) {
		invokeScriptFunction(scriptObject.get(), "start");
	}
	else {
		cout << "Failed to execute " << fileName << ", maybe it doesn't exist?" << endl;
	}
	
	finalizeScriptEngine(lang);

	return 0;
}

