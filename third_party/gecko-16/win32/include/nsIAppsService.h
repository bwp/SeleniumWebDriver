/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/interfaces/apps/nsIAppsService.idl
 */

#ifndef __gen_nsIAppsService_h__
#define __gen_nsIAppsService_h__


#ifndef __gen_domstubs_h__
#include "domstubs.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class mozIDOMApplication; /* forward declaration */

#define APPS_SERVICE_CID { 0x05072afa, 0x92fe, 0x45bf, { 0xae, 0x22, 0x39, 0xb6, 0x9c, 0x11, 0x70, 0x58 } }
#define APPS_SERVICE_CONTRACTID "@mozilla.org/AppsService;1"

/* starting interface:    nsIAppsService */
#define NS_IAPPSSERVICE_IID_STR "40e580e7-8891-4eb8-b514-0b5796af4df1"

#define NS_IAPPSSERVICE_IID \
  {0x40e580e7, 0x8891, 0x4eb8, \
    { 0xb5, 0x14, 0x0b, 0x57, 0x96, 0xaf, 0x4d, 0xf1 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIAppsService : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IAPPSSERVICE_IID)

  /* mozIDOMApplication getAppByManifestURL (in DOMString manifestURL); */
  NS_SCRIPTABLE NS_IMETHOD GetAppByManifestURL(const nsAString & manifestURL, mozIDOMApplication * *_retval NS_OUTPARAM) = 0;

  /* unsigned long getAppLocalIdByManifestURL (in DOMString manifestURL); */
  NS_SCRIPTABLE NS_IMETHOD GetAppLocalIdByManifestURL(const nsAString & manifestURL, PRUint32 *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIAppsService, NS_IAPPSSERVICE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIAPPSSERVICE \
  NS_SCRIPTABLE NS_IMETHOD GetAppByManifestURL(const nsAString & manifestURL, mozIDOMApplication * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetAppLocalIdByManifestURL(const nsAString & manifestURL, PRUint32 *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIAPPSSERVICE(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetAppByManifestURL(const nsAString & manifestURL, mozIDOMApplication * *_retval NS_OUTPARAM) { return _to GetAppByManifestURL(manifestURL, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetAppLocalIdByManifestURL(const nsAString & manifestURL, PRUint32 *_retval NS_OUTPARAM) { return _to GetAppLocalIdByManifestURL(manifestURL, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIAPPSSERVICE(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetAppByManifestURL(const nsAString & manifestURL, mozIDOMApplication * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAppByManifestURL(manifestURL, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetAppLocalIdByManifestURL(const nsAString & manifestURL, PRUint32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAppLocalIdByManifestURL(manifestURL, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsAppsService : public nsIAppsService
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIAPPSSERVICE

  nsAppsService();

private:
  ~nsAppsService();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsAppsService, nsIAppsService)

nsAppsService::nsAppsService()
{
  /* member initializers and constructor code */
}

nsAppsService::~nsAppsService()
{
  /* destructor code */
}

/* mozIDOMApplication getAppByManifestURL (in DOMString manifestURL); */
NS_IMETHODIMP nsAppsService::GetAppByManifestURL(const nsAString & manifestURL, mozIDOMApplication * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* unsigned long getAppLocalIdByManifestURL (in DOMString manifestURL); */
NS_IMETHODIMP nsAppsService::GetAppLocalIdByManifestURL(const nsAString & manifestURL, PRUint32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIAppsService_h__ */
