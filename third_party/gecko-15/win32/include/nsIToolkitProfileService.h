/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/toolkit/profile/nsIToolkitProfileService.idl
 */

#ifndef __gen_nsIToolkitProfileService_h__
#define __gen_nsIToolkitProfileService_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsISimpleEnumerator; /* forward declaration */

class nsIFile; /* forward declaration */

class nsILocalFile; /* forward declaration */

class nsIToolkitProfile; /* forward declaration */

class nsIProfileLock; /* forward declaration */


/* starting interface:    nsIToolkitProfileService */
#define NS_ITOOLKITPROFILESERVICE_IID_STR "b619f83d-8317-473c-b342-67905993fdc7"

#define NS_ITOOLKITPROFILESERVICE_IID \
  {0xb619f83d, 0x8317, 0x473c, \
    { 0xb3, 0x42, 0x67, 0x90, 0x59, 0x93, 0xfd, 0xc7 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIToolkitProfileService : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ITOOLKITPROFILESERVICE_IID)

  /* attribute boolean startWithLastProfile; */
  NS_SCRIPTABLE NS_IMETHOD GetStartWithLastProfile(bool *aStartWithLastProfile) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetStartWithLastProfile(bool aStartWithLastProfile) = 0;

  /* attribute boolean startOffline; */
  NS_SCRIPTABLE NS_IMETHOD GetStartOffline(bool *aStartOffline) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetStartOffline(bool aStartOffline) = 0;

  /* readonly attribute nsISimpleEnumerator profiles; */
  NS_SCRIPTABLE NS_IMETHOD GetProfiles(nsISimpleEnumerator * *aProfiles) = 0;

  /* attribute nsIToolkitProfile selectedProfile; */
  NS_SCRIPTABLE NS_IMETHOD GetSelectedProfile(nsIToolkitProfile * *aSelectedProfile) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetSelectedProfile(nsIToolkitProfile *aSelectedProfile) = 0;

  /* nsIToolkitProfile getProfileByName (in AUTF8String aName); */
  NS_SCRIPTABLE NS_IMETHOD GetProfileByName(const nsACString & aName, nsIToolkitProfile * *_retval NS_OUTPARAM) = 0;

  /* nsIProfileLock lockProfilePath (in nsILocalFile aDirectory, in nsILocalFile aTempDirectory); */
  NS_SCRIPTABLE NS_IMETHOD LockProfilePath(nsILocalFile *aDirectory, nsILocalFile *aTempDirectory, nsIProfileLock * *_retval NS_OUTPARAM) = 0;

  /* nsIToolkitProfile createProfile (in nsILocalFile aRootDir, in nsILocalFile aTempDir, in AUTF8String aName); */
  NS_SCRIPTABLE NS_IMETHOD CreateProfile(nsILocalFile *aRootDir, nsILocalFile *aTempDir, const nsACString & aName, nsIToolkitProfile * *_retval NS_OUTPARAM) = 0;

  /* nsIToolkitProfile createDefaultProfileForApp (in AUTF8String aProfileName, in AUTF8String aAppName, in AUTF8String aVendorName, [optional] in nsIFile aProfileDefaultsDir); */
  NS_SCRIPTABLE NS_IMETHOD CreateDefaultProfileForApp(const nsACString & aProfileName, const nsACString & aAppName, const nsACString & aVendorName, nsIFile *aProfileDefaultsDir, nsIToolkitProfile * *_retval NS_OUTPARAM) = 0;

  /* readonly attribute unsigned long profileCount; */
  NS_SCRIPTABLE NS_IMETHOD GetProfileCount(PRUint32 *aProfileCount) = 0;

  /* void flush (); */
  NS_SCRIPTABLE NS_IMETHOD Flush(void) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIToolkitProfileService, NS_ITOOLKITPROFILESERVICE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSITOOLKITPROFILESERVICE \
  NS_SCRIPTABLE NS_IMETHOD GetStartWithLastProfile(bool *aStartWithLastProfile); \
  NS_SCRIPTABLE NS_IMETHOD SetStartWithLastProfile(bool aStartWithLastProfile); \
  NS_SCRIPTABLE NS_IMETHOD GetStartOffline(bool *aStartOffline); \
  NS_SCRIPTABLE NS_IMETHOD SetStartOffline(bool aStartOffline); \
  NS_SCRIPTABLE NS_IMETHOD GetProfiles(nsISimpleEnumerator * *aProfiles); \
  NS_SCRIPTABLE NS_IMETHOD GetSelectedProfile(nsIToolkitProfile * *aSelectedProfile); \
  NS_SCRIPTABLE NS_IMETHOD SetSelectedProfile(nsIToolkitProfile *aSelectedProfile); \
  NS_SCRIPTABLE NS_IMETHOD GetProfileByName(const nsACString & aName, nsIToolkitProfile * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD LockProfilePath(nsILocalFile *aDirectory, nsILocalFile *aTempDirectory, nsIProfileLock * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD CreateProfile(nsILocalFile *aRootDir, nsILocalFile *aTempDir, const nsACString & aName, nsIToolkitProfile * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD CreateDefaultProfileForApp(const nsACString & aProfileName, const nsACString & aAppName, const nsACString & aVendorName, nsIFile *aProfileDefaultsDir, nsIToolkitProfile * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetProfileCount(PRUint32 *aProfileCount); \
  NS_SCRIPTABLE NS_IMETHOD Flush(void); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSITOOLKITPROFILESERVICE(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetStartWithLastProfile(bool *aStartWithLastProfile) { return _to GetStartWithLastProfile(aStartWithLastProfile); } \
  NS_SCRIPTABLE NS_IMETHOD SetStartWithLastProfile(bool aStartWithLastProfile) { return _to SetStartWithLastProfile(aStartWithLastProfile); } \
  NS_SCRIPTABLE NS_IMETHOD GetStartOffline(bool *aStartOffline) { return _to GetStartOffline(aStartOffline); } \
  NS_SCRIPTABLE NS_IMETHOD SetStartOffline(bool aStartOffline) { return _to SetStartOffline(aStartOffline); } \
  NS_SCRIPTABLE NS_IMETHOD GetProfiles(nsISimpleEnumerator * *aProfiles) { return _to GetProfiles(aProfiles); } \
  NS_SCRIPTABLE NS_IMETHOD GetSelectedProfile(nsIToolkitProfile * *aSelectedProfile) { return _to GetSelectedProfile(aSelectedProfile); } \
  NS_SCRIPTABLE NS_IMETHOD SetSelectedProfile(nsIToolkitProfile *aSelectedProfile) { return _to SetSelectedProfile(aSelectedProfile); } \
  NS_SCRIPTABLE NS_IMETHOD GetProfileByName(const nsACString & aName, nsIToolkitProfile * *_retval NS_OUTPARAM) { return _to GetProfileByName(aName, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD LockProfilePath(nsILocalFile *aDirectory, nsILocalFile *aTempDirectory, nsIProfileLock * *_retval NS_OUTPARAM) { return _to LockProfilePath(aDirectory, aTempDirectory, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD CreateProfile(nsILocalFile *aRootDir, nsILocalFile *aTempDir, const nsACString & aName, nsIToolkitProfile * *_retval NS_OUTPARAM) { return _to CreateProfile(aRootDir, aTempDir, aName, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD CreateDefaultProfileForApp(const nsACString & aProfileName, const nsACString & aAppName, const nsACString & aVendorName, nsIFile *aProfileDefaultsDir, nsIToolkitProfile * *_retval NS_OUTPARAM) { return _to CreateDefaultProfileForApp(aProfileName, aAppName, aVendorName, aProfileDefaultsDir, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetProfileCount(PRUint32 *aProfileCount) { return _to GetProfileCount(aProfileCount); } \
  NS_SCRIPTABLE NS_IMETHOD Flush(void) { return _to Flush(); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSITOOLKITPROFILESERVICE(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetStartWithLastProfile(bool *aStartWithLastProfile) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetStartWithLastProfile(aStartWithLastProfile); } \
  NS_SCRIPTABLE NS_IMETHOD SetStartWithLastProfile(bool aStartWithLastProfile) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetStartWithLastProfile(aStartWithLastProfile); } \
  NS_SCRIPTABLE NS_IMETHOD GetStartOffline(bool *aStartOffline) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetStartOffline(aStartOffline); } \
  NS_SCRIPTABLE NS_IMETHOD SetStartOffline(bool aStartOffline) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetStartOffline(aStartOffline); } \
  NS_SCRIPTABLE NS_IMETHOD GetProfiles(nsISimpleEnumerator * *aProfiles) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetProfiles(aProfiles); } \
  NS_SCRIPTABLE NS_IMETHOD GetSelectedProfile(nsIToolkitProfile * *aSelectedProfile) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSelectedProfile(aSelectedProfile); } \
  NS_SCRIPTABLE NS_IMETHOD SetSelectedProfile(nsIToolkitProfile *aSelectedProfile) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSelectedProfile(aSelectedProfile); } \
  NS_SCRIPTABLE NS_IMETHOD GetProfileByName(const nsACString & aName, nsIToolkitProfile * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetProfileByName(aName, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD LockProfilePath(nsILocalFile *aDirectory, nsILocalFile *aTempDirectory, nsIProfileLock * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->LockProfilePath(aDirectory, aTempDirectory, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD CreateProfile(nsILocalFile *aRootDir, nsILocalFile *aTempDir, const nsACString & aName, nsIToolkitProfile * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->CreateProfile(aRootDir, aTempDir, aName, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD CreateDefaultProfileForApp(const nsACString & aProfileName, const nsACString & aAppName, const nsACString & aVendorName, nsIFile *aProfileDefaultsDir, nsIToolkitProfile * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->CreateDefaultProfileForApp(aProfileName, aAppName, aVendorName, aProfileDefaultsDir, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetProfileCount(PRUint32 *aProfileCount) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetProfileCount(aProfileCount); } \
  NS_SCRIPTABLE NS_IMETHOD Flush(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Flush(); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsToolkitProfileService : public nsIToolkitProfileService
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSITOOLKITPROFILESERVICE

  nsToolkitProfileService();

private:
  ~nsToolkitProfileService();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsToolkitProfileService, nsIToolkitProfileService)

nsToolkitProfileService::nsToolkitProfileService()
{
  /* member initializers and constructor code */
}

nsToolkitProfileService::~nsToolkitProfileService()
{
  /* destructor code */
}

/* attribute boolean startWithLastProfile; */
NS_IMETHODIMP nsToolkitProfileService::GetStartWithLastProfile(bool *aStartWithLastProfile)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsToolkitProfileService::SetStartWithLastProfile(bool aStartWithLastProfile)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean startOffline; */
NS_IMETHODIMP nsToolkitProfileService::GetStartOffline(bool *aStartOffline)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsToolkitProfileService::SetStartOffline(bool aStartOffline)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsISimpleEnumerator profiles; */
NS_IMETHODIMP nsToolkitProfileService::GetProfiles(nsISimpleEnumerator * *aProfiles)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIToolkitProfile selectedProfile; */
NS_IMETHODIMP nsToolkitProfileService::GetSelectedProfile(nsIToolkitProfile * *aSelectedProfile)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsToolkitProfileService::SetSelectedProfile(nsIToolkitProfile *aSelectedProfile)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIToolkitProfile getProfileByName (in AUTF8String aName); */
NS_IMETHODIMP nsToolkitProfileService::GetProfileByName(const nsACString & aName, nsIToolkitProfile * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIProfileLock lockProfilePath (in nsILocalFile aDirectory, in nsILocalFile aTempDirectory); */
NS_IMETHODIMP nsToolkitProfileService::LockProfilePath(nsILocalFile *aDirectory, nsILocalFile *aTempDirectory, nsIProfileLock * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIToolkitProfile createProfile (in nsILocalFile aRootDir, in nsILocalFile aTempDir, in AUTF8String aName); */
NS_IMETHODIMP nsToolkitProfileService::CreateProfile(nsILocalFile *aRootDir, nsILocalFile *aTempDir, const nsACString & aName, nsIToolkitProfile * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIToolkitProfile createDefaultProfileForApp (in AUTF8String aProfileName, in AUTF8String aAppName, in AUTF8String aVendorName, [optional] in nsIFile aProfileDefaultsDir); */
NS_IMETHODIMP nsToolkitProfileService::CreateDefaultProfileForApp(const nsACString & aProfileName, const nsACString & aAppName, const nsACString & aVendorName, nsIFile *aProfileDefaultsDir, nsIToolkitProfile * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long profileCount; */
NS_IMETHODIMP nsToolkitProfileService::GetProfileCount(PRUint32 *aProfileCount)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void flush (); */
NS_IMETHODIMP nsToolkitProfileService::Flush()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif

#define NS_PROFILESERVICE_CONTRACTID "@mozilla.org/toolkit/profile-service;1"

#endif /* __gen_nsIToolkitProfileService_h__ */
