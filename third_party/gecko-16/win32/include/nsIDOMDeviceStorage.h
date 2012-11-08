/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/interfaces/devicestorage/nsIDOMDeviceStorage.idl
 */

#ifndef __gen_nsIDOMDeviceStorage_h__
#define __gen_nsIDOMDeviceStorage_h__


#ifndef __gen_domstubs_h__
#include "domstubs.h"
#endif

#include "jspubtd.h"

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIDOMBlob; /* forward declaration */

class nsIDOMDOMRequest; /* forward declaration */

class nsIDOMDeviceStorageCursor; /* forward declaration */


/* starting interface:    nsIDOMDeviceStorage */
#define NS_IDOMDEVICESTORAGE_IID_STR "05c0d0c8-d698-4ccd-899c-7198a33bd7ec"

#define NS_IDOMDEVICESTORAGE_IID \
  {0x05c0d0c8, 0xd698, 0x4ccd, \
    { 0x89, 0x9c, 0x71, 0x98, 0xa3, 0x3b, 0xd7, 0xec }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMDeviceStorage : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMDEVICESTORAGE_IID)

  /* readonly attribute DOMString type; */
  NS_SCRIPTABLE NS_IMETHOD GetType(nsAString & aType) = 0;

  /* nsIDOMDOMRequest add (in nsIDOMBlob aBlob); */
  NS_SCRIPTABLE NS_IMETHOD Add(nsIDOMBlob *aBlob, nsIDOMDOMRequest * *_retval NS_OUTPARAM) = 0;

  /* nsIDOMDOMRequest addNamed (in nsIDOMBlob aBlob, in DOMString aName); */
  NS_SCRIPTABLE NS_IMETHOD AddNamed(nsIDOMBlob *aBlob, const nsAString & aName, nsIDOMDOMRequest * *_retval NS_OUTPARAM) = 0;

  /* [implicit_jscontext] nsIDOMDOMRequest get (in jsval aName); */
  NS_SCRIPTABLE NS_IMETHOD Get(const JS::Value & aName, JSContext* cx, nsIDOMDOMRequest * *_retval NS_OUTPARAM) = 0;

  /* [implicit_jscontext] nsIDOMDOMRequest getEditable (in jsval aName); */
  NS_SCRIPTABLE NS_IMETHOD GetEditable(const JS::Value & aName, JSContext* cx, nsIDOMDOMRequest * *_retval NS_OUTPARAM) = 0;

  /* [implicit_jscontext] nsIDOMDOMRequest delete (in jsval aName); */
  NS_SCRIPTABLE NS_IMETHOD Delete(const JS::Value & aName, JSContext* cx, nsIDOMDOMRequest * *_retval NS_OUTPARAM) = 0;

  /* [implicit_jscontext,optional_argc] nsIDOMDeviceStorageCursor enumerate ([optional] in jsval aName, [optional] in jsval options); */
  NS_SCRIPTABLE NS_IMETHOD Enumerate(const JS::Value & aName, const JS::Value & options, JSContext* cx, PRUint8 _argc, nsIDOMDeviceStorageCursor * *_retval NS_OUTPARAM) = 0;

  /* [implicit_jscontext,optional_argc] nsIDOMDeviceStorageCursor enumerateEditable ([optional] in jsval aName, [optional] in jsval options); */
  NS_SCRIPTABLE NS_IMETHOD EnumerateEditable(const JS::Value & aName, const JS::Value & options, JSContext* cx, PRUint8 _argc, nsIDOMDeviceStorageCursor * *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMDeviceStorage, NS_IDOMDEVICESTORAGE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMDEVICESTORAGE \
  NS_SCRIPTABLE NS_IMETHOD GetType(nsAString & aType); \
  NS_SCRIPTABLE NS_IMETHOD Add(nsIDOMBlob *aBlob, nsIDOMDOMRequest * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD AddNamed(nsIDOMBlob *aBlob, const nsAString & aName, nsIDOMDOMRequest * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Get(const JS::Value & aName, JSContext* cx, nsIDOMDOMRequest * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetEditable(const JS::Value & aName, JSContext* cx, nsIDOMDOMRequest * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Delete(const JS::Value & aName, JSContext* cx, nsIDOMDOMRequest * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Enumerate(const JS::Value & aName, const JS::Value & options, JSContext* cx, PRUint8 _argc, nsIDOMDeviceStorageCursor * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD EnumerateEditable(const JS::Value & aName, const JS::Value & options, JSContext* cx, PRUint8 _argc, nsIDOMDeviceStorageCursor * *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMDEVICESTORAGE(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetType(nsAString & aType) { return _to GetType(aType); } \
  NS_SCRIPTABLE NS_IMETHOD Add(nsIDOMBlob *aBlob, nsIDOMDOMRequest * *_retval NS_OUTPARAM) { return _to Add(aBlob, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD AddNamed(nsIDOMBlob *aBlob, const nsAString & aName, nsIDOMDOMRequest * *_retval NS_OUTPARAM) { return _to AddNamed(aBlob, aName, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Get(const JS::Value & aName, JSContext* cx, nsIDOMDOMRequest * *_retval NS_OUTPARAM) { return _to Get(aName, cx, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetEditable(const JS::Value & aName, JSContext* cx, nsIDOMDOMRequest * *_retval NS_OUTPARAM) { return _to GetEditable(aName, cx, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Delete(const JS::Value & aName, JSContext* cx, nsIDOMDOMRequest * *_retval NS_OUTPARAM) { return _to Delete(aName, cx, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Enumerate(const JS::Value & aName, const JS::Value & options, JSContext* cx, PRUint8 _argc, nsIDOMDeviceStorageCursor * *_retval NS_OUTPARAM) { return _to Enumerate(aName, options, cx, _argc, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD EnumerateEditable(const JS::Value & aName, const JS::Value & options, JSContext* cx, PRUint8 _argc, nsIDOMDeviceStorageCursor * *_retval NS_OUTPARAM) { return _to EnumerateEditable(aName, options, cx, _argc, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMDEVICESTORAGE(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetType(nsAString & aType) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetType(aType); } \
  NS_SCRIPTABLE NS_IMETHOD Add(nsIDOMBlob *aBlob, nsIDOMDOMRequest * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Add(aBlob, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD AddNamed(nsIDOMBlob *aBlob, const nsAString & aName, nsIDOMDOMRequest * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->AddNamed(aBlob, aName, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Get(const JS::Value & aName, JSContext* cx, nsIDOMDOMRequest * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Get(aName, cx, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetEditable(const JS::Value & aName, JSContext* cx, nsIDOMDOMRequest * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetEditable(aName, cx, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Delete(const JS::Value & aName, JSContext* cx, nsIDOMDOMRequest * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Delete(aName, cx, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Enumerate(const JS::Value & aName, const JS::Value & options, JSContext* cx, PRUint8 _argc, nsIDOMDeviceStorageCursor * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Enumerate(aName, options, cx, _argc, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD EnumerateEditable(const JS::Value & aName, const JS::Value & options, JSContext* cx, PRUint8 _argc, nsIDOMDeviceStorageCursor * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->EnumerateEditable(aName, options, cx, _argc, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMDeviceStorage : public nsIDOMDeviceStorage
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMDEVICESTORAGE

  nsDOMDeviceStorage();

private:
  ~nsDOMDeviceStorage();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMDeviceStorage, nsIDOMDeviceStorage)

nsDOMDeviceStorage::nsDOMDeviceStorage()
{
  /* member initializers and constructor code */
}

nsDOMDeviceStorage::~nsDOMDeviceStorage()
{
  /* destructor code */
}

/* readonly attribute DOMString type; */
NS_IMETHODIMP nsDOMDeviceStorage::GetType(nsAString & aType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMDOMRequest add (in nsIDOMBlob aBlob); */
NS_IMETHODIMP nsDOMDeviceStorage::Add(nsIDOMBlob *aBlob, nsIDOMDOMRequest * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMDOMRequest addNamed (in nsIDOMBlob aBlob, in DOMString aName); */
NS_IMETHODIMP nsDOMDeviceStorage::AddNamed(nsIDOMBlob *aBlob, const nsAString & aName, nsIDOMDOMRequest * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] nsIDOMDOMRequest get (in jsval aName); */
NS_IMETHODIMP nsDOMDeviceStorage::Get(const JS::Value & aName, JSContext* cx, nsIDOMDOMRequest * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] nsIDOMDOMRequest getEditable (in jsval aName); */
NS_IMETHODIMP nsDOMDeviceStorage::GetEditable(const JS::Value & aName, JSContext* cx, nsIDOMDOMRequest * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] nsIDOMDOMRequest delete (in jsval aName); */
NS_IMETHODIMP nsDOMDeviceStorage::Delete(const JS::Value & aName, JSContext* cx, nsIDOMDOMRequest * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext,optional_argc] nsIDOMDeviceStorageCursor enumerate ([optional] in jsval aName, [optional] in jsval options); */
NS_IMETHODIMP nsDOMDeviceStorage::Enumerate(const JS::Value & aName, const JS::Value & options, JSContext* cx, PRUint8 _argc, nsIDOMDeviceStorageCursor * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext,optional_argc] nsIDOMDeviceStorageCursor enumerateEditable ([optional] in jsval aName, [optional] in jsval options); */
NS_IMETHODIMP nsDOMDeviceStorage::EnumerateEditable(const JS::Value & aName, const JS::Value & options, JSContext* cx, PRUint8 _argc, nsIDOMDeviceStorageCursor * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMDeviceStorage_h__ */
