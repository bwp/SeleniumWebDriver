/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/power/nsIPowerManagerService.idl
 */

#ifndef __gen_nsIPowerManagerService_h__
#define __gen_nsIPowerManagerService_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
#define NS_POWERMANAGERSERVICE_CID { 0x18c2e238, 0x3a0a, 0x4153, {0x89, 0xfc, 0x16, 0x6b, 0x3b, 0x14, 0x65, 0xa1 } }
#define POWERMANAGERSERVICE_CONTRACTID "@mozilla.org/power/powermanagerservice;1"
class nsIDOMMozWakeLock; /* forward declaration */

class nsIDOMMozWakeLockListener; /* forward declaration */

class nsIDOMWindow; /* forward declaration */


/* starting interface:    nsIPowerManagerService */
#define NS_IPOWERMANAGERSERVICE_IID_STR "235ca1a1-d0c8-41f3-9b4a-dbaa4437d69c"

#define NS_IPOWERMANAGERSERVICE_IID \
  {0x235ca1a1, 0xd0c8, 0x41f3, \
    { 0x9b, 0x4a, 0xdb, 0xaa, 0x44, 0x37, 0xd6, 0x9c }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIPowerManagerService : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IPOWERMANAGERSERVICE_IID)

  /* void powerOff (); */
  NS_SCRIPTABLE NS_IMETHOD PowerOff(void) = 0;

  /* void reboot (); */
  NS_SCRIPTABLE NS_IMETHOD Reboot(void) = 0;

  /* void addWakeLockListener (in nsIDOMMozWakeLockListener aListener); */
  NS_SCRIPTABLE NS_IMETHOD AddWakeLockListener(nsIDOMMozWakeLockListener *aListener) = 0;

  /* void removeWakeLockListener (in nsIDOMMozWakeLockListener aListener); */
  NS_SCRIPTABLE NS_IMETHOD RemoveWakeLockListener(nsIDOMMozWakeLockListener *aListener) = 0;

  /* DOMString getWakeLockState (in DOMString aTopic); */
  NS_SCRIPTABLE NS_IMETHOD GetWakeLockState(const nsAString & aTopic, nsAString & _retval NS_OUTPARAM) = 0;

  /* nsIDOMMozWakeLock newWakeLock (in DOMString aTopic, [optional] in nsIDOMWindow aWindow); */
  NS_SCRIPTABLE NS_IMETHOD NewWakeLock(const nsAString & aTopic, nsIDOMWindow *aWindow, nsIDOMMozWakeLock * *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIPowerManagerService, NS_IPOWERMANAGERSERVICE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIPOWERMANAGERSERVICE \
  NS_SCRIPTABLE NS_IMETHOD PowerOff(void); \
  NS_SCRIPTABLE NS_IMETHOD Reboot(void); \
  NS_SCRIPTABLE NS_IMETHOD AddWakeLockListener(nsIDOMMozWakeLockListener *aListener); \
  NS_SCRIPTABLE NS_IMETHOD RemoveWakeLockListener(nsIDOMMozWakeLockListener *aListener); \
  NS_SCRIPTABLE NS_IMETHOD GetWakeLockState(const nsAString & aTopic, nsAString & _retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD NewWakeLock(const nsAString & aTopic, nsIDOMWindow *aWindow, nsIDOMMozWakeLock * *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIPOWERMANAGERSERVICE(_to) \
  NS_SCRIPTABLE NS_IMETHOD PowerOff(void) { return _to PowerOff(); } \
  NS_SCRIPTABLE NS_IMETHOD Reboot(void) { return _to Reboot(); } \
  NS_SCRIPTABLE NS_IMETHOD AddWakeLockListener(nsIDOMMozWakeLockListener *aListener) { return _to AddWakeLockListener(aListener); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveWakeLockListener(nsIDOMMozWakeLockListener *aListener) { return _to RemoveWakeLockListener(aListener); } \
  NS_SCRIPTABLE NS_IMETHOD GetWakeLockState(const nsAString & aTopic, nsAString & _retval NS_OUTPARAM) { return _to GetWakeLockState(aTopic, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD NewWakeLock(const nsAString & aTopic, nsIDOMWindow *aWindow, nsIDOMMozWakeLock * *_retval NS_OUTPARAM) { return _to NewWakeLock(aTopic, aWindow, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIPOWERMANAGERSERVICE(_to) \
  NS_SCRIPTABLE NS_IMETHOD PowerOff(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->PowerOff(); } \
  NS_SCRIPTABLE NS_IMETHOD Reboot(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Reboot(); } \
  NS_SCRIPTABLE NS_IMETHOD AddWakeLockListener(nsIDOMMozWakeLockListener *aListener) { return !_to ? NS_ERROR_NULL_POINTER : _to->AddWakeLockListener(aListener); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveWakeLockListener(nsIDOMMozWakeLockListener *aListener) { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveWakeLockListener(aListener); } \
  NS_SCRIPTABLE NS_IMETHOD GetWakeLockState(const nsAString & aTopic, nsAString & _retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetWakeLockState(aTopic, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD NewWakeLock(const nsAString & aTopic, nsIDOMWindow *aWindow, nsIDOMMozWakeLock * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->NewWakeLock(aTopic, aWindow, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsPowerManagerService : public nsIPowerManagerService
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIPOWERMANAGERSERVICE

  nsPowerManagerService();

private:
  ~nsPowerManagerService();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsPowerManagerService, nsIPowerManagerService)

nsPowerManagerService::nsPowerManagerService()
{
  /* member initializers and constructor code */
}

nsPowerManagerService::~nsPowerManagerService()
{
  /* destructor code */
}

/* void powerOff (); */
NS_IMETHODIMP nsPowerManagerService::PowerOff()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void reboot (); */
NS_IMETHODIMP nsPowerManagerService::Reboot()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void addWakeLockListener (in nsIDOMMozWakeLockListener aListener); */
NS_IMETHODIMP nsPowerManagerService::AddWakeLockListener(nsIDOMMozWakeLockListener *aListener)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void removeWakeLockListener (in nsIDOMMozWakeLockListener aListener); */
NS_IMETHODIMP nsPowerManagerService::RemoveWakeLockListener(nsIDOMMozWakeLockListener *aListener)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* DOMString getWakeLockState (in DOMString aTopic); */
NS_IMETHODIMP nsPowerManagerService::GetWakeLockState(const nsAString & aTopic, nsAString & _retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMMozWakeLock newWakeLock (in DOMString aTopic, [optional] in nsIDOMWindow aWindow); */
NS_IMETHODIMP nsPowerManagerService::NewWakeLock(const nsAString & aTopic, nsIDOMWindow *aWindow, nsIDOMMozWakeLock * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIPowerManagerService_h__ */
