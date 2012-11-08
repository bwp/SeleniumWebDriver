/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/uriloader/exthandler/nsIExternalHelperAppService.idl
 */

#ifndef __gen_nsIExternalHelperAppService_h__
#define __gen_nsIExternalHelperAppService_h__


#ifndef __gen_nsICancelable_h__
#include "nsICancelable.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIURI; /* forward declaration */

class nsIRequest; /* forward declaration */

class nsIStreamListener; /* forward declaration */

class nsIFile; /* forward declaration */

class nsIMIMEInfo; /* forward declaration */

class nsIWebProgressListener2; /* forward declaration */

class nsIInterfaceRequestor; /* forward declaration */


/* starting interface:    nsIExternalHelperAppService */
#define NS_IEXTERNALHELPERAPPSERVICE_IID_STR "9e456297-ba3e-42b1-92bd-b7db014268cb"

#define NS_IEXTERNALHELPERAPPSERVICE_IID \
  {0x9e456297, 0xba3e, 0x42b1, \
    { 0x92, 0xbd, 0xb7, 0xdb, 0x01, 0x42, 0x68, 0xcb }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIExternalHelperAppService : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IEXTERNALHELPERAPPSERVICE_IID)

  /* nsIStreamListener doContent (in ACString aMimeContentType, in nsIRequest aRequest, in nsIInterfaceRequestor aWindowContext, in boolean aForceSave); */
  NS_SCRIPTABLE NS_IMETHOD DoContent(const nsACString & aMimeContentType, nsIRequest *aRequest, nsIInterfaceRequestor *aWindowContext, bool aForceSave, nsIStreamListener * *_retval NS_OUTPARAM) = 0;

  /* boolean applyDecodingForExtension (in AUTF8String aExtension, in ACString aEncodingType); */
  NS_SCRIPTABLE NS_IMETHOD ApplyDecodingForExtension(const nsACString & aExtension, const nsACString & aEncodingType, bool *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIExternalHelperAppService, NS_IEXTERNALHELPERAPPSERVICE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIEXTERNALHELPERAPPSERVICE \
  NS_SCRIPTABLE NS_IMETHOD DoContent(const nsACString & aMimeContentType, nsIRequest *aRequest, nsIInterfaceRequestor *aWindowContext, bool aForceSave, nsIStreamListener * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD ApplyDecodingForExtension(const nsACString & aExtension, const nsACString & aEncodingType, bool *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIEXTERNALHELPERAPPSERVICE(_to) \
  NS_SCRIPTABLE NS_IMETHOD DoContent(const nsACString & aMimeContentType, nsIRequest *aRequest, nsIInterfaceRequestor *aWindowContext, bool aForceSave, nsIStreamListener * *_retval NS_OUTPARAM) { return _to DoContent(aMimeContentType, aRequest, aWindowContext, aForceSave, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ApplyDecodingForExtension(const nsACString & aExtension, const nsACString & aEncodingType, bool *_retval NS_OUTPARAM) { return _to ApplyDecodingForExtension(aExtension, aEncodingType, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIEXTERNALHELPERAPPSERVICE(_to) \
  NS_SCRIPTABLE NS_IMETHOD DoContent(const nsACString & aMimeContentType, nsIRequest *aRequest, nsIInterfaceRequestor *aWindowContext, bool aForceSave, nsIStreamListener * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->DoContent(aMimeContentType, aRequest, aWindowContext, aForceSave, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ApplyDecodingForExtension(const nsACString & aExtension, const nsACString & aEncodingType, bool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->ApplyDecodingForExtension(aExtension, aEncodingType, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsExternalHelperAppService : public nsIExternalHelperAppService
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIEXTERNALHELPERAPPSERVICE

  nsExternalHelperAppService();

private:
  ~nsExternalHelperAppService();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsExternalHelperAppService, nsIExternalHelperAppService)

nsExternalHelperAppService::nsExternalHelperAppService()
{
  /* member initializers and constructor code */
}

nsExternalHelperAppService::~nsExternalHelperAppService()
{
  /* destructor code */
}

/* nsIStreamListener doContent (in ACString aMimeContentType, in nsIRequest aRequest, in nsIInterfaceRequestor aWindowContext, in boolean aForceSave); */
NS_IMETHODIMP nsExternalHelperAppService::DoContent(const nsACString & aMimeContentType, nsIRequest *aRequest, nsIInterfaceRequestor *aWindowContext, bool aForceSave, nsIStreamListener * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean applyDecodingForExtension (in AUTF8String aExtension, in ACString aEncodingType); */
NS_IMETHODIMP nsExternalHelperAppService::ApplyDecodingForExtension(const nsACString & aExtension, const nsACString & aEncodingType, bool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsPIExternalAppLauncher */
#define NS_PIEXTERNALAPPLAUNCHER_IID_STR "d0b5d7d3-9565-403d-9fb5-e5089c4567c6"

#define NS_PIEXTERNALAPPLAUNCHER_IID \
  {0xd0b5d7d3, 0x9565, 0x403d, \
    { 0x9f, 0xb5, 0xe5, 0x08, 0x9c, 0x45, 0x67, 0xc6 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsPIExternalAppLauncher : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_PIEXTERNALAPPLAUNCHER_IID)

  /* void deleteTemporaryFileOnExit (in nsIFile aTemporaryFile); */
  NS_SCRIPTABLE NS_IMETHOD DeleteTemporaryFileOnExit(nsIFile *aTemporaryFile) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsPIExternalAppLauncher, NS_PIEXTERNALAPPLAUNCHER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSPIEXTERNALAPPLAUNCHER \
  NS_SCRIPTABLE NS_IMETHOD DeleteTemporaryFileOnExit(nsIFile *aTemporaryFile); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSPIEXTERNALAPPLAUNCHER(_to) \
  NS_SCRIPTABLE NS_IMETHOD DeleteTemporaryFileOnExit(nsIFile *aTemporaryFile) { return _to DeleteTemporaryFileOnExit(aTemporaryFile); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSPIEXTERNALAPPLAUNCHER(_to) \
  NS_SCRIPTABLE NS_IMETHOD DeleteTemporaryFileOnExit(nsIFile *aTemporaryFile) { return !_to ? NS_ERROR_NULL_POINTER : _to->DeleteTemporaryFileOnExit(aTemporaryFile); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public nsPIExternalAppLauncher
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSPIEXTERNALAPPLAUNCHER

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, nsPIExternalAppLauncher)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* void deleteTemporaryFileOnExit (in nsIFile aTemporaryFile); */
NS_IMETHODIMP _MYCLASS_::DeleteTemporaryFileOnExit(nsIFile *aTemporaryFile)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIHelperAppLauncher */
#define NS_IHELPERAPPLAUNCHER_IID_STR "d9a19faf-497b-408c-b995-777d956b72c0"

#define NS_IHELPERAPPLAUNCHER_IID \
  {0xd9a19faf, 0x497b, 0x408c, \
    { 0xb9, 0x95, 0x77, 0x7d, 0x95, 0x6b, 0x72, 0xc0 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIHelperAppLauncher : public nsICancelable {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IHELPERAPPLAUNCHER_IID)

  /* readonly attribute nsIMIMEInfo MIMEInfo; */
  NS_SCRIPTABLE NS_IMETHOD GetMIMEInfo(nsIMIMEInfo * *aMIMEInfo) = 0;

  /* readonly attribute nsIURI source; */
  NS_SCRIPTABLE NS_IMETHOD GetSource(nsIURI * *aSource) = 0;

  /* readonly attribute AString suggestedFileName; */
  NS_SCRIPTABLE NS_IMETHOD GetSuggestedFileName(nsAString & aSuggestedFileName) = 0;

  /* void saveToDisk (in nsIFile aNewFileLocation, in boolean aRememberThisPreference); */
  NS_SCRIPTABLE NS_IMETHOD SaveToDisk(nsIFile *aNewFileLocation, bool aRememberThisPreference) = 0;

  /* void launchWithApplication (in nsIFile aApplication, in boolean aRememberThisPreference); */
  NS_SCRIPTABLE NS_IMETHOD LaunchWithApplication(nsIFile *aApplication, bool aRememberThisPreference) = 0;

  /* void setWebProgressListener (in nsIWebProgressListener2 aWebProgressListener); */
  NS_SCRIPTABLE NS_IMETHOD SetWebProgressListener(nsIWebProgressListener2 *aWebProgressListener) = 0;

  /* void closeProgressWindow (); */
  NS_SCRIPTABLE NS_IMETHOD CloseProgressWindow(void) = 0;

  /* readonly attribute nsIFile targetFile; */
  NS_SCRIPTABLE NS_IMETHOD GetTargetFile(nsIFile * *aTargetFile) = 0;

  /* readonly attribute boolean targetFileIsExecutable; */
  NS_SCRIPTABLE NS_IMETHOD GetTargetFileIsExecutable(bool *aTargetFileIsExecutable) = 0;

  /* readonly attribute PRTime timeDownloadStarted; */
  NS_SCRIPTABLE NS_IMETHOD GetTimeDownloadStarted(PRTime *aTimeDownloadStarted) = 0;

  /* readonly attribute PRInt64 contentLength; */
  NS_SCRIPTABLE NS_IMETHOD GetContentLength(PRInt64 *aContentLength) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIHelperAppLauncher, NS_IHELPERAPPLAUNCHER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIHELPERAPPLAUNCHER \
  NS_SCRIPTABLE NS_IMETHOD GetMIMEInfo(nsIMIMEInfo * *aMIMEInfo); \
  NS_SCRIPTABLE NS_IMETHOD GetSource(nsIURI * *aSource); \
  NS_SCRIPTABLE NS_IMETHOD GetSuggestedFileName(nsAString & aSuggestedFileName); \
  NS_SCRIPTABLE NS_IMETHOD SaveToDisk(nsIFile *aNewFileLocation, bool aRememberThisPreference); \
  NS_SCRIPTABLE NS_IMETHOD LaunchWithApplication(nsIFile *aApplication, bool aRememberThisPreference); \
  NS_SCRIPTABLE NS_IMETHOD SetWebProgressListener(nsIWebProgressListener2 *aWebProgressListener); \
  NS_SCRIPTABLE NS_IMETHOD CloseProgressWindow(void); \
  NS_SCRIPTABLE NS_IMETHOD GetTargetFile(nsIFile * *aTargetFile); \
  NS_SCRIPTABLE NS_IMETHOD GetTargetFileIsExecutable(bool *aTargetFileIsExecutable); \
  NS_SCRIPTABLE NS_IMETHOD GetTimeDownloadStarted(PRTime *aTimeDownloadStarted); \
  NS_SCRIPTABLE NS_IMETHOD GetContentLength(PRInt64 *aContentLength); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIHELPERAPPLAUNCHER(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetMIMEInfo(nsIMIMEInfo * *aMIMEInfo) { return _to GetMIMEInfo(aMIMEInfo); } \
  NS_SCRIPTABLE NS_IMETHOD GetSource(nsIURI * *aSource) { return _to GetSource(aSource); } \
  NS_SCRIPTABLE NS_IMETHOD GetSuggestedFileName(nsAString & aSuggestedFileName) { return _to GetSuggestedFileName(aSuggestedFileName); } \
  NS_SCRIPTABLE NS_IMETHOD SaveToDisk(nsIFile *aNewFileLocation, bool aRememberThisPreference) { return _to SaveToDisk(aNewFileLocation, aRememberThisPreference); } \
  NS_SCRIPTABLE NS_IMETHOD LaunchWithApplication(nsIFile *aApplication, bool aRememberThisPreference) { return _to LaunchWithApplication(aApplication, aRememberThisPreference); } \
  NS_SCRIPTABLE NS_IMETHOD SetWebProgressListener(nsIWebProgressListener2 *aWebProgressListener) { return _to SetWebProgressListener(aWebProgressListener); } \
  NS_SCRIPTABLE NS_IMETHOD CloseProgressWindow(void) { return _to CloseProgressWindow(); } \
  NS_SCRIPTABLE NS_IMETHOD GetTargetFile(nsIFile * *aTargetFile) { return _to GetTargetFile(aTargetFile); } \
  NS_SCRIPTABLE NS_IMETHOD GetTargetFileIsExecutable(bool *aTargetFileIsExecutable) { return _to GetTargetFileIsExecutable(aTargetFileIsExecutable); } \
  NS_SCRIPTABLE NS_IMETHOD GetTimeDownloadStarted(PRTime *aTimeDownloadStarted) { return _to GetTimeDownloadStarted(aTimeDownloadStarted); } \
  NS_SCRIPTABLE NS_IMETHOD GetContentLength(PRInt64 *aContentLength) { return _to GetContentLength(aContentLength); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIHELPERAPPLAUNCHER(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetMIMEInfo(nsIMIMEInfo * *aMIMEInfo) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMIMEInfo(aMIMEInfo); } \
  NS_SCRIPTABLE NS_IMETHOD GetSource(nsIURI * *aSource) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSource(aSource); } \
  NS_SCRIPTABLE NS_IMETHOD GetSuggestedFileName(nsAString & aSuggestedFileName) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSuggestedFileName(aSuggestedFileName); } \
  NS_SCRIPTABLE NS_IMETHOD SaveToDisk(nsIFile *aNewFileLocation, bool aRememberThisPreference) { return !_to ? NS_ERROR_NULL_POINTER : _to->SaveToDisk(aNewFileLocation, aRememberThisPreference); } \
  NS_SCRIPTABLE NS_IMETHOD LaunchWithApplication(nsIFile *aApplication, bool aRememberThisPreference) { return !_to ? NS_ERROR_NULL_POINTER : _to->LaunchWithApplication(aApplication, aRememberThisPreference); } \
  NS_SCRIPTABLE NS_IMETHOD SetWebProgressListener(nsIWebProgressListener2 *aWebProgressListener) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetWebProgressListener(aWebProgressListener); } \
  NS_SCRIPTABLE NS_IMETHOD CloseProgressWindow(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->CloseProgressWindow(); } \
  NS_SCRIPTABLE NS_IMETHOD GetTargetFile(nsIFile * *aTargetFile) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTargetFile(aTargetFile); } \
  NS_SCRIPTABLE NS_IMETHOD GetTargetFileIsExecutable(bool *aTargetFileIsExecutable) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTargetFileIsExecutable(aTargetFileIsExecutable); } \
  NS_SCRIPTABLE NS_IMETHOD GetTimeDownloadStarted(PRTime *aTimeDownloadStarted) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTimeDownloadStarted(aTimeDownloadStarted); } \
  NS_SCRIPTABLE NS_IMETHOD GetContentLength(PRInt64 *aContentLength) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetContentLength(aContentLength); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsHelperAppLauncher : public nsIHelperAppLauncher
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIHELPERAPPLAUNCHER

  nsHelperAppLauncher();

private:
  ~nsHelperAppLauncher();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsHelperAppLauncher, nsIHelperAppLauncher)

nsHelperAppLauncher::nsHelperAppLauncher()
{
  /* member initializers and constructor code */
}

nsHelperAppLauncher::~nsHelperAppLauncher()
{
  /* destructor code */
}

/* readonly attribute nsIMIMEInfo MIMEInfo; */
NS_IMETHODIMP nsHelperAppLauncher::GetMIMEInfo(nsIMIMEInfo * *aMIMEInfo)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIURI source; */
NS_IMETHODIMP nsHelperAppLauncher::GetSource(nsIURI * *aSource)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute AString suggestedFileName; */
NS_IMETHODIMP nsHelperAppLauncher::GetSuggestedFileName(nsAString & aSuggestedFileName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void saveToDisk (in nsIFile aNewFileLocation, in boolean aRememberThisPreference); */
NS_IMETHODIMP nsHelperAppLauncher::SaveToDisk(nsIFile *aNewFileLocation, bool aRememberThisPreference)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void launchWithApplication (in nsIFile aApplication, in boolean aRememberThisPreference); */
NS_IMETHODIMP nsHelperAppLauncher::LaunchWithApplication(nsIFile *aApplication, bool aRememberThisPreference)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setWebProgressListener (in nsIWebProgressListener2 aWebProgressListener); */
NS_IMETHODIMP nsHelperAppLauncher::SetWebProgressListener(nsIWebProgressListener2 *aWebProgressListener)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void closeProgressWindow (); */
NS_IMETHODIMP nsHelperAppLauncher::CloseProgressWindow()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIFile targetFile; */
NS_IMETHODIMP nsHelperAppLauncher::GetTargetFile(nsIFile * *aTargetFile)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean targetFileIsExecutable; */
NS_IMETHODIMP nsHelperAppLauncher::GetTargetFileIsExecutable(bool *aTargetFileIsExecutable)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute PRTime timeDownloadStarted; */
NS_IMETHODIMP nsHelperAppLauncher::GetTimeDownloadStarted(PRTime *aTimeDownloadStarted)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute PRInt64 contentLength; */
NS_IMETHODIMP nsHelperAppLauncher::GetContentLength(PRInt64 *aContentLength)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIExternalHelperAppService_h__ */
