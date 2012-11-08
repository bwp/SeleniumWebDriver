/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/base/nsIDOMDOMRequest.idl
 */

#ifndef __gen_nsIDOMDOMRequest_h__
#define __gen_nsIDOMDOMRequest_h__


#ifndef __gen_nsIDOMEventTarget_h__
#include "nsIDOMEventTarget.h"
#endif

#include "jspubtd.h"

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIDOMDOMError; /* forward declaration */

class nsIDOMWindow; /* forward declaration */


/* starting interface:    nsIDOMDOMRequest */
#define NS_IDOMDOMREQUEST_IID_STR "a3ad2846-ffb2-48d7-a786-2254cb82560d"

#define NS_IDOMDOMREQUEST_IID \
  {0xa3ad2846, 0xffb2, 0x48d7, \
    { 0xa7, 0x86, 0x22, 0x54, 0xcb, 0x82, 0x56, 0x0d }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMDOMRequest : public nsIDOMEventTarget {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMDOMREQUEST_IID)

  /* readonly attribute DOMString readyState; */
  NS_SCRIPTABLE NS_IMETHOD GetReadyState(nsAString & aReadyState) = 0;

  /* readonly attribute jsval result; */
  NS_SCRIPTABLE NS_IMETHOD GetResult(JS::Value *aResult) = 0;

  /* readonly attribute nsIDOMDOMError error; */
  NS_SCRIPTABLE NS_IMETHOD GetError(nsIDOMDOMError * *aError) = 0;

  /* attribute nsIDOMEventListener onsuccess; */
  NS_SCRIPTABLE NS_IMETHOD GetOnsuccess(nsIDOMEventListener * *aOnsuccess) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetOnsuccess(nsIDOMEventListener *aOnsuccess) = 0;

  /* attribute nsIDOMEventListener onerror; */
  NS_SCRIPTABLE NS_IMETHOD GetOnerror(nsIDOMEventListener * *aOnerror) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetOnerror(nsIDOMEventListener *aOnerror) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMDOMRequest, NS_IDOMDOMREQUEST_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMDOMREQUEST \
  NS_SCRIPTABLE NS_IMETHOD GetReadyState(nsAString & aReadyState); \
  NS_SCRIPTABLE NS_IMETHOD GetResult(JS::Value *aResult); \
  NS_SCRIPTABLE NS_IMETHOD GetError(nsIDOMDOMError * *aError); \
  NS_SCRIPTABLE NS_IMETHOD GetOnsuccess(nsIDOMEventListener * *aOnsuccess); \
  NS_SCRIPTABLE NS_IMETHOD SetOnsuccess(nsIDOMEventListener *aOnsuccess); \
  NS_SCRIPTABLE NS_IMETHOD GetOnerror(nsIDOMEventListener * *aOnerror); \
  NS_SCRIPTABLE NS_IMETHOD SetOnerror(nsIDOMEventListener *aOnerror); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMDOMREQUEST(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetReadyState(nsAString & aReadyState) { return _to GetReadyState(aReadyState); } \
  NS_SCRIPTABLE NS_IMETHOD GetResult(JS::Value *aResult) { return _to GetResult(aResult); } \
  NS_SCRIPTABLE NS_IMETHOD GetError(nsIDOMDOMError * *aError) { return _to GetError(aError); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnsuccess(nsIDOMEventListener * *aOnsuccess) { return _to GetOnsuccess(aOnsuccess); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnsuccess(nsIDOMEventListener *aOnsuccess) { return _to SetOnsuccess(aOnsuccess); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnerror(nsIDOMEventListener * *aOnerror) { return _to GetOnerror(aOnerror); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnerror(nsIDOMEventListener *aOnerror) { return _to SetOnerror(aOnerror); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMDOMREQUEST(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetReadyState(nsAString & aReadyState) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetReadyState(aReadyState); } \
  NS_SCRIPTABLE NS_IMETHOD GetResult(JS::Value *aResult) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetResult(aResult); } \
  NS_SCRIPTABLE NS_IMETHOD GetError(nsIDOMDOMError * *aError) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetError(aError); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnsuccess(nsIDOMEventListener * *aOnsuccess) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOnsuccess(aOnsuccess); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnsuccess(nsIDOMEventListener *aOnsuccess) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOnsuccess(aOnsuccess); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnerror(nsIDOMEventListener * *aOnerror) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOnerror(aOnerror); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnerror(nsIDOMEventListener *aOnerror) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOnerror(aOnerror); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMDOMRequest : public nsIDOMDOMRequest
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMDOMREQUEST

  nsDOMDOMRequest();

private:
  ~nsDOMDOMRequest();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMDOMRequest, nsIDOMDOMRequest)

nsDOMDOMRequest::nsDOMDOMRequest()
{
  /* member initializers and constructor code */
}

nsDOMDOMRequest::~nsDOMDOMRequest()
{
  /* destructor code */
}

/* readonly attribute DOMString readyState; */
NS_IMETHODIMP nsDOMDOMRequest::GetReadyState(nsAString & aReadyState)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute jsval result; */
NS_IMETHODIMP nsDOMDOMRequest::GetResult(JS::Value *aResult)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMDOMError error; */
NS_IMETHODIMP nsDOMDOMRequest::GetError(nsIDOMDOMError * *aError)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIDOMEventListener onsuccess; */
NS_IMETHODIMP nsDOMDOMRequest::GetOnsuccess(nsIDOMEventListener * *aOnsuccess)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMDOMRequest::SetOnsuccess(nsIDOMEventListener *aOnsuccess)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIDOMEventListener onerror; */
NS_IMETHODIMP nsDOMDOMRequest::GetOnerror(nsIDOMEventListener * *aOnerror)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMDOMRequest::SetOnerror(nsIDOMEventListener *aOnerror)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIDOMRequestService */
#define NS_IDOMREQUESTSERVICE_IID_STR "eebcdf29-f8fa-4c36-bbc7-2146b1cbaf7b"

#define NS_IDOMREQUESTSERVICE_IID \
  {0xeebcdf29, 0xf8fa, 0x4c36, \
    { 0xbb, 0xc7, 0x21, 0x46, 0xb1, 0xcb, 0xaf, 0x7b }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMRequestService : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMREQUESTSERVICE_IID)

  /* nsIDOMDOMRequest createRequest (in nsIDOMWindow window); */
  NS_SCRIPTABLE NS_IMETHOD CreateRequest(nsIDOMWindow *window, nsIDOMDOMRequest * *_retval NS_OUTPARAM) = 0;

  /* void fireSuccess (in nsIDOMDOMRequest request, in jsval result); */
  NS_SCRIPTABLE NS_IMETHOD FireSuccess(nsIDOMDOMRequest *request, const JS::Value & result) = 0;

  /* void fireError (in nsIDOMDOMRequest request, in DOMString error); */
  NS_SCRIPTABLE NS_IMETHOD FireError(nsIDOMDOMRequest *request, const nsAString & error) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMRequestService, NS_IDOMREQUESTSERVICE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMREQUESTSERVICE \
  NS_SCRIPTABLE NS_IMETHOD CreateRequest(nsIDOMWindow *window, nsIDOMDOMRequest * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD FireSuccess(nsIDOMDOMRequest *request, const JS::Value & result); \
  NS_SCRIPTABLE NS_IMETHOD FireError(nsIDOMDOMRequest *request, const nsAString & error); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMREQUESTSERVICE(_to) \
  NS_SCRIPTABLE NS_IMETHOD CreateRequest(nsIDOMWindow *window, nsIDOMDOMRequest * *_retval NS_OUTPARAM) { return _to CreateRequest(window, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD FireSuccess(nsIDOMDOMRequest *request, const JS::Value & result) { return _to FireSuccess(request, result); } \
  NS_SCRIPTABLE NS_IMETHOD FireError(nsIDOMDOMRequest *request, const nsAString & error) { return _to FireError(request, error); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMREQUESTSERVICE(_to) \
  NS_SCRIPTABLE NS_IMETHOD CreateRequest(nsIDOMWindow *window, nsIDOMDOMRequest * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->CreateRequest(window, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD FireSuccess(nsIDOMDOMRequest *request, const JS::Value & result) { return !_to ? NS_ERROR_NULL_POINTER : _to->FireSuccess(request, result); } \
  NS_SCRIPTABLE NS_IMETHOD FireError(nsIDOMDOMRequest *request, const nsAString & error) { return !_to ? NS_ERROR_NULL_POINTER : _to->FireError(request, error); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMRequestService : public nsIDOMRequestService
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMREQUESTSERVICE

  nsDOMRequestService();

private:
  ~nsDOMRequestService();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMRequestService, nsIDOMRequestService)

nsDOMRequestService::nsDOMRequestService()
{
  /* member initializers and constructor code */
}

nsDOMRequestService::~nsDOMRequestService()
{
  /* destructor code */
}

/* nsIDOMDOMRequest createRequest (in nsIDOMWindow window); */
NS_IMETHODIMP nsDOMRequestService::CreateRequest(nsIDOMWindow *window, nsIDOMDOMRequest * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void fireSuccess (in nsIDOMDOMRequest request, in jsval result); */
NS_IMETHODIMP nsDOMRequestService::FireSuccess(nsIDOMDOMRequest *request, const JS::Value & result)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void fireError (in nsIDOMDOMRequest request, in DOMString error); */
NS_IMETHODIMP nsDOMRequestService::FireError(nsIDOMDOMRequest *request, const nsAString & error)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMDOMRequest_h__ */
