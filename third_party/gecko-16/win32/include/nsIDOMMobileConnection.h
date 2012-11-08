/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/network/interfaces/nsIDOMMobileConnection.idl
 */

#ifndef __gen_nsIDOMMobileConnection_h__
#define __gen_nsIDOMMobileConnection_h__


#ifndef __gen_nsIDOMEventTarget_h__
#include "nsIDOMEventTarget.h"
#endif

#include "jspubtd.h"

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIDOMEventListener; /* forward declaration */

class nsIDOMDOMRequest; /* forward declaration */

class nsIDOMMozMobileConnectionInfo; /* forward declaration */

class nsIDOMMozMobileNetworkInfo; /* forward declaration */


/* starting interface:    nsIDOMMozMobileConnection */
#define NS_IDOMMOZMOBILECONNECTION_IID_STR "e7309c47-9a2e-4e12-84ab-f8f39214eaba"

#define NS_IDOMMOZMOBILECONNECTION_IID \
  {0xe7309c47, 0x9a2e, 0x4e12, \
    { 0x84, 0xab, 0xf8, 0xf3, 0x92, 0x14, 0xea, 0xba }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMMozMobileConnection : public nsIDOMEventTarget {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMMOZMOBILECONNECTION_IID)

  /* readonly attribute DOMString cardState; */
  NS_SCRIPTABLE NS_IMETHOD GetCardState(nsAString & aCardState) = 0;

  /* readonly attribute nsIDOMMozMobileConnectionInfo voice; */
  NS_SCRIPTABLE NS_IMETHOD GetVoice(nsIDOMMozMobileConnectionInfo * *aVoice) = 0;

  /* readonly attribute nsIDOMMozMobileConnectionInfo data; */
  NS_SCRIPTABLE NS_IMETHOD GetData(nsIDOMMozMobileConnectionInfo * *aData) = 0;

  /* readonly attribute DOMString networkSelectionMode; */
  NS_SCRIPTABLE NS_IMETHOD GetNetworkSelectionMode(nsAString & aNetworkSelectionMode) = 0;

  /* nsIDOMDOMRequest getNetworks (); */
  NS_SCRIPTABLE NS_IMETHOD GetNetworks(nsIDOMDOMRequest * *_retval NS_OUTPARAM) = 0;

  /* nsIDOMDOMRequest selectNetwork (in nsIDOMMozMobileNetworkInfo network); */
  NS_SCRIPTABLE NS_IMETHOD SelectNetwork(nsIDOMMozMobileNetworkInfo *network, nsIDOMDOMRequest * *_retval NS_OUTPARAM) = 0;

  /* nsIDOMDOMRequest selectNetworkAutomatically (); */
  NS_SCRIPTABLE NS_IMETHOD SelectNetworkAutomatically(nsIDOMDOMRequest * *_retval NS_OUTPARAM) = 0;

  /* nsIDOMDOMRequest getCardLock (in DOMString lockType); */
  NS_SCRIPTABLE NS_IMETHOD GetCardLock(const nsAString & lockType, nsIDOMDOMRequest * *_retval NS_OUTPARAM) = 0;

  /* nsIDOMDOMRequest unlockCardLock (in jsval info); */
  NS_SCRIPTABLE NS_IMETHOD UnlockCardLock(const JS::Value & info, nsIDOMDOMRequest * *_retval NS_OUTPARAM) = 0;

  /* nsIDOMDOMRequest setCardLock (in jsval info); */
  NS_SCRIPTABLE NS_IMETHOD SetCardLock(const JS::Value & info, nsIDOMDOMRequest * *_retval NS_OUTPARAM) = 0;

  /* nsIDOMDOMRequest sendUSSD (in DOMString ussd); */
  NS_SCRIPTABLE NS_IMETHOD SendUSSD(const nsAString & ussd, nsIDOMDOMRequest * *_retval NS_OUTPARAM) = 0;

  /* nsIDOMDOMRequest cancelUSSD (); */
  NS_SCRIPTABLE NS_IMETHOD CancelUSSD(nsIDOMDOMRequest * *_retval NS_OUTPARAM) = 0;

  /* attribute nsIDOMEventListener oncardstatechange; */
  NS_SCRIPTABLE NS_IMETHOD GetOncardstatechange(nsIDOMEventListener * *aOncardstatechange) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetOncardstatechange(nsIDOMEventListener *aOncardstatechange) = 0;

  /* attribute nsIDOMEventListener onvoicechange; */
  NS_SCRIPTABLE NS_IMETHOD GetOnvoicechange(nsIDOMEventListener * *aOnvoicechange) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetOnvoicechange(nsIDOMEventListener *aOnvoicechange) = 0;

  /* attribute nsIDOMEventListener ondatachange; */
  NS_SCRIPTABLE NS_IMETHOD GetOndatachange(nsIDOMEventListener * *aOndatachange) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetOndatachange(nsIDOMEventListener *aOndatachange) = 0;

  /* attribute nsIDOMEventListener onussdreceived; */
  NS_SCRIPTABLE NS_IMETHOD GetOnussdreceived(nsIDOMEventListener * *aOnussdreceived) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetOnussdreceived(nsIDOMEventListener *aOnussdreceived) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMMozMobileConnection, NS_IDOMMOZMOBILECONNECTION_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMMOZMOBILECONNECTION \
  NS_SCRIPTABLE NS_IMETHOD GetCardState(nsAString & aCardState); \
  NS_SCRIPTABLE NS_IMETHOD GetVoice(nsIDOMMozMobileConnectionInfo * *aVoice); \
  NS_SCRIPTABLE NS_IMETHOD GetData(nsIDOMMozMobileConnectionInfo * *aData); \
  NS_SCRIPTABLE NS_IMETHOD GetNetworkSelectionMode(nsAString & aNetworkSelectionMode); \
  NS_SCRIPTABLE NS_IMETHOD GetNetworks(nsIDOMDOMRequest * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SelectNetwork(nsIDOMMozMobileNetworkInfo *network, nsIDOMDOMRequest * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SelectNetworkAutomatically(nsIDOMDOMRequest * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetCardLock(const nsAString & lockType, nsIDOMDOMRequest * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD UnlockCardLock(const JS::Value & info, nsIDOMDOMRequest * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetCardLock(const JS::Value & info, nsIDOMDOMRequest * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SendUSSD(const nsAString & ussd, nsIDOMDOMRequest * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD CancelUSSD(nsIDOMDOMRequest * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetOncardstatechange(nsIDOMEventListener * *aOncardstatechange); \
  NS_SCRIPTABLE NS_IMETHOD SetOncardstatechange(nsIDOMEventListener *aOncardstatechange); \
  NS_SCRIPTABLE NS_IMETHOD GetOnvoicechange(nsIDOMEventListener * *aOnvoicechange); \
  NS_SCRIPTABLE NS_IMETHOD SetOnvoicechange(nsIDOMEventListener *aOnvoicechange); \
  NS_SCRIPTABLE NS_IMETHOD GetOndatachange(nsIDOMEventListener * *aOndatachange); \
  NS_SCRIPTABLE NS_IMETHOD SetOndatachange(nsIDOMEventListener *aOndatachange); \
  NS_SCRIPTABLE NS_IMETHOD GetOnussdreceived(nsIDOMEventListener * *aOnussdreceived); \
  NS_SCRIPTABLE NS_IMETHOD SetOnussdreceived(nsIDOMEventListener *aOnussdreceived); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMMOZMOBILECONNECTION(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetCardState(nsAString & aCardState) { return _to GetCardState(aCardState); } \
  NS_SCRIPTABLE NS_IMETHOD GetVoice(nsIDOMMozMobileConnectionInfo * *aVoice) { return _to GetVoice(aVoice); } \
  NS_SCRIPTABLE NS_IMETHOD GetData(nsIDOMMozMobileConnectionInfo * *aData) { return _to GetData(aData); } \
  NS_SCRIPTABLE NS_IMETHOD GetNetworkSelectionMode(nsAString & aNetworkSelectionMode) { return _to GetNetworkSelectionMode(aNetworkSelectionMode); } \
  NS_SCRIPTABLE NS_IMETHOD GetNetworks(nsIDOMDOMRequest * *_retval NS_OUTPARAM) { return _to GetNetworks(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD SelectNetwork(nsIDOMMozMobileNetworkInfo *network, nsIDOMDOMRequest * *_retval NS_OUTPARAM) { return _to SelectNetwork(network, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SelectNetworkAutomatically(nsIDOMDOMRequest * *_retval NS_OUTPARAM) { return _to SelectNetworkAutomatically(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetCardLock(const nsAString & lockType, nsIDOMDOMRequest * *_retval NS_OUTPARAM) { return _to GetCardLock(lockType, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD UnlockCardLock(const JS::Value & info, nsIDOMDOMRequest * *_retval NS_OUTPARAM) { return _to UnlockCardLock(info, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetCardLock(const JS::Value & info, nsIDOMDOMRequest * *_retval NS_OUTPARAM) { return _to SetCardLock(info, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SendUSSD(const nsAString & ussd, nsIDOMDOMRequest * *_retval NS_OUTPARAM) { return _to SendUSSD(ussd, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD CancelUSSD(nsIDOMDOMRequest * *_retval NS_OUTPARAM) { return _to CancelUSSD(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetOncardstatechange(nsIDOMEventListener * *aOncardstatechange) { return _to GetOncardstatechange(aOncardstatechange); } \
  NS_SCRIPTABLE NS_IMETHOD SetOncardstatechange(nsIDOMEventListener *aOncardstatechange) { return _to SetOncardstatechange(aOncardstatechange); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnvoicechange(nsIDOMEventListener * *aOnvoicechange) { return _to GetOnvoicechange(aOnvoicechange); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnvoicechange(nsIDOMEventListener *aOnvoicechange) { return _to SetOnvoicechange(aOnvoicechange); } \
  NS_SCRIPTABLE NS_IMETHOD GetOndatachange(nsIDOMEventListener * *aOndatachange) { return _to GetOndatachange(aOndatachange); } \
  NS_SCRIPTABLE NS_IMETHOD SetOndatachange(nsIDOMEventListener *aOndatachange) { return _to SetOndatachange(aOndatachange); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnussdreceived(nsIDOMEventListener * *aOnussdreceived) { return _to GetOnussdreceived(aOnussdreceived); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnussdreceived(nsIDOMEventListener *aOnussdreceived) { return _to SetOnussdreceived(aOnussdreceived); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMMOZMOBILECONNECTION(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetCardState(nsAString & aCardState) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCardState(aCardState); } \
  NS_SCRIPTABLE NS_IMETHOD GetVoice(nsIDOMMozMobileConnectionInfo * *aVoice) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetVoice(aVoice); } \
  NS_SCRIPTABLE NS_IMETHOD GetData(nsIDOMMozMobileConnectionInfo * *aData) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetData(aData); } \
  NS_SCRIPTABLE NS_IMETHOD GetNetworkSelectionMode(nsAString & aNetworkSelectionMode) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNetworkSelectionMode(aNetworkSelectionMode); } \
  NS_SCRIPTABLE NS_IMETHOD GetNetworks(nsIDOMDOMRequest * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNetworks(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD SelectNetwork(nsIDOMMozMobileNetworkInfo *network, nsIDOMDOMRequest * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->SelectNetwork(network, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SelectNetworkAutomatically(nsIDOMDOMRequest * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->SelectNetworkAutomatically(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetCardLock(const nsAString & lockType, nsIDOMDOMRequest * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCardLock(lockType, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD UnlockCardLock(const JS::Value & info, nsIDOMDOMRequest * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->UnlockCardLock(info, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetCardLock(const JS::Value & info, nsIDOMDOMRequest * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetCardLock(info, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SendUSSD(const nsAString & ussd, nsIDOMDOMRequest * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->SendUSSD(ussd, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD CancelUSSD(nsIDOMDOMRequest * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->CancelUSSD(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetOncardstatechange(nsIDOMEventListener * *aOncardstatechange) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOncardstatechange(aOncardstatechange); } \
  NS_SCRIPTABLE NS_IMETHOD SetOncardstatechange(nsIDOMEventListener *aOncardstatechange) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOncardstatechange(aOncardstatechange); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnvoicechange(nsIDOMEventListener * *aOnvoicechange) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOnvoicechange(aOnvoicechange); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnvoicechange(nsIDOMEventListener *aOnvoicechange) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOnvoicechange(aOnvoicechange); } \
  NS_SCRIPTABLE NS_IMETHOD GetOndatachange(nsIDOMEventListener * *aOndatachange) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOndatachange(aOndatachange); } \
  NS_SCRIPTABLE NS_IMETHOD SetOndatachange(nsIDOMEventListener *aOndatachange) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOndatachange(aOndatachange); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnussdreceived(nsIDOMEventListener * *aOnussdreceived) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOnussdreceived(aOnussdreceived); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnussdreceived(nsIDOMEventListener *aOnussdreceived) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOnussdreceived(aOnussdreceived); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMMozMobileConnection : public nsIDOMMozMobileConnection
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMMOZMOBILECONNECTION

  nsDOMMozMobileConnection();

private:
  ~nsDOMMozMobileConnection();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMMozMobileConnection, nsIDOMMozMobileConnection)

nsDOMMozMobileConnection::nsDOMMozMobileConnection()
{
  /* member initializers and constructor code */
}

nsDOMMozMobileConnection::~nsDOMMozMobileConnection()
{
  /* destructor code */
}

/* readonly attribute DOMString cardState; */
NS_IMETHODIMP nsDOMMozMobileConnection::GetCardState(nsAString & aCardState)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMMozMobileConnectionInfo voice; */
NS_IMETHODIMP nsDOMMozMobileConnection::GetVoice(nsIDOMMozMobileConnectionInfo * *aVoice)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMMozMobileConnectionInfo data; */
NS_IMETHODIMP nsDOMMozMobileConnection::GetData(nsIDOMMozMobileConnectionInfo * *aData)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString networkSelectionMode; */
NS_IMETHODIMP nsDOMMozMobileConnection::GetNetworkSelectionMode(nsAString & aNetworkSelectionMode)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMDOMRequest getNetworks (); */
NS_IMETHODIMP nsDOMMozMobileConnection::GetNetworks(nsIDOMDOMRequest * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMDOMRequest selectNetwork (in nsIDOMMozMobileNetworkInfo network); */
NS_IMETHODIMP nsDOMMozMobileConnection::SelectNetwork(nsIDOMMozMobileNetworkInfo *network, nsIDOMDOMRequest * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMDOMRequest selectNetworkAutomatically (); */
NS_IMETHODIMP nsDOMMozMobileConnection::SelectNetworkAutomatically(nsIDOMDOMRequest * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMDOMRequest getCardLock (in DOMString lockType); */
NS_IMETHODIMP nsDOMMozMobileConnection::GetCardLock(const nsAString & lockType, nsIDOMDOMRequest * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMDOMRequest unlockCardLock (in jsval info); */
NS_IMETHODIMP nsDOMMozMobileConnection::UnlockCardLock(const JS::Value & info, nsIDOMDOMRequest * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMDOMRequest setCardLock (in jsval info); */
NS_IMETHODIMP nsDOMMozMobileConnection::SetCardLock(const JS::Value & info, nsIDOMDOMRequest * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMDOMRequest sendUSSD (in DOMString ussd); */
NS_IMETHODIMP nsDOMMozMobileConnection::SendUSSD(const nsAString & ussd, nsIDOMDOMRequest * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMDOMRequest cancelUSSD (); */
NS_IMETHODIMP nsDOMMozMobileConnection::CancelUSSD(nsIDOMDOMRequest * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIDOMEventListener oncardstatechange; */
NS_IMETHODIMP nsDOMMozMobileConnection::GetOncardstatechange(nsIDOMEventListener * *aOncardstatechange)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMMozMobileConnection::SetOncardstatechange(nsIDOMEventListener *aOncardstatechange)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIDOMEventListener onvoicechange; */
NS_IMETHODIMP nsDOMMozMobileConnection::GetOnvoicechange(nsIDOMEventListener * *aOnvoicechange)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMMozMobileConnection::SetOnvoicechange(nsIDOMEventListener *aOnvoicechange)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIDOMEventListener ondatachange; */
NS_IMETHODIMP nsDOMMozMobileConnection::GetOndatachange(nsIDOMEventListener * *aOndatachange)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMMozMobileConnection::SetOndatachange(nsIDOMEventListener *aOndatachange)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIDOMEventListener onussdreceived; */
NS_IMETHODIMP nsDOMMozMobileConnection::GetOnussdreceived(nsIDOMEventListener * *aOnussdreceived)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMMozMobileConnection::SetOnussdreceived(nsIDOMEventListener *aOnussdreceived)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIDOMMozMobileConnectionInfo */
#define NS_IDOMMOZMOBILECONNECTIONINFO_IID_STR "46321d6e-bbce-4b7b-aa32-d17b6aa984fe"

#define NS_IDOMMOZMOBILECONNECTIONINFO_IID \
  {0x46321d6e, 0xbbce, 0x4b7b, \
    { 0xaa, 0x32, 0xd1, 0x7b, 0x6a, 0xa9, 0x84, 0xfe }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMMozMobileConnectionInfo : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMMOZMOBILECONNECTIONINFO_IID)

  /* readonly attribute bool connected; */
  NS_SCRIPTABLE NS_IMETHOD GetConnected(bool *aConnected) = 0;

  /* readonly attribute bool emergencyCallsOnly; */
  NS_SCRIPTABLE NS_IMETHOD GetEmergencyCallsOnly(bool *aEmergencyCallsOnly) = 0;

  /* readonly attribute bool roaming; */
  NS_SCRIPTABLE NS_IMETHOD GetRoaming(bool *aRoaming) = 0;

  /* readonly attribute nsIDOMMozMobileNetworkInfo network; */
  NS_SCRIPTABLE NS_IMETHOD GetNetwork(nsIDOMMozMobileNetworkInfo * *aNetwork) = 0;

  /* readonly attribute DOMString type; */
  NS_SCRIPTABLE NS_IMETHOD GetType(nsAString & aType) = 0;

  /* readonly attribute jsval signalStrength; */
  NS_SCRIPTABLE NS_IMETHOD GetSignalStrength(JS::Value *aSignalStrength) = 0;

  /* readonly attribute jsval relSignalStrength; */
  NS_SCRIPTABLE NS_IMETHOD GetRelSignalStrength(JS::Value *aRelSignalStrength) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMMozMobileConnectionInfo, NS_IDOMMOZMOBILECONNECTIONINFO_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMMOZMOBILECONNECTIONINFO \
  NS_SCRIPTABLE NS_IMETHOD GetConnected(bool *aConnected); \
  NS_SCRIPTABLE NS_IMETHOD GetEmergencyCallsOnly(bool *aEmergencyCallsOnly); \
  NS_SCRIPTABLE NS_IMETHOD GetRoaming(bool *aRoaming); \
  NS_SCRIPTABLE NS_IMETHOD GetNetwork(nsIDOMMozMobileNetworkInfo * *aNetwork); \
  NS_SCRIPTABLE NS_IMETHOD GetType(nsAString & aType); \
  NS_SCRIPTABLE NS_IMETHOD GetSignalStrength(JS::Value *aSignalStrength); \
  NS_SCRIPTABLE NS_IMETHOD GetRelSignalStrength(JS::Value *aRelSignalStrength); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMMOZMOBILECONNECTIONINFO(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetConnected(bool *aConnected) { return _to GetConnected(aConnected); } \
  NS_SCRIPTABLE NS_IMETHOD GetEmergencyCallsOnly(bool *aEmergencyCallsOnly) { return _to GetEmergencyCallsOnly(aEmergencyCallsOnly); } \
  NS_SCRIPTABLE NS_IMETHOD GetRoaming(bool *aRoaming) { return _to GetRoaming(aRoaming); } \
  NS_SCRIPTABLE NS_IMETHOD GetNetwork(nsIDOMMozMobileNetworkInfo * *aNetwork) { return _to GetNetwork(aNetwork); } \
  NS_SCRIPTABLE NS_IMETHOD GetType(nsAString & aType) { return _to GetType(aType); } \
  NS_SCRIPTABLE NS_IMETHOD GetSignalStrength(JS::Value *aSignalStrength) { return _to GetSignalStrength(aSignalStrength); } \
  NS_SCRIPTABLE NS_IMETHOD GetRelSignalStrength(JS::Value *aRelSignalStrength) { return _to GetRelSignalStrength(aRelSignalStrength); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMMOZMOBILECONNECTIONINFO(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetConnected(bool *aConnected) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetConnected(aConnected); } \
  NS_SCRIPTABLE NS_IMETHOD GetEmergencyCallsOnly(bool *aEmergencyCallsOnly) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetEmergencyCallsOnly(aEmergencyCallsOnly); } \
  NS_SCRIPTABLE NS_IMETHOD GetRoaming(bool *aRoaming) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRoaming(aRoaming); } \
  NS_SCRIPTABLE NS_IMETHOD GetNetwork(nsIDOMMozMobileNetworkInfo * *aNetwork) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNetwork(aNetwork); } \
  NS_SCRIPTABLE NS_IMETHOD GetType(nsAString & aType) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetType(aType); } \
  NS_SCRIPTABLE NS_IMETHOD GetSignalStrength(JS::Value *aSignalStrength) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSignalStrength(aSignalStrength); } \
  NS_SCRIPTABLE NS_IMETHOD GetRelSignalStrength(JS::Value *aRelSignalStrength) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRelSignalStrength(aRelSignalStrength); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMMozMobileConnectionInfo : public nsIDOMMozMobileConnectionInfo
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMMOZMOBILECONNECTIONINFO

  nsDOMMozMobileConnectionInfo();

private:
  ~nsDOMMozMobileConnectionInfo();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMMozMobileConnectionInfo, nsIDOMMozMobileConnectionInfo)

nsDOMMozMobileConnectionInfo::nsDOMMozMobileConnectionInfo()
{
  /* member initializers and constructor code */
}

nsDOMMozMobileConnectionInfo::~nsDOMMozMobileConnectionInfo()
{
  /* destructor code */
}

/* readonly attribute bool connected; */
NS_IMETHODIMP nsDOMMozMobileConnectionInfo::GetConnected(bool *aConnected)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute bool emergencyCallsOnly; */
NS_IMETHODIMP nsDOMMozMobileConnectionInfo::GetEmergencyCallsOnly(bool *aEmergencyCallsOnly)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute bool roaming; */
NS_IMETHODIMP nsDOMMozMobileConnectionInfo::GetRoaming(bool *aRoaming)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMMozMobileNetworkInfo network; */
NS_IMETHODIMP nsDOMMozMobileConnectionInfo::GetNetwork(nsIDOMMozMobileNetworkInfo * *aNetwork)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString type; */
NS_IMETHODIMP nsDOMMozMobileConnectionInfo::GetType(nsAString & aType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute jsval signalStrength; */
NS_IMETHODIMP nsDOMMozMobileConnectionInfo::GetSignalStrength(JS::Value *aSignalStrength)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute jsval relSignalStrength; */
NS_IMETHODIMP nsDOMMozMobileConnectionInfo::GetRelSignalStrength(JS::Value *aRelSignalStrength)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIDOMMozMobileNetworkInfo */
#define NS_IDOMMOZMOBILENETWORKINFO_IID_STR "3bd866c7-98a5-4ef4-a464-c22d8cc6b992"

#define NS_IDOMMOZMOBILENETWORKINFO_IID \
  {0x3bd866c7, 0x98a5, 0x4ef4, \
    { 0xa4, 0x64, 0xc2, 0x2d, 0x8c, 0xc6, 0xb9, 0x92 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMMozMobileNetworkInfo : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMMOZMOBILENETWORKINFO_IID)

  /* readonly attribute DOMString shortName; */
  NS_SCRIPTABLE NS_IMETHOD GetShortName(nsAString & aShortName) = 0;

  /* readonly attribute DOMString longName; */
  NS_SCRIPTABLE NS_IMETHOD GetLongName(nsAString & aLongName) = 0;

  /* readonly attribute unsigned short mcc; */
  NS_SCRIPTABLE NS_IMETHOD GetMcc(PRUint16 *aMcc) = 0;

  /* readonly attribute unsigned short mnc; */
  NS_SCRIPTABLE NS_IMETHOD GetMnc(PRUint16 *aMnc) = 0;

  /* readonly attribute DOMString state; */
  NS_SCRIPTABLE NS_IMETHOD GetState(nsAString & aState) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMMozMobileNetworkInfo, NS_IDOMMOZMOBILENETWORKINFO_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMMOZMOBILENETWORKINFO \
  NS_SCRIPTABLE NS_IMETHOD GetShortName(nsAString & aShortName); \
  NS_SCRIPTABLE NS_IMETHOD GetLongName(nsAString & aLongName); \
  NS_SCRIPTABLE NS_IMETHOD GetMcc(PRUint16 *aMcc); \
  NS_SCRIPTABLE NS_IMETHOD GetMnc(PRUint16 *aMnc); \
  NS_SCRIPTABLE NS_IMETHOD GetState(nsAString & aState); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMMOZMOBILENETWORKINFO(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetShortName(nsAString & aShortName) { return _to GetShortName(aShortName); } \
  NS_SCRIPTABLE NS_IMETHOD GetLongName(nsAString & aLongName) { return _to GetLongName(aLongName); } \
  NS_SCRIPTABLE NS_IMETHOD GetMcc(PRUint16 *aMcc) { return _to GetMcc(aMcc); } \
  NS_SCRIPTABLE NS_IMETHOD GetMnc(PRUint16 *aMnc) { return _to GetMnc(aMnc); } \
  NS_SCRIPTABLE NS_IMETHOD GetState(nsAString & aState) { return _to GetState(aState); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMMOZMOBILENETWORKINFO(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetShortName(nsAString & aShortName) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetShortName(aShortName); } \
  NS_SCRIPTABLE NS_IMETHOD GetLongName(nsAString & aLongName) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLongName(aLongName); } \
  NS_SCRIPTABLE NS_IMETHOD GetMcc(PRUint16 *aMcc) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMcc(aMcc); } \
  NS_SCRIPTABLE NS_IMETHOD GetMnc(PRUint16 *aMnc) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMnc(aMnc); } \
  NS_SCRIPTABLE NS_IMETHOD GetState(nsAString & aState) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetState(aState); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMMozMobileNetworkInfo : public nsIDOMMozMobileNetworkInfo
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMMOZMOBILENETWORKINFO

  nsDOMMozMobileNetworkInfo();

private:
  ~nsDOMMozMobileNetworkInfo();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMMozMobileNetworkInfo, nsIDOMMozMobileNetworkInfo)

nsDOMMozMobileNetworkInfo::nsDOMMozMobileNetworkInfo()
{
  /* member initializers and constructor code */
}

nsDOMMozMobileNetworkInfo::~nsDOMMozMobileNetworkInfo()
{
  /* destructor code */
}

/* readonly attribute DOMString shortName; */
NS_IMETHODIMP nsDOMMozMobileNetworkInfo::GetShortName(nsAString & aShortName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString longName; */
NS_IMETHODIMP nsDOMMozMobileNetworkInfo::GetLongName(nsAString & aLongName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned short mcc; */
NS_IMETHODIMP nsDOMMozMobileNetworkInfo::GetMcc(PRUint16 *aMcc)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned short mnc; */
NS_IMETHODIMP nsDOMMozMobileNetworkInfo::GetMnc(PRUint16 *aMnc)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString state; */
NS_IMETHODIMP nsDOMMozMobileNetworkInfo::GetState(nsAString & aState)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMMobileConnection_h__ */
