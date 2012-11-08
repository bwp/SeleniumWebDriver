/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/network/interfaces/nsIMobileConnectionProvider.idl
 */

#ifndef __gen_nsIMobileConnectionProvider_h__
#define __gen_nsIMobileConnectionProvider_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#include "jspubtd.h"

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIDOMMozMobileConnectionInfo; /* forward declaration */

class nsIDOMDOMRequest; /* forward declaration */

class nsIDOMWindow; /* forward declaration */


/* starting interface:    nsIMobileConnectionProvider */
#define NS_IMOBILECONNECTIONPROVIDER_IID_STR "93202514-9ae9-482e-95bc-9c6ed62aea99"

#define NS_IMOBILECONNECTIONPROVIDER_IID \
  {0x93202514, 0x9ae9, 0x482e, \
    { 0x95, 0xbc, 0x9c, 0x6e, 0xd6, 0x2a, 0xea, 0x99 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIMobileConnectionProvider : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IMOBILECONNECTIONPROVIDER_IID)

  /* readonly attribute DOMString cardState; */
  NS_SCRIPTABLE NS_IMETHOD GetCardState(nsAString & aCardState) = 0;

  /* readonly attribute nsIDOMMozMobileConnectionInfo voiceConnectionInfo; */
  NS_SCRIPTABLE NS_IMETHOD GetVoiceConnectionInfo(nsIDOMMozMobileConnectionInfo * *aVoiceConnectionInfo) = 0;

  /* readonly attribute nsIDOMMozMobileConnectionInfo dataConnectionInfo; */
  NS_SCRIPTABLE NS_IMETHOD GetDataConnectionInfo(nsIDOMMozMobileConnectionInfo * *aDataConnectionInfo) = 0;

  /* nsIDOMDOMRequest getNetworks (in nsIDOMWindow window); */
  NS_SCRIPTABLE NS_IMETHOD GetNetworks(nsIDOMWindow *window, nsIDOMDOMRequest * *_retval NS_OUTPARAM) = 0;

  /* nsIDOMDOMRequest getCardLock (in nsIDOMWindow window, in DOMString lockType); */
  NS_SCRIPTABLE NS_IMETHOD GetCardLock(nsIDOMWindow *window, const nsAString & lockType, nsIDOMDOMRequest * *_retval NS_OUTPARAM) = 0;

  /* nsIDOMDOMRequest unlockCardLock (in nsIDOMWindow window, in jsval info); */
  NS_SCRIPTABLE NS_IMETHOD UnlockCardLock(nsIDOMWindow *window, const JS::Value & info, nsIDOMDOMRequest * *_retval NS_OUTPARAM) = 0;

  /* nsIDOMDOMRequest setCardLock (in nsIDOMWindow window, in jsval info); */
  NS_SCRIPTABLE NS_IMETHOD SetCardLock(nsIDOMWindow *window, const JS::Value & info, nsIDOMDOMRequest * *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIMobileConnectionProvider, NS_IMOBILECONNECTIONPROVIDER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIMOBILECONNECTIONPROVIDER \
  NS_SCRIPTABLE NS_IMETHOD GetCardState(nsAString & aCardState); \
  NS_SCRIPTABLE NS_IMETHOD GetVoiceConnectionInfo(nsIDOMMozMobileConnectionInfo * *aVoiceConnectionInfo); \
  NS_SCRIPTABLE NS_IMETHOD GetDataConnectionInfo(nsIDOMMozMobileConnectionInfo * *aDataConnectionInfo); \
  NS_SCRIPTABLE NS_IMETHOD GetNetworks(nsIDOMWindow *window, nsIDOMDOMRequest * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetCardLock(nsIDOMWindow *window, const nsAString & lockType, nsIDOMDOMRequest * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD UnlockCardLock(nsIDOMWindow *window, const JS::Value & info, nsIDOMDOMRequest * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetCardLock(nsIDOMWindow *window, const JS::Value & info, nsIDOMDOMRequest * *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIMOBILECONNECTIONPROVIDER(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetCardState(nsAString & aCardState) { return _to GetCardState(aCardState); } \
  NS_SCRIPTABLE NS_IMETHOD GetVoiceConnectionInfo(nsIDOMMozMobileConnectionInfo * *aVoiceConnectionInfo) { return _to GetVoiceConnectionInfo(aVoiceConnectionInfo); } \
  NS_SCRIPTABLE NS_IMETHOD GetDataConnectionInfo(nsIDOMMozMobileConnectionInfo * *aDataConnectionInfo) { return _to GetDataConnectionInfo(aDataConnectionInfo); } \
  NS_SCRIPTABLE NS_IMETHOD GetNetworks(nsIDOMWindow *window, nsIDOMDOMRequest * *_retval NS_OUTPARAM) { return _to GetNetworks(window, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetCardLock(nsIDOMWindow *window, const nsAString & lockType, nsIDOMDOMRequest * *_retval NS_OUTPARAM) { return _to GetCardLock(window, lockType, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD UnlockCardLock(nsIDOMWindow *window, const JS::Value & info, nsIDOMDOMRequest * *_retval NS_OUTPARAM) { return _to UnlockCardLock(window, info, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetCardLock(nsIDOMWindow *window, const JS::Value & info, nsIDOMDOMRequest * *_retval NS_OUTPARAM) { return _to SetCardLock(window, info, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIMOBILECONNECTIONPROVIDER(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetCardState(nsAString & aCardState) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCardState(aCardState); } \
  NS_SCRIPTABLE NS_IMETHOD GetVoiceConnectionInfo(nsIDOMMozMobileConnectionInfo * *aVoiceConnectionInfo) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetVoiceConnectionInfo(aVoiceConnectionInfo); } \
  NS_SCRIPTABLE NS_IMETHOD GetDataConnectionInfo(nsIDOMMozMobileConnectionInfo * *aDataConnectionInfo) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDataConnectionInfo(aDataConnectionInfo); } \
  NS_SCRIPTABLE NS_IMETHOD GetNetworks(nsIDOMWindow *window, nsIDOMDOMRequest * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNetworks(window, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetCardLock(nsIDOMWindow *window, const nsAString & lockType, nsIDOMDOMRequest * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCardLock(window, lockType, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD UnlockCardLock(nsIDOMWindow *window, const JS::Value & info, nsIDOMDOMRequest * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->UnlockCardLock(window, info, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetCardLock(nsIDOMWindow *window, const JS::Value & info, nsIDOMDOMRequest * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetCardLock(window, info, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsMobileConnectionProvider : public nsIMobileConnectionProvider
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIMOBILECONNECTIONPROVIDER

  nsMobileConnectionProvider();

private:
  ~nsMobileConnectionProvider();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsMobileConnectionProvider, nsIMobileConnectionProvider)

nsMobileConnectionProvider::nsMobileConnectionProvider()
{
  /* member initializers and constructor code */
}

nsMobileConnectionProvider::~nsMobileConnectionProvider()
{
  /* destructor code */
}

/* readonly attribute DOMString cardState; */
NS_IMETHODIMP nsMobileConnectionProvider::GetCardState(nsAString & aCardState)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMMozMobileConnectionInfo voiceConnectionInfo; */
NS_IMETHODIMP nsMobileConnectionProvider::GetVoiceConnectionInfo(nsIDOMMozMobileConnectionInfo * *aVoiceConnectionInfo)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMMozMobileConnectionInfo dataConnectionInfo; */
NS_IMETHODIMP nsMobileConnectionProvider::GetDataConnectionInfo(nsIDOMMozMobileConnectionInfo * *aDataConnectionInfo)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMDOMRequest getNetworks (in nsIDOMWindow window); */
NS_IMETHODIMP nsMobileConnectionProvider::GetNetworks(nsIDOMWindow *window, nsIDOMDOMRequest * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMDOMRequest getCardLock (in nsIDOMWindow window, in DOMString lockType); */
NS_IMETHODIMP nsMobileConnectionProvider::GetCardLock(nsIDOMWindow *window, const nsAString & lockType, nsIDOMDOMRequest * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMDOMRequest unlockCardLock (in nsIDOMWindow window, in jsval info); */
NS_IMETHODIMP nsMobileConnectionProvider::UnlockCardLock(nsIDOMWindow *window, const JS::Value & info, nsIDOMDOMRequest * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMDOMRequest setCardLock (in nsIDOMWindow window, in jsval info); */
NS_IMETHODIMP nsMobileConnectionProvider::SetCardLock(nsIDOMWindow *window, const JS::Value & info, nsIDOMDOMRequest * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIMobileConnectionProvider_h__ */
