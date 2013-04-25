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


#include "../testscriptbind.h"
#include "../testscriptbindmetadata2.h"


#define RITEM tempItem = (IMetaTypedItem *)100
#define CHKITEM \
	item.reset(tempItem); \
	GCHECK(tempItem != (IMetaTypedItem *)100)

namespace {

template <typename T>
void doTestGetType(T * binding, TestScriptContext * context)
{
	GScopedInterface<IMetaTypedItem> item;
	IMetaTypedItem * tempItem;

	QNEWOBJ(obj, TestObject())
	QDO(s = "abc")
	QDO(i = 38)
	QDO(f = 3.14159265)
	QDO(func = obj.add)

	RITEM;
	GCHECK(binding->getType("notExist", &tempItem) == sdtNull);
	CHKITEM;
	GCHECK(! item);

	RITEM;
	GCHECK(binding->getType("obj", &tempItem) == sdtObject);
	CHKITEM;
	GCHECK(item);
	GCHECK(string(item->getName()) == REG_NAME_TestObject);

	RITEM;
	GCHECK(binding->getType("func", &tempItem) == sdtScriptMethod);
	CHKITEM;
	GCHECK(! item);

	RITEM;
	GCHECK(binding->getType("TestObject", &tempItem) == sdtClass);
	CHKITEM;
	GCHECK(item);
	GCHECK(string(item->getName()) == REG_NAME_TestObject);

	RITEM;
	GCHECK(binding->getType("TestEnum", &tempItem) == sdtEnum);
	CHKITEM;
	GCHECK(item);
	GCHECK(string(item->getName()) == REG_NAME_TestEnum);

	RITEM;
	GCHECK(binding->getType("s", &tempItem) == sdtString);
	CHKITEM;
	GCHECK(! item);

	RITEM;
	GCHECK(binding->getType("i", &tempItem) == sdtFundamental);
	CHKITEM;
	GCHECK(! item);

	RITEM;
	GCHECK(binding->getType("f", &tempItem) == sdtFundamental);
	CHKITEM;
	GCHECK(! item);

	RITEM;
	GCHECK(binding->getType("scriptAssert", &tempItem) == sdtMethod);
	CHKITEM;
	GCHECK(! item);

	RITEM;
	GCHECK(binding->getType("testAdd", &tempItem) == sdtMethodList);
	CHKITEM;
	GCHECK(! item);
}

void testGetType(TestScriptContext * context)
{
	if(context->getBindingLib() != NULL) {
		doTestGetType(context->getBindingLib(), context);
	}
	if(context->getBindingApi() != NULL) {
		doTestGetType(context->getBindingApi(), context);
	}
}

#define CASE testGetType
#include "../bind_testcase.h"


template <typename T>
void doTestGetMethod(T * binding, TestScriptContext * context)
{
	(void)context;

	GScopedInterface<IMetaMethod> method;

	GCHECK(binding->getMethod("notExist", NULL) == NULL);
	
	method.reset(binding->getMethod("scriptAssert", NULL));
	GCHECK(method);
}

void testGetMethod(TestScriptContext * context)
{
	if(context->getBindingLib() != NULL) {
		doTestGetMethod(context->getBindingLib(), context);
	}
	if(context->getBindingApi() != NULL) {
		doTestGetMethod(context->getBindingApi(), context);
	}
}

#define CASE testGetMethod
#include "../bind_testcase.h"


template <typename T>
void doTestGetMethodList(T * binding, TestScriptContext * context)
{
	(void)context;

	GScopedInterface<IMetaList> methodList;

	GCHECK(binding->getMethodList("notExist") == NULL);
	
	methodList.reset(binding->getMethodList("testAdd"));
	GCHECK(methodList);
	GCHECK(methodList->getCount() == 3);
}

void testGetMethodList(TestScriptContext * context)
{
	if(context->getBindingLib() != NULL) {
		doTestGetMethodList(context->getBindingLib(), context);
	}
	if(context->getBindingApi() != NULL) {
		doTestGetMethodList(context->getBindingApi(), context);
	}
}

#define CASE testGetMethodList
#include "../bind_testcase.h"


template <typename T>
void doTestGetClass(T * binding, TestScriptContext * context)
{
	(void)context;

	GScopedInterface<IMetaClass> metaClass;
	
	metaClass.reset(binding->getClass("TestObject"));
	GCHECK(string(metaClass->getName()) == REG_NAME_TestObject);

	GCHECK(binding->getClass("notExistClass") == NULL);
}

void testGetClass(TestScriptContext * context)
{
	if(context->getBindingLib() != NULL) {
		doTestGetClass(context->getBindingLib(), context);
	}
	if(context->getBindingApi() != NULL) {
		doTestGetClass(context->getBindingApi(), context);
	}
}

#define CASE testGetClass
#include "../bind_testcase.h"


template <typename T>
void doTestGetEnum(T * binding, TestScriptContext * context)
{
	(void)context;

	GScopedInterface<IMetaEnum> metaEnum;

	metaEnum.reset(binding->getEnum("TestEnum"));
	GCHECK(string(metaEnum->getName()) == REG_NAME_TestEnum);

	GCHECK(binding->getEnum("notExistEnum") == NULL);
}

void testGetEnum(TestScriptContext * context)
{
	if(context->getBindingLib() != NULL) {
		doTestGetEnum(context->getBindingLib(), context);
	}
	if(context->getBindingApi() != NULL) {
		doTestGetEnum(context->getBindingApi(), context);
	}
}

#define CASE testGetEnum
#include "../bind_testcase.h"


template <typename T>
void doTestGetObject(T * binding, TestScriptContext * context)
{
	QNEWOBJ(obj, TestObject(99))
	QDO(f = "abc")
	
	void * instance;

	instance = binding->getObject("f");
	GCHECK(instance == NULL);
		
	instance = binding->getObject("obj");
	GCHECK(instance != NULL);
	GCHECK(static_cast<TestObject *>(instance)->value == 99);
}

void testGetObject(TestScriptContext * context)
{
	if(context->getBindingLib() != NULL) {
		doTestGetObject(context->getBindingLib(), context);
	}
	if(context->getBindingApi() != NULL) {
		doTestGetObject(context->getBindingApi(), context);
	}
}

#define CASE testGetObject
#include "../bind_testcase.h"


void testGetFundamental(TestScriptContext * context)
{
	QDO(f = 100)
	QDO(s = "abc")
	
	GVariant v;

	if(context->getBindingLib()) {
		v = context->getBindingLib()->getFundamental("f");
		GCHECK(fromVariant<int>(v) == 100);
		v = context->getBindingLib()->getFundamental("s");
		GCHECK(v.isEmpty());
	}
	
	if(context->getBindingApi()) {
		context->getBindingApi()->getFundamental(&v.refData(), "f");
		GCHECK(fromVariant<int>(v) == 100);
		context->getBindingApi()->getFundamental(&v.refData(), "s");
		GCHECK(v.isEmpty());
	}
}

#define CASE testGetFundamental
#include "../bind_testcase.h"


void testGetString(TestScriptContext * context)
{
	QDO(oneString = "what")

	if(context->getBindingLib()) {
		GCHECK(context->getBindingLib()->getString("oneString") == "what");
	}
	
	if(context->getBindingApi()) {
		GScopedInterface<IMemoryAllocator> allocator(context->getService()->getAllocator());
		char * cs = context->getBindingApi()->getString("oneString", allocator.get());
		string s = cs;
		allocator->free(cs);
		GCHECK(s == "what");
	}
}

#define CASE testGetString
#include "../bind_testcase.h"

}
