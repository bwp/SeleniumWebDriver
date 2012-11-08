/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/content/base/public/nsIWebSocket.idl
 */

#ifndef __gen_nsIWebSocket_h__
#define __gen_nsIWebSocket_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#include "jspubtd.h"

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIDOMEventListener; /* forward declaration */

class nsIPrincipal; /* forward declaration */

class nsIScriptContext; /* forward declaration */

class nsPIDOMWindow; /* forward declaration */

class nsIDOMDOMStringList; /* forward declaration */

class nsIVariant; /* forward declaration */

#include "nsTArray.h"
class nsString;

/* starting interface:    nsIWebSocket */
#define NS_IWEBSOCKET_IID_STR "e59c8c65-df29-485c-a00b-8fac3dc1573a"

#define NS_IWEBSOCKET_IID \
  {0xe59c8c65, 0xdf29, 0x485c, \
    { 0xa0, 0x0b, 0x8f, 0xac, 0x3d, 0xc1, 0x57, 0x3a }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIWebSocket : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IWEBSOCKET_IID)

  /* readonly attribute DOMString url; */
  NS_SCRIPTABLE NS_IMETHOD GetUrl(nsAString & aUrl) = 0;

  /* readonly attribute DOMString extensions; */
  NS_SCRIPTABLE NS_IMETHOD GetExtensions(nsAString & aExtensions) = 0;

  /* readonly attribute DOMString protocol; */
  NS_SCRIPTABLE NS_IMETHOD GetProtocol(nsAString & aProtocol) = 0;

  enum {
    CONNECTING = 0U,
    OPEN = 1U,
    CLOSING = 2U,
    CLOSED = 3U
  };

  /* readonly attribute unsigned short readyState; */
  NS_SCRIPTABLE NS_IMETHOD GetReadyState(PRUint16 *aReadyState) = 0;

  /* readonly attribute unsigned long bufferedAmount; */
  NS_SCRIPTABLE NS_IMETHOD GetBufferedAmount(PRUint32 *aBufferedAmount) = 0;

  /* attribute DOMString binaryType; */
  NS_SCRIPTABLE NS_IMETHOD GetBinaryType(nsAString & aBinaryType) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetBinaryType(const nsAString & aBinaryType) = 0;

  /* attribute nsIDOMEventListener onopen; */
  NS_SCRIPTABLE NS_IMETHOD GetOnopen(nsIDOMEventListener * *aOnopen) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetOnopen(nsIDOMEventListener *aOnopen) = 0;

  /* attribute nsIDOMEventListener onmessage; */
  NS_SCRIPTABLE NS_IMETHOD GetOnmessage(nsIDOMEventListener * *aOnmessage) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetOnmessage(nsIDOMEventListener *aOnmessage) = 0;

  /* attribute nsIDOMEventListener onerror; */
  NS_SCRIPTABLE NS_IMETHOD GetOnerror(nsIDOMEventListener * *aOnerror) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetOnerror(nsIDOMEventListener *aOnerror) = 0;

  /* attribute nsIDOMEventListener onclose; */
  NS_SCRIPTABLE NS_IMETHOD GetOnclose(nsIDOMEventListener * *aOnclose) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetOnclose(nsIDOMEventListener *aOnclose) = 0;

  /* [implicit_jscontext] void send (in nsIVariant data); */
  NS_SCRIPTABLE NS_IMETHOD Send(nsIVariant *data, JSContext* cx) = 0;

  /* [optional_argc] void close ([optional] in unsigned short code, [optional] in DOMString reason); */
  NS_SCRIPTABLE NS_IMETHOD Close(PRUint16 code, const nsAString & reason, PRUint8 _argc) = 0;

  /* [noscript] void init (in nsIPrincipal principal, in nsIScriptContext scriptContext, in nsPIDOMWindow ownerWindow, in DOMString url, in nsStringTArrayRef protocol); */
  NS_IMETHOD Init(nsIPrincipal *principal, nsIScriptContext *scriptContext, nsPIDOMWindow *ownerWindow, const nsAString & url, nsTArray<nsString> & protocol) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIWebSocket, NS_IWEBSOCKET_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIWEBSOCKET \
  NS_SCRIPTABLE NS_IMETHOD GetUrl(nsAString & aUrl); \
  NS_SCRIPTABLE NS_IMETHOD GetExtensions(nsAString & aExtensions); \
  NS_SCRIPTABLE NS_IMETHOD GetProtocol(nsAString & aProtocol); \
  NS_SCRIPTABLE NS_IMETHOD GetReadyState(PRUint16 *aReadyState); \
  NS_SCRIPTABLE NS_IMETHOD GetBufferedAmount(PRUint32 *aBufferedAmount); \
  NS_SCRIPTABLE NS_IMETHOD GetBinaryType(nsAString & aBinaryType); \
  NS_SCRIPTABLE NS_IMETHOD SetBinaryType(const nsAString & aBinaryType); \
  NS_SCRIPTABLE NS_IMETHOD GetOnopen(nsIDOMEventListener * *aOnopen); \
  NS_SCRIPTABLE NS_IMETHOD SetOnopen(nsIDOMEventListener *aOnopen); \
  NS_SCRIPTABLE NS_IMETHOD GetOnmessage(nsIDOMEventListener * *aOnmessage); \
  NS_SCRIPTABLE NS_IMETHOD SetOnmessage(nsIDOMEventListener *aOnmessage); \
  NS_SCRIPTABLE NS_IMETHOD GetOnerror(nsIDOMEventListener * *aOnerror); \
  NS_SCRIPTABLE NS_IMETHOD SetOnerror(nsIDOMEventListener *aOnerror); \
  NS_SCRIPTABLE NS_IMETHOD GetOnclose(nsIDOMEventListener * *aOnclose); \
  NS_SCRIPTABLE NS_IMETHOD SetOnclose(nsIDOMEventListener *aOnclose); \
  NS_SCRIPTABLE NS_IMETHOD Send(nsIVariant *data, JSContext* cx); \
  NS_SCRIPTABLE NS_IMETHOD Close(PRUint16 code, const nsAString & reason, PRUint8 _argc); \
  NS_IMETHOD Init(nsIPrincipal *principal, nsIScriptContext *scriptContext, nsPIDOMWindow *ownerWindow, const nsAString & url, nsTArray<nsString> & protocol); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIWEBSOCKET(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetUrl(nsAString & aUrl) { return _to GetUrl(aUrl); } \
  NS_SCRIPTABLE NS_IMETHOD GetExtensions(nsAString & aExtensions) { return _to GetExtensions(aExtensions); } \
  NS_SCRIPTABLE NS_IMETHOD GetProtocol(nsAString & aProtocol) { return _to GetProtocol(aProtocol); } \
  NS_SCRIPTABLE NS_IMETHOD GetReadyState(PRUint16 *aReadyState) { return _to GetReadyState(aReadyState); } \
  NS_SCRIPTABLE NS_IMETHOD GetBufferedAmount(PRUint32 *aBufferedAmount) { return _to GetBufferedAmount(aBufferedAmount); } \
  NS_SCRIPTABLE NS_IMETHOD GetBinaryType(nsAString & aBinaryType) { return _to GetBinaryType(aBinaryType); } \
  NS_SCRIPTABLE NS_IMETHOD SetBinaryType(const nsAString & aBinaryType) { return _to SetBinaryType(aBinaryType); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnopen(nsIDOMEventListener * *aOnopen) { return _to GetOnopen(aOnopen); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnopen(nsIDOMEventListener *aOnopen) { return _to SetOnopen(aOnopen); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnmessage(nsIDOMEventListener * *aOnmessage) { return _to GetOnmessage(aOnmessage); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnmessage(nsIDOMEventListener *aOnmessage) { return _to SetOnmessage(aOnmessage); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnerror(nsIDOMEventListener * *aOnerror) { return _to GetOnerror(aOnerror); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnerror(nsIDOMEventListener *aOnerror) { return _to SetOnerror(aOnerror); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnclose(nsIDOMEventListener * *aOnclose) { return _to GetOnclose(aOnclose); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnclose(nsIDOMEventListener *aOnclose) { return _to SetOnclose(aOnclose); } \
  NS_SCRIPTABLE NS_IMETHOD Send(nsIVariant *data, JSContext* cx) { return _to Send(data, cx); } \
  NS_SCRIPTABLE NS_IMETHOD Close(PRUint16 code, const nsAString & reason, PRUint8 _argc) { return _to Close(code, reason, _argc); } \
  NS_IMETHOD Init(nsIPrincipal *principal, nsIScriptContext *scriptContext, nsPIDOMWindow *ownerWindow, const nsAString & url, nsTArray<nsString> & protocol) { return _to Init(principal, scriptContext, ownerWindow, url, protocol); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIWEBSOCKET(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetUrl(nsAString & aUrl) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetUrl(aUrl); } \
  NS_SCRIPTABLE NS_IMETHOD GetExtensions(nsAString & aExtensions) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetExtensions(aExtensions); } \
  NS_SCRIPTABLE NS_IMETHOD GetProtocol(nsAString & aProtocol) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetProtocol(aProtocol); } \
  NS_SCRIPTABLE NS_IMETHOD GetReadyState(PRUint16 *aReadyState) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetReadyState(aReadyState); } \
  NS_SCRIPTABLE NS_IMETHOD GetBufferedAmount(PRUint32 *aBufferedAmount) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetBufferedAmount(aBufferedAmount); } \
  NS_SCRIPTABLE NS_IMETHOD GetBinaryType(nsAString & aBinaryType) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetBinaryType(aBinaryType); } \
  NS_SCRIPTABLE NS_IMETHOD SetBinaryType(const nsAString & aBinaryType) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetBinaryType(aBinaryType); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnopen(nsIDOMEventListener * *aOnopen) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOnopen(aOnopen); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnopen(nsIDOMEventListener *aOnopen) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOnopen(aOnopen); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnmessage(nsIDOMEventListener * *aOnmessage) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOnmessage(aOnmessage); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnmessage(nsIDOMEventListener *aOnmessage) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOnmessage(aOnmessage); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnerror(nsIDOMEventListener * *aOnerror) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOnerror(aOnerror); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnerror(nsIDOMEventListener *aOnerror) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOnerror(aOnerror); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnclose(nsIDOMEventListener * *aOnclose) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOnclose(aOnclose); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnclose(nsIDOMEventListener *aOnclose) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOnclose(aOnclose); } \
  NS_SCRIPTABLE NS_IMETHOD Send(nsIVariant *data, JSContext* cx) { return !_to ? NS_ERROR_NULL_POINTER : _to->Send(data, cx); } \
  NS_SCRIPTABLE NS_IMETHOD Close(PRUint16 code, const nsAString & reason, PRUint8 _argc) { return !_to ? NS_ERROR_NULL_POINTER : _to->Close(code, reason, _argc); } \
  NS_IMETHOD Init(nsIPrincipal *principal, nsIScriptContext *scriptContext, nsPIDOMWindow *ownerWindow, const nsAString & url, nsTArray<nsString> & protocol) { return !_to ? NS_ERROR_NULL_POINTER : _to->Init(principal, scriptContext, ownerWindow, url, protocol); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsWebSocket : public nsIWebSocket
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIWEBSOCKET

  nsWebSocket();

private:
  ~nsWebSocket();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsWebSocket, nsIWebSocket)

nsWebSocket::nsWebSocket()
{
  /* member initializers and constructor code */
}

nsWebSocket::~nsWebSocket()
{
  /* destructor code */
}

/* readonly attribute DOMString url; */
NS_IMETHODIMP nsWebSocket::GetUrl(nsAString & aUrl)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString extensions; */
NS_IMETHODIMP nsWebSocket::GetExtensions(nsAString & aExtensions)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString protocol; */
NS_IMETHODIMP nsWebSocket::GetProtocol(nsAString & aProtocol)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned short readyState; */
NS_IMETHODIMP nsWebSocket::GetReadyState(PRUint16 *aReadyState)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long bufferedAmount; */
NS_IMETHODIMP nsWebSocket::GetBufferedAmount(PRUint32 *aBufferedAmount)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString binaryType; */
NS_IMETHODIMP nsWebSocket::GetBinaryType(nsAString & aBinaryType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsWebSocket::SetBinaryType(const nsAString & aBinaryType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIDOMEventListener onopen; */
NS_IMETHODIMP nsWebSocket::GetOnopen(nsIDOMEventListener * *aOnopen)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsWebSocket::SetOnopen(nsIDOMEventListener *aOnopen)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIDOMEventListener onmessage; */
NS_IMETHODIMP nsWebSocket::GetOnmessage(nsIDOMEventListener * *aOnmessage)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsWebSocket::SetOnmessage(nsIDOMEventListener *aOnmessage)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIDOMEventListener onerror; */
NS_IMETHODIMP nsWebSocket::GetOnerror(nsIDOMEventListener * *aOnerror)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsWebSocket::SetOnerror(nsIDOMEventListener *aOnerror)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIDOMEventListener onclose; */
NS_IMETHODIMP nsWebSocket::GetOnclose(nsIDOMEventListener * *aOnclose)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsWebSocket::SetOnclose(nsIDOMEventListener *aOnclose)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] void send (in nsIVariant data); */
NS_IMETHODIMP nsWebSocket::Send(nsIVariant *data, JSContext* cx)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [optional_argc] void close ([optional] in unsigned short code, [optional] in DOMString reason); */
NS_IMETHODIMP nsWebSocket::Close(PRUint16 code, const nsAString & reason, PRUint8 _argc)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void init (in nsIPrincipal principal, in nsIScriptContext scriptContext, in nsPIDOMWindow ownerWindow, in DOMString url, in nsStringTArrayRef protocol); */
NS_IMETHODIMP nsWebSocket::Init(nsIPrincipal *principal, nsIScriptContext *scriptContext, nsPIDOMWindow *ownerWindow, const nsAString & url, nsTArray<nsString> & protocol)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIWebSocket_h__ */
