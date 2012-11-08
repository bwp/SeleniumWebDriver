/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/indexedDB/nsIIDBDatabase.idl
 */

#ifndef __gen_nsIIDBDatabase_h__
#define __gen_nsIIDBDatabase_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#include "jspubtd.h"

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIIDBObjectStore; /* forward declaration */

class nsIIDBRequest; /* forward declaration */

class nsIIDBTransaction; /* forward declaration */

class nsIDOMDOMStringList; /* forward declaration */

class nsIDOMEventListener; /* forward declaration */


/* starting interface:    nsIIDBDatabase */
#define NS_IIDBDATABASE_IID_STR "601a43a0-dce2-402f-8ba5-238fe5d5f8d2"

#define NS_IIDBDATABASE_IID \
  {0x601a43a0, 0xdce2, 0x402f, \
    { 0x8b, 0xa5, 0x23, 0x8f, 0xe5, 0xd5, 0xf8, 0xd2 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIIDBDatabase : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IIDBDATABASE_IID)

  /* readonly attribute DOMString name; */
  NS_SCRIPTABLE NS_IMETHOD GetName(nsAString & aName) = 0;

  /* readonly attribute unsigned long long version; */
  NS_SCRIPTABLE NS_IMETHOD GetVersion(PRUint64 *aVersion) = 0;

  /* readonly attribute nsIDOMDOMStringList objectStoreNames; */
  NS_SCRIPTABLE NS_IMETHOD GetObjectStoreNames(nsIDOMDOMStringList * *aObjectStoreNames) = 0;

  /* [implicit_jscontext] nsIIDBObjectStore createObjectStore ([Null (Stringify)] in DOMString name, [optional] in jsval options); */
  NS_SCRIPTABLE NS_IMETHOD CreateObjectStore(const nsAString & name, const JS::Value & options, JSContext* cx, nsIIDBObjectStore * *_retval NS_OUTPARAM) = 0;

  /* void deleteObjectStore ([Null (Stringify)] in DOMString name); */
  NS_SCRIPTABLE NS_IMETHOD DeleteObjectStore(const nsAString & name) = 0;

  /* [implicit_jscontext,optional_argc] nsIIDBTransaction transaction (in jsval storeNames, [optional] in DOMString mode); */
  NS_SCRIPTABLE NS_IMETHOD Transaction(const JS::Value & storeNames, const nsAString & mode, JSContext* cx, PRUint8 _argc, nsIIDBTransaction * *_retval NS_OUTPARAM) = 0;

  /* [implicit_jscontext] nsIIDBRequest mozCreateFileHandle (in DOMString name, [optional] in DOMString type); */
  NS_SCRIPTABLE NS_IMETHOD MozCreateFileHandle(const nsAString & name, const nsAString & type, JSContext* cx, nsIIDBRequest * *_retval NS_OUTPARAM) = 0;

  /* void close (); */
  NS_SCRIPTABLE NS_IMETHOD Close(void) = 0;

  /* attribute nsIDOMEventListener onabort; */
  NS_SCRIPTABLE NS_IMETHOD GetOnabort(nsIDOMEventListener * *aOnabort) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetOnabort(nsIDOMEventListener *aOnabort) = 0;

  /* attribute nsIDOMEventListener onerror; */
  NS_SCRIPTABLE NS_IMETHOD GetOnerror(nsIDOMEventListener * *aOnerror) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetOnerror(nsIDOMEventListener *aOnerror) = 0;

  /* attribute nsIDOMEventListener onversionchange; */
  NS_SCRIPTABLE NS_IMETHOD GetOnversionchange(nsIDOMEventListener * *aOnversionchange) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetOnversionchange(nsIDOMEventListener *aOnversionchange) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIIDBDatabase, NS_IIDBDATABASE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIIDBDATABASE \
  NS_SCRIPTABLE NS_IMETHOD GetName(nsAString & aName); \
  NS_SCRIPTABLE NS_IMETHOD GetVersion(PRUint64 *aVersion); \
  NS_SCRIPTABLE NS_IMETHOD GetObjectStoreNames(nsIDOMDOMStringList * *aObjectStoreNames); \
  NS_SCRIPTABLE NS_IMETHOD CreateObjectStore(const nsAString & name, const JS::Value & options, JSContext* cx, nsIIDBObjectStore * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD DeleteObjectStore(const nsAString & name); \
  NS_SCRIPTABLE NS_IMETHOD Transaction(const JS::Value & storeNames, const nsAString & mode, JSContext* cx, PRUint8 _argc, nsIIDBTransaction * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD MozCreateFileHandle(const nsAString & name, const nsAString & type, JSContext* cx, nsIIDBRequest * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Close(void); \
  NS_SCRIPTABLE NS_IMETHOD GetOnabort(nsIDOMEventListener * *aOnabort); \
  NS_SCRIPTABLE NS_IMETHOD SetOnabort(nsIDOMEventListener *aOnabort); \
  NS_SCRIPTABLE NS_IMETHOD GetOnerror(nsIDOMEventListener * *aOnerror); \
  NS_SCRIPTABLE NS_IMETHOD SetOnerror(nsIDOMEventListener *aOnerror); \
  NS_SCRIPTABLE NS_IMETHOD GetOnversionchange(nsIDOMEventListener * *aOnversionchange); \
  NS_SCRIPTABLE NS_IMETHOD SetOnversionchange(nsIDOMEventListener *aOnversionchange); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIIDBDATABASE(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetName(nsAString & aName) { return _to GetName(aName); } \
  NS_SCRIPTABLE NS_IMETHOD GetVersion(PRUint64 *aVersion) { return _to GetVersion(aVersion); } \
  NS_SCRIPTABLE NS_IMETHOD GetObjectStoreNames(nsIDOMDOMStringList * *aObjectStoreNames) { return _to GetObjectStoreNames(aObjectStoreNames); } \
  NS_SCRIPTABLE NS_IMETHOD CreateObjectStore(const nsAString & name, const JS::Value & options, JSContext* cx, nsIIDBObjectStore * *_retval NS_OUTPARAM) { return _to CreateObjectStore(name, options, cx, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD DeleteObjectStore(const nsAString & name) { return _to DeleteObjectStore(name); } \
  NS_SCRIPTABLE NS_IMETHOD Transaction(const JS::Value & storeNames, const nsAString & mode, JSContext* cx, PRUint8 _argc, nsIIDBTransaction * *_retval NS_OUTPARAM) { return _to Transaction(storeNames, mode, cx, _argc, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD MozCreateFileHandle(const nsAString & name, const nsAString & type, JSContext* cx, nsIIDBRequest * *_retval NS_OUTPARAM) { return _to MozCreateFileHandle(name, type, cx, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Close(void) { return _to Close(); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnabort(nsIDOMEventListener * *aOnabort) { return _to GetOnabort(aOnabort); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnabort(nsIDOMEventListener *aOnabort) { return _to SetOnabort(aOnabort); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnerror(nsIDOMEventListener * *aOnerror) { return _to GetOnerror(aOnerror); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnerror(nsIDOMEventListener *aOnerror) { return _to SetOnerror(aOnerror); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnversionchange(nsIDOMEventListener * *aOnversionchange) { return _to GetOnversionchange(aOnversionchange); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnversionchange(nsIDOMEventListener *aOnversionchange) { return _to SetOnversionchange(aOnversionchange); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIIDBDATABASE(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetName(nsAString & aName) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetName(aName); } \
  NS_SCRIPTABLE NS_IMETHOD GetVersion(PRUint64 *aVersion) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetVersion(aVersion); } \
  NS_SCRIPTABLE NS_IMETHOD GetObjectStoreNames(nsIDOMDOMStringList * *aObjectStoreNames) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetObjectStoreNames(aObjectStoreNames); } \
  NS_SCRIPTABLE NS_IMETHOD CreateObjectStore(const nsAString & name, const JS::Value & options, JSContext* cx, nsIIDBObjectStore * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->CreateObjectStore(name, options, cx, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD DeleteObjectStore(const nsAString & name) { return !_to ? NS_ERROR_NULL_POINTER : _to->DeleteObjectStore(name); } \
  NS_SCRIPTABLE NS_IMETHOD Transaction(const JS::Value & storeNames, const nsAString & mode, JSContext* cx, PRUint8 _argc, nsIIDBTransaction * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Transaction(storeNames, mode, cx, _argc, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD MozCreateFileHandle(const nsAString & name, const nsAString & type, JSContext* cx, nsIIDBRequest * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->MozCreateFileHandle(name, type, cx, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Close(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Close(); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnabort(nsIDOMEventListener * *aOnabort) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOnabort(aOnabort); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnabort(nsIDOMEventListener *aOnabort) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOnabort(aOnabort); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnerror(nsIDOMEventListener * *aOnerror) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOnerror(aOnerror); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnerror(nsIDOMEventListener *aOnerror) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOnerror(aOnerror); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnversionchange(nsIDOMEventListener * *aOnversionchange) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOnversionchange(aOnversionchange); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnversionchange(nsIDOMEventListener *aOnversionchange) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOnversionchange(aOnversionchange); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsIDBDatabase : public nsIIDBDatabase
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIIDBDATABASE

  nsIDBDatabase();

private:
  ~nsIDBDatabase();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsIDBDatabase, nsIIDBDatabase)

nsIDBDatabase::nsIDBDatabase()
{
  /* member initializers and constructor code */
}

nsIDBDatabase::~nsIDBDatabase()
{
  /* destructor code */
}

/* readonly attribute DOMString name; */
NS_IMETHODIMP nsIDBDatabase::GetName(nsAString & aName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long long version; */
NS_IMETHODIMP nsIDBDatabase::GetVersion(PRUint64 *aVersion)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMDOMStringList objectStoreNames; */
NS_IMETHODIMP nsIDBDatabase::GetObjectStoreNames(nsIDOMDOMStringList * *aObjectStoreNames)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] nsIIDBObjectStore createObjectStore ([Null (Stringify)] in DOMString name, [optional] in jsval options); */
NS_IMETHODIMP nsIDBDatabase::CreateObjectStore(const nsAString & name, const JS::Value & options, JSContext* cx, nsIIDBObjectStore * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void deleteObjectStore ([Null (Stringify)] in DOMString name); */
NS_IMETHODIMP nsIDBDatabase::DeleteObjectStore(const nsAString & name)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext,optional_argc] nsIIDBTransaction transaction (in jsval storeNames, [optional] in DOMString mode); */
NS_IMETHODIMP nsIDBDatabase::Transaction(const JS::Value & storeNames, const nsAString & mode, JSContext* cx, PRUint8 _argc, nsIIDBTransaction * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] nsIIDBRequest mozCreateFileHandle (in DOMString name, [optional] in DOMString type); */
NS_IMETHODIMP nsIDBDatabase::MozCreateFileHandle(const nsAString & name, const nsAString & type, JSContext* cx, nsIIDBRequest * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void close (); */
NS_IMETHODIMP nsIDBDatabase::Close()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIDOMEventListener onabort; */
NS_IMETHODIMP nsIDBDatabase::GetOnabort(nsIDOMEventListener * *aOnabort)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsIDBDatabase::SetOnabort(nsIDOMEventListener *aOnabort)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIDOMEventListener onerror; */
NS_IMETHODIMP nsIDBDatabase::GetOnerror(nsIDOMEventListener * *aOnerror)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsIDBDatabase::SetOnerror(nsIDOMEventListener *aOnerror)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIDOMEventListener onversionchange; */
NS_IMETHODIMP nsIDBDatabase::GetOnversionchange(nsIDOMEventListener * *aOnversionchange)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsIDBDatabase::SetOnversionchange(nsIDOMEventListener *aOnversionchange)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIIDBDatabase_h__ */
