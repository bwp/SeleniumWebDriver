/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/interfaces/settings/nsIDOMSettingsManager.idl
 */

#ifndef __gen_nsIDOMSettingsManager_h__
#define __gen_nsIDOMSettingsManager_h__


#ifndef __gen_domstubs_h__
#include "domstubs.h"
#endif

#ifndef __gen_nsIDOMEventTarget_h__
#include "nsIDOMEventTarget.h"
#endif

#ifndef __gen_nsIDOMEvent_h__
#include "nsIDOMEvent.h"
#endif

#include "jspubtd.h"

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIDOMDOMRequest; /* forward declaration */

class nsIVariant; /* forward declaration */


/* starting interface:    nsIDOMSettingsLock */
#define NS_IDOMSETTINGSLOCK_IID_STR "ef95ddd0-6308-11e1-b86c-0800200c9a66"

#define NS_IDOMSETTINGSLOCK_IID \
  {0xef95ddd0, 0x6308, 0x11e1, \
    { 0xb8, 0x6c, 0x08, 0x00, 0x20, 0x0c, 0x9a, 0x66 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMSettingsLock : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMSETTINGSLOCK_IID)

  /* nsIDOMDOMRequest set (in nsIVariant settings); */
  NS_SCRIPTABLE NS_IMETHOD Set(nsIVariant *settings, nsIDOMDOMRequest * *_retval NS_OUTPARAM) = 0;

  /* nsIDOMDOMRequest get (in jsval name); */
  NS_SCRIPTABLE NS_IMETHOD Get(const JS::Value & name, nsIDOMDOMRequest * *_retval NS_OUTPARAM) = 0;

  /* nsIDOMDOMRequest clear (); */
  NS_SCRIPTABLE NS_IMETHOD Clear(nsIDOMDOMRequest * *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMSettingsLock, NS_IDOMSETTINGSLOCK_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMSETTINGSLOCK \
  NS_SCRIPTABLE NS_IMETHOD Set(nsIVariant *settings, nsIDOMDOMRequest * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Get(const JS::Value & name, nsIDOMDOMRequest * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Clear(nsIDOMDOMRequest * *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMSETTINGSLOCK(_to) \
  NS_SCRIPTABLE NS_IMETHOD Set(nsIVariant *settings, nsIDOMDOMRequest * *_retval NS_OUTPARAM) { return _to Set(settings, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Get(const JS::Value & name, nsIDOMDOMRequest * *_retval NS_OUTPARAM) { return _to Get(name, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Clear(nsIDOMDOMRequest * *_retval NS_OUTPARAM) { return _to Clear(_retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMSETTINGSLOCK(_to) \
  NS_SCRIPTABLE NS_IMETHOD Set(nsIVariant *settings, nsIDOMDOMRequest * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Set(settings, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Get(const JS::Value & name, nsIDOMDOMRequest * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Get(name, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Clear(nsIDOMDOMRequest * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Clear(_retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMSettingsLock : public nsIDOMSettingsLock
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMSETTINGSLOCK

  nsDOMSettingsLock();

private:
  ~nsDOMSettingsLock();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMSettingsLock, nsIDOMSettingsLock)

nsDOMSettingsLock::nsDOMSettingsLock()
{
  /* member initializers and constructor code */
}

nsDOMSettingsLock::~nsDOMSettingsLock()
{
  /* destructor code */
}

/* nsIDOMDOMRequest set (in nsIVariant settings); */
NS_IMETHODIMP nsDOMSettingsLock::Set(nsIVariant *settings, nsIDOMDOMRequest * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMDOMRequest get (in jsval name); */
NS_IMETHODIMP nsDOMSettingsLock::Get(const JS::Value & name, nsIDOMDOMRequest * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMDOMRequest clear (); */
NS_IMETHODIMP nsDOMSettingsLock::Clear(nsIDOMDOMRequest * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIDOMSettingsManager */
#define NS_IDOMSETTINGSMANAGER_IID_STR "5609d0a0-52a9-11e1-b86c-0800200c9a66"

#define NS_IDOMSETTINGSMANAGER_IID \
  {0x5609d0a0, 0x52a9, 0x11e1, \
    { 0xb8, 0x6c, 0x08, 0x00, 0x20, 0x0c, 0x9a, 0x66 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMSettingsManager : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMSETTINGSMANAGER_IID)

  /* nsIDOMSettingsLock getLock (); */
  NS_SCRIPTABLE NS_IMETHOD GetLock(nsIDOMSettingsLock * *_retval NS_OUTPARAM) = 0;

  /* attribute nsIDOMEventListener onsettingchange; */
  NS_SCRIPTABLE NS_IMETHOD GetOnsettingchange(nsIDOMEventListener * *aOnsettingchange) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetOnsettingchange(nsIDOMEventListener *aOnsettingchange) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMSettingsManager, NS_IDOMSETTINGSMANAGER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMSETTINGSMANAGER \
  NS_SCRIPTABLE NS_IMETHOD GetLock(nsIDOMSettingsLock * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetOnsettingchange(nsIDOMEventListener * *aOnsettingchange); \
  NS_SCRIPTABLE NS_IMETHOD SetOnsettingchange(nsIDOMEventListener *aOnsettingchange); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMSETTINGSMANAGER(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetLock(nsIDOMSettingsLock * *_retval NS_OUTPARAM) { return _to GetLock(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnsettingchange(nsIDOMEventListener * *aOnsettingchange) { return _to GetOnsettingchange(aOnsettingchange); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnsettingchange(nsIDOMEventListener *aOnsettingchange) { return _to SetOnsettingchange(aOnsettingchange); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMSETTINGSMANAGER(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetLock(nsIDOMSettingsLock * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLock(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnsettingchange(nsIDOMEventListener * *aOnsettingchange) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOnsettingchange(aOnsettingchange); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnsettingchange(nsIDOMEventListener *aOnsettingchange) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOnsettingchange(aOnsettingchange); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMSettingsManager : public nsIDOMSettingsManager
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMSETTINGSMANAGER

  nsDOMSettingsManager();

private:
  ~nsDOMSettingsManager();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMSettingsManager, nsIDOMSettingsManager)

nsDOMSettingsManager::nsDOMSettingsManager()
{
  /* member initializers and constructor code */
}

nsDOMSettingsManager::~nsDOMSettingsManager()
{
  /* destructor code */
}

/* nsIDOMSettingsLock getLock (); */
NS_IMETHODIMP nsDOMSettingsManager::GetLock(nsIDOMSettingsLock * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIDOMEventListener onsettingchange; */
NS_IMETHODIMP nsDOMSettingsManager::GetOnsettingchange(nsIDOMEventListener * *aOnsettingchange)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMSettingsManager::SetOnsettingchange(nsIDOMEventListener *aOnsettingchange)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIDOMMozSettingsEvent */
#define NS_IDOMMOZSETTINGSEVENT_IID_STR "5ce02690-52a9-11e1-b86c-0800200c9a66"

#define NS_IDOMMOZSETTINGSEVENT_IID \
  {0x5ce02690, 0x52a9, 0x11e1, \
    { 0xb8, 0x6c, 0x08, 0x00, 0x20, 0x0c, 0x9a, 0x66 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMMozSettingsEvent : public nsIDOMEvent {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMMOZSETTINGSEVENT_IID)

  /* readonly attribute DOMString settingName; */
  NS_SCRIPTABLE NS_IMETHOD GetSettingName(nsAString & aSettingName) = 0;

  /* readonly attribute nsIVariant settingValue; */
  NS_SCRIPTABLE NS_IMETHOD GetSettingValue(nsIVariant * *aSettingValue) = 0;

  /* [noscript] void initMozSettingsEvent (in DOMString aType, in boolean aCanBubble, in boolean aCancelable, in DOMString aSettingName, in nsIVariant aSettingValue); */
  NS_IMETHOD InitMozSettingsEvent(const nsAString & aType, bool aCanBubble, bool aCancelable, const nsAString & aSettingName, nsIVariant *aSettingValue) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMMozSettingsEvent, NS_IDOMMOZSETTINGSEVENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMMOZSETTINGSEVENT \
  NS_SCRIPTABLE NS_IMETHOD GetSettingName(nsAString & aSettingName); \
  NS_SCRIPTABLE NS_IMETHOD GetSettingValue(nsIVariant * *aSettingValue); \
  NS_IMETHOD InitMozSettingsEvent(const nsAString & aType, bool aCanBubble, bool aCancelable, const nsAString & aSettingName, nsIVariant *aSettingValue); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMMOZSETTINGSEVENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetSettingName(nsAString & aSettingName) { return _to GetSettingName(aSettingName); } \
  NS_SCRIPTABLE NS_IMETHOD GetSettingValue(nsIVariant * *aSettingValue) { return _to GetSettingValue(aSettingValue); } \
  NS_IMETHOD InitMozSettingsEvent(const nsAString & aType, bool aCanBubble, bool aCancelable, const nsAString & aSettingName, nsIVariant *aSettingValue) { return _to InitMozSettingsEvent(aType, aCanBubble, aCancelable, aSettingName, aSettingValue); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMMOZSETTINGSEVENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetSettingName(nsAString & aSettingName) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSettingName(aSettingName); } \
  NS_SCRIPTABLE NS_IMETHOD GetSettingValue(nsIVariant * *aSettingValue) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSettingValue(aSettingValue); } \
  NS_IMETHOD InitMozSettingsEvent(const nsAString & aType, bool aCanBubble, bool aCancelable, const nsAString & aSettingName, nsIVariant *aSettingValue) { return !_to ? NS_ERROR_NULL_POINTER : _to->InitMozSettingsEvent(aType, aCanBubble, aCancelable, aSettingName, aSettingValue); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMMozSettingsEvent : public nsIDOMMozSettingsEvent
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMMOZSETTINGSEVENT

  nsDOMMozSettingsEvent();

private:
  ~nsDOMMozSettingsEvent();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMMozSettingsEvent, nsIDOMMozSettingsEvent)

nsDOMMozSettingsEvent::nsDOMMozSettingsEvent()
{
  /* member initializers and constructor code */
}

nsDOMMozSettingsEvent::~nsDOMMozSettingsEvent()
{
  /* destructor code */
}

/* readonly attribute DOMString settingName; */
NS_IMETHODIMP nsDOMMozSettingsEvent::GetSettingName(nsAString & aSettingName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIVariant settingValue; */
NS_IMETHODIMP nsDOMMozSettingsEvent::GetSettingValue(nsIVariant * *aSettingValue)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void initMozSettingsEvent (in DOMString aType, in boolean aCanBubble, in boolean aCancelable, in DOMString aSettingName, in nsIVariant aSettingValue); */
NS_IMETHODIMP nsDOMMozSettingsEvent::InitMozSettingsEvent(const nsAString & aType, bool aCanBubble, bool aCancelable, const nsAString & aSettingName, nsIVariant *aSettingValue)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMSettingsManager_h__ */
