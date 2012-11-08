/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/indexedDB/nsIIDBRequest.idl
 */

#ifndef __gen_nsIIDBRequest_h__
#define __gen_nsIIDBRequest_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#include "jspubtd.h"

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIDOMDOMError; /* forward declaration */

class nsIDOMEventListener; /* forward declaration */

class nsIIDBTransaction; /* forward declaration */


/* starting interface:    nsIIDBRequest */
#define NS_IIDBREQUEST_IID_STR "4b9d901b-14a4-430c-b41b-5ecb238f4184"

#define NS_IIDBREQUEST_IID \
  {0x4b9d901b, 0x14a4, 0x430c, \
    { 0xb4, 0x1b, 0x5e, 0xcb, 0x23, 0x8f, 0x41, 0x84 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIIDBRequest : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IIDBREQUEST_IID)

  /* readonly attribute jsval result; */
  NS_SCRIPTABLE NS_IMETHOD GetResult(JS::Value *aResult) = 0;

  /* readonly attribute nsIDOMDOMError error; */
  NS_SCRIPTABLE NS_IMETHOD GetError(nsIDOMDOMError * *aError) = 0;

  /* readonly attribute nsISupports source; */
  NS_SCRIPTABLE NS_IMETHOD GetSource(nsISupports * *aSource) = 0;

  /* readonly attribute nsIIDBTransaction transaction; */
  NS_SCRIPTABLE NS_IMETHOD GetTransaction(nsIIDBTransaction * *aTransaction) = 0;

  /* readonly attribute DOMString readyState; */
  NS_SCRIPTABLE NS_IMETHOD GetReadyState(nsAString & aReadyState) = 0;

  /* attribute nsIDOMEventListener onsuccess; */
  NS_SCRIPTABLE NS_IMETHOD GetOnsuccess(nsIDOMEventListener * *aOnsuccess) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetOnsuccess(nsIDOMEventListener *aOnsuccess) = 0;

  /* attribute nsIDOMEventListener onerror; */
  NS_SCRIPTABLE NS_IMETHOD GetOnerror(nsIDOMEventListener * *aOnerror) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetOnerror(nsIDOMEventListener *aOnerror) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIIDBRequest, NS_IIDBREQUEST_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIIDBREQUEST \
  NS_SCRIPTABLE NS_IMETHOD GetResult(JS::Value *aResult); \
  NS_SCRIPTABLE NS_IMETHOD GetError(nsIDOMDOMError * *aError); \
  NS_SCRIPTABLE NS_IMETHOD GetSource(nsISupports * *aSource); \
  NS_SCRIPTABLE NS_IMETHOD GetTransaction(nsIIDBTransaction * *aTransaction); \
  NS_SCRIPTABLE NS_IMETHOD GetReadyState(nsAString & aReadyState); \
  NS_SCRIPTABLE NS_IMETHOD GetOnsuccess(nsIDOMEventListener * *aOnsuccess); \
  NS_SCRIPTABLE NS_IMETHOD SetOnsuccess(nsIDOMEventListener *aOnsuccess); \
  NS_SCRIPTABLE NS_IMETHOD GetOnerror(nsIDOMEventListener * *aOnerror); \
  NS_SCRIPTABLE NS_IMETHOD SetOnerror(nsIDOMEventListener *aOnerror); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIIDBREQUEST(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetResult(JS::Value *aResult) { return _to GetResult(aResult); } \
  NS_SCRIPTABLE NS_IMETHOD GetError(nsIDOMDOMError * *aError) { return _to GetError(aError); } \
  NS_SCRIPTABLE NS_IMETHOD GetSource(nsISupports * *aSource) { return _to GetSource(aSource); } \
  NS_SCRIPTABLE NS_IMETHOD GetTransaction(nsIIDBTransaction * *aTransaction) { return _to GetTransaction(aTransaction); } \
  NS_SCRIPTABLE NS_IMETHOD GetReadyState(nsAString & aReadyState) { return _to GetReadyState(aReadyState); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnsuccess(nsIDOMEventListener * *aOnsuccess) { return _to GetOnsuccess(aOnsuccess); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnsuccess(nsIDOMEventListener *aOnsuccess) { return _to SetOnsuccess(aOnsuccess); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnerror(nsIDOMEventListener * *aOnerror) { return _to GetOnerror(aOnerror); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnerror(nsIDOMEventListener *aOnerror) { return _to SetOnerror(aOnerror); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIIDBREQUEST(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetResult(JS::Value *aResult) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetResult(aResult); } \
  NS_SCRIPTABLE NS_IMETHOD GetError(nsIDOMDOMError * *aError) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetError(aError); } \
  NS_SCRIPTABLE NS_IMETHOD GetSource(nsISupports * *aSource) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSource(aSource); } \
  NS_SCRIPTABLE NS_IMETHOD GetTransaction(nsIIDBTransaction * *aTransaction) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTransaction(aTransaction); } \
  NS_SCRIPTABLE NS_IMETHOD GetReadyState(nsAString & aReadyState) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetReadyState(aReadyState); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnsuccess(nsIDOMEventListener * *aOnsuccess) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOnsuccess(aOnsuccess); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnsuccess(nsIDOMEventListener *aOnsuccess) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOnsuccess(aOnsuccess); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnerror(nsIDOMEventListener * *aOnerror) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOnerror(aOnerror); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnerror(nsIDOMEventListener *aOnerror) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOnerror(aOnerror); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsIDBRequest : public nsIIDBRequest
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIIDBREQUEST

  nsIDBRequest();

private:
  ~nsIDBRequest();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsIDBRequest, nsIIDBRequest)

nsIDBRequest::nsIDBRequest()
{
  /* member initializers and constructor code */
}

nsIDBRequest::~nsIDBRequest()
{
  /* destructor code */
}

/* readonly attribute jsval result; */
NS_IMETHODIMP nsIDBRequest::GetResult(JS::Value *aResult)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMDOMError error; */
NS_IMETHODIMP nsIDBRequest::GetError(nsIDOMDOMError * *aError)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsISupports source; */
NS_IMETHODIMP nsIDBRequest::GetSource(nsISupports * *aSource)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIIDBTransaction transaction; */
NS_IMETHODIMP nsIDBRequest::GetTransaction(nsIIDBTransaction * *aTransaction)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString readyState; */
NS_IMETHODIMP nsIDBRequest::GetReadyState(nsAString & aReadyState)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIDOMEventListener onsuccess; */
NS_IMETHODIMP nsIDBRequest::GetOnsuccess(nsIDOMEventListener * *aOnsuccess)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsIDBRequest::SetOnsuccess(nsIDOMEventListener *aOnsuccess)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIDOMEventListener onerror; */
NS_IMETHODIMP nsIDBRequest::GetOnerror(nsIDOMEventListener * *aOnerror)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsIDBRequest::SetOnerror(nsIDOMEventListener *aOnerror)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIIDBRequest_h__ */
