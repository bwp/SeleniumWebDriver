/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/sms/interfaces/nsIDOMSmsRequest.idl
 */

#ifndef __gen_nsIDOMSmsRequest_h__
#define __gen_nsIDOMSmsRequest_h__


#ifndef __gen_nsIDOMEventTarget_h__
#include "nsIDOMEventTarget.h"
#endif

#include "jspubtd.h"

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIDOMEventListener; /* forward declaration */


/* starting interface:    nsIDOMMozSmsRequest */
#define NS_IDOMMOZSMSREQUEST_IID_STR "1b24469d-cfb7-4667-aaf0-c1d17289ae7c"

#define NS_IDOMMOZSMSREQUEST_IID \
  {0x1b24469d, 0xcfb7, 0x4667, \
    { 0xaa, 0xf0, 0xc1, 0xd1, 0x72, 0x89, 0xae, 0x7c }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMMozSmsRequest : public nsIDOMEventTarget {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMMOZSMSREQUEST_IID)

  /* readonly attribute DOMString readyState; */
  NS_SCRIPTABLE NS_IMETHOD GetReadyState(nsAString & aReadyState) = 0;

  /* readonly attribute DOMString error; */
  NS_SCRIPTABLE NS_IMETHOD GetError(nsAString & aError) = 0;

  /* readonly attribute jsval result; */
  NS_SCRIPTABLE NS_IMETHOD GetResult(JS::Value *aResult) = 0;

  /* attribute nsIDOMEventListener onsuccess; */
  NS_SCRIPTABLE NS_IMETHOD GetOnsuccess(nsIDOMEventListener * *aOnsuccess) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetOnsuccess(nsIDOMEventListener *aOnsuccess) = 0;

  /* attribute nsIDOMEventListener onerror; */
  NS_SCRIPTABLE NS_IMETHOD GetOnerror(nsIDOMEventListener * *aOnerror) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetOnerror(nsIDOMEventListener *aOnerror) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMMozSmsRequest, NS_IDOMMOZSMSREQUEST_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMMOZSMSREQUEST \
  NS_SCRIPTABLE NS_IMETHOD GetReadyState(nsAString & aReadyState); \
  NS_SCRIPTABLE NS_IMETHOD GetError(nsAString & aError); \
  NS_SCRIPTABLE NS_IMETHOD GetResult(JS::Value *aResult); \
  NS_SCRIPTABLE NS_IMETHOD GetOnsuccess(nsIDOMEventListener * *aOnsuccess); \
  NS_SCRIPTABLE NS_IMETHOD SetOnsuccess(nsIDOMEventListener *aOnsuccess); \
  NS_SCRIPTABLE NS_IMETHOD GetOnerror(nsIDOMEventListener * *aOnerror); \
  NS_SCRIPTABLE NS_IMETHOD SetOnerror(nsIDOMEventListener *aOnerror); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMMOZSMSREQUEST(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetReadyState(nsAString & aReadyState) { return _to GetReadyState(aReadyState); } \
  NS_SCRIPTABLE NS_IMETHOD GetError(nsAString & aError) { return _to GetError(aError); } \
  NS_SCRIPTABLE NS_IMETHOD GetResult(JS::Value *aResult) { return _to GetResult(aResult); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnsuccess(nsIDOMEventListener * *aOnsuccess) { return _to GetOnsuccess(aOnsuccess); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnsuccess(nsIDOMEventListener *aOnsuccess) { return _to SetOnsuccess(aOnsuccess); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnerror(nsIDOMEventListener * *aOnerror) { return _to GetOnerror(aOnerror); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnerror(nsIDOMEventListener *aOnerror) { return _to SetOnerror(aOnerror); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMMOZSMSREQUEST(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetReadyState(nsAString & aReadyState) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetReadyState(aReadyState); } \
  NS_SCRIPTABLE NS_IMETHOD GetError(nsAString & aError) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetError(aError); } \
  NS_SCRIPTABLE NS_IMETHOD GetResult(JS::Value *aResult) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetResult(aResult); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnsuccess(nsIDOMEventListener * *aOnsuccess) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOnsuccess(aOnsuccess); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnsuccess(nsIDOMEventListener *aOnsuccess) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOnsuccess(aOnsuccess); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnerror(nsIDOMEventListener * *aOnerror) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOnerror(aOnerror); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnerror(nsIDOMEventListener *aOnerror) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOnerror(aOnerror); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMMozSmsRequest : public nsIDOMMozSmsRequest
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMMOZSMSREQUEST

  nsDOMMozSmsRequest();

private:
  ~nsDOMMozSmsRequest();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMMozSmsRequest, nsIDOMMozSmsRequest)

nsDOMMozSmsRequest::nsDOMMozSmsRequest()
{
  /* member initializers and constructor code */
}

nsDOMMozSmsRequest::~nsDOMMozSmsRequest()
{
  /* destructor code */
}

/* readonly attribute DOMString readyState; */
NS_IMETHODIMP nsDOMMozSmsRequest::GetReadyState(nsAString & aReadyState)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString error; */
NS_IMETHODIMP nsDOMMozSmsRequest::GetError(nsAString & aError)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute jsval result; */
NS_IMETHODIMP nsDOMMozSmsRequest::GetResult(JS::Value *aResult)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIDOMEventListener onsuccess; */
NS_IMETHODIMP nsDOMMozSmsRequest::GetOnsuccess(nsIDOMEventListener * *aOnsuccess)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMMozSmsRequest::SetOnsuccess(nsIDOMEventListener *aOnsuccess)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIDOMEventListener onerror; */
NS_IMETHODIMP nsDOMMozSmsRequest::GetOnerror(nsIDOMEventListener * *aOnerror)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMMozSmsRequest::SetOnerror(nsIDOMEventListener *aOnerror)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMSmsRequest_h__ */
