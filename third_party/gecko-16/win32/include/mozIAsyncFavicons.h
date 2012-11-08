/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/toolkit/components/places/mozIAsyncFavicons.idl
 */

#ifndef __gen_mozIAsyncFavicons_h__
#define __gen_mozIAsyncFavicons_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIURI; /* forward declaration */

class nsIFaviconDataCallback; /* forward declaration */


/* starting interface:    mozIAsyncFavicons */
#define MOZIASYNCFAVICONS_IID_STR "f3530e8d-0016-4f56-91fe-28958a7ec296"

#define MOZIASYNCFAVICONS_IID \
  {0xf3530e8d, 0x0016, 0x4f56, \
    { 0x91, 0xfe, 0x28, 0x95, 0x8a, 0x7e, 0xc2, 0x96 }}

class NS_NO_VTABLE NS_SCRIPTABLE mozIAsyncFavicons : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(MOZIASYNCFAVICONS_IID)

  /* void setAndFetchFaviconForPage (in nsIURI aPageURI, in nsIURI aFaviconURI, in boolean aForceReload, [optional] in nsIFaviconDataCallback aCallback); */
  NS_SCRIPTABLE NS_IMETHOD SetAndFetchFaviconForPage(nsIURI *aPageURI, nsIURI *aFaviconURI, bool aForceReload, nsIFaviconDataCallback *aCallback) = 0;

  /* void replaceFaviconData (in nsIURI aFaviconURI, [array, size_is (aDataLen), const] in octet aData, in unsigned long aDataLen, in AUTF8String aMimeType, [optional] in PRTime aExpiration); */
  NS_SCRIPTABLE NS_IMETHOD ReplaceFaviconData(nsIURI *aFaviconURI, const PRUint8 *aData, PRUint32 aDataLen, const nsACString & aMimeType, PRTime aExpiration) = 0;

  /* void replaceFaviconDataFromDataURL (in nsIURI aFaviconURI, in AString aDataURL, [optional] in PRTime aExpiration); */
  NS_SCRIPTABLE NS_IMETHOD ReplaceFaviconDataFromDataURL(nsIURI *aFaviconURI, const nsAString & aDataURL, PRTime aExpiration) = 0;

  /* void getFaviconURLForPage (in nsIURI aPageURI, in nsIFaviconDataCallback aCallback); */
  NS_SCRIPTABLE NS_IMETHOD GetFaviconURLForPage(nsIURI *aPageURI, nsIFaviconDataCallback *aCallback) = 0;

  /* void getFaviconDataForPage (in nsIURI aPageURI, in nsIFaviconDataCallback aCallback); */
  NS_SCRIPTABLE NS_IMETHOD GetFaviconDataForPage(nsIURI *aPageURI, nsIFaviconDataCallback *aCallback) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(mozIAsyncFavicons, MOZIASYNCFAVICONS_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_MOZIASYNCFAVICONS \
  NS_SCRIPTABLE NS_IMETHOD SetAndFetchFaviconForPage(nsIURI *aPageURI, nsIURI *aFaviconURI, bool aForceReload, nsIFaviconDataCallback *aCallback); \
  NS_SCRIPTABLE NS_IMETHOD ReplaceFaviconData(nsIURI *aFaviconURI, const PRUint8 *aData, PRUint32 aDataLen, const nsACString & aMimeType, PRTime aExpiration); \
  NS_SCRIPTABLE NS_IMETHOD ReplaceFaviconDataFromDataURL(nsIURI *aFaviconURI, const nsAString & aDataURL, PRTime aExpiration); \
  NS_SCRIPTABLE NS_IMETHOD GetFaviconURLForPage(nsIURI *aPageURI, nsIFaviconDataCallback *aCallback); \
  NS_SCRIPTABLE NS_IMETHOD GetFaviconDataForPage(nsIURI *aPageURI, nsIFaviconDataCallback *aCallback); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_MOZIASYNCFAVICONS(_to) \
  NS_SCRIPTABLE NS_IMETHOD SetAndFetchFaviconForPage(nsIURI *aPageURI, nsIURI *aFaviconURI, bool aForceReload, nsIFaviconDataCallback *aCallback) { return _to SetAndFetchFaviconForPage(aPageURI, aFaviconURI, aForceReload, aCallback); } \
  NS_SCRIPTABLE NS_IMETHOD ReplaceFaviconData(nsIURI *aFaviconURI, const PRUint8 *aData, PRUint32 aDataLen, const nsACString & aMimeType, PRTime aExpiration) { return _to ReplaceFaviconData(aFaviconURI, aData, aDataLen, aMimeType, aExpiration); } \
  NS_SCRIPTABLE NS_IMETHOD ReplaceFaviconDataFromDataURL(nsIURI *aFaviconURI, const nsAString & aDataURL, PRTime aExpiration) { return _to ReplaceFaviconDataFromDataURL(aFaviconURI, aDataURL, aExpiration); } \
  NS_SCRIPTABLE NS_IMETHOD GetFaviconURLForPage(nsIURI *aPageURI, nsIFaviconDataCallback *aCallback) { return _to GetFaviconURLForPage(aPageURI, aCallback); } \
  NS_SCRIPTABLE NS_IMETHOD GetFaviconDataForPage(nsIURI *aPageURI, nsIFaviconDataCallback *aCallback) { return _to GetFaviconDataForPage(aPageURI, aCallback); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_MOZIASYNCFAVICONS(_to) \
  NS_SCRIPTABLE NS_IMETHOD SetAndFetchFaviconForPage(nsIURI *aPageURI, nsIURI *aFaviconURI, bool aForceReload, nsIFaviconDataCallback *aCallback) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAndFetchFaviconForPage(aPageURI, aFaviconURI, aForceReload, aCallback); } \
  NS_SCRIPTABLE NS_IMETHOD ReplaceFaviconData(nsIURI *aFaviconURI, const PRUint8 *aData, PRUint32 aDataLen, const nsACString & aMimeType, PRTime aExpiration) { return !_to ? NS_ERROR_NULL_POINTER : _to->ReplaceFaviconData(aFaviconURI, aData, aDataLen, aMimeType, aExpiration); } \
  NS_SCRIPTABLE NS_IMETHOD ReplaceFaviconDataFromDataURL(nsIURI *aFaviconURI, const nsAString & aDataURL, PRTime aExpiration) { return !_to ? NS_ERROR_NULL_POINTER : _to->ReplaceFaviconDataFromDataURL(aFaviconURI, aDataURL, aExpiration); } \
  NS_SCRIPTABLE NS_IMETHOD GetFaviconURLForPage(nsIURI *aPageURI, nsIFaviconDataCallback *aCallback) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFaviconURLForPage(aPageURI, aCallback); } \
  NS_SCRIPTABLE NS_IMETHOD GetFaviconDataForPage(nsIURI *aPageURI, nsIFaviconDataCallback *aCallback) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFaviconDataForPage(aPageURI, aCallback); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public mozIAsyncFavicons
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_MOZIASYNCFAVICONS

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, mozIAsyncFavicons)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* void setAndFetchFaviconForPage (in nsIURI aPageURI, in nsIURI aFaviconURI, in boolean aForceReload, [optional] in nsIFaviconDataCallback aCallback); */
NS_IMETHODIMP _MYCLASS_::SetAndFetchFaviconForPage(nsIURI *aPageURI, nsIURI *aFaviconURI, bool aForceReload, nsIFaviconDataCallback *aCallback)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void replaceFaviconData (in nsIURI aFaviconURI, [array, size_is (aDataLen), const] in octet aData, in unsigned long aDataLen, in AUTF8String aMimeType, [optional] in PRTime aExpiration); */
NS_IMETHODIMP _MYCLASS_::ReplaceFaviconData(nsIURI *aFaviconURI, const PRUint8 *aData, PRUint32 aDataLen, const nsACString & aMimeType, PRTime aExpiration)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void replaceFaviconDataFromDataURL (in nsIURI aFaviconURI, in AString aDataURL, [optional] in PRTime aExpiration); */
NS_IMETHODIMP _MYCLASS_::ReplaceFaviconDataFromDataURL(nsIURI *aFaviconURI, const nsAString & aDataURL, PRTime aExpiration)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void getFaviconURLForPage (in nsIURI aPageURI, in nsIFaviconDataCallback aCallback); */
NS_IMETHODIMP _MYCLASS_::GetFaviconURLForPage(nsIURI *aPageURI, nsIFaviconDataCallback *aCallback)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void getFaviconDataForPage (in nsIURI aPageURI, in nsIFaviconDataCallback aCallback); */
NS_IMETHODIMP _MYCLASS_::GetFaviconDataForPage(nsIURI *aPageURI, nsIFaviconDataCallback *aCallback)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_mozIAsyncFavicons_h__ */
