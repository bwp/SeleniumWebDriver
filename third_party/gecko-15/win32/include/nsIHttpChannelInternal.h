/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/netwerk/protocol/http/nsIHttpChannelInternal.idl
 */

#ifndef __gen_nsIHttpChannelInternal_h__
#define __gen_nsIHttpChannelInternal_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
#include "nsTArray.h"
class nsCString;
class nsISocketTransport; /* forward declaration */

class nsIAsyncInputStream; /* forward declaration */

class nsIAsyncOutputStream; /* forward declaration */

class nsIURI; /* forward declaration */

class nsIProxyInfo; /* forward declaration */


/* starting interface:    nsIHttpUpgradeListener */
#define NS_IHTTPUPGRADELISTENER_IID_STR "4b967b6d-cd1c-49ae-a457-23ff76f5a2e8"

#define NS_IHTTPUPGRADELISTENER_IID \
  {0x4b967b6d, 0xcd1c, 0x49ae, \
    { 0xa4, 0x57, 0x23, 0xff, 0x76, 0xf5, 0xa2, 0xe8 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIHttpUpgradeListener : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IHTTPUPGRADELISTENER_IID)

  /* void onTransportAvailable (in nsISocketTransport aTransport, in nsIAsyncInputStream aSocketIn, in nsIAsyncOutputStream aSocketOut); */
  NS_SCRIPTABLE NS_IMETHOD OnTransportAvailable(nsISocketTransport *aTransport, nsIAsyncInputStream *aSocketIn, nsIAsyncOutputStream *aSocketOut) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIHttpUpgradeListener, NS_IHTTPUPGRADELISTENER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIHTTPUPGRADELISTENER \
  NS_SCRIPTABLE NS_IMETHOD OnTransportAvailable(nsISocketTransport *aTransport, nsIAsyncInputStream *aSocketIn, nsIAsyncOutputStream *aSocketOut); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIHTTPUPGRADELISTENER(_to) \
  NS_SCRIPTABLE NS_IMETHOD OnTransportAvailable(nsISocketTransport *aTransport, nsIAsyncInputStream *aSocketIn, nsIAsyncOutputStream *aSocketOut) { return _to OnTransportAvailable(aTransport, aSocketIn, aSocketOut); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIHTTPUPGRADELISTENER(_to) \
  NS_SCRIPTABLE NS_IMETHOD OnTransportAvailable(nsISocketTransport *aTransport, nsIAsyncInputStream *aSocketIn, nsIAsyncOutputStream *aSocketOut) { return !_to ? NS_ERROR_NULL_POINTER : _to->OnTransportAvailable(aTransport, aSocketIn, aSocketOut); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsHttpUpgradeListener : public nsIHttpUpgradeListener
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIHTTPUPGRADELISTENER

  nsHttpUpgradeListener();

private:
  ~nsHttpUpgradeListener();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsHttpUpgradeListener, nsIHttpUpgradeListener)

nsHttpUpgradeListener::nsHttpUpgradeListener()
{
  /* member initializers and constructor code */
}

nsHttpUpgradeListener::~nsHttpUpgradeListener()
{
  /* destructor code */
}

/* void onTransportAvailable (in nsISocketTransport aTransport, in nsIAsyncInputStream aSocketIn, in nsIAsyncOutputStream aSocketOut); */
NS_IMETHODIMP nsHttpUpgradeListener::OnTransportAvailable(nsISocketTransport *aTransport, nsIAsyncInputStream *aSocketIn, nsIAsyncOutputStream *aSocketOut)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIHttpChannelInternal */
#define NS_IHTTPCHANNELINTERNAL_IID_STR "9363fd96-af59-47e8-bddf-1d5e91acd336"

#define NS_IHTTPCHANNELINTERNAL_IID \
  {0x9363fd96, 0xaf59, 0x47e8, \
    { 0xbd, 0xdf, 0x1d, 0x5e, 0x91, 0xac, 0xd3, 0x36 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIHttpChannelInternal : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IHTTPCHANNELINTERNAL_IID)

  /* attribute nsIURI documentURI; */
  NS_SCRIPTABLE NS_IMETHOD GetDocumentURI(nsIURI * *aDocumentURI) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetDocumentURI(nsIURI *aDocumentURI) = 0;

  /* void getRequestVersion (out unsigned long major, out unsigned long minor); */
  NS_SCRIPTABLE NS_IMETHOD GetRequestVersion(PRUint32 *major NS_OUTPARAM, PRUint32 *minor NS_OUTPARAM) = 0;

  /* void getResponseVersion (out unsigned long major, out unsigned long minor); */
  NS_SCRIPTABLE NS_IMETHOD GetResponseVersion(PRUint32 *major NS_OUTPARAM, PRUint32 *minor NS_OUTPARAM) = 0;

  /* void setCookie (in string aCookieHeader); */
  NS_SCRIPTABLE NS_IMETHOD SetCookie(const char * aCookieHeader) = 0;

  /* void setupFallbackChannel (in string aFallbackKey); */
  NS_SCRIPTABLE NS_IMETHOD SetupFallbackChannel(const char * aFallbackKey) = 0;

  /* attribute boolean forceAllowThirdPartyCookie; */
  NS_SCRIPTABLE NS_IMETHOD GetForceAllowThirdPartyCookie(bool *aForceAllowThirdPartyCookie) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetForceAllowThirdPartyCookie(bool aForceAllowThirdPartyCookie) = 0;

  /* readonly attribute boolean canceled; */
  NS_SCRIPTABLE NS_IMETHOD GetCanceled(bool *aCanceled) = 0;

  /* attribute boolean channelIsForDownload; */
  NS_SCRIPTABLE NS_IMETHOD GetChannelIsForDownload(bool *aChannelIsForDownload) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetChannelIsForDownload(bool aChannelIsForDownload) = 0;

  /* readonly attribute AUTF8String localAddress; */
  NS_SCRIPTABLE NS_IMETHOD GetLocalAddress(nsACString & aLocalAddress) = 0;

  /* readonly attribute PRInt32 localPort; */
  NS_SCRIPTABLE NS_IMETHOD GetLocalPort(PRInt32 *aLocalPort) = 0;

  /* readonly attribute AUTF8String remoteAddress; */
  NS_SCRIPTABLE NS_IMETHOD GetRemoteAddress(nsACString & aRemoteAddress) = 0;

  /* readonly attribute PRInt32 remotePort; */
  NS_SCRIPTABLE NS_IMETHOD GetRemotePort(PRInt32 *aRemotePort) = 0;

  /* [noscript] void setCacheKeysRedirectChain (in StringArray cacheKeys); */
  NS_IMETHOD SetCacheKeysRedirectChain(nsTArray<nsCString> *cacheKeys) = 0;

  /* void HTTPUpgrade (in ACString aProtocolName, in nsIHttpUpgradeListener aListener); */
  NS_SCRIPTABLE NS_IMETHOD HTTPUpgrade(const nsACString & aProtocolName, nsIHttpUpgradeListener *aListener) = 0;

  /* attribute boolean allowSpdy; */
  NS_SCRIPTABLE NS_IMETHOD GetAllowSpdy(bool *aAllowSpdy) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetAllowSpdy(bool aAllowSpdy) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIHttpChannelInternal, NS_IHTTPCHANNELINTERNAL_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIHTTPCHANNELINTERNAL \
  NS_SCRIPTABLE NS_IMETHOD GetDocumentURI(nsIURI * *aDocumentURI); \
  NS_SCRIPTABLE NS_IMETHOD SetDocumentURI(nsIURI *aDocumentURI); \
  NS_SCRIPTABLE NS_IMETHOD GetRequestVersion(PRUint32 *major NS_OUTPARAM, PRUint32 *minor NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetResponseVersion(PRUint32 *major NS_OUTPARAM, PRUint32 *minor NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetCookie(const char * aCookieHeader); \
  NS_SCRIPTABLE NS_IMETHOD SetupFallbackChannel(const char * aFallbackKey); \
  NS_SCRIPTABLE NS_IMETHOD GetForceAllowThirdPartyCookie(bool *aForceAllowThirdPartyCookie); \
  NS_SCRIPTABLE NS_IMETHOD SetForceAllowThirdPartyCookie(bool aForceAllowThirdPartyCookie); \
  NS_SCRIPTABLE NS_IMETHOD GetCanceled(bool *aCanceled); \
  NS_SCRIPTABLE NS_IMETHOD GetChannelIsForDownload(bool *aChannelIsForDownload); \
  NS_SCRIPTABLE NS_IMETHOD SetChannelIsForDownload(bool aChannelIsForDownload); \
  NS_SCRIPTABLE NS_IMETHOD GetLocalAddress(nsACString & aLocalAddress); \
  NS_SCRIPTABLE NS_IMETHOD GetLocalPort(PRInt32 *aLocalPort); \
  NS_SCRIPTABLE NS_IMETHOD GetRemoteAddress(nsACString & aRemoteAddress); \
  NS_SCRIPTABLE NS_IMETHOD GetRemotePort(PRInt32 *aRemotePort); \
  NS_IMETHOD SetCacheKeysRedirectChain(nsTArray<nsCString> *cacheKeys); \
  NS_SCRIPTABLE NS_IMETHOD HTTPUpgrade(const nsACString & aProtocolName, nsIHttpUpgradeListener *aListener); \
  NS_SCRIPTABLE NS_IMETHOD GetAllowSpdy(bool *aAllowSpdy); \
  NS_SCRIPTABLE NS_IMETHOD SetAllowSpdy(bool aAllowSpdy); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIHTTPCHANNELINTERNAL(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetDocumentURI(nsIURI * *aDocumentURI) { return _to GetDocumentURI(aDocumentURI); } \
  NS_SCRIPTABLE NS_IMETHOD SetDocumentURI(nsIURI *aDocumentURI) { return _to SetDocumentURI(aDocumentURI); } \
  NS_SCRIPTABLE NS_IMETHOD GetRequestVersion(PRUint32 *major NS_OUTPARAM, PRUint32 *minor NS_OUTPARAM) { return _to GetRequestVersion(major, minor); } \
  NS_SCRIPTABLE NS_IMETHOD GetResponseVersion(PRUint32 *major NS_OUTPARAM, PRUint32 *minor NS_OUTPARAM) { return _to GetResponseVersion(major, minor); } \
  NS_SCRIPTABLE NS_IMETHOD SetCookie(const char * aCookieHeader) { return _to SetCookie(aCookieHeader); } \
  NS_SCRIPTABLE NS_IMETHOD SetupFallbackChannel(const char * aFallbackKey) { return _to SetupFallbackChannel(aFallbackKey); } \
  NS_SCRIPTABLE NS_IMETHOD GetForceAllowThirdPartyCookie(bool *aForceAllowThirdPartyCookie) { return _to GetForceAllowThirdPartyCookie(aForceAllowThirdPartyCookie); } \
  NS_SCRIPTABLE NS_IMETHOD SetForceAllowThirdPartyCookie(bool aForceAllowThirdPartyCookie) { return _to SetForceAllowThirdPartyCookie(aForceAllowThirdPartyCookie); } \
  NS_SCRIPTABLE NS_IMETHOD GetCanceled(bool *aCanceled) { return _to GetCanceled(aCanceled); } \
  NS_SCRIPTABLE NS_IMETHOD GetChannelIsForDownload(bool *aChannelIsForDownload) { return _to GetChannelIsForDownload(aChannelIsForDownload); } \
  NS_SCRIPTABLE NS_IMETHOD SetChannelIsForDownload(bool aChannelIsForDownload) { return _to SetChannelIsForDownload(aChannelIsForDownload); } \
  NS_SCRIPTABLE NS_IMETHOD GetLocalAddress(nsACString & aLocalAddress) { return _to GetLocalAddress(aLocalAddress); } \
  NS_SCRIPTABLE NS_IMETHOD GetLocalPort(PRInt32 *aLocalPort) { return _to GetLocalPort(aLocalPort); } \
  NS_SCRIPTABLE NS_IMETHOD GetRemoteAddress(nsACString & aRemoteAddress) { return _to GetRemoteAddress(aRemoteAddress); } \
  NS_SCRIPTABLE NS_IMETHOD GetRemotePort(PRInt32 *aRemotePort) { return _to GetRemotePort(aRemotePort); } \
  NS_IMETHOD SetCacheKeysRedirectChain(nsTArray<nsCString> *cacheKeys) { return _to SetCacheKeysRedirectChain(cacheKeys); } \
  NS_SCRIPTABLE NS_IMETHOD HTTPUpgrade(const nsACString & aProtocolName, nsIHttpUpgradeListener *aListener) { return _to HTTPUpgrade(aProtocolName, aListener); } \
  NS_SCRIPTABLE NS_IMETHOD GetAllowSpdy(bool *aAllowSpdy) { return _to GetAllowSpdy(aAllowSpdy); } \
  NS_SCRIPTABLE NS_IMETHOD SetAllowSpdy(bool aAllowSpdy) { return _to SetAllowSpdy(aAllowSpdy); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIHTTPCHANNELINTERNAL(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetDocumentURI(nsIURI * *aDocumentURI) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDocumentURI(aDocumentURI); } \
  NS_SCRIPTABLE NS_IMETHOD SetDocumentURI(nsIURI *aDocumentURI) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDocumentURI(aDocumentURI); } \
  NS_SCRIPTABLE NS_IMETHOD GetRequestVersion(PRUint32 *major NS_OUTPARAM, PRUint32 *minor NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRequestVersion(major, minor); } \
  NS_SCRIPTABLE NS_IMETHOD GetResponseVersion(PRUint32 *major NS_OUTPARAM, PRUint32 *minor NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetResponseVersion(major, minor); } \
  NS_SCRIPTABLE NS_IMETHOD SetCookie(const char * aCookieHeader) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetCookie(aCookieHeader); } \
  NS_SCRIPTABLE NS_IMETHOD SetupFallbackChannel(const char * aFallbackKey) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetupFallbackChannel(aFallbackKey); } \
  NS_SCRIPTABLE NS_IMETHOD GetForceAllowThirdPartyCookie(bool *aForceAllowThirdPartyCookie) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetForceAllowThirdPartyCookie(aForceAllowThirdPartyCookie); } \
  NS_SCRIPTABLE NS_IMETHOD SetForceAllowThirdPartyCookie(bool aForceAllowThirdPartyCookie) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetForceAllowThirdPartyCookie(aForceAllowThirdPartyCookie); } \
  NS_SCRIPTABLE NS_IMETHOD GetCanceled(bool *aCanceled) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCanceled(aCanceled); } \
  NS_SCRIPTABLE NS_IMETHOD GetChannelIsForDownload(bool *aChannelIsForDownload) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetChannelIsForDownload(aChannelIsForDownload); } \
  NS_SCRIPTABLE NS_IMETHOD SetChannelIsForDownload(bool aChannelIsForDownload) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetChannelIsForDownload(aChannelIsForDownload); } \
  NS_SCRIPTABLE NS_IMETHOD GetLocalAddress(nsACString & aLocalAddress) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLocalAddress(aLocalAddress); } \
  NS_SCRIPTABLE NS_IMETHOD GetLocalPort(PRInt32 *aLocalPort) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLocalPort(aLocalPort); } \
  NS_SCRIPTABLE NS_IMETHOD GetRemoteAddress(nsACString & aRemoteAddress) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRemoteAddress(aRemoteAddress); } \
  NS_SCRIPTABLE NS_IMETHOD GetRemotePort(PRInt32 *aRemotePort) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRemotePort(aRemotePort); } \
  NS_IMETHOD SetCacheKeysRedirectChain(nsTArray<nsCString> *cacheKeys) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetCacheKeysRedirectChain(cacheKeys); } \
  NS_SCRIPTABLE NS_IMETHOD HTTPUpgrade(const nsACString & aProtocolName, nsIHttpUpgradeListener *aListener) { return !_to ? NS_ERROR_NULL_POINTER : _to->HTTPUpgrade(aProtocolName, aListener); } \
  NS_SCRIPTABLE NS_IMETHOD GetAllowSpdy(bool *aAllowSpdy) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAllowSpdy(aAllowSpdy); } \
  NS_SCRIPTABLE NS_IMETHOD SetAllowSpdy(bool aAllowSpdy) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAllowSpdy(aAllowSpdy); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsHttpChannelInternal : public nsIHttpChannelInternal
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIHTTPCHANNELINTERNAL

  nsHttpChannelInternal();

