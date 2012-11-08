/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/battery/nsIDOMBatteryManager.idl
 */

#ifndef __gen_nsIDOMBatteryManager_h__
#define __gen_nsIDOMBatteryManager_h__


#ifndef __gen_nsIDOMEventTarget_h__
#include "nsIDOMEventTarget.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIDOMEventListener; /* forward declaration */


/* starting interface:    nsIDOMBatteryManager */
#define NS_IDOMBATTERYMANAGER_IID_STR "03c6dd20-7efd-4640-b958-c0ce11b9aadf"

#define NS_IDOMBATTERYMANAGER_IID \
  {0x03c6dd20, 0x7efd, 0x4640, \
    { 0xb9, 0x58, 0xc0, 0xce, 0x11, 0xb9, 0xaa, 0xdf }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMBatteryManager : public nsIDOMEventTarget {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMBATTERYMANAGER_IID)

  /* readonly attribute double level; */
  NS_SCRIPTABLE NS_IMETHOD GetLevel(double *aLevel) = 0;

  /* readonly attribute boolean charging; */
  NS_SCRIPTABLE NS_IMETHOD GetCharging(bool *aCharging) = 0;

  /* readonly attribute double dischargingTime; */
  NS_SCRIPTABLE NS_IMETHOD GetDischargingTime(double *aDischargingTime) = 0;

  /* readonly attribute double chargingTime; */
  NS_SCRIPTABLE NS_IMETHOD GetChargingTime(double *aChargingTime) = 0;

  /* attribute nsIDOMEventListener onlevelchange; */
  NS_SCRIPTABLE NS_IMETHOD GetOnlevelchange(nsIDOMEventListener * *aOnlevelchange) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetOnlevelchange(nsIDOMEventListener *aOnlevelchange) = 0;

  /* attribute nsIDOMEventListener onchargingchange; */
  NS_SCRIPTABLE NS_IMETHOD GetOnchargingchange(nsIDOMEventListener * *aOnchargingchange) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetOnchargingchange(nsIDOMEventListener *aOnchargingchange) = 0;

  /* attribute nsIDOMEventListener ondischargingtimechange; */
  NS_SCRIPTABLE NS_IMETHOD GetOndischargingtimechange(nsIDOMEventListener * *aOndischargingtimechange) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetOndischargingtimechange(nsIDOMEventListener *aOndischargingtimechange) = 0;

  /* attribute nsIDOMEventListener onchargingtimechange; */
  NS_SCRIPTABLE NS_IMETHOD GetOnchargingtimechange(nsIDOMEventListener * *aOnchargingtimechange) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetOnchargingtimechange(nsIDOMEventListener *aOnchargingtimechange) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMBatteryManager, NS_IDOMBATTERYMANAGER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMBATTERYMANAGER \
  NS_SCRIPTABLE NS_IMETHOD GetLevel(double *aLevel); \
  NS_SCRIPTABLE NS_IMETHOD GetCharging(bool *aCharging); \
  NS_SCRIPTABLE NS_IMETHOD GetDischargingTime(double *aDischargingTime); \
  NS_SCRIPTABLE NS_IMETHOD GetChargingTime(double *aChargingTime); \
  NS_SCRIPTABLE NS_IMETHOD GetOnlevelchange(nsIDOMEventListener * *aOnlevelchange); \
  NS_SCRIPTABLE NS_IMETHOD SetOnlevelchange(nsIDOMEventListener *aOnlevelchange); \
  NS_SCRIPTABLE NS_IMETHOD GetOnchargingchange(nsIDOMEventListener * *aOnchargingchange); \
  NS_SCRIPTABLE NS_IMETHOD SetOnchargingchange(nsIDOMEventListener *aOnchargingchange); \
  NS_SCRIPTABLE NS_IMETHOD GetOndischargingtimechange(nsIDOMEventListener * *aOndischargingtimechange); \
  NS_SCRIPTABLE NS_IMETHOD SetOndischargingtimechange(nsIDOMEventListener *aOndischargingtimechange); \
  NS_SCRIPTABLE NS_IMETHOD GetOnchargingtimechange(nsIDOMEventListener * *aOnchargingtimechange); \
  NS_SCRIPTABLE NS_IMETHOD SetOnchargingtimechange(nsIDOMEventListener *aOnchargingtimechange); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMBATTERYMANAGER(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetLevel(double *aLevel) { return _to GetLevel(aLevel); } \
  NS_SCRIPTABLE NS_IMETHOD GetCharging(bool *aCharging) { return _to GetCharging(aCharging); } \
  NS_SCRIPTABLE NS_IMETHOD GetDischargingTime(double *aDischargingTime) { return _to GetDischargingTime(aDischargingTime); } \
  NS_SCRIPTABLE NS_IMETHOD GetChargingTime(double *aChargingTime) { return _to GetChargingTime(aChargingTime); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnlevelchange(nsIDOMEventListener * *aOnlevelchange) { return _to GetOnlevelchange(aOnlevelchange); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnlevelchange(nsIDOMEventListener *aOnlevelchange) { return _to SetOnlevelchange(aOnlevelchange); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnchargingchange(nsIDOMEventListener * *aOnchargingchange) { return _to GetOnchargingchange(aOnchargingchange); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnchargingchange(nsIDOMEventListener *aOnchargingchange) { return _to SetOnchargingchange(aOnchargingchange); } \
  NS_SCRIPTABLE NS_IMETHOD GetOndischargingtimechange(nsIDOMEventListener * *aOndischargingtimechange) { return _to GetOndischargingtimechange(aOndischargingtimechange); } \
  NS_SCRIPTABLE NS_IMETHOD SetOndischargingtimechange(nsIDOMEventListener *aOndischargingtimechange) { return _to SetOndischargingtimechange(aOndischargingtimechange); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnchargingtimechange(nsIDOMEventListener * *aOnchargingtimechange) { return _to GetOnchargingtimechange(aOnchargingtimechange); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnchargingtimechange(nsIDOMEventListener *aOnchargingtimechange) { return _to SetOnchargingtimechange(aOnchargingtimechange); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMBATTERYMANAGER(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetLevel(double *aLevel) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLevel(aLevel); } \
  NS_SCRIPTABLE NS_IMETHOD GetCharging(bool *aCharging) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCharging(aCharging); } \
  NS_SCRIPTABLE NS_IMETHOD GetDischargingTime(double *aDischargingTime) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDischargingTime(aDischargingTime); } \
  NS_SCRIPTABLE NS_IMETHOD GetChargingTime(double *aChargingTime) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetChargingTime(aChargingTime); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnlevelchange(nsIDOMEventListener * *aOnlevelchange) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOnlevelchange(aOnlevelchange); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnlevelchange(nsIDOMEventListener *aOnlevelchange) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOnlevelchange(aOnlevelchange); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnchargingchange(nsIDOMEventListener * *aOnchargingchange) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOnchargingchange(aOnchargingchange); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnchargingchange(nsIDOMEventListener *aOnchargingchange) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOnchargingchange(aOnchargingchange); } \
  NS_SCRIPTABLE NS_IMETHOD GetOndischargingtimechange(nsIDOMEventListener * *aOndischargingtimechange) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOndischargingtimechange(aOndischargingtimechange); } \
  NS_SCRIPTABLE NS_IMETHOD SetOndischargingtimechange(nsIDOMEventListener *aOndischargingtimechange) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOndischargingtimechange(aOndischargingtimechange); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnchargingtimechange(nsIDOMEventListener * *aOnchargingtimechange) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOnchargingtimechange(aOnchargingtimechange); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnchargingtimechange(nsIDOMEventListener *aOnchargingtimechange) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOnchargingtimechange(aOnchargingtimechange); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMBatteryManager : public nsIDOMBatteryManager
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMBATTERYMANAGER

  nsDOMBatteryManager();

private:
  ~nsDOMBatteryManager();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMBatteryManager, nsIDOMBatteryManager)

nsDOMBatteryManager::nsDOMBatteryManager()
{
  /* member initializers and constructor code */
}

nsDOMBatteryManager::~nsDOMBatteryManager()
{
  /* destructor code */
}

/* readonly attribute double level; */
NS_IMETHODIMP nsDOMBatteryManager::GetLevel(double *aLevel)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean charging; */
NS_IMETHODIMP nsDOMBatteryManager::GetCharging(bool *aCharging)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute double dischargingTime; */
NS_IMETHODIMP nsDOMBatteryManager::GetDischargingTime(double *aDischargingTime)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute double chargingTime; */
NS_IMETHODIMP nsDOMBatteryManager::GetChargingTime(double *aChargingTime)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIDOMEventListener onlevelchange; */
NS_IMETHODIMP nsDOMBatteryManager::GetOnlevelchange(nsIDOMEventListener * *aOnlevelchange)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMBatteryManager::SetOnlevelchange(nsIDOMEventListener *aOnlevelchange)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIDOMEventListener onchargingchange; */
NS_IMETHODIMP nsDOMBatteryManager::GetOnchargingchange(nsIDOMEventListener * *aOnchargingchange)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMBatteryManager::SetOnchargingchange(nsIDOMEventListener *aOnchargingchange)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIDOMEventListener ondischargingtimechange; */
NS_IMETHODIMP nsDOMBatteryManager::GetOndischargingtimechange(nsIDOMEventListener * *aOndischargingtimechange)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMBatteryManager::SetOndischargingtimechange(nsIDOMEventListener *aOndischargingtimechange)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIDOMEventListener onchargingtimechange; */
NS_IMETHODIMP nsDOMBatteryManager::GetOnchargingtimechange(nsIDOMEventListener * *aOnchargingtimechange)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMBatteryManager::SetOnchargingtimechange(nsIDOMEventListener *aOnchargingtimechange)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMBatteryManager_h__ */
