/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/interfaces/apps/nsIDOMApplicationRegistry.idl
 */

#ifndef __gen_nsIDOMApplicationRegistry_h__
#define __gen_nsIDOMApplicationRegistry_h__


#ifndef __gen_domstubs_h__
#include "domstubs.h"
#endif

#ifndef __gen_nsIDOMEvent_h__
#include "nsIDOMEvent.h"
#endif

#ifndef __gen_nsIDOMEventTarget_h__
#include "nsIDOMEventTarget.h"
#endif

#include "jspubtd.h"

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIDOMDOMRequest; /* forward declaration */

class nsIArray; /* forward declaration */


/* starting interface:    mozIDOMApplication */
#define MOZIDOMAPPLICATION_IID_STR "9583b825-46b1-4e8f-bb48-9fed660a95e6"

#define MOZIDOMAPPLICATION_IID \
  {0x9583b825, 0x46b1, 0x4e8f, \
    { 0xbb, 0x48, 0x9f, 0xed, 0x66, 0x0a, 0x95, 0xe6 }}

class NS_NO_VTABLE NS_SCRIPTABLE mozIDOMApplication : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(MOZIDOMAPPLICATION_IID)

  /* readonly attribute jsval manifest; */
  NS_SCRIPTABLE NS_IMETHOD GetManifest(JS::Value *aManifest) = 0;

  /* readonly attribute DOMString manifestURL; */
  NS_SCRIPTABLE NS_IMETHOD GetManifestURL(nsAString & aManifestURL) = 0;

  /* readonly attribute jsval receipts; */
  NS_SCRIPTABLE NS_IMETHOD GetReceipts(JS::Value *aReceipts) = 0;

  /* readonly attribute DOMString origin; */
  NS_SCRIPTABLE NS_IMETHOD GetOrigin(nsAString & aOrigin) = 0;

  /* readonly attribute DOMString installOrigin; */
  NS_SCRIPTABLE NS_IMETHOD GetInstallOrigin(nsAString & aInstallOrigin) = 0;

  /* readonly attribute unsigned long long installTime; */
  NS_SCRIPTABLE NS_IMETHOD GetInstallTime(PRUint64 *aInstallTime) = 0;

  /* readonly attribute double progress; */
  NS_SCRIPTABLE NS_IMETHOD GetProgress(double *aProgress) = 0;

  /* readonly attribute DOMString status; */
  NS_SCRIPTABLE NS_IMETHOD GetStatus(nsAString & aStatus) = 0;

  /* attribute nsIDOMEventListener onprogress; */
  NS_SCRIPTABLE NS_IMETHOD GetOnprogress(nsIDOMEventListener * *aOnprogress) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetOnprogress(nsIDOMEventListener *aOnprogress) = 0;

  /* nsIDOMDOMRequest launch ([optional] in DOMString startPoint); */
  NS_SCRIPTABLE NS_IMETHOD Launch(const nsAString & startPoint, nsIDOMDOMRequest * *_retval NS_OUTPARAM) = 0;

  /* nsIDOMDOMRequest uninstall (); */
  NS_SCRIPTABLE NS_IMETHOD Uninstall(nsIDOMDOMRequest * *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(mozIDOMApplication, MOZIDOMAPPLICATION_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_MOZIDOMAPPLICATION \
  NS_SCRIPTABLE NS_IMETHOD GetManifest(JS::Value *aManifest); \
  NS_SCRIPTABLE NS_IMETHOD GetManifestURL(nsAString & aManifestURL); \
  NS_SCRIPTABLE NS_IMETHOD GetReceipts(JS::Value *aReceipts); \
  NS_SCRIPTABLE NS_IMETHOD GetOrigin(nsAString & aOrigin); \
  NS_SCRIPTABLE NS_IMETHOD GetInstallOrigin(nsAString & aInstallOrigin); \
  NS_SCRIPTABLE NS_IMETHOD GetInstallTime(PRUint64 *aInstallTime); \
  NS_SCRIPTABLE NS_IMETHOD GetProgress(double *aProgress); \
  NS_SCRIPTABLE NS_IMETHOD GetStatus(nsAString & aStatus); \
  NS_SCRIPTABLE NS_IMETHOD GetOnprogress(nsIDOMEventListener * *aOnprogress); \
  NS_SCRIPTABLE NS_IMETHOD SetOnprogress(nsIDOMEventListener *aOnprogress); \
  NS_SCRIPTABLE NS_IMETHOD Launch(const nsAString & startPoint, nsIDOMDOMRequest * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Uninstall(nsIDOMDOMRequest * *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_MOZIDOMAPPLICATION(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetManifest(JS::Value *aManifest) { return _to GetManifest(aManifest); } \
  NS_SCRIPTABLE NS_IMETHOD GetManifestURL(nsAString & aManifestURL) { return _to GetManifestURL(aManifestURL); } \
  NS_SCRIPTABLE NS_IMETHOD GetReceipts(JS::Value *aReceipts) { return _to GetReceipts(aReceipts); } \
  NS_SCRIPTABLE NS_IMETHOD GetOrigin(nsAString & aOrigin) { return _to GetOrigin(aOrigin); } \
  NS_SCRIPTABLE NS_IMETHOD GetInstallOrigin(nsAString & aInstallOrigin) { return _to GetInstallOrigin(aInstallOrigin); } \
  NS_SCRIPTABLE NS_IMETHOD GetInstallTime(PRUint64 *aInstallTime) { return _to GetInstallTime(aInstallTime); } \
  NS_SCRIPTABLE NS_IMETHOD GetProgress(double *aProgress) { return _to GetProgress(aProgress); } \
  NS_SCRIPTABLE NS_IMETHOD GetStatus(nsAString & aStatus) { return _to GetStatus(aStatus); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnprogress(nsIDOMEventListener * *aOnprogress) { return _to GetOnprogress(aOnprogress); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnprogress(nsIDOMEventListener *aOnprogress) { return _to SetOnprogress(aOnprogress); } \
  NS_SCRIPTABLE NS_IMETHOD Launch(const nsAString & startPoint, nsIDOMDOMRequest * *_retval NS_OUTPARAM) { return _to Launch(startPoint, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Uninstall(nsIDOMDOMRequest * *_retval NS_OUTPARAM) { return _to Uninstall(_retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_MOZIDOMAPPLICATION(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetManifest(JS::Value *aManifest) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetManifest(aManifest); } \
  NS_SCRIPTABLE NS_IMETHOD GetManifestURL(nsAString & aManifestURL) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetManifestURL(aManifestURL); } \
  NS_SCRIPTABLE NS_IMETHOD GetReceipts(JS::Value *aReceipts) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetReceipts(aReceipts); } \
  NS_SCRIPTABLE NS_IMETHOD GetOrigin(nsAString & aOrigin) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOrigin(aOrigin); } \
  NS_SCRIPTABLE NS_IMETHOD GetInstallOrigin(nsAString & aInstallOrigin) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetInstallOrigin(aInstallOrigin); } \
  NS_SCRIPTABLE NS_IMETHOD GetInstallTime(PRUint64 *aInstallTime) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetInstallTime(aInstallTime); } \
  NS_SCRIPTABLE NS_IMETHOD GetProgress(double *aProgress) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetProgress(aProgress); } \
  NS_SCRIPTABLE NS_IMETHOD GetStatus(nsAString & aStatus) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetStatus(aStatus); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnprogress(nsIDOMEventListener * *aOnprogress) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOnprogress(aOnprogress); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnprogress(nsIDOMEventListener *aOnprogress) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOnprogress(aOnprogress); } \
  NS_SCRIPTABLE NS_IMETHOD Launch(const nsAString & startPoint, nsIDOMDOMRequest * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Launch(startPoint, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Uninstall(nsIDOMDOMRequest * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Uninstall(_retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public mozIDOMApplication
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_MOZIDOMAPPLICATION

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, mozIDOMApplication)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* readonly attribute jsval manifest; */
NS_IMETHODIMP _MYCLASS_::GetManifest(JS::Value *aManifest)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString manifestURL; */
NS_IMETHODIMP _MYCLASS_::GetManifestURL(nsAString & aManifestURL)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute jsval receipts; */
NS_IMETHODIMP _MYCLASS_::GetReceipts(JS::Value *aReceipts)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString origin; */
NS_IMETHODIMP _MYCLASS_::GetOrigin(nsAString & aOrigin)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString installOrigin; */
NS_IMETHODIMP _MYCLASS_::GetInstallOrigin(nsAString & aInstallOrigin)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long long installTime; */
NS_IMETHODIMP _MYCLASS_::GetInstallTime(PRUint64 *aInstallTime)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute double progress; */
NS_IMETHODIMP _MYCLASS_::GetProgress(double *aProgress)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString status; */
NS_IMETHODIMP _MYCLASS_::GetStatus(nsAString & aStatus)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIDOMEventListener onprogress; */
NS_IMETHODIMP _MYCLASS_::GetOnprogress(nsIDOMEventListener * *aOnprogress)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetOnprogress(nsIDOMEventListener *aOnprogress)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMDOMRequest launch ([optional] in DOMString startPoint); */
NS_IMETHODIMP _MYCLASS_::Launch(const nsAString & startPoint, nsIDOMDOMRequest * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMDOMRequest uninstall (); */
NS_IMETHODIMP _MYCLASS_::Uninstall(nsIDOMDOMRequest * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIDOMMozApplicationEvent */
#define NS_IDOMMOZAPPLICATIONEVENT_IID_STR "8f2bfba8-f10e-4f63-a5e0-7a7056e1dbe6"

#define NS_IDOMMOZAPPLICATIONEVENT_IID \
  {0x8f2bfba8, 0xf10e, 0x4f63, \
    { 0xa5, 0xe0, 0x7a, 0x70, 0x56, 0xe1, 0xdb, 0xe6 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMMozApplicationEvent : public nsIDOMEvent {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMMOZAPPLICATIONEVENT_IID)

  /* readonly attribute mozIDOMApplication application; */
  NS_SCRIPTABLE NS_IMETHOD GetApplication(mozIDOMApplication * *aApplication) = 0;

  /* [noscript] void initMozApplicationEvent (in DOMString aType, in boolean aCanBubble, in boolean aCancelable, in mozIDOMApplication aApplication); */
  NS_IMETHOD InitMozApplicationEvent(const nsAString & aType, bool aCanBubble, bool aCancelable, mozIDOMApplication *aApplication) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMMozApplicationEvent, NS_IDOMMOZAPPLICATIONEVENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMMOZAPPLICATIONEVENT \
  NS_SCRIPTABLE NS_IMETHOD GetApplication(mozIDOMApplication * *aApplication); \
  NS_IMETHOD InitMozApplicationEvent(const nsAString & aType, bool aCanBubble, bool aCancelable, mozIDOMApplication *aApplication); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMMOZAPPLICATIONEVENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetApplication(mozIDOMApplication * *aApplication) { return _to GetApplication(aApplication); } \
  NS_IMETHOD InitMozApplicationEvent(const nsAString & aType, bool aCanBubble, bool aCancelable, mozIDOMApplication *aApplication) { return _to InitMozApplicationEvent(aType, aCanBubble, aCancelable, aApplication); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMMOZAPPLICATIONEVENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetApplication(mozIDOMApplication * *aApplication) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetApplication(aApplication); } \
  NS_IMETHOD InitMozApplicationEvent(const nsAString & aType, bool aCanBubble, bool aCancelable, mozIDOMApplication *aApplication) { return !_to ? NS_ERROR_NULL_POINTER : _to->InitMozApplicationEvent(aType, aCanBubble, aCancelable, aApplication); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMMozApplicationEvent : public nsIDOMMozApplicationEvent
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMMOZAPPLICATIONEVENT

  nsDOMMozApplicationEvent();

private:
  ~nsDOMMozApplicationEvent();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMMozApplicationEvent, nsIDOMMozApplicationEvent)

nsDOMMozApplicationEvent::nsDOMMozApplicationEvent()
{
  /* member initializers and constructor code */
}

nsDOMMozApplicationEvent::~nsDOMMozApplicationEvent()
{
  /* destructor code */
}

/* readonly attribute mozIDOMApplication application; */
NS_IMETHODIMP nsDOMMozApplicationEvent::GetApplication(mozIDOMApplication * *aApplication)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void initMozApplicationEvent (in DOMString aType, in boolean aCanBubble, in boolean aCancelable, in mozIDOMApplication aApplication); */
NS_IMETHODIMP nsDOMMozApplicationEvent::InitMozApplicationEvent(const nsAString & aType, bool aCanBubble, bool aCancelable, mozIDOMApplication *aApplication)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    mozIDOMApplicationMgmt */
#define MOZIDOMAPPLICATIONMGMT_IID_STR "bd304874-d532-4e13-8034-544211445583"

#define MOZIDOMAPPLICATIONMGMT_IID \
  {0xbd304874, 0xd532, 0x4e13, \
    { 0x80, 0x34, 0x54, 0x42, 0x11, 0x44, 0x55, 0x83 }}

class NS_NO_VTABLE NS_SCRIPTABLE mozIDOMApplicationMgmt : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(MOZIDOMAPPLICATIONMGMT_IID)

  /* nsIDOMDOMRequest getAll (); */
  NS_SCRIPTABLE NS_IMETHOD GetAll(nsIDOMDOMRequest * *_retval NS_OUTPARAM) = 0;

  /* attribute nsIDOMEventListener oninstall; */
  NS_SCRIPTABLE NS_IMETHOD GetOninstall(nsIDOMEventListener * *aOninstall) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetOninstall(nsIDOMEventListener *aOninstall) = 0;

  /* attribute nsIDOMEventListener onuninstall; */
  NS_SCRIPTABLE NS_IMETHOD GetOnuninstall(nsIDOMEventListener * *aOnuninstall) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetOnuninstall(nsIDOMEventListener *aOnuninstall) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(mozIDOMApplicationMgmt, MOZIDOMAPPLICATIONMGMT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_MOZIDOMAPPLICATIONMGMT \
  NS_SCRIPTABLE NS_IMETHOD GetAll(nsIDOMDOMRequest * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetOninstall(nsIDOMEventListener * *aOninstall); \
  NS_SCRIPTABLE NS_IMETHOD SetOninstall(nsIDOMEventListener *aOninstall); \
  NS_SCRIPTABLE NS_IMETHOD GetOnuninstall(nsIDOMEventListener * *aOnuninstall); \
  NS_SCRIPTABLE NS_IMETHOD SetOnuninstall(nsIDOMEventListener *aOnuninstall); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_MOZIDOMAPPLICATIONMGMT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetAll(nsIDOMDOMRequest * *_retval NS_OUTPARAM) { return _to GetAll(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetOninstall(nsIDOMEventListener * *aOninstall) { return _to GetOninstall(aOninstall); } \
  NS_SCRIPTABLE NS_IMETHOD SetOninstall(nsIDOMEventListener *aOninstall) { return _to SetOninstall(aOninstall); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnuninstall(nsIDOMEventListener * *aOnuninstall) { return _to GetOnuninstall(aOnuninstall); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnuninstall(nsIDOMEventListener *aOnuninstall) { return _to SetOnuninstall(aOnuninstall); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_MOZIDOMAPPLICATIONMGMT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetAll(nsIDOMDOMRequest * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAll(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetOninstall(nsIDOMEventListener * *aOninstall) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOninstall(aOninstall); } \
  NS_SCRIPTABLE NS_IMETHOD SetOninstall(nsIDOMEventListener *aOninstall) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOninstall(aOninstall); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnuninstall(nsIDOMEventListener * *aOnuninstall) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOnuninstall(aOnuninstall); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnuninstall(nsIDOMEventListener *aOnuninstall) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOnuninstall(aOnuninstall); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public mozIDOMApplicationMgmt
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_MOZIDOMAPPLICATIONMGMT

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, mozIDOMApplicationMgmt)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* nsIDOMDOMRequest getAll (); */
NS_IMETHODIMP _MYCLASS_::GetAll(nsIDOMDOMRequest * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIDOMEventListener oninstall; */
NS_IMETHODIMP _MYCLASS_::GetOninstall(nsIDOMEventListener * *aOninstall)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetOninstall(nsIDOMEventListener *aOninstall)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIDOMEventListener onuninstall; */
NS_IMETHODIMP _MYCLASS_::GetOnuninstall(nsIDOMEventListener * *aOnuninstall)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetOnuninstall(nsIDOMEventListener *aOnuninstall)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    mozIDOMApplicationRegistry */
#define MOZIDOMAPPLICATIONREGISTRY_IID_STR "dd9a044c-1073-4d2b-a17d-c9b5834b3420"

#define MOZIDOMAPPLICATIONREGISTRY_IID \
  {0xdd9a044c, 0x1073, 0x4d2b, \
    { 0xa1, 0x7d, 0xc9, 0xb5, 0x83, 0x4b, 0x34, 0x20 }}

class NS_NO_VTABLE NS_SCRIPTABLE mozIDOMApplicationRegistry : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(MOZIDOMAPPLICATIONREGISTRY_IID)

  /* nsIDOMDOMRequest install (in DOMString manifestUrl, [optional] in jsval parameters); */
  NS_SCRIPTABLE NS_IMETHOD Install(const nsAString & manifestUrl, const JS::Value & parameters, nsIDOMDOMRequest * *_retval NS_OUTPARAM) = 0;

  /* nsIDOMDOMRequest getSelf (); */
  NS_SCRIPTABLE NS_IMETHOD GetSelf(nsIDOMDOMRequest * *_retval NS_OUTPARAM) = 0;

  /* nsIDOMDOMRequest getInstalled (); */
  NS_SCRIPTABLE NS_IMETHOD GetInstalled(nsIDOMDOMRequest * *_retval NS_OUTPARAM) = 0;

  /* nsIDOMDOMRequest getNotInstalled (); */
  NS_SCRIPTABLE NS_IMETHOD GetNotInstalled(nsIDOMDOMRequest * *_retval NS_OUTPARAM) = 0;

  /* readonly attribute mozIDOMApplicationMgmt mgmt; */
  NS_SCRIPTABLE NS_IMETHOD GetMgmt(mozIDOMApplicationMgmt * *aMgmt) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(mozIDOMApplicationRegistry, MOZIDOMAPPLICATIONREGISTRY_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_MOZIDOMAPPLICATIONREGISTRY \
  NS_SCRIPTABLE NS_IMETHOD Install(const nsAString & manifestUrl, const JS::Value & parameters, nsIDOMDOMRequest * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetSelf(nsIDOMDOMRequest * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetInstalled(nsIDOMDOMRequest * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetNotInstalled(nsIDOMDOMRequest * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetMgmt(mozIDOMApplicationMgmt * *aMgmt); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_MOZIDOMAPPLICATIONREGISTRY(_to) \
  NS_SCRIPTABLE NS_IMETHOD Install(const nsAString & manifestUrl, const JS::Value & parameters, nsIDOMDOMRequest * *_retval NS_OUTPARAM) { return _to Install(manifestUrl, parameters, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetSelf(nsIDOMDOMRequest * *_retval NS_OUTPARAM) { return _to GetSelf(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetInstalled(nsIDOMDOMRequest * *_retval NS_OUTPARAM) { return _to GetInstalled(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetNotInstalled(nsIDOMDOMRequest * *_retval NS_OUTPARAM) { return _to GetNotInstalled(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetMgmt(mozIDOMApplicationMgmt * *aMgmt) { return _to GetMgmt(aMgmt); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_MOZIDOMAPPLICATIONREGISTRY(_to) \
  NS_SCRIPTABLE NS_IMETHOD Install(const nsAString & manifestUrl, const JS::Value & parameters, nsIDOMDOMRequest * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Install(manifestUrl, parameters, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetSelf(nsIDOMDOMRequest * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSelf(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetInstalled(nsIDOMDOMRequest * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetInstalled(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetNotInstalled(nsIDOMDOMRequest * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNotInstalled(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetMgmt(mozIDOMApplicationMgmt * *aMgmt) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMgmt(aMgmt); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public mozIDOMApplicationRegistry
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_MOZIDOMAPPLICATIONREGISTRY

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, mozIDOMApplicationRegistry)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* nsIDOMDOMRequest install (in DOMString manifestUrl, [optional] in jsval parameters); */
NS_IMETHODIMP _MYCLASS_::Install(const nsAString & manifestUrl, const JS::Value & parameters, nsIDOMDOMRequest * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMDOMRequest getSelf (); */
NS_IMETHODIMP _MYCLASS_::GetSelf(nsIDOMDOMRequest * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMDOMRequest getInstalled (); */
NS_IMETHODIMP _MYCLASS_::GetInstalled(nsIDOMDOMRequest * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMDOMRequest getNotInstalled (); */
NS_IMETHODIMP _MYCLASS_::GetNotInstalled(nsIDOMDOMRequest * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute mozIDOMApplicationMgmt mgmt; */
NS_IMETHODIMP _MYCLASS_::GetMgmt(mozIDOMApplicationMgmt * *aMgmt)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMApplicationRegistry_h__ */
