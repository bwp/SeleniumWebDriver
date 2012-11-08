/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/netwerk/socket/nsISSLSocketControl.idl
 */

#ifndef __gen_nsISSLSocketControl_h__
#define __gen_nsISSLSocketControl_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIInterfaceRequestor; /* forward declaration */

#include "nsTArray.h"
class nsCString;

/* starting interface:    nsISSLSocketControl */
#define NS_ISSLSOCKETCONTROL_IID_STR "753f0f13-681d-4de3-a6c6-11aa7e0b3afd"

#define NS_ISSLSOCKETCONTROL_IID \
  {0x753f0f13, 0x681d, 0x4de3, \
    { 0xa6, 0xc6, 0x11, 0xaa, 0x7e, 0x0b, 0x3a, 0xfd }}

class NS_NO_VTABLE NS_SCRIPTABLE nsISSLSocketControl : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ISSLSOCKETCONTROL_IID)

  /* attribute nsIInterfaceRequestor notificationCallbacks; */
  NS_SCRIPTABLE NS_IMETHOD GetNotificationCallbacks(nsIInterfaceRequestor * *aNotificationCallbacks) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetNotificationCallbacks(nsIInterfaceRequestor *aNotificationCallbacks) = 0;

  /* void proxyStartSSL (); */
  NS_SCRIPTABLE NS_IMETHOD ProxyStartSSL(void) = 0;

  /* void StartTLS (); */
  NS_SCRIPTABLE NS_IMETHOD StartTLS(void) = 0;

  /* [noscript] void setNPNList (in nsCStringTArrayRef aNPNList); */
  NS_IMETHOD SetNPNList(nsTArray<nsCString> & aNPNList) = 0;

  /* readonly attribute ACString negotiatedNPN; */
  NS_SCRIPTABLE NS_IMETHOD GetNegotiatedNPN(nsACString & aNegotiatedNPN) = 0;

  /* boolean joinConnection (in ACString npnProtocol, in ACString hostname, in long port); */
  NS_SCRIPTABLE NS_IMETHOD JoinConnection(const nsACString & npnProtocol, const nsACString & hostname, PRInt32 port, bool *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsISSLSocketControl, NS_ISSLSOCKETCONTROL_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSISSLSOCKETCONTROL \
  NS_SCRIPTABLE NS_IMETHOD GetNotificationCallbacks(nsIInterfaceRequestor * *aNotificationCallbacks); \
  NS_SCRIPTABLE NS_IMETHOD SetNotificationCallbacks(nsIInterfaceRequestor *aNotificationCallbacks); \
  NS_SCRIPTABLE NS_IMETHOD ProxyStartSSL(void); \
  NS_SCRIPTABLE NS_IMETHOD StartTLS(void); \
  NS_IMETHOD SetNPNList(nsTArray<nsCString> & aNPNList); \
  NS_SCRIPTABLE NS_IMETHOD GetNegotiatedNPN(nsACString & aNegotiatedNPN); \
  NS_SCRIPTABLE NS_IMETHOD JoinConnection(const nsACString & npnProtocol, const nsACString & hostname, PRInt32 port, bool *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSISSLSOCKETCONTROL(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetNotificationCallbacks(nsIInterfaceRequestor * *aNotificationCallbacks) { return _to GetNotificationCallbacks(aNotificationCallbacks); } \
  NS_SCRIPTABLE NS_IMETHOD SetNotificationCallbacks(nsIInterfaceRequestor *aNotificationCallbacks) { return _to SetNotificationCallbacks(aNotificationCallbacks); } \
  NS_SCRIPTABLE NS_IMETHOD ProxyStartSSL(void) { return _to ProxyStartSSL(); } \
  NS_SCRIPTABLE NS_IMETHOD StartTLS(void) { return _to StartTLS(); } \
  NS_IMETHOD SetNPNList(nsTArray<nsCString> & aNPNList) { return _to SetNPNList(aNPNList); } \
  NS_SCRIPTABLE NS_IMETHOD GetNegotiatedNPN(nsACString & aNegotiatedNPN) { return _to GetNegotiatedNPN(aNegotiatedNPN); } \
  NS_SCRIPTABLE NS_IMETHOD JoinConnection(const nsACString & npnProtocol, const nsACString & hostname, PRInt32 port, bool *_retval NS_OUTPARAM) { return _to JoinConnection(npnProtocol, hostname, port, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSISSLSOCKETCONTROL(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetNotificationCallbacks(nsIInterfaceRequestor * *aNotificationCallbacks) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNotificationCallbacks(aNotificationCallbacks); } \
  NS_SCRIPTABLE NS_IMETHOD SetNotificationCallbacks(nsIInterfaceRequestor *aNotificationCallbacks) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetNotificationCallbacks(aNotificationCallbacks); } \
  NS_SCRIPTABLE NS_IMETHOD ProxyStartSSL(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->ProxyStartSSL(); } \
  NS_SCRIPTABLE NS_IMETHOD StartTLS(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->StartTLS(); } \
  NS_IMETHOD SetNPNList(nsTArray<nsCString> & aNPNList) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetNPNList(aNPNList); } \
  NS_SCRIPTABLE NS_IMETHOD GetNegotiatedNPN(nsACString & aNegotiatedNPN) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNegotiatedNPN(aNegotiatedNPN); } \
  NS_SCRIPTABLE NS_IMETHOD JoinConnection(const nsACString & npnProtocol, const nsACString & hostname, PRInt32 port, bool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->JoinConnection(npnProtocol, hostname, port, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsSSLSocketControl : public nsISSLSocketControl
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSISSLSOCKETCONTROL

  nsSSLSocketControl();

private:
  ~nsSSLSocketControl();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsSSLSocketControl, nsISSLSocketControl)

nsSSLSocketControl::nsSSLSocketControl()
{
  /* member initializers and constructor code */
}

nsSSLSocketControl::~nsSSLSocketControl()
{
  /* destructor code */
}

/* attribute nsIInterfaceRequestor notificationCallbacks; */
NS_IMETHODIMP nsSSLSocketControl::GetNotificationCallbacks(nsIInterfaceRequestor * *aNotificationCallbacks)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsSSLSocketControl::SetNotificationCallbacks(nsIInterfaceRequestor *aNotificationCallbacks)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void proxyStartSSL (); */
NS_IMETHODIMP nsSSLSocketControl::ProxyStartSSL()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void StartTLS (); */
NS_IMETHODIMP nsSSLSocketControl::StartTLS()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void setNPNList (in nsCStringTArrayRef aNPNList); */
NS_IMETHODIMP nsSSLSocketControl::SetNPNList(nsTArray<nsCString> & aNPNList)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute ACString negotiatedNPN; */
NS_IMETHODIMP nsSSLSocketControl::GetNegotiatedNPN(nsACString & aNegotiatedNPN)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean joinConnection (in ACString npnProtocol, in ACString hostname, in long port); */
NS_IMETHODIMP nsSSLSocketControl::JoinConnection(const nsACString & npnProtocol, const nsACString & hostname, PRInt32 port, bool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsISSLSocketControl_h__ */
