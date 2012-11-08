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


/* starting interface:    nsIDOMMozMobileConnection */
#define NS_IDOMMOZMOBILECONNECTION_IID_STR "962298cd-3443-423e-9e47-f22e24ad850b"

#define NS_IDOMMOZMOBILECONNECTION_IID \
  {0x962298cd, 0x3443, 0x423e, \
    { 0x9e, 0x47, 0xf2, 0x2e, 0x24, 0xad, 0x85, 0x0b }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMMozMobileConnection : public nsIDOMEventTarget {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMMOZMOBILECONNECTION_IID)

  /* readonly attribute DOMString cardState; */
  NS_SCRIPTABLE NS_IMETHOD GetCardState(nsAString & aCardState) = 0;

  /* readonly attribute nsIDOMMozMobileConnectionInfo voice; */
  NS_SCRIPTABLE NS_IMETHOD GetVoice(nsIDOMMozMobileConnectionInfo * *aVoice) = 0;

  /* readonly attribute nsIDOMMozMobileConnectionInfo data; */
  NS_SCRIPTABLE NS_IMETHOD GetData(nsIDOMMozMobileConnectionInfo * *aData) = 0;

  /* nsIDOMDOMRequest getNetworks (); */
  NS_SCRIPTABLE NS_IMETHOD GetNetworks(nsIDOMDOMRequest * *_retval NS_OUTPARAM) = 0;

  /* attribute nsIDOMEventListener oncardstatechange; */
  NS_SCRIPTABLE NS_IMETHOD GetOncardstatechange(nsIDOMEventListener * *aOncardstatechange) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetOncardstatechange(nsIDOMEventListener *aOncardstatechange) = 0;

  /* attribute nsIDOMEventListener onvoicechange; */
  NS_SCRIPTABLE NS_IMETHOD GetOnvoicechange(nsIDOMEventListener * *aOnvoicechange) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetOnvoicechange(nsIDOMEventListener *aOnvoicechange) = 0;

  /* attribute nsIDOMEventListener ondatachange; */
  NS_SCRIPTABLE NS_IMETHOD GetOndatachange(nsIDOMEventListener * *aOndatachange) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetOndatachange(nsIDOMEventListener *aOndatachange) = 0;

  /* nsIDOMDOMRequest getCardLock (in DOMString lockType); */
  NS_SCRIPTABLE NS_IMETHOD GetCardLock(const nsAString & lockType, nsIDOMDOMRequest * *_retval NS_OUTPARAM) = 0;

  /* nsIDOMDOMRequest unlockCardLock (in jsval info); */
  NS_SCRIPTABLE NS_IMETHOD UnlockCardLock(const JS::Value & info, nsIDOMDOMRequest * *_retval NS_OUTPARAM) = 0;

  /* nsIDOMDOMRequest setCardLock (in jsval info); */
  NS_SCRIPTABLE NS_IMETHOD SetCardLock(const JS::Value & info, nsIDOMDOMRequest * *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMMozMobileConnection, NS_IDOMMOZMOBILECONNECTION_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMMOZMOBILECONNECTION \
  NS_SCRIPTABLE NS_IMETHOD GetCardState(nsAString & aCardState); \
  NS_SCRIPTABLE NS_IMETHOD GetVoice(nsIDOMMozMobileConnectionInfo * *aVoice); \
  NS_SCRIPTABLE NS_IMETHOD GetData(nsIDOMMozMobileConnectionInfo * *aData); \
  NS_SCRIPTABLE NS_IMETHOD GetNetworks(nsIDOMDOMRequest * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetOncardstatechange(nsIDOMEventListener * *aOncardstatechange); \
  NS_SCRIPTABLE NS_IMETHOD SetOncardstatechange(nsIDOMEventListener *aOncardstatechange); \
  NS_SCRIPTABLE NS_IMETHOD GetOnvoicechange(nsIDOMEventListener * *aOnvoicechange); \
  NS_SCRIPTABLE NS_IMETHOD SetOnvoicechange(nsIDOMEventListener *aOnvoicechange); \
  NS_SCRIPTABLE NS_IMETHOD GetOndatachange(nsIDOMEventListener * *aOndatachange); \
  NS_SCRIPTABLE NS_IMETHOD SetOndatachange(nsIDOMEventListener *aOndatachange); \
  NS_SCRIPTABLE NS_IMETHOD GetCardLock(const nsAString & lockType, nsIDOMDOMRequest * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD UnlockCardLock(const JS::Value & info, nsIDOMDOMRequest * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetCardLock(const JS::Value & info, nsIDOMDOMRequest * *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMMOZMOBILECONNECTION(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetCardState(nsAString & aCardState) { return _to GetCardState(aCardState); } \
  NS_SCRIPTABLE NS_IMETHOD GetVoice(nsIDOMMozMobileConnectionInfo * *aVoice) { return _to GetVoice(aVoice); } \
  NS_SCRIPTABLE NS_IMETHOD GetData(nsIDOMMozMobileConnectionInfo * *aData) { return _to GetData(aData); } \
  NS_SCRIPTABLE NS_IMETHOD GetNetworks(nsIDOMDOMRequest * *_retval NS_OUTPARAM) { return _to GetNetworks(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetOncardstatechange(nsIDOMEventListener * *aOncardstatechange) { return _to GetOncardstatechange(aOncardstatechange); } \
  NS_SCRIPTABLE NS_IMETHOD SetOncardstatechange(nsIDOMEventListener *aOncardstatechange) { return _to SetOncardstatechange(aOncardstatechange); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnvoicechange(nsIDOMEventListener * *aOnvoicechange) { return _to GetOnvoicechange(aOnvoicechange); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnvoicechange(nsIDOMEventListener *aOnvoicechange) { return _to SetOnvoicechange(aOnvoicechange); } \
  NS_SCRIPTABLE NS_IMETHOD GetOndatachange(nsIDOMEventListener * *aOndatachange) { return _to GetOndatachange(aOndatachange); } \
  NS_SCRIPTABLE NS_IMETHOD SetOndatachange(nsIDOMEventListener *aOndatachange) { return _to SetOndatachange(aOndatachange); } \
  NS_SCRIPTABLE NS_IMETHOD GetCardLock(const nsAString & lockType, nsIDOMDOMRequest * *_retval NS_OUTPARAM) { return _to GetCardLock(lockType, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD UnlockCardLock(const JS::Value & info, nsIDOMDOMRequest * *_retval NS_OUTPARAM) { return _to UnlockCardLock(info, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetCardLock(const JS::Value & info, nsIDOMDOMRequest * *_retval NS_OUTPARAM) { return _to SetCardLock(info, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMMOZMOBILECONNECTION(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetCardState(nsAString & aCardState) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCardState(aCardState); } \
  NS_SCRIPTABLE NS_IMETHOD GetVoice(nsIDOMMozMobileConnectionInfo * *aVoice) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetVoice(aVoice); } \
  NS_SCRIPTABLE NS_IMETHOD GetData(nsIDOMMozMobileConnectionInfo * *aData) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetData(aData); } \
  NS_SCRIPTABLE NS_IMETHOD GetNetworks(nsIDOMDOMRequest * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNetworks(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetOncardstatechange(nsIDOMEventListener * *aOncardstatechange) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOncardstatechange(aOncardstatechange); } \
  NS_SCRIPTABLE NS_IMETHOD SetOncardstatechange(nsIDOMEventListener *aOncardstatechange) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOncardstatechange(aOncardstatechange); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnvoicechange(nsIDOMEventListener * *aOnvoicechange) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOnvoicechange(aOnvoicechange); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnvoicechange(nsIDOMEventListener *aOnvoicechange) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOnvoicechange(aOnvoicechange); } \
  NS_SCRIPTABLE NS_IMETHOD GetOndatachange(nsIDOMEventListener * *aOndatachange) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOndatachange(aOndatachange); } \
  NS_SCRIPTABLE NS_IMETHOD SetOndatachange(nsIDOMEventListener *aOndatachange) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOndatachange(aOndatachange); } \
  NS_SCRIPTABLE NS_IMETHOD GetCardLock(const nsAString & lockType, nsIDOMDOMRequest * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCardLock(lockType, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD UnlockCardLock(const JS::Value & info, nsIDOMDOMRequest * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->UnlockCardLock(info, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetCardLock(const JS::Value & info, nsIDOMDOMRequest * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetCardLock(info, _retval); } 

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

/* nsIDOMDOMRequest getNetworks (); */
NS_IMETHODIMP nsDOMMozMobileConnection::GetNetworks(nsIDOMDOMRequest * *_retval NS_OUTPARAM)
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

/* End of implementation class template. */
#endif


/* starting interface:    nsIDOMMozMobileConnectionInfo */
#define NS_IDOMMOZMOBILECONNECTIONINFO_IID_STR "f3bb0611-5e4a-46f1-a8f5-cf592b37596e"

#define NS_IDOMMOZMOBILECONNECTIONINFO_IID \
  {0xf3bb0611, 0x5e4a, 0x46f1, \
    { 0xa8, 0xf5, 0xcf, 0x59, 0x2b, 0x37, 0x59, 0x6e }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMMozMobileConnectionInfo : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMMOZMOBILECONNECTIONINFO_IID)

  /* readonly attribute bool connected; */
  NS_SCRIPTABLE NS_IMETHOD GetConnected(bool *aConnected) = 0;

  /* readonly attribute bool emergencyCallsOnly; */
  NS_SCRIPTABLE NS_IMETHOD GetEmergencyCallsOnly(bool *aEmergencyCallsOnly) = 0;

  /* readonly attribute bool roaming; */
  NS_SCRIPTABLE NS_IMETHOD GetRoaming(bool *aRoaming) = 0;

  /* readonly attribute DOMString operator; */
  NS_SCRIPTABLE NS_IMETHOD GetOperator(nsAString & aOperator) = 0;

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
  NS_SCRIPTABLE NS_IMETHOD GetOperator(nsAString & aOperator); \
  NS_SCRIPTABLE NS_IMETHOD GetType(nsAString & aType); \
  NS_SCRIPTABLE NS_IMETHOD GetSignalStrength(JS::Value *aSignalStrength); \
  NS_SCRIPTABLE NS_IMETHOD GetRelSignalStrength(JS::Value *aRelSignalStrength); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMMOZMOBILECONNECTIONINFO(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetConnected(bool *aConnected) { return _to GetConnected(aConnected); } \
  NS_SCRIPTABLE NS_IMETHOD GetEmergencyCallsOnly(bool *aEmergencyCallsOnly) { return _to GetEmergencyCallsOnly(aEmergencyCallsOnly); } \
  NS_SCRIPTABLE NS_IMETHOD GetRoaming(bool *aRoaming) { return _to GetRoaming(aRoaming); } \
  NS_SCRIPTABLE NS_IMETHOD GetOperator(nsAString & aOperator) { return _to GetOperator(aOperator); } \
  NS_SCRIPTABLE NS_IMETHOD GetType(nsAString & aType) { return _to GetType(aType); } \
  NS_SCRIPTABLE NS_IMETHOD GetSignalStrength(JS::Value *aSignalStrength) { return _to GetSignalStrength(aSignalStrength); } \
  NS_SCRIPTABLE NS_IMETHOD GetRelSignalStrength(JS::Value *aRelSignalStrength) { return _to GetRelSignalStrength(aRelSignalStrength); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMMOZMOBILECONNECTIONINFO(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetConnected(bool *aConnected) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetConnected(aConnected); } \
  NS_SCRIPTABLE NS_IMETHOD GetEmergencyCallsOnly(bool *aEmergencyCallsOnly) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetEmergencyCallsOnly(aEmergencyCallsOnly); } \
  NS_SCRIPTABLE NS_IMETHOD GetRoaming(bool *aRoaming) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRoaming(aRoaming); } \
  NS_SCRIPTABLE NS_IMETHOD GetOperator(nsAString & aOperator) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOperator(aOperator); } \
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

/* readonly attribute DOMString operator; */
NS_IMETHODIMP nsDOMMozMobileConnectionInfo::GetOperator(nsAString & aOperator)
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


/* starting interface:    nsIDOMMozMobileOperatorInfo */
#define NS_IDOMMOZMOBILEOPERATORINFO_IID_STR "79217f7a-4401-4d75-9654-3b28bba698c9"

#define NS_IDOMMOZMOBILEOPERATORINFO_IID \
  {0x79217f7a, 0x4401, 0x4d75, \
    { 0x96, 0x54, 0x3b, 0x28, 0xbb, 0xa6, 0x98, 0xc9 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMMozMobileOperatorInfo : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMMOZMOBILEOPERATORINFO_IID)

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

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMMozMobileOperatorInfo, NS_IDOMMOZMOBILEOPERATORINFO_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMMOZMOBILEOPERATORINFO \
  NS_SCRIPTABLE NS_IMETHOD GetShortName(nsAString & aShortName); \
  NS_SCRIPTABLE NS_IMETHOD GetLongName(nsAString & aLongName); \
  NS_SCRIPTABLE NS_IMETHOD GetMcc(PRUint16 *aMcc); \
  NS_SCRIPTABLE NS_IMETHOD GetMnc(PRUint16 *aMnc); \
  NS_SCRIPTABLE NS_IMETHOD GetState(nsAString & aState); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMMOZMOBILEOPERATORINFO(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetShortName(nsAString & aShortName) { return _to GetShortName(aShortName); } \
  NS_SCRIPTABLE NS_IMETHOD GetLongName(nsAString & aLongName) { return _to GetLongName(aLongName); } \
  NS_SCRIPTABLE NS_IMETHOD GetMcc(PRUint16 *aMcc) { return _to GetMcc(aMcc); } \
  NS_SCRIPTABLE NS_IMETHOD GetMnc(PRUint16 *aMnc) { return _to GetMnc(aMnc); } \
  NS_SCRIPTABLE NS_IMETHOD GetState(nsAString & aState) { return _to GetState(aState); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMMOZMOBILEOPERATORINFO(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetShortName(nsAString & aShortName) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetShortName(aShortName); } \
  NS_SCRIPTABLE NS_IMETHOD GetLongName(nsAString & aLongName) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLongName(aLongName); } \
  NS_SCRIPTABLE NS_IMETHOD GetMcc(PRUint16 *aMcc) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMcc(aMcc); } \
  NS_SCRIPTABLE NS_IMETHOD GetMnc(PRUint16 *aMnc) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMnc(aMnc); } \
  NS_SCRIPTABLE NS_IMETHOD GetState(nsAString & aState) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetState(aState); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMMozMobileOperatorInfo : public nsIDOMMozMobileOperatorInfo
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMMOZMOBILEOPERATORINFO

  nsDOMMozMobileOperatorInfo();

private:
  ~nsDOMMozMobileOperatorInfo();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMMozMobileOperatorInfo, nsIDOMMozMobileOperatorInfo)

nsDOMMozMobileOperatorInfo::nsDOMMozMobileOperatorInfo()
{
  /* member initializers and constructor code */
}

nsDOMMozMobileOperatorInfo::~nsDOMMozMobileOperatorInfo()
{
  /* destructor code */
}

/* readonly attribute DOMString shortName; */
NS_IMETHODIMP nsDOMMozMobileOperatorInfo::GetShortName(nsAString & aShortName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString longName; */
NS_IMETHODIMP nsDOMMozMobileOperatorInfo::GetLongName(nsAString & aLongName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned short mcc; */
NS_IMETHODIMP nsDOMMozMobileOperatorInfo::GetMcc(PRUint16 *aMcc)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned short mnc; */
NS_IMETHODIMP nsDOMMozMobileOperatorInfo::GetMnc(PRUint16 *aMnc)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString state; */
NS_IMETHODIMP nsDOMMozMobileOperatorInfo::GetState(nsAString & aState)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMMobileConnection_h__ */
