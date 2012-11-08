/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/content/base/public/nsIEventSource.idl
 */

#ifndef __gen_nsIEventSource_h__
#define __gen_nsIEventSource_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIDOMEventListener; /* forward declaration */

class nsIPrincipal; /* forward declaration */

class nsIScriptContext; /* forward declaration */

class nsPIDOMWindow; /* forward declaration */


/* starting interface:    nsIEventSource */
#define NS_IEVENTSOURCE_IID_STR "a3d3181e-47c1-4f2e-b2c7-94775a86f5c5"

#define NS_IEVENTSOURCE_IID \
  {0xa3d3181e, 0x47c1, 0x4f2e, \
    { 0xb2, 0xc7, 0x94, 0x77, 0x5a, 0x86, 0xf5, 0xc5 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIEventSource : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IEVENTSOURCE_IID)

  /* readonly attribute DOMString url; */
  NS_SCRIPTABLE NS_IMETHOD GetUrl(nsAString & aUrl) = 0;

  enum {
    CONNECTING = 0U,
    OPEN = 1U,
    CLOSED = 2U
  };

  /* readonly attribute long readyState; */
  NS_SCRIPTABLE NS_IMETHOD GetReadyState(PRInt32 *aReadyState) = 0;

  /* readonly attribute boolean withCredentials; */
  NS_SCRIPTABLE NS_IMETHOD GetWithCredentials(bool *aWithCredentials) = 0;

  /* attribute nsIDOMEventListener onopen; */
  NS_SCRIPTABLE NS_IMETHOD GetOnopen(nsIDOMEventListener * *aOnopen) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetOnopen(nsIDOMEventListener *aOnopen) = 0;

  /* attribute nsIDOMEventListener onmessage; */
  NS_SCRIPTABLE NS_IMETHOD GetOnmessage(nsIDOMEventListener * *aOnmessage) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetOnmessage(nsIDOMEventListener *aOnmessage) = 0;

  /* attribute nsIDOMEventListener onerror; */
  NS_SCRIPTABLE NS_IMETHOD GetOnerror(nsIDOMEventListener * *aOnerror) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetOnerror(nsIDOMEventListener *aOnerror) = 0;

  /* void close (); */
  NS_SCRIPTABLE NS_IMETHOD Close(void) = 0;

  /* [noscript] void init (in nsIPrincipal principal, in nsIScriptContext scriptContext, in nsPIDOMWindow ownerWindow, in DOMString url, in boolean withCredentials); */
  NS_IMETHOD Init(nsIPrincipal *principal, nsIScriptContext *scriptContext, nsPIDOMWindow *ownerWindow, const nsAString & url, bool withCredentials) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIEventSource, NS_IEVENTSOURCE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIEVENTSOURCE \
  NS_SCRIPTABLE NS_IMETHOD GetUrl(nsAString & aUrl); \
  NS_SCRIPTABLE NS_IMETHOD GetReadyState(PRInt32 *aReadyState); \
  NS_SCRIPTABLE NS_IMETHOD GetWithCredentials(bool *aWithCredentials); \
  NS_SCRIPTABLE NS_IMETHOD GetOnopen(nsIDOMEventListener * *aOnopen); \
  NS_SCRIPTABLE NS_IMETHOD SetOnopen(nsIDOMEventListener *aOnopen); \
  NS_SCRIPTABLE NS_IMETHOD GetOnmessage(nsIDOMEventListener * *aOnmessage); \
  NS_SCRIPTABLE NS_IMETHOD SetOnmessage(nsIDOMEventListener *aOnmessage); \
  NS_SCRIPTABLE NS_IMETHOD GetOnerror(nsIDOMEventListener * *aOnerror); \
  NS_SCRIPTABLE NS_IMETHOD SetOnerror(nsIDOMEventListener *aOnerror); \
  NS_SCRIPTABLE NS_IMETHOD Close(void); \
  NS_IMETHOD Init(nsIPrincipal *principal, nsIScriptContext *scriptContext, nsPIDOMWindow *ownerWindow, const nsAString & url, bool withCredentials); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIEVENTSOURCE(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetUrl(nsAString & aUrl) { return _to GetUrl(aUrl); } \
  NS_SCRIPTABLE NS_IMETHOD GetReadyState(PRInt32 *aReadyState) { return _to GetReadyState(aReadyState); } \
  NS_SCRIPTABLE NS_IMETHOD GetWithCredentials(bool *aWithCredentials) { return _to GetWithCredentials(aWithCredentials); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnopen(nsIDOMEventListener * *aOnopen) { return _to GetOnopen(aOnopen); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnopen(nsIDOMEventListener *aOnopen) { return _to SetOnopen(aOnopen); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnmessage(nsIDOMEventListener * *aOnmessage) { return _to GetOnmessage(aOnmessage); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnmessage(nsIDOMEventListener *aOnmessage) { return _to SetOnmessage(aOnmessage); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnerror(nsIDOMEventListener * *aOnerror) { return _to GetOnerror(aOnerror); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnerror(nsIDOMEventListener *aOnerror) { return _to SetOnerror(aOnerror); } \
  NS_SCRIPTABLE NS_IMETHOD Close(void) { return _to Close(); } \
  NS_IMETHOD Init(nsIPrincipal *principal, nsIScriptContext *scriptContext, nsPIDOMWindow *ownerWindow, const nsAString & url, bool withCredentials) { return _to Init(principal, scriptContext, ownerWindow, url, withCredentials); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIEVENTSOURCE(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetUrl(nsAString & aUrl) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetUrl(aUrl); } \
  NS_SCRIPTABLE NS_IMETHOD GetReadyState(PRInt32 *aReadyState) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetReadyState(aReadyState); } \
  NS_SCRIPTABLE NS_IMETHOD GetWithCredentials(bool *aWithCredentials) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetWithCredentials(aWithCredentials); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnopen(nsIDOMEventListener * *aOnopen) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOnopen(aOnopen); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnopen(nsIDOMEventListener *aOnopen) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOnopen(aOnopen); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnmessage(nsIDOMEventListener * *aOnmessage) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOnmessage(aOnmessage); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnmessage(nsIDOMEventListener *aOnmessage) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOnmessage(aOnmessage); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnerror(nsIDOMEventListener * *aOnerror) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOnerror(aOnerror); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnerror(nsIDOMEventListener *aOnerror) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOnerror(aOnerror); } \
  NS_SCRIPTABLE NS_IMETHOD Close(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Close(); } \
  NS_IMETHOD Init(nsIPrincipal *principal, nsIScriptContext *scriptContext, nsPIDOMWindow *ownerWindow, const nsAString & url, bool withCredentials) { return !_to ? NS_ERROR_NULL_POINTER : _to->Init(principal, scriptContext, ownerWindow, url, withCredentials); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsEventSource : public nsIEventSource
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIEVENTSOURCE

  nsEventSource();

private:
  ~nsEventSource();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsEventSource, nsIEventSource)

nsEventSource::nsEventSource()
{
  /* member initializers and constructor code */
}

nsEventSource::~nsEventSource()
{
  /* destructor code */
}

/* readonly attribute DOMString url; */
NS_IMETHODIMP nsEventSource::GetUrl(nsAString & aUrl)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long readyState; */
NS_IMETHODIMP nsEventSource::GetReadyState(PRInt32 *aReadyState)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean withCredentials; */
NS_IMETHODIMP nsEventSource::GetWithCredentials(bool *aWithCredentials)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIDOMEventListener onopen; */
NS_IMETHODIMP nsEventSource::GetOnopen(nsIDOMEventListener * *aOnopen)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsEventSource::SetOnopen(nsIDOMEventListener *aOnopen)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIDOMEventListener onmessage; */
NS_IMETHODIMP nsEventSource::GetOnmessage(nsIDOMEventListener * *aOnmessage)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsEventSource::SetOnmessage(nsIDOMEventListener *aOnmessage)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIDOMEventListener onerror; */
NS_IMETHODIMP nsEventSource::GetOnerror(nsIDOMEventListener * *aOnerror)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsEventSource::SetOnerror(nsIDOMEventListener *aOnerror)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void close (); */
NS_IMETHODIMP nsEventSource::Close()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void init (in nsIPrincipal principal, in nsIScriptContext scriptContext, in nsPIDOMWindow ownerWindow, in DOMString url, in boolean withCredentials); */
NS_IMETHODIMP nsEventSource::Init(nsIPrincipal *principal, nsIScriptContext *scriptContext, nsPIDOMWindow *ownerWindow, const nsAString & url, bool withCredentials)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIEventSource_h__ */