private:
  ~nsHttpChannelInternal();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsHttpChannelInternal, nsIHttpChannelInternal)

nsHttpChannelInternal::nsHttpChannelInternal()
{
  /* member initializers and constructor code */
}

nsHttpChannelInternal::~nsHttpChannelInternal()
{
  /* destructor code */
}

/* attribute nsIURI documentURI; */
NS_IMETHODIMP nsHttpChannelInternal::GetDocumentURI(nsIURI * *aDocumentURI)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsHttpChannelInternal::SetDocumentURI(nsIURI *aDocumentURI)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void getRequestVersion (out unsigned long major, out unsigned long minor); */
NS_IMETHODIMP nsHttpChannelInternal::GetRequestVersion(PRUint32 *major NS_OUTPARAM, PRUint32 *minor NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void getResponseVersion (out unsigned long major, out unsigned long minor); */
NS_IMETHODIMP nsHttpChannelInternal::GetResponseVersion(PRUint32 *major NS_OUTPARAM, PRUint32 *minor NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setCookie (in string aCookieHeader); */
NS_IMETHODIMP nsHttpChannelInternal::SetCookie(const char * aCookieHeader)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setupFallbackChannel (in string aFallbackKey); */
NS_IMETHODIMP nsHttpChannelInternal::SetupFallbackChannel(const char * aFallbackKey)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean forceAllowThirdPartyCookie; */
NS_IMETHODIMP nsHttpChannelInternal::GetForceAllowThirdPartyCookie(bool *aForceAllowThirdPartyCookie)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsHttpChannelInternal::SetForceAllowThirdPartyCookie(bool aForceAllowThirdPartyCookie)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean canceled; */
NS_IMETHODIMP nsHttpChannelInternal::GetCanceled(bool *aCanceled)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean channelIsForDownload; */
NS_IMETHODIMP nsHttpChannelInternal::GetChannelIsForDownload(bool *aChannelIsForDownload)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsHttpChannelInternal::SetChannelIsForDownload(bool aChannelIsForDownload)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute AUTF8String localAddress; */
NS_IMETHODIMP nsHttpChannelInternal::GetLocalAddress(nsACString & aLocalAddress)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute PRInt32 localPort; */
NS_IMETHODIMP nsHttpChannelInternal::GetLocalPort(PRInt32 *aLocalPort)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute AUTF8String remoteAddress; */
NS_IMETHODIMP nsHttpChannelInternal::GetRemoteAddress(nsACString & aRemoteAddress)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute PRInt32 remotePort; */
NS_IMETHODIMP nsHttpChannelInternal::GetRemotePort(PRInt32 *aRemotePort)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void setCacheKeysRedirectChain (in StringArray cacheKeys); */
NS_IMETHODIMP nsHttpChannelInternal::SetCacheKeysRedirectChain(nsTArray<nsCString> *cacheKeys)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void HTTPUpgrade (in ACString aProtocolName, in nsIHttpUpgradeListener aListener); */
NS_IMETHODIMP nsHttpChannelInternal::HTTPUpgrade(const nsACString & aProtocolName, nsIHttpUpgradeListener *aListener)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean allowSpdy; */
NS_IMETHODIMP nsHttpChannelInternal::GetAllowSpdy(bool *aAllowSpdy)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsHttpChannelInternal::SetAllowSpdy(bool aAllowSpdy)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIHttpChannelInternal_h__ */
