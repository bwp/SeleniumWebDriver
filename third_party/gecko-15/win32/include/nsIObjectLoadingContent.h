/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/content/base/public/nsIObjectLoadingContent.idl
 */

#ifndef __gen_nsIObjectLoadingContent_h__
#define __gen_nsIObjectLoadingContent_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIFrame; /* forward declaration */

class nsIObjectFrame; /* forward declaration */

class nsIPluginTag; /* forward declaration */

class nsIDOMElement; /* forward declaration */

class nsIDOMClientRect; /* forward declaration */

class nsIURI; /* forward declaration */

#include "nsNPAPIPluginInstance.h"

/* starting interface:    nsIObjectLoadingContent */
#define NS_IOBJECTLOADINGCONTENT_IID_STR "e3e284a3-b4a8-49ef-af6b-c8c4a158db86"

#define NS_IOBJECTLOADINGCONTENT_IID \
  {0xe3e284a3, 0xb4a8, 0x49ef, \
    { 0xaf, 0x6b, 0xc8, 0xc4, 0xa1, 0x58, 0xdb, 0x86 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIObjectLoadingContent : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IOBJECTLOADINGCONTENT_IID)

  enum {
    TYPE_LOADING = 0U,
    TYPE_IMAGE = 1U,
    TYPE_PLUGIN = 2U,
    TYPE_DOCUMENT = 3U,
    TYPE_NULL = 4U
  };

  /* readonly attribute ACString actualType; */
  NS_SCRIPTABLE NS_IMETHOD GetActualType(nsACString & aActualType) = 0;

  /* readonly attribute unsigned long displayedType; */
  NS_SCRIPTABLE NS_IMETHOD GetDisplayedType(PRUint32 *aDisplayedType) = 0;

  /* unsigned long getContentTypeForMIMEType (in AUTF8String aMimeType); */
  NS_SCRIPTABLE NS_IMETHOD GetContentTypeForMIMEType(const nsACString & aMimeType, PRUint32 *_retval NS_OUTPARAM) = 0;

  /* [noscript] readonly attribute nsNPAPIPluginInstancePtr pluginInstance; */
  NS_IMETHOD GetPluginInstance(nsNPAPIPluginInstance **aPluginInstance) = 0;

  /* [noscript] void hasNewFrame (in nsIObjectFrame aFrame); */
  NS_IMETHOD HasNewFrame(nsIObjectFrame *aFrame) = 0;

  /* [noscript] void disconnectFrame (); */
  NS_IMETHOD DisconnectFrame(void) = 0;

  /* [noscript] nsIFrame getPrintFrame (); */
  NS_IMETHOD GetPrintFrame(nsIFrame * *_retval NS_OUTPARAM) = 0;

  /* [noscript] void pluginCrashed (in nsIPluginTag pluginTag, in AString pluginDumpID, in AString browserDumpID, in boolean submittedCrashReport); */
  NS_IMETHOD PluginCrashed(nsIPluginTag *pluginTag, const nsAString & pluginDumpID, const nsAString & browserDumpID, bool submittedCrashReport) = 0;

  /* void playPlugin (); */
  NS_SCRIPTABLE NS_IMETHOD PlayPlugin(void) = 0;

  /* readonly attribute boolean activated; */
  NS_SCRIPTABLE NS_IMETHOD GetActivated(bool *aActivated) = 0;

  /* [noscript] void stopPluginInstance (); */
  NS_IMETHOD StopPluginInstance(void) = 0;

  /* [noscript] void syncStartPluginInstance (); */
  NS_IMETHOD SyncStartPluginInstance(void) = 0;

  /* [noscript] void asyncStartPluginInstance (); */
  NS_IMETHOD AsyncStartPluginInstance(void) = 0;

  /* readonly attribute nsIURI srcURI; */
  NS_SCRIPTABLE NS_IMETHOD GetSrcURI(nsIURI * *aSrcURI) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIObjectLoadingContent, NS_IOBJECTLOADINGCONTENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIOBJECTLOADINGCONTENT \
  NS_SCRIPTABLE NS_IMETHOD GetActualType(nsACString & aActualType); \
  NS_SCRIPTABLE NS_IMETHOD GetDisplayedType(PRUint32 *aDisplayedType); \
  NS_SCRIPTABLE NS_IMETHOD GetContentTypeForMIMEType(const nsACString & aMimeType, PRUint32 *_retval NS_OUTPARAM); \
  NS_IMETHOD GetPluginInstance(nsNPAPIPluginInstance **aPluginInstance); \
  NS_IMETHOD HasNewFrame(nsIObjectFrame *aFrame); \
  NS_IMETHOD DisconnectFrame(void); \
  NS_IMETHOD GetPrintFrame(nsIFrame * *_retval NS_OUTPARAM); \
  NS_IMETHOD PluginCrashed(nsIPluginTag *pluginTag, const nsAString & pluginDumpID, const nsAString & browserDumpID, bool submittedCrashReport); \
  NS_SCRIPTABLE NS_IMETHOD PlayPlugin(void); \
  NS_SCRIPTABLE NS_IMETHOD GetActivated(bool *aActivated); \
  NS_IMETHOD StopPluginInstance(void); \
  NS_IMETHOD SyncStartPluginInstance(void); \
  NS_IMETHOD AsyncStartPluginInstance(void); \
  NS_SCRIPTABLE NS_IMETHOD GetSrcURI(nsIURI * *aSrcURI); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIOBJECTLOADINGCONTENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetActualType(nsACString & aActualType) { return _to GetActualType(aActualType); } \
  NS_SCRIPTABLE NS_IMETHOD GetDisplayedType(PRUint32 *aDisplayedType) { return _to GetDisplayedType(aDisplayedType); } \
  NS_SCRIPTABLE NS_IMETHOD GetContentTypeForMIMEType(const nsACString & aMimeType, PRUint32 *_retval NS_OUTPARAM) { return _to GetContentTypeForMIMEType(aMimeType, _retval); } \
  NS_IMETHOD GetPluginInstance(nsNPAPIPluginInstance **aPluginInstance) { return _to GetPluginInstance(aPluginInstance); } \
  NS_IMETHOD HasNewFrame(nsIObjectFrame *aFrame) { return _to HasNewFrame(aFrame); } \
  NS_IMETHOD DisconnectFrame(void) { return _to DisconnectFrame(); } \
  NS_IMETHOD GetPrintFrame(nsIFrame * *_retval NS_OUTPARAM) { return _to GetPrintFrame(_retval); } \
  NS_IMETHOD PluginCrashed(nsIPluginTag *pluginTag, const nsAString & pluginDumpID, const nsAString & browserDumpID, bool submittedCrashReport) { return _to PluginCrashed(pluginTag, pluginDumpID, browserDumpID, submittedCrashReport); } \
  NS_SCRIPTABLE NS_IMETHOD PlayPlugin(void) { return _to PlayPlugin(); } \
  NS_SCRIPTABLE NS_IMETHOD GetActivated(bool *aActivated) { return _to GetActivated(aActivated); } \
  NS_IMETHOD StopPluginInstance(void) { return _to StopPluginInstance(); } \
  NS_IMETHOD SyncStartPluginInstance(void) { return _to SyncStartPluginInstance(); } \
  NS_IMETHOD AsyncStartPluginInstance(void) { return _to AsyncStartPluginInstance(); } \
  NS_SCRIPTABLE NS_IMETHOD GetSrcURI(nsIURI * *aSrcURI) { return _to GetSrcURI(aSrcURI); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIOBJECTLOADINGCONTENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetActualType(nsACString & aActualType) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetActualType(aActualType); } \
  NS_SCRIPTABLE NS_IMETHOD GetDisplayedType(PRUint32 *aDisplayedType) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDisplayedType(aDisplayedType); } \
  NS_SCRIPTABLE NS_IMETHOD GetContentTypeForMIMEType(const nsACString & aMimeType, PRUint32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetContentTypeForMIMEType(aMimeType, _retval); } \
  NS_IMETHOD GetPluginInstance(nsNPAPIPluginInstance **aPluginInstance) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPluginInstance(aPluginInstance); } \
  NS_IMETHOD HasNewFrame(nsIObjectFrame *aFrame) { return !_to ? NS_ERROR_NULL_POINTER : _to->HasNewFrame(aFrame); } \
  NS_IMETHOD DisconnectFrame(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->DisconnectFrame(); } \
  NS_IMETHOD GetPrintFrame(nsIFrame * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPrintFrame(_retval); } \
  NS_IMETHOD PluginCrashed(nsIPluginTag *pluginTag, const nsAString & pluginDumpID, const nsAString & browserDumpID, bool submittedCrashReport) { return !_to ? NS_ERROR_NULL_POINTER : _to->PluginCrashed(pluginTag, pluginDumpID, browserDumpID, submittedCrashReport); } \
  NS_SCRIPTABLE NS_IMETHOD PlayPlugin(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->PlayPlugin(); } \
  NS_SCRIPTABLE NS_IMETHOD GetActivated(bool *aActivated) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetActivated(aActivated); } \
  NS_IMETHOD StopPluginInstance(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->StopPluginInstance(); } \
  NS_IMETHOD SyncStartPluginInstance(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->SyncStartPluginInstance(); } \
  NS_IMETHOD AsyncStartPluginInstance(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->AsyncStartPluginInstance(); } \
  NS_SCRIPTABLE NS_IMETHOD GetSrcURI(nsIURI * *aSrcURI) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSrcURI(aSrcURI); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsObjectLoadingContent : public nsIObjectLoadingContent
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIOBJECTLOADINGCONTENT

  nsObjectLoadingContent();

