/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/interfaces/base/nsIDOMNavigator.idl
 */

#ifndef __gen_nsIDOMNavigator_h__
#define __gen_nsIDOMNavigator_h__


#ifndef __gen_domstubs_h__
#include "domstubs.h"
#endif

#include "jspubtd.h"

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIDOMNavigator */
#define NS_IDOMNAVIGATOR_IID_STR "e0737ed5-89c5-4fe3-891e-a75bf3a1bb55"

#define NS_IDOMNAVIGATOR_IID \
  {0xe0737ed5, 0x89c5, 0x4fe3, \
    { 0x89, 0x1e, 0xa7, 0x5b, 0xf3, 0xa1, 0xbb, 0x55 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMNavigator : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMNAVIGATOR_IID)

  /* readonly attribute DOMString appCodeName; */
  NS_SCRIPTABLE NS_IMETHOD GetAppCodeName(nsAString & aAppCodeName) = 0;

  /* readonly attribute DOMString appName; */
  NS_SCRIPTABLE NS_IMETHOD GetAppName(nsAString & aAppName) = 0;

  /* readonly attribute DOMString appVersion; */
  NS_SCRIPTABLE NS_IMETHOD GetAppVersion(nsAString & aAppVersion) = 0;

  /* readonly attribute DOMString language; */
  NS_SCRIPTABLE NS_IMETHOD GetLanguage(nsAString & aLanguage) = 0;

  /* readonly attribute nsIDOMMimeTypeArray mimeTypes; */
  NS_SCRIPTABLE NS_IMETHOD GetMimeTypes(nsIDOMMimeTypeArray * *aMimeTypes) = 0;

  /* readonly attribute DOMString platform; */
  NS_SCRIPTABLE NS_IMETHOD GetPlatform(nsAString & aPlatform) = 0;

  /* readonly attribute DOMString oscpu; */
  NS_SCRIPTABLE NS_IMETHOD GetOscpu(nsAString & aOscpu) = 0;

  /* readonly attribute DOMString vendor; */
  NS_SCRIPTABLE NS_IMETHOD GetVendor(nsAString & aVendor) = 0;

  /* readonly attribute DOMString vendorSub; */
  NS_SCRIPTABLE NS_IMETHOD GetVendorSub(nsAString & aVendorSub) = 0;

  /* readonly attribute DOMString product; */
  NS_SCRIPTABLE NS_IMETHOD GetProduct(nsAString & aProduct) = 0;

  /* readonly attribute DOMString productSub; */
  NS_SCRIPTABLE NS_IMETHOD GetProductSub(nsAString & aProductSub) = 0;

  /* readonly attribute nsIDOMPluginArray plugins; */
  NS_SCRIPTABLE NS_IMETHOD GetPlugins(nsIDOMPluginArray * *aPlugins) = 0;

  /* readonly attribute DOMString userAgent; */
  NS_SCRIPTABLE NS_IMETHOD GetUserAgent(nsAString & aUserAgent) = 0;

  /* readonly attribute boolean cookieEnabled; */
  NS_SCRIPTABLE NS_IMETHOD GetCookieEnabled(bool *aCookieEnabled) = 0;

  /* readonly attribute boolean onLine; */
  NS_SCRIPTABLE NS_IMETHOD GetOnLine(bool *aOnLine) = 0;

  /* readonly attribute DOMString buildID; */
  NS_SCRIPTABLE NS_IMETHOD GetBuildID(nsAString & aBuildID) = 0;

  /* readonly attribute DOMString doNotTrack; */
  NS_SCRIPTABLE NS_IMETHOD GetDoNotTrack(nsAString & aDoNotTrack) = 0;

  /* readonly attribute nsIDOMMozPowerManager mozPower; */
  NS_SCRIPTABLE NS_IMETHOD GetMozPower(nsIDOMMozPowerManager * *aMozPower) = 0;

  /* boolean javaEnabled (); */
  NS_SCRIPTABLE NS_IMETHOD JavaEnabled(bool *_retval NS_OUTPARAM) = 0;

  /* boolean taintEnabled (); */
  NS_SCRIPTABLE NS_IMETHOD TaintEnabled(bool *_retval NS_OUTPARAM) = 0;

  /* [implicit_jscontext] void mozVibrate (in jsval aPattern); */
  NS_SCRIPTABLE NS_IMETHOD MozVibrate(const JS::Value & aPattern, JSContext* cx) = 0;

  /* nsIDOMMozWakeLock requestWakeLock (in DOMString aTopic); */
  NS_SCRIPTABLE NS_IMETHOD RequestWakeLock(const nsAString & aTopic, nsIDOMMozWakeLock * *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMNavigator, NS_IDOMNAVIGATOR_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMNAVIGATOR \
  NS_SCRIPTABLE NS_IMETHOD GetAppCodeName(nsAString & aAppCodeName); \
  NS_SCRIPTABLE NS_IMETHOD GetAppName(nsAString & aAppName); \
  NS_SCRIPTABLE NS_IMETHOD GetAppVersion(nsAString & aAppVersion); \
  NS_SCRIPTABLE NS_IMETHOD GetLanguage(nsAString & aLanguage); \
  NS_SCRIPTABLE NS_IMETHOD GetMimeTypes(nsIDOMMimeTypeArray * *aMimeTypes); \
  NS_SCRIPTABLE NS_IMETHOD GetPlatform(nsAString & aPlatform); \
  NS_SCRIPTABLE NS_IMETHOD GetOscpu(nsAString & aOscpu); \
  NS_SCRIPTABLE NS_IMETHOD GetVendor(nsAString & aVendor); \
  NS_SCRIPTABLE NS_IMETHOD GetVendorSub(nsAString & aVendorSub); \
  NS_SCRIPTABLE NS_IMETHOD GetProduct(nsAString & aProduct); \
  NS_SCRIPTABLE NS_IMETHOD GetProductSub(nsAString & aProductSub); \
  NS_SCRIPTABLE NS_IMETHOD GetPlugins(nsIDOMPluginArray * *aPlugins); \
  NS_SCRIPTABLE NS_IMETHOD GetUserAgent(nsAString & aUserAgent); \
  NS_SCRIPTABLE NS_IMETHOD GetCookieEnabled(bool *aCookieEnabled); \
  NS_SCRIPTABLE NS_IMETHOD GetOnLine(bool *aOnLine); \
  NS_SCRIPTABLE NS_IMETHOD GetBuildID(nsAString & aBuildID); \
  NS_SCRIPTABLE NS_IMETHOD GetDoNotTrack(nsAString & aDoNotTrack); \
  NS_SCRIPTABLE NS_IMETHOD GetMozPower(nsIDOMMozPowerManager * *aMozPower); \
  NS_SCRIPTABLE NS_IMETHOD JavaEnabled(bool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD TaintEnabled(bool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD MozVibrate(const JS::Value & aPattern, JSContext* cx); \
  NS_SCRIPTABLE NS_IMETHOD RequestWakeLock(const nsAString & aTopic, nsIDOMMozWakeLock * *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMNAVIGATOR(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetAppCodeName(nsAString & aAppCodeName) { return _to GetAppCodeName(aAppCodeName); } \
  NS_SCRIPTABLE NS_IMETHOD GetAppName(nsAString & aAppName) { return _to GetAppName(aAppName); } \
  NS_SCRIPTABLE NS_IMETHOD GetAppVersion(nsAString & aAppVersion) { return _to GetAppVersion(aAppVersion); } \
  NS_SCRIPTABLE NS_IMETHOD GetLanguage(nsAString & aLanguage) { return _to GetLanguage(aLanguage); } \
  NS_SCRIPTABLE NS_IMETHOD GetMimeTypes(nsIDOMMimeTypeArray * *aMimeTypes) { return _to GetMimeTypes(aMimeTypes); } \
  NS_SCRIPTABLE NS_IMETHOD GetPlatform(nsAString & aPlatform) { return _to GetPlatform(aPlatform); } \
  NS_SCRIPTABLE NS_IMETHOD GetOscpu(nsAString & aOscpu) { return _to GetOscpu(aOscpu); } \
  NS_SCRIPTABLE NS_IMETHOD GetVendor(nsAString & aVendor) { return _to GetVendor(aVendor); } \
  NS_SCRIPTABLE NS_IMETHOD GetVendorSub(nsAString & aVendorSub) { return _to GetVendorSub(aVendorSub); } \
  NS_SCRIPTABLE NS_IMETHOD GetProduct(nsAString & aProduct) { return _to GetProduct(aProduct); } \
  NS_SCRIPTABLE NS_IMETHOD GetProductSub(nsAString & aProductSub) { return _to GetProductSub(aProductSub); } \
  NS_SCRIPTABLE NS_IMETHOD GetPlugins(nsIDOMPluginArray * *aPlugins) { return _to GetPlugins(aPlugins); } \
  NS_SCRIPTABLE NS_IMETHOD GetUserAgent(nsAString & aUserAgent) { return _to GetUserAgent(aUserAgent); } \
  NS_SCRIPTABLE NS_IMETHOD GetCookieEnabled(bool *aCookieEnabled) { return _to GetCookieEnabled(aCookieEnabled); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnLine(bool *aOnLine) { return _to GetOnLine(aOnLine); } \
  NS_SCRIPTABLE NS_IMETHOD GetBuildID(nsAString & aBuildID) { return _to GetBuildID(aBuildID); } \
  NS_SCRIPTABLE NS_IMETHOD GetDoNotTrack(nsAString & aDoNotTrack) { return _to GetDoNotTrack(aDoNotTrack); } \
  NS_SCRIPTABLE NS_IMETHOD GetMozPower(nsIDOMMozPowerManager * *aMozPower) { return _to GetMozPower(aMozPower); } \
  NS_SCRIPTABLE NS_IMETHOD JavaEnabled(bool *_retval NS_OUTPARAM) { return _to JavaEnabled(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD TaintEnabled(bool *_retval NS_OUTPARAM) { return _to TaintEnabled(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD MozVibrate(const JS::Value & aPattern, JSContext* cx) { return _to MozVibrate(aPattern, cx); } \
  NS_SCRIPTABLE NS_IMETHOD RequestWakeLock(const nsAString & aTopic, nsIDOMMozWakeLock * *_retval NS_OUTPARAM) { return _to RequestWakeLock(aTopic, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMNAVIGATOR(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetAppCodeName(nsAString & aAppCodeName) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAppCodeName(aAppCodeName); } \
  NS_SCRIPTABLE NS_IMETHOD GetAppName(nsAString & aAppName) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAppName(aAppName); } \
  NS_SCRIPTABLE NS_IMETHOD GetAppVersion(nsAString & aAppVersion) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAppVersion(aAppVersion); } \
  NS_SCRIPTABLE NS_IMETHOD GetLanguage(nsAString & aLanguage) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLanguage(aLanguage); } \
  NS_SCRIPTABLE NS_IMETHOD GetMimeTypes(nsIDOMMimeTypeArray * *aMimeTypes) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMimeTypes(aMimeTypes); } \
  NS_SCRIPTABLE NS_IMETHOD GetPlatform(nsAString & aPlatform) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPlatform(aPlatform); } \
  NS_SCRIPTABLE NS_IMETHOD GetOscpu(nsAString & aOscpu) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOscpu(aOscpu); } \
  NS_SCRIPTABLE NS_IMETHOD GetVendor(nsAString & aVendor) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetVendor(aVendor); } \
  NS_SCRIPTABLE NS_IMETHOD GetVendorSub(nsAString & aVendorSub) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetVendorSub(aVendorSub); } \
  NS_SCRIPTABLE NS_IMETHOD GetProduct(nsAString & aProduct) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetProduct(aProduct); } \
  NS_SCRIPTABLE NS_IMETHOD GetProductSub(nsAString & aProductSub) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetProductSub(aProductSub); } \
  NS_SCRIPTABLE NS_IMETHOD GetPlugins(nsIDOMPluginArray * *aPlugins) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPlugins(aPlugins); } \
  NS_SCRIPTABLE NS_IMETHOD GetUserAgent(nsAString & aUserAgent) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetUserAgent(aUserAgent); } \
  NS_SCRIPTABLE NS_IMETHOD GetCookieEnabled(bool *aCookieEnabled) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCookieEnabled(aCookieEnabled); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnLine(bool *aOnLine) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOnLine(aOnLine); } \
  NS_SCRIPTABLE NS_IMETHOD GetBuildID(nsAString & aBuildID) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetBuildID(aBuildID); } \
  NS_SCRIPTABLE NS_IMETHOD GetDoNotTrack(nsAString & aDoNotTrack) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDoNotTrack(aDoNotTrack); } \
  NS_SCRIPTABLE NS_IMETHOD GetMozPower(nsIDOMMozPowerManager * *aMozPower) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMozPower(aMozPower); } \
  NS_SCRIPTABLE NS_IMETHOD JavaEnabled(bool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->JavaEnabled(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD TaintEnabled(bool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->TaintEnabled(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD MozVibrate(const JS::Value & aPattern, JSContext* cx) { return !_to ? NS_ERROR_NULL_POINTER : _to->MozVibrate(aPattern, cx); } \
  NS_SCRIPTABLE NS_IMETHOD RequestWakeLock(const nsAString & aTopic, nsIDOMMozWakeLock * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->RequestWakeLock(aTopic, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMNavigator : public nsIDOMNavigator
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMNAVIGATOR

  nsDOMNavigator();

private:
  ~nsDOMNavigator();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMNavigator, nsIDOMNavigator)

nsDOMNavigator::nsDOMNavigator()
{
  /* member initializers and constructor code */
}

nsDOMNavigator::~nsDOMNavigator()
{
  /* destructor code */
}

/* readonly attribute DOMString appCodeName; */
NS_IMETHODIMP nsDOMNavigator::GetAppCodeName(nsAString & aAppCodeName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString appName; */
NS_IMETHODIMP nsDOMNavigator::GetAppName(nsAString & aAppName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString appVersion; */
NS_IMETHODIMP nsDOMNavigator::GetAppVersion(nsAString & aAppVersion)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString language; */
NS_IMETHODIMP nsDOMNavigator::GetLanguage(nsAString & aLanguage)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMMimeTypeArray mimeTypes; */
NS_IMETHODIMP nsDOMNavigator::GetMimeTypes(nsIDOMMimeTypeArray * *aMimeTypes)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString platform; */
NS_IMETHODIMP nsDOMNavigator::GetPlatform(nsAString & aPlatform)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString oscpu; */
NS_IMETHODIMP nsDOMNavigator::GetOscpu(nsAString & aOscpu)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString vendor; */
NS_IMETHODIMP nsDOMNavigator::GetVendor(nsAString & aVendor)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString vendorSub; */
NS_IMETHODIMP nsDOMNavigator::GetVendorSub(nsAString & aVendorSub)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString product; */
NS_IMETHODIMP nsDOMNavigator::GetProduct(nsAString & aProduct)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString productSub; */
NS_IMETHODIMP nsDOMNavigator::GetProductSub(nsAString & aProductSub)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMPluginArray plugins; */
NS_IMETHODIMP nsDOMNavigator::GetPlugins(nsIDOMPluginArray * *aPlugins)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString userAgent; */
NS_IMETHODIMP nsDOMNavigator::GetUserAgent(nsAString & aUserAgent)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean cookieEnabled; */
NS_IMETHODIMP nsDOMNavigator::GetCookieEnabled(bool *aCookieEnabled)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean onLine; */
NS_IMETHODIMP nsDOMNavigator::GetOnLine(bool *aOnLine)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString buildID; */
NS_IMETHODIMP nsDOMNavigator::GetBuildID(nsAString & aBuildID)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString doNotTrack; */
NS_IMETHODIMP nsDOMNavigator::GetDoNotTrack(nsAString & aDoNotTrack)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMMozPowerManager mozPower; */
NS_IMETHODIMP nsDOMNavigator::GetMozPower(nsIDOMMozPowerManager * *aMozPower)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean javaEnabled (); */
NS_IMETHODIMP nsDOMNavigator::JavaEnabled(bool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean taintEnabled (); */
NS_IMETHODIMP nsDOMNavigator::TaintEnabled(bool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] void mozVibrate (in jsval aPattern); */
NS_IMETHODIMP nsDOMNavigator::MozVibrate(const JS::Value & aPattern, JSContext* cx)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMMozWakeLock requestWakeLock (in DOMString aTopic); */
NS_IMETHODIMP nsDOMNavigator::RequestWakeLock(const nsAString & aTopic, nsIDOMMozWakeLock * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMNavigator_h__ */
