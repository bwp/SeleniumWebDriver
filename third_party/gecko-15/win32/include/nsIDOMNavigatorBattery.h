/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/battery/nsIDOMNavigatorBattery.idl
 */

#ifndef __gen_nsIDOMNavigatorBattery_h__
#define __gen_nsIDOMNavigatorBattery_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIDOMMozBatteryManager; /* forward declaration */


/* starting interface:    nsIDOMMozNavigatorBattery */
#define NS_IDOMMOZNAVIGATORBATTERY_IID_STR "c295f049-be3d-4f83-9f7c-5c3e91d6ecb9"

#define NS_IDOMMOZNAVIGATORBATTERY_IID \
  {0xc295f049, 0xbe3d, 0x4f83, \
    { 0x9f, 0x7c, 0x5c, 0x3e, 0x91, 0xd6, 0xec, 0xb9 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMMozNavigatorBattery : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMMOZNAVIGATORBATTERY_IID)

  /* readonly attribute nsIDOMMozBatteryManager mozBattery; */
  NS_SCRIPTABLE NS_IMETHOD GetMozBattery(nsIDOMMozBatteryManager * *aMozBattery) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMMozNavigatorBattery, NS_IDOMMOZNAVIGATORBATTERY_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMMOZNAVIGATORBATTERY \
  NS_SCRIPTABLE NS_IMETHOD GetMozBattery(nsIDOMMozBatteryManager * *aMozBattery); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMMOZNAVIGATORBATTERY(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetMozBattery(nsIDOMMozBatteryManager * *aMozBattery) { return _to GetMozBattery(aMozBattery); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMMOZNAVIGATORBATTERY(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetMozBattery(nsIDOMMozBatteryManager * *aMozBattery) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMozBattery(aMozBattery); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMMozNavigatorBattery : public nsIDOMMozNavigatorBattery
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMMOZNAVIGATORBATTERY

  nsDOMMozNavigatorBattery();

private:
  ~nsDOMMozNavigatorBattery();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMMozNavigatorBattery, nsIDOMMozNavigatorBattery)

nsDOMMozNavigatorBattery::nsDOMMozNavigatorBattery()
{
  /* member initializers and constructor code */
}

nsDOMMozNavigatorBattery::~nsDOMMozNavigatorBattery()
{
  /* destructor code */
}

/* readonly attribute nsIDOMMozBatteryManager mozBattery; */
NS_IMETHODIMP nsDOMMozNavigatorBattery::GetMozBattery(nsIDOMMozBatteryManager * *aMozBattery)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMNavigatorBattery_h__ */