private:
  ~nsObjectLoadingContent();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsObjectLoadingContent, nsIObjectLoadingContent)

nsObjectLoadingContent::nsObjectLoadingContent()
{
  /* member initializers and constructor code */
}

nsObjectLoadingContent::~nsObjectLoadingContent()
{
  /* destructor code */
}

/* readonly attribute ACString actualType; */
NS_IMETHODIMP nsObjectLoadingContent::GetActualType(nsACString & aActualType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long displayedType; */
NS_IMETHODIMP nsObjectLoadingContent::GetDisplayedType(PRUint32 *aDisplayedType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* unsigned long getContentTypeForMIMEType (in AUTF8String aMimeType); */
NS_IMETHODIMP nsObjectLoadingContent::GetContentTypeForMIMEType(const nsACString & aMimeType, PRUint32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] readonly attribute nsNPAPIPluginInstancePtr pluginInstance; */
NS_IMETHODIMP nsObjectLoadingContent::GetPluginInstance(nsNPAPIPluginInstance **aPluginInstance)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void hasNewFrame (in nsIObjectFrame aFrame); */
NS_IMETHODIMP nsObjectLoadingContent::HasNewFrame(nsIObjectFrame *aFrame)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void disconnectFrame (); */
NS_IMETHODIMP nsObjectLoadingContent::DisconnectFrame()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] nsIFrame getPrintFrame (); */
NS_IMETHODIMP nsObjectLoadingContent::GetPrintFrame(nsIFrame * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void pluginCrashed (in nsIPluginTag pluginTag, in AString pluginDumpID, in AString browserDumpID, in boolean submittedCrashReport); */
NS_IMETHODIMP nsObjectLoadingContent::PluginCrashed(nsIPluginTag *pluginTag, const nsAString & pluginDumpID, const nsAString & browserDumpID, bool submittedCrashReport)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void playPlugin (); */
NS_IMETHODIMP nsObjectLoadingContent::PlayPlugin()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean activated; */
NS_IMETHODIMP nsObjectLoadingContent::GetActivated(bool *aActivated)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void stopPluginInstance (); */
NS_IMETHODIMP nsObjectLoadingContent::StopPluginInstance()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void syncStartPluginInstance (); */
NS_IMETHODIMP nsObjectLoadingContent::SyncStartPluginInstance()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void asyncStartPluginInstance (); */
NS_IMETHODIMP nsObjectLoadingContent::AsyncStartPluginInstance()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIURI srcURI; */
NS_IMETHODIMP nsObjectLoadingContent::GetSrcURI(nsIURI * *aSrcURI)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIObjectLoadingContent_h__ */
