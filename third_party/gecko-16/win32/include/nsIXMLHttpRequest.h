/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/content/base/public/nsIXMLHttpRequest.idl
 */

#ifndef __gen_nsIXMLHttpRequest_h__
#define __gen_nsIXMLHttpRequest_h__


#ifndef __gen_nsIDOMEventTarget_h__
#include "nsIDOMEventTarget.h"
#endif

#include "jspubtd.h"

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIChannel; /* forward declaration */

class nsIDOMDocument; /* forward declaration */

class nsIDOMEventListener; /* forward declaration */

class nsIPrincipal; /* forward declaration */

class nsIScriptContext; /* forward declaration */

class nsIURI; /* forward declaration */

class nsIVariant; /* forward declaration */

class nsPIDOMWindow; /* forward declaration */

class nsIInputStream; /* forward declaration */

class nsIDOMBlob; /* forward declaration */

// for jsval
#include "jsapi.h"

/* starting interface:    nsIXMLHttpRequestEventTarget */
#define NS_IXMLHTTPREQUESTEVENTTARGET_IID_STR "5e346bf8-7083-4ef8-b9b9-736a1b5aa7ab"

#define NS_IXMLHTTPREQUESTEVENTTARGET_IID \
  {0x5e346bf8, 0x7083, 0x4ef8, \
    { 0xb9, 0xb9, 0x73, 0x6a, 0x1b, 0x5a, 0xa7, 0xab }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIXMLHttpRequestEventTarget : public nsIDOMEventTarget {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IXMLHTTPREQUESTEVENTTARGET_IID)

  /* attribute nsIDOMEventListener onabort; */
  NS_SCRIPTABLE NS_IMETHOD GetOnabort(nsIDOMEventListener * *aOnabort) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetOnabort(nsIDOMEventListener *aOnabort) = 0;

  /* attribute nsIDOMEventListener onerror; */
  NS_SCRIPTABLE NS_IMETHOD GetOnerror(nsIDOMEventListener * *aOnerror) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetOnerror(nsIDOMEventListener *aOnerror) = 0;

  /* attribute nsIDOMEventListener onload; */
  NS_SCRIPTABLE NS_IMETHOD GetOnload(nsIDOMEventListener * *aOnload) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetOnload(nsIDOMEventListener *aOnload) = 0;

  /* attribute nsIDOMEventListener onloadstart; */
  NS_SCRIPTABLE NS_IMETHOD GetOnloadstart(nsIDOMEventListener * *aOnloadstart) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetOnloadstart(nsIDOMEventListener *aOnloadstart) = 0;

  /* attribute nsIDOMEventListener onprogress; */
  NS_SCRIPTABLE NS_IMETHOD GetOnprogress(nsIDOMEventListener * *aOnprogress) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetOnprogress(nsIDOMEventListener *aOnprogress) = 0;

  /* attribute nsIDOMEventListener ontimeout; */
  NS_SCRIPTABLE NS_IMETHOD GetOntimeout(nsIDOMEventListener * *aOntimeout) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetOntimeout(nsIDOMEventListener *aOntimeout) = 0;

  /* attribute nsIDOMEventListener onloadend; */
  NS_SCRIPTABLE NS_IMETHOD GetOnloadend(nsIDOMEventListener * *aOnloadend) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetOnloadend(nsIDOMEventListener *aOnloadend) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIXMLHttpRequestEventTarget, NS_IXMLHTTPREQUESTEVENTTARGET_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIXMLHTTPREQUESTEVENTTARGET \
  NS_SCRIPTABLE NS_IMETHOD GetOnabort(nsIDOMEventListener * *aOnabort); \
  NS_SCRIPTABLE NS_IMETHOD SetOnabort(nsIDOMEventListener *aOnabort); \
  NS_SCRIPTABLE NS_IMETHOD GetOnerror(nsIDOMEventListener * *aOnerror); \
  NS_SCRIPTABLE NS_IMETHOD SetOnerror(nsIDOMEventListener *aOnerror); \
  NS_SCRIPTABLE NS_IMETHOD GetOnload(nsIDOMEventListener * *aOnload); \
  NS_SCRIPTABLE NS_IMETHOD SetOnload(nsIDOMEventListener *aOnload); \
  NS_SCRIPTABLE NS_IMETHOD GetOnloadstart(nsIDOMEventListener * *aOnloadstart); \
  NS_SCRIPTABLE NS_IMETHOD SetOnloadstart(nsIDOMEventListener *aOnloadstart); \
  NS_SCRIPTABLE NS_IMETHOD GetOnprogress(nsIDOMEventListener * *aOnprogress); \
  NS_SCRIPTABLE NS_IMETHOD SetOnprogress(nsIDOMEventListener *aOnprogress); \
  NS_SCRIPTABLE NS_IMETHOD GetOntimeout(nsIDOMEventListener * *aOntimeout); \
  NS_SCRIPTABLE NS_IMETHOD SetOntimeout(nsIDOMEventListener *aOntimeout); \
  NS_SCRIPTABLE NS_IMETHOD GetOnloadend(nsIDOMEventListener * *aOnloadend); \
  NS_SCRIPTABLE NS_IMETHOD SetOnloadend(nsIDOMEventListener *aOnloadend); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIXMLHTTPREQUESTEVENTTARGET(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetOnabort(nsIDOMEventListener * *aOnabort) { return _to GetOnabort(aOnabort); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnabort(nsIDOMEventListener *aOnabort) { return _to SetOnabort(aOnabort); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnerror(nsIDOMEventListener * *aOnerror) { return _to GetOnerror(aOnerror); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnerror(nsIDOMEventListener *aOnerror) { return _to SetOnerror(aOnerror); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnload(nsIDOMEventListener * *aOnload) { return _to GetOnload(aOnload); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnload(nsIDOMEventListener *aOnload) { return _to SetOnload(aOnload); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnloadstart(nsIDOMEventListener * *aOnloadstart) { return _to GetOnloadstart(aOnloadstart); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnloadstart(nsIDOMEventListener *aOnloadstart) { return _to SetOnloadstart(aOnloadstart); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnprogress(nsIDOMEventListener * *aOnprogress) { return _to GetOnprogress(aOnprogress); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnprogress(nsIDOMEventListener *aOnprogress) { return _to SetOnprogress(aOnprogress); } \
  NS_SCRIPTABLE NS_IMETHOD GetOntimeout(nsIDOMEventListener * *aOntimeout) { return _to GetOntimeout(aOntimeout); } \
  NS_SCRIPTABLE NS_IMETHOD SetOntimeout(nsIDOMEventListener *aOntimeout) { return _to SetOntimeout(aOntimeout); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnloadend(nsIDOMEventListener * *aOnloadend) { return _to GetOnloadend(aOnloadend); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnloadend(nsIDOMEventListener *aOnloadend) { return _to SetOnloadend(aOnloadend); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIXMLHTTPREQUESTEVENTTARGET(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetOnabort(nsIDOMEventListener * *aOnabort) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOnabort(aOnabort); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnabort(nsIDOMEventListener *aOnabort) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOnabort(aOnabort); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnerror(nsIDOMEventListener * *aOnerror) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOnerror(aOnerror); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnerror(nsIDOMEventListener *aOnerror) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOnerror(aOnerror); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnload(nsIDOMEventListener * *aOnload) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOnload(aOnload); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnload(nsIDOMEventListener *aOnload) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOnload(aOnload); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnloadstart(nsIDOMEventListener * *aOnloadstart) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOnloadstart(aOnloadstart); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnloadstart(nsIDOMEventListener *aOnloadstart) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOnloadstart(aOnloadstart); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnprogress(nsIDOMEventListener * *aOnprogress) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOnprogress(aOnprogress); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnprogress(nsIDOMEventListener *aOnprogress) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOnprogress(aOnprogress); } \
  NS_SCRIPTABLE NS_IMETHOD GetOntimeout(nsIDOMEventListener * *aOntimeout) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOntimeout(aOntimeout); } \
  NS_SCRIPTABLE NS_IMETHOD SetOntimeout(nsIDOMEventListener *aOntimeout) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOntimeout(aOntimeout); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnloadend(nsIDOMEventListener * *aOnloadend) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOnloadend(aOnloadend); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnloadend(nsIDOMEventListener *aOnloadend) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOnloadend(aOnloadend); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsXMLHttpRequestEventTarget : public nsIXMLHttpRequestEventTarget
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIXMLHTTPREQUESTEVENTTARGET

  nsXMLHttpRequestEventTarget();

private:
  ~nsXMLHttpRequestEventTarget();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsXMLHttpRequestEventTarget, nsIXMLHttpRequestEventTarget)

nsXMLHttpRequestEventTarget::nsXMLHttpRequestEventTarget()
{
  /* member initializers and constructor code */
}

nsXMLHttpRequestEventTarget::~nsXMLHttpRequestEventTarget()
{
  /* destructor code */
}

/* attribute nsIDOMEventListener onabort; */
NS_IMETHODIMP nsXMLHttpRequestEventTarget::GetOnabort(nsIDOMEventListener * *aOnabort)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsXMLHttpRequestEventTarget::SetOnabort(nsIDOMEventListener *aOnabort)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIDOMEventListener onerror; */
NS_IMETHODIMP nsXMLHttpRequestEventTarget::GetOnerror(nsIDOMEventListener * *aOnerror)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsXMLHttpRequestEventTarget::SetOnerror(nsIDOMEventListener *aOnerror)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIDOMEventListener onload; */
NS_IMETHODIMP nsXMLHttpRequestEventTarget::GetOnload(nsIDOMEventListener * *aOnload)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsXMLHttpRequestEventTarget::SetOnload(nsIDOMEventListener *aOnload)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIDOMEventListener onloadstart; */
NS_IMETHODIMP nsXMLHttpRequestEventTarget::GetOnloadstart(nsIDOMEventListener * *aOnloadstart)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsXMLHttpRequestEventTarget::SetOnloadstart(nsIDOMEventListener *aOnloadstart)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIDOMEventListener onprogress; */
NS_IMETHODIMP nsXMLHttpRequestEventTarget::GetOnprogress(nsIDOMEventListener * *aOnprogress)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsXMLHttpRequestEventTarget::SetOnprogress(nsIDOMEventListener *aOnprogress)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIDOMEventListener ontimeout; */
NS_IMETHODIMP nsXMLHttpRequestEventTarget::GetOntimeout(nsIDOMEventListener * *aOntimeout)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsXMLHttpRequestEventTarget::SetOntimeout(nsIDOMEventListener *aOntimeout)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIDOMEventListener onloadend; */
NS_IMETHODIMP nsXMLHttpRequestEventTarget::GetOnloadend(nsIDOMEventListener * *aOnloadend)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsXMLHttpRequestEventTarget::SetOnloadend(nsIDOMEventListener *aOnloadend)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIXMLHttpRequestUpload */
#define NS_IXMLHTTPREQUESTUPLOAD_IID_STR "8dbd2448-740a-412c-b314-434f24a1c510"

#define NS_IXMLHTTPREQUESTUPLOAD_IID \
  {0x8dbd2448, 0x740a, 0x412c, \
    { 0xb3, 0x14, 0x43, 0x4f, 0x24, 0xa1, 0xc5, 0x10 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIXMLHttpRequestUpload : public nsIXMLHttpRequestEventTarget {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IXMLHTTPREQUESTUPLOAD_IID)

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIXMLHttpRequestUpload, NS_IXMLHTTPREQUESTUPLOAD_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIXMLHTTPREQUESTUPLOAD \
  /* no methods! */

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIXMLHTTPREQUESTUPLOAD(_to) \
  /* no methods! */

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIXMLHTTPREQUESTUPLOAD(_to) \
  /* no methods! */

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsXMLHttpRequestUpload : public nsIXMLHttpRequestUpload
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIXMLHTTPREQUESTUPLOAD

  nsXMLHttpRequestUpload();

private:
  ~nsXMLHttpRequestUpload();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsXMLHttpRequestUpload, nsIXMLHttpRequestUpload)

nsXMLHttpRequestUpload::nsXMLHttpRequestUpload()
{
  /* member initializers and constructor code */
}

nsXMLHttpRequestUpload::~nsXMLHttpRequestUpload()
{
  /* destructor code */
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIXMLHttpRequest */
#define NS_IXMLHTTPREQUEST_IID_STR "2ed23d20-9d6d-47fd-b60f-2416dbd57005"

#define NS_IXMLHTTPREQUEST_IID \
  {0x2ed23d20, 0x9d6d, 0x47fd, \
    { 0xb6, 0x0f, 0x24, 0x16, 0xdb, 0xd5, 0x70, 0x05 }}

class NS_SCRIPTABLE nsIXMLHttpRequest : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IXMLHTTPREQUEST_IID)

  /* readonly attribute nsIChannel channel; */
  NS_SCRIPTABLE NS_IMETHOD GetChannel(nsIChannel * *aChannel) = 0;

  /* readonly attribute nsIDOMDocument responseXML; */
  NS_SCRIPTABLE NS_IMETHOD GetResponseXML(nsIDOMDocument * *aResponseXML) = 0;

  /* readonly attribute AString responseText; */
  NS_SCRIPTABLE NS_IMETHOD GetResponseText(nsAString & aResponseText) = 0;

  /* attribute AString responseType; */
  NS_SCRIPTABLE NS_IMETHOD GetResponseType(nsAString & aResponseType) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetResponseType(const nsAString & aResponseType) = 0;

  /* [implicit_jscontext] readonly attribute jsval response; */
  NS_SCRIPTABLE NS_IMETHOD GetResponse(JSContext* cx, JS::Value *aResponse) = 0;

  /* readonly attribute unsigned long status; */
  NS_SCRIPTABLE NS_IMETHOD GetStatus(PRUint32 *aStatus) = 0;

  /* readonly attribute DOMString statusText; */
  NS_SCRIPTABLE NS_IMETHOD GetStatusText(nsAString & aStatusText) = 0;

  /* [binaryname(SlowAbort)] void abort (); */
  NS_SCRIPTABLE NS_IMETHOD SlowAbort(void) = 0;

  /* DOMString getAllResponseHeaders (); */
  NS_SCRIPTABLE NS_IMETHOD GetAllResponseHeaders(nsAString & _retval NS_OUTPARAM) = 0;

  /* ACString getResponseHeader (in AUTF8String header); */
  NS_SCRIPTABLE NS_IMETHOD GetResponseHeader(const nsACString & header, nsACString & _retval NS_OUTPARAM) = 0;

   // note this is NOT virtual so this won't muck with the vtable!
  inline nsresult Open(const nsACString& method, const nsACString& url,
                       bool async, const nsAString& user,
                       const nsAString& password) {
    return Open(method, url, async, user, password, 3);
  }
  /* [optional_argc] void open (in AUTF8String method, in AUTF8String url, [optional] in boolean async, [optional, Undefined (Empty)] in DOMString user, [optional, Undefined (Empty)] in DOMString password); */
  NS_SCRIPTABLE NS_IMETHOD Open(const nsACString & method, const nsACString & url, bool async, const nsAString & user, const nsAString & password, PRUint8 _argc) = 0;

  /* void send ([optional] in nsIVariant body); */
  NS_SCRIPTABLE NS_IMETHOD Send(nsIVariant *body) = 0;

  /* void sendAsBinary (in DOMString body); */
  NS_SCRIPTABLE NS_IMETHOD SendAsBinary(const nsAString & body) = 0;

  /* void setRequestHeader (in AUTF8String header, in AUTF8String value); */
  NS_SCRIPTABLE NS_IMETHOD SetRequestHeader(const nsACString & header, const nsACString & value) = 0;

  /* attribute unsigned long timeout; */
  NS_SCRIPTABLE NS_IMETHOD GetTimeout(PRUint32 *aTimeout) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetTimeout(PRUint32 aTimeout) = 0;

  enum {
    UNSENT = 0U,
    OPENED = 1U,
    HEADERS_RECEIVED = 2U,
    LOADING = 3U,
    DONE = 4U
  };

  /* readonly attribute unsigned short readyState; */
  NS_SCRIPTABLE NS_IMETHOD GetReadyState(PRUint16 *aReadyState) = 0;

  /* [binaryname(SlowOverrideMimeType)] void overrideMimeType (in DOMString mimetype); */
  NS_SCRIPTABLE NS_IMETHOD SlowOverrideMimeType(const nsAString & mimetype) = 0;

  /* attribute boolean multipart; */
  NS_SCRIPTABLE NS_IMETHOD GetMultipart(bool *aMultipart) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetMultipart(bool aMultipart) = 0;

  /* attribute boolean mozBackgroundRequest; */
  NS_SCRIPTABLE NS_IMETHOD GetMozBackgroundRequest(bool *aMozBackgroundRequest) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetMozBackgroundRequest(bool aMozBackgroundRequest) = 0;

  /* attribute boolean withCredentials; */
  NS_SCRIPTABLE NS_IMETHOD GetWithCredentials(bool *aWithCredentials) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetWithCredentials(bool aWithCredentials) = 0;

  /* [noscript] void init (in nsIPrincipal principal, in nsIScriptContext scriptContext, in nsPIDOMWindow ownerWindow, in nsIURI baseURI); */
  NS_IMETHOD Init(nsIPrincipal *principal, nsIScriptContext *scriptContext, nsPIDOMWindow *ownerWindow, nsIURI *baseURI) = 0;

  /* readonly attribute nsIXMLHttpRequestUpload upload; */
  NS_SCRIPTABLE NS_IMETHOD GetUpload(nsIXMLHttpRequestUpload * *aUpload) = 0;

  /* attribute nsIDOMEventListener onreadystatechange; */
  NS_SCRIPTABLE NS_IMETHOD GetOnreadystatechange(nsIDOMEventListener * *aOnreadystatechange) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetOnreadystatechange(nsIDOMEventListener *aOnreadystatechange) = 0;

  /* readonly attribute boolean mozAnon; */
  NS_SCRIPTABLE NS_IMETHOD GetMozAnon(bool *aMozAnon) = 0;

  /* readonly attribute boolean mozSystem; */
  NS_SCRIPTABLE NS_IMETHOD GetMozSystem(bool *aMozSystem) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIXMLHttpRequest, NS_IXMLHTTPREQUEST_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIXMLHTTPREQUEST \
  NS_SCRIPTABLE NS_IMETHOD GetChannel(nsIChannel * *aChannel); \
  NS_SCRIPTABLE NS_IMETHOD GetResponseXML(nsIDOMDocument * *aResponseXML); \
  NS_SCRIPTABLE NS_IMETHOD GetResponseText(nsAString & aResponseText); \
  NS_SCRIPTABLE NS_IMETHOD GetResponseType(nsAString & aResponseType); \
  NS_SCRIPTABLE NS_IMETHOD SetResponseType(const nsAString & aResponseType); \
  NS_SCRIPTABLE NS_IMETHOD GetResponse(JSContext* cx, JS::Value *aResponse); \
  NS_SCRIPTABLE NS_IMETHOD GetStatus(PRUint32 *aStatus); \
  NS_SCRIPTABLE NS_IMETHOD GetStatusText(nsAString & aStatusText); \
  NS_SCRIPTABLE NS_IMETHOD SlowAbort(void); \
  NS_SCRIPTABLE NS_IMETHOD GetAllResponseHeaders(nsAString & _retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetResponseHeader(const nsACString & header, nsACString & _retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Open(const nsACString & method, const nsACString & url, bool async, const nsAString & user, const nsAString & password, PRUint8 _argc); \
  NS_SCRIPTABLE NS_IMETHOD Send(nsIVariant *body); \
  NS_SCRIPTABLE NS_IMETHOD SendAsBinary(const nsAString & body); \
  NS_SCRIPTABLE NS_IMETHOD SetRequestHeader(const nsACString & header, const nsACString & value); \
  NS_SCRIPTABLE NS_IMETHOD GetTimeout(PRUint32 *aTimeout); \
  NS_SCRIPTABLE NS_IMETHOD SetTimeout(PRUint32 aTimeout); \
  NS_SCRIPTABLE NS_IMETHOD GetReadyState(PRUint16 *aReadyState); \
  NS_SCRIPTABLE NS_IMETHOD SlowOverrideMimeType(const nsAString & mimetype); \
  NS_SCRIPTABLE NS_IMETHOD GetMultipart(bool *aMultipart); \
  NS_SCRIPTABLE NS_IMETHOD SetMultipart(bool aMultipart); \
  NS_SCRIPTABLE NS_IMETHOD GetMozBackgroundRequest(bool *aMozBackgroundRequest); \
  NS_SCRIPTABLE NS_IMETHOD SetMozBackgroundRequest(bool aMozBackgroundRequest); \
  NS_SCRIPTABLE NS_IMETHOD GetWithCredentials(bool *aWithCredentials); \
  NS_SCRIPTABLE NS_IMETHOD SetWithCredentials(bool aWithCredentials); \
  NS_IMETHOD Init(nsIPrincipal *principal, nsIScriptContext *scriptContext, nsPIDOMWindow *ownerWindow, nsIURI *baseURI); \
  NS_SCRIPTABLE NS_IMETHOD GetUpload(nsIXMLHttpRequestUpload * *aUpload); \
  NS_SCRIPTABLE NS_IMETHOD GetOnreadystatechange(nsIDOMEventListener * *aOnreadystatechange); \
  NS_SCRIPTABLE NS_IMETHOD SetOnreadystatechange(nsIDOMEventListener *aOnreadystatechange); \
  NS_SCRIPTABLE NS_IMETHOD GetMozAnon(bool *aMozAnon); \
  NS_SCRIPTABLE NS_IMETHOD GetMozSystem(bool *aMozSystem); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIXMLHTTPREQUEST(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetChannel(nsIChannel * *aChannel) { return _to GetChannel(aChannel); } \
  NS_SCRIPTABLE NS_IMETHOD GetResponseXML(nsIDOMDocument * *aResponseXML) { return _to GetResponseXML(aResponseXML); } \
  NS_SCRIPTABLE NS_IMETHOD GetResponseText(nsAString & aResponseText) { return _to GetResponseText(aResponseText); } \
  NS_SCRIPTABLE NS_IMETHOD GetResponseType(nsAString & aResponseType) { return _to GetResponseType(aResponseType); } \
  NS_SCRIPTABLE NS_IMETHOD SetResponseType(const nsAString & aResponseType) { return _to SetResponseType(aResponseType); } \
  NS_SCRIPTABLE NS_IMETHOD GetResponse(JSContext* cx, JS::Value *aResponse) { return _to GetResponse(cx, aResponse); } \
  NS_SCRIPTABLE NS_IMETHOD GetStatus(PRUint32 *aStatus) { return _to GetStatus(aStatus); } \
  NS_SCRIPTABLE NS_IMETHOD GetStatusText(nsAString & aStatusText) { return _to GetStatusText(aStatusText); } \
  NS_SCRIPTABLE NS_IMETHOD SlowAbort(void) { return _to SlowAbort(); } \
  NS_SCRIPTABLE NS_IMETHOD GetAllResponseHeaders(nsAString & _retval NS_OUTPARAM) { return _to GetAllResponseHeaders(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetResponseHeader(const nsACString & header, nsACString & _retval NS_OUTPARAM) { return _to GetResponseHeader(header, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Open(const nsACString & method, const nsACString & url, bool async, const nsAString & user, const nsAString & password, PRUint8 _argc) { return _to Open(method, url, async, user, password, _argc); } \
  NS_SCRIPTABLE NS_IMETHOD Send(nsIVariant *body) { return _to Send(body); } \
  NS_SCRIPTABLE NS_IMETHOD SendAsBinary(const nsAString & body) { return _to SendAsBinary(body); } \
  NS_SCRIPTABLE NS_IMETHOD SetRequestHeader(const nsACString & header, const nsACString & value) { return _to SetRequestHeader(header, value); } \
  NS_SCRIPTABLE NS_IMETHOD GetTimeout(PRUint32 *aTimeout) { return _to GetTimeout(aTimeout); } \
  NS_SCRIPTABLE NS_IMETHOD SetTimeout(PRUint32 aTimeout) { return _to SetTimeout(aTimeout); } \
  NS_SCRIPTABLE NS_IMETHOD GetReadyState(PRUint16 *aReadyState) { return _to GetReadyState(aReadyState); } \
  NS_SCRIPTABLE NS_IMETHOD SlowOverrideMimeType(const nsAString & mimetype) { return _to SlowOverrideMimeType(mimetype); } \
  NS_SCRIPTABLE NS_IMETHOD GetMultipart(bool *aMultipart) { return _to GetMultipart(aMultipart); } \
  NS_SCRIPTABLE NS_IMETHOD SetMultipart(bool aMultipart) { return _to SetMultipart(aMultipart); } \
  NS_SCRIPTABLE NS_IMETHOD GetMozBackgroundRequest(bool *aMozBackgroundRequest) { return _to GetMozBackgroundRequest(aMozBackgroundRequest); } \
  NS_SCRIPTABLE NS_IMETHOD SetMozBackgroundRequest(bool aMozBackgroundRequest) { return _to SetMozBackgroundRequest(aMozBackgroundRequest); } \
  NS_SCRIPTABLE NS_IMETHOD GetWithCredentials(bool *aWithCredentials) { return _to GetWithCredentials(aWithCredentials); } \
  NS_SCRIPTABLE NS_IMETHOD SetWithCredentials(bool aWithCredentials) { return _to SetWithCredentials(aWithCredentials); } \
  NS_IMETHOD Init(nsIPrincipal *principal, nsIScriptContext *scriptContext, nsPIDOMWindow *ownerWindow, nsIURI *baseURI) { return _to Init(principal, scriptContext, ownerWindow, baseURI); } \
  NS_SCRIPTABLE NS_IMETHOD GetUpload(nsIXMLHttpRequestUpload * *aUpload) { return _to GetUpload(aUpload); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnreadystatechange(nsIDOMEventListener * *aOnreadystatechange) { return _to GetOnreadystatechange(aOnreadystatechange); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnreadystatechange(nsIDOMEventListener *aOnreadystatechange) { return _to SetOnreadystatechange(aOnreadystatechange); } \
  NS_SCRIPTABLE NS_IMETHOD GetMozAnon(bool *aMozAnon) { return _to GetMozAnon(aMozAnon); } \
  NS_SCRIPTABLE NS_IMETHOD GetMozSystem(bool *aMozSystem) { return _to GetMozSystem(aMozSystem); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIXMLHTTPREQUEST(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetChannel(nsIChannel * *aChannel) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetChannel(aChannel); } \
  NS_SCRIPTABLE NS_IMETHOD GetResponseXML(nsIDOMDocument * *aResponseXML) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetResponseXML(aResponseXML); } \
  NS_SCRIPTABLE NS_IMETHOD GetResponseText(nsAString & aResponseText) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetResponseText(aResponseText); } \
  NS_SCRIPTABLE NS_IMETHOD GetResponseType(nsAString & aResponseType) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetResponseType(aResponseType); } \
  NS_SCRIPTABLE NS_IMETHOD SetResponseType(const nsAString & aResponseType) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetResponseType(aResponseType); } \
  NS_SCRIPTABLE NS_IMETHOD GetResponse(JSContext* cx, JS::Value *aResponse) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetResponse(cx, aResponse); } \
  NS_SCRIPTABLE NS_IMETHOD GetStatus(PRUint32 *aStatus) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetStatus(aStatus); } \
  NS_SCRIPTABLE NS_IMETHOD GetStatusText(nsAString & aStatusText) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetStatusText(aStatusText); } \
  NS_SCRIPTABLE NS_IMETHOD SlowAbort(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->SlowAbort(); } \
  NS_SCRIPTABLE NS_IMETHOD GetAllResponseHeaders(nsAString & _retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAllResponseHeaders(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetResponseHeader(const nsACString & header, nsACString & _retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetResponseHeader(header, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Open(const nsACString & method, const nsACString & url, bool async, const nsAString & user, const nsAString & password, PRUint8 _argc) { return !_to ? NS_ERROR_NULL_POINTER : _to->Open(method, url, async, user, password, _argc); } \
  NS_SCRIPTABLE NS_IMETHOD Send(nsIVariant *body) { return !_to ? NS_ERROR_NULL_POINTER : _to->Send(body); } \
  NS_SCRIPTABLE NS_IMETHOD SendAsBinary(const nsAString & body) { return !_to ? NS_ERROR_NULL_POINTER : _to->SendAsBinary(body); } \
  NS_SCRIPTABLE NS_IMETHOD SetRequestHeader(const nsACString & header, const nsACString & value) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetRequestHeader(header, value); } \
  NS_SCRIPTABLE NS_IMETHOD GetTimeout(PRUint32 *aTimeout) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTimeout(aTimeout); } \
  NS_SCRIPTABLE NS_IMETHOD SetTimeout(PRUint32 aTimeout) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetTimeout(aTimeout); } \
  NS_SCRIPTABLE NS_IMETHOD GetReadyState(PRUint16 *aReadyState) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetReadyState(aReadyState); } \
  NS_SCRIPTABLE NS_IMETHOD SlowOverrideMimeType(const nsAString & mimetype) { return !_to ? NS_ERROR_NULL_POINTER : _to->SlowOverrideMimeType(mimetype); } \
  NS_SCRIPTABLE NS_IMETHOD GetMultipart(bool *aMultipart) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMultipart(aMultipart); } \
  NS_SCRIPTABLE NS_IMETHOD SetMultipart(bool aMultipart) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetMultipart(aMultipart); } \
  NS_SCRIPTABLE NS_IMETHOD GetMozBackgroundRequest(bool *aMozBackgroundRequest) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMozBackgroundRequest(aMozBackgroundRequest); } \
  NS_SCRIPTABLE NS_IMETHOD SetMozBackgroundRequest(bool aMozBackgroundRequest) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetMozBackgroundRequest(aMozBackgroundRequest); } \
  NS_SCRIPTABLE NS_IMETHOD GetWithCredentials(bool *aWithCredentials) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetWithCredentials(aWithCredentials); } \
  NS_SCRIPTABLE NS_IMETHOD SetWithCredentials(bool aWithCredentials) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetWithCredentials(aWithCredentials); } \
  NS_IMETHOD Init(nsIPrincipal *principal, nsIScriptContext *scriptContext, nsPIDOMWindow *ownerWindow, nsIURI *baseURI) { return !_to ? NS_ERROR_NULL_POINTER : _to->Init(principal, scriptContext, ownerWindow, baseURI); } \
  NS_SCRIPTABLE NS_IMETHOD GetUpload(nsIXMLHttpRequestUpload * *aUpload) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetUpload(aUpload); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnreadystatechange(nsIDOMEventListener * *aOnreadystatechange) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOnreadystatechange(aOnreadystatechange); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnreadystatechange(nsIDOMEventListener *aOnreadystatechange) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOnreadystatechange(aOnreadystatechange); } \
  NS_SCRIPTABLE NS_IMETHOD GetMozAnon(bool *aMozAnon) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMozAnon(aMozAnon); } \
  NS_SCRIPTABLE NS_IMETHOD GetMozSystem(bool *aMozSystem) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMozSystem(aMozSystem); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsXMLHttpRequest : public nsIXMLHttpRequest
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIXMLHTTPREQUEST

  nsXMLHttpRequest();

private:
  ~nsXMLHttpRequest();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsXMLHttpRequest, nsIXMLHttpRequest)

nsXMLHttpRequest::nsXMLHttpRequest()
{
  /* member initializers and constructor code */
}

nsXMLHttpRequest::~nsXMLHttpRequest()
{
  /* destructor code */
}

/* readonly attribute nsIChannel channel; */
NS_IMETHODIMP nsXMLHttpRequest::GetChannel(nsIChannel * *aChannel)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMDocument responseXML; */
NS_IMETHODIMP nsXMLHttpRequest::GetResponseXML(nsIDOMDocument * *aResponseXML)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute AString responseText; */
NS_IMETHODIMP nsXMLHttpRequest::GetResponseText(nsAString & aResponseText)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute AString responseType; */
NS_IMETHODIMP nsXMLHttpRequest::GetResponseType(nsAString & aResponseType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsXMLHttpRequest::SetResponseType(const nsAString & aResponseType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] readonly attribute jsval response; */
NS_IMETHODIMP nsXMLHttpRequest::GetResponse(JSContext* cx, JS::Value *aResponse)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long status; */
NS_IMETHODIMP nsXMLHttpRequest::GetStatus(PRUint32 *aStatus)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString statusText; */
NS_IMETHODIMP nsXMLHttpRequest::GetStatusText(nsAString & aStatusText)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [binaryname(SlowAbort)] void abort (); */
NS_IMETHODIMP nsXMLHttpRequest::SlowAbort()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* DOMString getAllResponseHeaders (); */
NS_IMETHODIMP nsXMLHttpRequest::GetAllResponseHeaders(nsAString & _retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* ACString getResponseHeader (in AUTF8String header); */
NS_IMETHODIMP nsXMLHttpRequest::GetResponseHeader(const nsACString & header, nsACString & _retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [optional_argc] void open (in AUTF8String method, in AUTF8String url, [optional] in boolean async, [optional, Undefined (Empty)] in DOMString user, [optional, Undefined (Empty)] in DOMString password); */
NS_IMETHODIMP nsXMLHttpRequest::Open(const nsACString & method, const nsACString & url, bool async, const nsAString & user, const nsAString & password, PRUint8 _argc)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void send ([optional] in nsIVariant body); */
NS_IMETHODIMP nsXMLHttpRequest::Send(nsIVariant *body)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void sendAsBinary (in DOMString body); */
NS_IMETHODIMP nsXMLHttpRequest::SendAsBinary(const nsAString & body)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setRequestHeader (in AUTF8String header, in AUTF8String value); */
NS_IMETHODIMP nsXMLHttpRequest::SetRequestHeader(const nsACString & header, const nsACString & value)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute unsigned long timeout; */
NS_IMETHODIMP nsXMLHttpRequest::GetTimeout(PRUint32 *aTimeout)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsXMLHttpRequest::SetTimeout(PRUint32 aTimeout)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned short readyState; */
NS_IMETHODIMP nsXMLHttpRequest::GetReadyState(PRUint16 *aReadyState)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [binaryname(SlowOverrideMimeType)] void overrideMimeType (in DOMString mimetype); */
NS_IMETHODIMP nsXMLHttpRequest::SlowOverrideMimeType(const nsAString & mimetype)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean multipart; */
NS_IMETHODIMP nsXMLHttpRequest::GetMultipart(bool *aMultipart)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsXMLHttpRequest::SetMultipart(bool aMultipart)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean mozBackgroundRequest; */
NS_IMETHODIMP nsXMLHttpRequest::GetMozBackgroundRequest(bool *aMozBackgroundRequest)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsXMLHttpRequest::SetMozBackgroundRequest(bool aMozBackgroundRequest)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean withCredentials; */
NS_IMETHODIMP nsXMLHttpRequest::GetWithCredentials(bool *aWithCredentials)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsXMLHttpRequest::SetWithCredentials(bool aWithCredentials)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void init (in nsIPrincipal principal, in nsIScriptContext scriptContext, in nsPIDOMWindow ownerWindow, in nsIURI baseURI); */
NS_IMETHODIMP nsXMLHttpRequest::Init(nsIPrincipal *principal, nsIScriptContext *scriptContext, nsPIDOMWindow *ownerWindow, nsIURI *baseURI)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIXMLHttpRequestUpload upload; */
NS_IMETHODIMP nsXMLHttpRequest::GetUpload(nsIXMLHttpRequestUpload * *aUpload)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIDOMEventListener onreadystatechange; */
NS_IMETHODIMP nsXMLHttpRequest::GetOnreadystatechange(nsIDOMEventListener * *aOnreadystatechange)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsXMLHttpRequest::SetOnreadystatechange(nsIDOMEventListener *aOnreadystatechange)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean mozAnon; */
NS_IMETHODIMP nsXMLHttpRequest::GetMozAnon(bool *aMozAnon)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean mozSystem; */
NS_IMETHODIMP nsXMLHttpRequest::GetMozSystem(bool *aMozSystem)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIXHRSendable */
#define NS_IXHRSENDABLE_IID_STR "840d0d00-e83e-4a29-b3c7-67e96e90a499"

#define NS_IXHRSENDABLE_IID \
  {0x840d0d00, 0xe83e, 0x4a29, \
    { 0xb3, 0xc7, 0x67, 0xe9, 0x6e, 0x90, 0xa4, 0x99 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIXHRSendable : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IXHRSENDABLE_IID)

  /* void getSendInfo (out nsIInputStream body, out ACString contentType, out ACString charset); */
  NS_SCRIPTABLE NS_IMETHOD GetSendInfo(nsIInputStream * *body NS_OUTPARAM, nsACString & contentType NS_OUTPARAM, nsACString & charset NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIXHRSendable, NS_IXHRSENDABLE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIXHRSENDABLE \
  NS_SCRIPTABLE NS_IMETHOD GetSendInfo(nsIInputStream * *body NS_OUTPARAM, nsACString & contentType NS_OUTPARAM, nsACString & charset NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIXHRSENDABLE(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetSendInfo(nsIInputStream * *body NS_OUTPARAM, nsACString & contentType NS_OUTPARAM, nsACString & charset NS_OUTPARAM) { return _to GetSendInfo(body, contentType, charset); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIXHRSENDABLE(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetSendInfo(nsIInputStream * *body NS_OUTPARAM, nsACString & contentType NS_OUTPARAM, nsACString & charset NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSendInfo(body, contentType, charset); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsXHRSendable : public nsIXHRSendable
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIXHRSENDABLE

  nsXHRSendable();

private:
  ~nsXHRSendable();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsXHRSendable, nsIXHRSendable)

nsXHRSendable::nsXHRSendable()
{
  /* member initializers and constructor code */
}

nsXHRSendable::~nsXHRSendable()
{
  /* destructor code */
}

/* void getSendInfo (out nsIInputStream body, out ACString contentType, out ACString charset); */
NS_IMETHODIMP nsXHRSendable::GetSendInfo(nsIInputStream * *body NS_OUTPARAM, nsACString & contentType NS_OUTPARAM, nsACString & charset NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIJSXMLHttpRequest */
#define NS_IJSXMLHTTPREQUEST_IID_STR "423fdd3d-41c9-4149-8fe5-b14a1d3912a0"

#define NS_IJSXMLHTTPREQUEST_IID \
  {0x423fdd3d, 0x41c9, 0x4149, \
    { 0x8f, 0xe5, 0xb1, 0x4a, 0x1d, 0x39, 0x12, 0xa0 }}

class NS_NO_VTABLE NS_SCRIPTABLE MOZ_DEPRECATED nsIJSXMLHttpRequest : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IJSXMLHTTPREQUEST_IID)

  /* attribute nsIDOMEventListener onuploadprogress; */
  NS_SCRIPTABLE NS_IMETHOD GetOnuploadprogress(nsIDOMEventListener * *aOnuploadprogress) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetOnuploadprogress(nsIDOMEventListener *aOnuploadprogress) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIJSXMLHttpRequest, NS_IJSXMLHTTPREQUEST_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIJSXMLHTTPREQUEST \
  NS_SCRIPTABLE NS_IMETHOD GetOnuploadprogress(nsIDOMEventListener * *aOnuploadprogress); \
  NS_SCRIPTABLE NS_IMETHOD SetOnuploadprogress(nsIDOMEventListener *aOnuploadprogress); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIJSXMLHTTPREQUEST(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetOnuploadprogress(nsIDOMEventListener * *aOnuploadprogress) { return _to GetOnuploadprogress(aOnuploadprogress); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnuploadprogress(nsIDOMEventListener *aOnuploadprogress) { return _to SetOnuploadprogress(aOnuploadprogress); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIJSXMLHTTPREQUEST(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetOnuploadprogress(nsIDOMEventListener * *aOnuploadprogress) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOnuploadprogress(aOnuploadprogress); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnuploadprogress(nsIDOMEventListener *aOnuploadprogress) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOnuploadprogress(aOnuploadprogress); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsJSXMLHttpRequest : public nsIJSXMLHttpRequest
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIJSXMLHTTPREQUEST

  nsJSXMLHttpRequest();

private:
  ~nsJSXMLHttpRequest();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsJSXMLHttpRequest, nsIJSXMLHttpRequest)

nsJSXMLHttpRequest::nsJSXMLHttpRequest()
{
  /* member initializers and constructor code */
}

nsJSXMLHttpRequest::~nsJSXMLHttpRequest()
{
  /* destructor code */
}

/* attribute nsIDOMEventListener onuploadprogress; */
NS_IMETHODIMP nsJSXMLHttpRequest::GetOnuploadprogress(nsIDOMEventListener * *aOnuploadprogress)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsJSXMLHttpRequest::SetOnuploadprogress(nsIDOMEventListener *aOnuploadprogress)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif

#define NS_XMLHTTPREQUEST_CID                       \
 { /* d164e770-4157-11d4-9a42-000064657374 */       \
  0xd164e770, 0x4157, 0x11d4,                       \
 {0x9a, 0x42, 0x00, 0x00, 0x64, 0x65, 0x73, 0x74} }
#define NS_XMLHTTPREQUEST_CONTRACTID \
"@mozilla.org/xmlextras/xmlhttprequest;1"

#endif /* __gen_nsIXMLHttpRequest_h__ */
