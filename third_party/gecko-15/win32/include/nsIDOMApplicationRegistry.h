/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/interfaces/apps/nsIDOMApplicationRegistry.idl
 */

#ifndef __gen_nsIDOMApplicationRegistry_h__
#define __gen_nsIDOMApplicationRegistry_h__


#ifndef __gen_domstubs_h__
#include "domstubs.h"
#endif

#ifndef __gen_nsIArray_h__
#include "nsIArray.h"
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


/* starting interface:    mozIDOMApplication */
#define MOZIDOMAPPLICATION_IID_STR "b70b84f1-7ac9-4a92-bc32-8b6a7eb7879e"

#define MOZIDOMAPPLICATION_IID \
  {0xb70b84f1, 0x7ac9, 0x4a92, \
    { 0xbc, 0x32, 0x8b, 0x6a, 0x7e, 0xb7, 0x87, 0x9e }}

class NS_NO_VTABLE NS_SCRIPTABLE mozIDOMApplication : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(MOZIDOMAPPLICATION_IID)

  /* readonly attribute jsval manifest; */
  NS_SCRIPTABLE NS_IMETHOD GetManifest(JS::Value *aManifest) = 0;

  /* readonly attribute DOMString manifestURL; */
  NS_SCRIPTABLE NS_IMETHOD GetManifestURL(nsAString & aManifestURL) = 0;

  /* readonly attribute nsIArray receipts; */
  NS_SCRIPTABLE NS_IMETHOD GetReceipts(nsIArray * *aReceipts) = 0;

  /* readonly attribute DOMString origin; */
  NS_SCRIPTABLE NS_IMETHOD GetOrigin(nsAString & aOrigin) = 0;

  /* readonly attribute DOMString installOrigin; */
  NS_SCRIPTABLE NS_IMETHOD GetInstallOrigin(nsAString & aInstallOrigin) = 0;

  /* readonly attribute unsigned long installTime; */
  NS_SCRIPTABLE NS_IMETHOD GetInstallTime(PRUint32 *aInstallTime) = 0;

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
  NS_SCRIPTABLE NS_IMETHOD GetReceipts(nsIArray * *aReceipts); \
  NS_SCRIPTABLE NS_IMETHOD GetOrigin(nsAString & aOrigin); \
  NS_SCRIPTABLE NS_IMETHOD GetInstallOrigin(nsAString & aInstallOrigin); \
  NS_SCRIPTABLE NS_IMETHOD GetInstallTime(PRUint32 *aInstallTime); \
  NS_SCRIPTABLE NS_IMETHOD Launch(const nsAString & startPoint, nsIDOMDOMRequest * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Uninstall(nsIDOMDOMRequest * *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_MOZIDOMAPPLICATION(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetManifest(JS::Value *aManifest) { return _to GetManifest(aManifest); } \
  NS_SCRIPTABLE NS_IMETHOD GetManifestURL(nsAString & aManifestURL) { return _to GetManifestURL(aManifestURL); } \
  NS_SCRIPTABLE NS_IMETHOD GetReceipts(nsIArray * *aReceipts) { return _to GetReceipts(aReceipts); } \
  NS_SCRIPTABLE NS_IMETHOD GetOrigin(nsAString & aOrigin) { return _to GetOrigin(aOrigin); } \
  NS_SCRIPTABLE NS_IMETHOD GetInstallOrigin(nsAString & aInstallOrigin) { return _to GetInstallOrigin(aInstallOrigin); } \
  NS_SCRIPTABLE NS_IMETHOD GetInstallTime(PRUint32 *aInstallTime) { return _to GetInstallTime(aInstallTime); } \
  NS_SCRIPTABLE NS_IMETHOD Launch(const nsAString & startPoint, nsIDOMDOMRequest * *_retval NS_OUTPARAM) { return _to Launch(startPoint, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Uninstall(nsIDOMDOMRequest * *_retval NS_OUTPARAM) { return _to Uninstall(_retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_MOZIDOMAPPLICATION(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetManifest(JS::Value *aManifest) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetManifest(aManifest); } \
  NS_SCRIPTABLE NS_IMETHOD GetManifestURL(nsAString & aManifestURL) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetManifestURL(aManifestURL); } \
  NS_SCRIPTABLE NS_IMETHOD GetReceipts(nsIArray * *aReceipts) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetReceipts(aReceipts); } \
  NS_SCRIPTABLE NS_IMETHOD GetOrigin(nsAString & aOrigin) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOrigin(aOrigin); } \
  NS_SCRIPTABLE NS_IMETHOD GetInstallOrigin(nsAString & aInstallOrigin) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetInstallOrigin(aInstallOrigin); } \
  NS_SCRIPTABLE NS_IMETHOD GetInstallTime(PRUint32 *aInstallTime) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetInstallTime(aInstallTime); } \
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

/* readonly attribute nsIArray receipts; */
NS_IMETHODIMP _MYCLASS_::GetReceipts(nsIArray * *aReceipts)
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

/* readonly attribute unsigned long installTime; */
NS_IMETHODIMP _MYCLASS_::GetInstallTime(PRUint32 *aInstallTime)
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


/* starting interface:    mozIDOMApplicationEvent */
#define MOZIDOMAPPLICATIONEVENT_IID_STR "870bfbdc-3e13-4042-99dd-18e25720782d"

#define MOZIDOMAPPLICATIONEVENT_IID \
  {0x870bfbdc, 0x3e13, 0x4042, \
    { 0x99, 0xdd, 0x18, 0xe2, 0x57, 0x20, 0x78, 0x2d }}

class NS_NO_VTABLE NS_SCRIPTABLE mozIDOMApplicationEvent : public nsIDOMEvent {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(MOZIDOMAPPLICATIONEVENT_IID)

  /* readonly attribute mozIDOMApplication application; */
  NS_SCRIPTABLE NS_IMETHOD GetApplication(mozIDOMApplication * *aApplication) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(mozIDOMApplicationEvent, MOZIDOMAPPLICATIONEVENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_MOZIDOMAPPLICATIONEVENT \
  NS_SCRIPTABLE NS_IMETHOD GetApplication(mozIDOMApplication * *aApplication); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_MOZIDOMAPPLICATIONEVENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetApplication(mozIDOMApplication * *aApplication) { return _to GetApplication(aApplication); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_MOZIDOMAPPLICATIONEVENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetApplication(mozIDOMApplication * *aApplication) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetApplication(aApplication); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public mozIDOMApplicationEvent
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_MOZIDOMAPPLICATIONEVENT

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, mozIDOMApplicationEvent)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* readonly attribute mozIDOMApplication application; */
NS_IMETHODIMP _MYCLASS_::GetApplication(mozIDOMApplication * *aApplication)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    mozIDOMApplicationMgmt */
#define MOZIDOMAPPLICATIONMGMT_IID_STR "a82771f6-ba46-4073-9e6e-f1ad3f42b1f6"

#define MOZIDOMAPPLICATIONMGMT_IID \
  {0xa82771f6, 0xba46, 0x4073, \
    { 0x9e, 0x6e, 0xf1, 0xad, 0x3f, 0x42, 0xb1, 0xf6 }}

class NS_NO_VTABLE NS_SCRIPTABLE mozIDOMApplicationMgmt : public nsIDOMEventTarget {
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
#define MOZIDOMAPPLICATIONREGISTRY_IID_STR "f6929871-288b-4613-9a37-9a150760ac50"

#define MOZIDOMAPPLICATIONREGISTRY_IID \
  {0xf6929871, 0x288b, 0x4613, \
    { 0x9a, 0x37, 0x9a, 0x15, 0x07, 0x60, 0xac, 0x50 }}

class NS_NO_VTABLE NS_SCRIPTABLE mozIDOMApplicationRegistry : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(MOZIDOMAPPLICATIONREGISTRY_IID)

  /* nsIDOMDOMRequest install (in DOMString manifestUrl, [optional] in jsval parameters); */
  NS_SCRIPTABLE NS_IMETHOD Install(const nsAString & manifestUrl, const JS::Value & parameters, nsIDOMDOMRequest * *_retval NS_OUTPARAM) = 0;

  /* nsIDOMDOMRequest getSelf (); */
  NS_SCRIPTABLE NS_IMETHOD GetSelf(nsIDOMDOMRequest * *_retval NS_OUTPARAM) = 0;

  /* nsIDOMDOMRequest getInstalled (); */
  NS_SCRIPTABLE NS_IMETHOD GetInstalled(nsIDOMDOMRequest * *_retval NS_OUTPARAM) = 0;

  /* readonly attribute mozIDOMApplicationMgmt mgmt; */
  NS_SCRIPTABLE NS_IMETHOD GetMgmt(mozIDOMApplicationMgmt * *aMgmt) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(mozIDOMApplicationRegistry, MOZIDOMAPPLICATIONREGISTRY_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_MOZIDOMAPPLICATIONREGISTRY \
  NS_SCRIPTABLE NS_IMETHOD Install(const nsAString & manifestUrl, const JS::Value & parameters, nsIDOMDOMRequest * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetSelf(nsIDOMDOMRequest * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetInstalled(nsIDOMDOMRequest * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetMgmt(mozIDOMApplicationMgmt * *aMgmt); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_MOZIDOMAPPLICATIONREGISTRY(_to) \
  NS_SCRIPTABLE NS_IMETHOD Install(const nsAString & manifestUrl, const JS::Value & parameters, nsIDOMDOMRequest * *_retval NS_OUTPARAM) { return _to Install(manifestUrl, parameters, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetSelf(nsIDOMDOMRequest * *_retval NS_OUTPARAM) { return _to GetSelf(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetInstalled(nsIDOMDOMRequest * *_retval NS_OUTPARAM) { return _to GetInstalled(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetMgmt(mozIDOMApplicationMgmt * *aMgmt) { return _to GetMgmt(aMgmt); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_MOZIDOMAPPLICATIONREGISTRY(_to) \
  NS_SCRIPTABLE NS_IMETHOD Install(const nsAString & manifestUrl, const JS::Value & parameters, nsIDOMDOMRequest * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Install(manifestUrl, parameters, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetSelf(nsIDOMDOMRequest * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSelf(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetInstalled(nsIDOMDOMRequest * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetInstalled(_retval); } \
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

/* readonly attribute mozIDOMApplicationMgmt mgmt; */
NS_IMETHODIMP _MYCLASS_::GetMgmt(mozIDOMApplicationMgmt * *aMgmt)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMApplicationRegistry_h__ */
