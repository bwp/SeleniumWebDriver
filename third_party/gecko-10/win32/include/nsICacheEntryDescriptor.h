/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/netwerk/cache/nsICacheEntryDescriptor.idl
 */

#ifndef __gen_nsICacheEntryDescriptor_h__
#define __gen_nsICacheEntryDescriptor_h__


#ifndef __gen_nsICacheVisitor_h__
#include "nsICacheVisitor.h"
#endif

#ifndef __gen_nsICache_h__
#include "nsICache.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsISimpleEnumerator; /* forward declaration */

class nsICacheListener; /* forward declaration */

class nsIInputStream; /* forward declaration */

class nsIOutputStream; /* forward declaration */

class nsIFile; /* forward declaration */

class nsICacheMetaDataVisitor; /* forward declaration */


/* starting interface:    nsICacheEntryDescriptor */
#define NS_ICACHEENTRYDESCRIPTOR_IID_STR "49c1a11d-f5d2-4f09-8262-551e64908ada"

#define NS_ICACHEENTRYDESCRIPTOR_IID \
  {0x49c1a11d, 0xf5d2, 0x4f09, \
    { 0x82, 0x62, 0x55, 0x1e, 0x64, 0x90, 0x8a, 0xda }}

class NS_NO_VTABLE NS_SCRIPTABLE nsICacheEntryDescriptor : public nsICacheEntryInfo {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ICACHEENTRYDESCRIPTOR_IID)

  /* void setExpirationTime (in PRUint32 expirationTime); */
  NS_SCRIPTABLE NS_IMETHOD SetExpirationTime(PRUint32 expirationTime) = 0;

  /* void setDataSize (in unsigned long size); */
  NS_SCRIPTABLE NS_IMETHOD SetDataSize(PRUint32 size) = 0;

  /* nsIInputStream openInputStream (in unsigned long offset); */
  NS_SCRIPTABLE NS_IMETHOD OpenInputStream(PRUint32 offset, nsIInputStream * *_retval NS_OUTPARAM) = 0;

  /* nsIOutputStream openOutputStream (in unsigned long offset); */
  NS_SCRIPTABLE NS_IMETHOD OpenOutputStream(PRUint32 offset, nsIOutputStream * *_retval NS_OUTPARAM) = 0;

  /* attribute nsISupports cacheElement; */
  NS_SCRIPTABLE NS_IMETHOD GetCacheElement(nsISupports * *aCacheElement) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetCacheElement(nsISupports *aCacheElement) = 0;

  /* attribute PRInt64 predictedDataSize; */
  NS_SCRIPTABLE NS_IMETHOD GetPredictedDataSize(PRInt64 *aPredictedDataSize) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetPredictedDataSize(PRInt64 aPredictedDataSize) = 0;

  /* readonly attribute nsCacheAccessMode accessGranted; */
  NS_SCRIPTABLE NS_IMETHOD GetAccessGranted(nsCacheAccessMode *aAccessGranted) = 0;

  /* attribute nsCacheStoragePolicy storagePolicy; */
  NS_SCRIPTABLE NS_IMETHOD GetStoragePolicy(nsCacheStoragePolicy *aStoragePolicy) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetStoragePolicy(nsCacheStoragePolicy aStoragePolicy) = 0;

  /* readonly attribute nsIFile file; */
  NS_SCRIPTABLE NS_IMETHOD GetFile(nsIFile * *aFile) = 0;

  /* attribute nsISupports securityInfo; */
  NS_SCRIPTABLE NS_IMETHOD GetSecurityInfo(nsISupports * *aSecurityInfo) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetSecurityInfo(nsISupports *aSecurityInfo) = 0;

  /* void doom (); */
  NS_SCRIPTABLE NS_IMETHOD Doom(void) = 0;

  /* void doomAndFailPendingRequests (in nsresult status); */
  NS_SCRIPTABLE NS_IMETHOD DoomAndFailPendingRequests(nsresult status) = 0;

  /* void markValid (); */
  NS_SCRIPTABLE NS_IMETHOD MarkValid(void) = 0;

  /* void close (); */
  NS_SCRIPTABLE NS_IMETHOD Close(void) = 0;

  /* string getMetaDataElement (in string key); */
  NS_SCRIPTABLE NS_IMETHOD GetMetaDataElement(const char * key, char * *_retval NS_OUTPARAM) = 0;

  /* void setMetaDataElement (in string key, in string value); */
  NS_SCRIPTABLE NS_IMETHOD SetMetaDataElement(const char * key, const char * value) = 0;

  /* void visitMetaData (in nsICacheMetaDataVisitor visitor); */
  NS_SCRIPTABLE NS_IMETHOD VisitMetaData(nsICacheMetaDataVisitor *visitor) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsICacheEntryDescriptor, NS_ICACHEENTRYDESCRIPTOR_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSICACHEENTRYDESCRIPTOR \
  NS_SCRIPTABLE NS_IMETHOD SetExpirationTime(PRUint32 expirationTime); \
  NS_SCRIPTABLE NS_IMETHOD SetDataSize(PRUint32 size); \
  NS_SCRIPTABLE NS_IMETHOD OpenInputStream(PRUint32 offset, nsIInputStream * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD OpenOutputStream(PRUint32 offset, nsIOutputStream * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetCacheElement(nsISupports * *aCacheElement); \
  NS_SCRIPTABLE NS_IMETHOD SetCacheElement(nsISupports *aCacheElement); \
  NS_SCRIPTABLE NS_IMETHOD GetPredictedDataSize(PRInt64 *aPredictedDataSize); \
  NS_SCRIPTABLE NS_IMETHOD SetPredictedDataSize(PRInt64 aPredictedDataSize); \
  NS_SCRIPTABLE NS_IMETHOD GetAccessGranted(nsCacheAccessMode *aAccessGranted); \
  NS_SCRIPTABLE NS_IMETHOD GetStoragePolicy(nsCacheStoragePolicy *aStoragePolicy); \
  NS_SCRIPTABLE NS_IMETHOD SetStoragePolicy(nsCacheStoragePolicy aStoragePolicy); \
  NS_SCRIPTABLE NS_IMETHOD GetFile(nsIFile * *aFile); \
  NS_SCRIPTABLE NS_IMETHOD GetSecurityInfo(nsISupports * *aSecurityInfo); \
  NS_SCRIPTABLE NS_IMETHOD SetSecurityInfo(nsISupports *aSecurityInfo); \
  NS_SCRIPTABLE NS_IMETHOD Doom(void); \
  NS_SCRIPTABLE NS_IMETHOD DoomAndFailPendingRequests(nsresult status); \
  NS_SCRIPTABLE NS_IMETHOD MarkValid(void); \
  NS_SCRIPTABLE NS_IMETHOD Close(void); \
  NS_SCRIPTABLE NS_IMETHOD GetMetaDataElement(const char * key, char * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetMetaDataElement(const char * key, const char * value); \
  NS_SCRIPTABLE NS_IMETHOD VisitMetaData(nsICacheMetaDataVisitor *visitor); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSICACHEENTRYDESCRIPTOR(_to) \
  NS_SCRIPTABLE NS_IMETHOD SetExpirationTime(PRUint32 expirationTime) { return _to SetExpirationTime(expirationTime); } \
  NS_SCRIPTABLE NS_IMETHOD SetDataSize(PRUint32 size) { return _to SetDataSize(size); } \
  NS_SCRIPTABLE NS_IMETHOD OpenInputStream(PRUint32 offset, nsIInputStream * *_retval NS_OUTPARAM) { return _to OpenInputStream(offset, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD OpenOutputStream(PRUint32 offset, nsIOutputStream * *_retval NS_OUTPARAM) { return _to OpenOutputStream(offset, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetCacheElement(nsISupports * *aCacheElement) { return _to GetCacheElement(aCacheElement); } \
  NS_SCRIPTABLE NS_IMETHOD SetCacheElement(nsISupports *aCacheElement) { return _to SetCacheElement(aCacheElement); } \
  NS_SCRIPTABLE NS_IMETHOD GetPredictedDataSize(PRInt64 *aPredictedDataSize) { return _to GetPredictedDataSize(aPredictedDataSize); } \
  NS_SCRIPTABLE NS_IMETHOD SetPredictedDataSize(PRInt64 aPredictedDataSize) { return _to SetPredictedDataSize(aPredictedDataSize); } \
  NS_SCRIPTABLE NS_IMETHOD GetAccessGranted(nsCacheAccessMode *aAccessGranted) { return _to GetAccessGranted(aAccessGranted); } \
  NS_SCRIPTABLE NS_IMETHOD GetStoragePolicy(nsCacheStoragePolicy *aStoragePolicy) { return _to GetStoragePolicy(aStoragePolicy); } \
  NS_SCRIPTABLE NS_IMETHOD SetStoragePolicy(nsCacheStoragePolicy aStoragePolicy) { return _to SetStoragePolicy(aStoragePolicy); } \
  NS_SCRIPTABLE NS_IMETHOD GetFile(nsIFile * *aFile) { return _to GetFile(aFile); } \
  NS_SCRIPTABLE NS_IMETHOD GetSecurityInfo(nsISupports * *aSecurityInfo) { return _to GetSecurityInfo(aSecurityInfo); } \
  NS_SCRIPTABLE NS_IMETHOD SetSecurityInfo(nsISupports *aSecurityInfo) { return _to SetSecurityInfo(aSecurityInfo); } \
  NS_SCRIPTABLE NS_IMETHOD Doom(void) { return _to Doom(); } \
  NS_SCRIPTABLE NS_IMETHOD DoomAndFailPendingRequests(nsresult status) { return _to DoomAndFailPendingRequests(status); } \
  NS_SCRIPTABLE NS_IMETHOD MarkValid(void) { return _to MarkValid(); } \
  NS_SCRIPTABLE NS_IMETHOD Close(void) { return _to Close(); } \
  NS_SCRIPTABLE NS_IMETHOD GetMetaDataElement(const char * key, char * *_retval NS_OUTPARAM) { return _to GetMetaDataElement(key, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetMetaDataElement(const char * key, const char * value) { return _to SetMetaDataElement(key, value); } \
  NS_SCRIPTABLE NS_IMETHOD VisitMetaData(nsICacheMetaDataVisitor *visitor) { return _to VisitMetaData(visitor); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSICACHEENTRYDESCRIPTOR(_to) \
  NS_SCRIPTABLE NS_IMETHOD SetExpirationTime(PRUint32 expirationTime) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetExpirationTime(expirationTime); } \
  NS_SCRIPTABLE NS_IMETHOD SetDataSize(PRUint32 size) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDataSize(size); } \
  NS_SCRIPTABLE NS_IMETHOD OpenInputStream(PRUint32 offset, nsIInputStream * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->OpenInputStream(offset, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD OpenOutputStream(PRUint32 offset, nsIOutputStream * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->OpenOutputStream(offset, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetCacheElement(nsISupports * *aCacheElement) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCacheElement(aCacheElement); } \
  NS_SCRIPTABLE NS_IMETHOD SetCacheElement(nsISupports *aCacheElement) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetCacheElement(aCacheElement); } \
  NS_SCRIPTABLE NS_IMETHOD GetPredictedDataSize(PRInt64 *aPredictedDataSize) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPredictedDataSize(aPredictedDataSize); } \
  NS_SCRIPTABLE NS_IMETHOD SetPredictedDataSize(PRInt64 aPredictedDataSize) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetPredictedDataSize(aPredictedDataSize); } \
  NS_SCRIPTABLE NS_IMETHOD GetAccessGranted(nsCacheAccessMode *aAccessGranted) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAccessGranted(aAccessGranted); } \
  NS_SCRIPTABLE NS_IMETHOD GetStoragePolicy(nsCacheStoragePolicy *aStoragePolicy) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetStoragePolicy(aStoragePolicy); } \
  NS_SCRIPTABLE NS_IMETHOD SetStoragePolicy(nsCacheStoragePolicy aStoragePolicy) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetStoragePolicy(aStoragePolicy); } \
  NS_SCRIPTABLE NS_IMETHOD GetFile(nsIFile * *aFile) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFile(aFile); } \
  NS_SCRIPTABLE NS_IMETHOD GetSecurityInfo(nsISupports * *aSecurityInfo) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSecurityInfo(aSecurityInfo); } \
  NS_SCRIPTABLE NS_IMETHOD SetSecurityInfo(nsISupports *aSecurityInfo) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSecurityInfo(aSecurityInfo); } \
  NS_SCRIPTABLE NS_IMETHOD Doom(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Doom(); } \
  NS_SCRIPTABLE NS_IMETHOD DoomAndFailPendingRequests(nsresult status) { return !_to ? NS_ERROR_NULL_POINTER : _to->DoomAndFailPendingRequests(status); } \
  NS_SCRIPTABLE NS_IMETHOD MarkValid(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->MarkValid(); } \
  NS_SCRIPTABLE NS_IMETHOD Close(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Close(); } \
  NS_SCRIPTABLE NS_IMETHOD GetMetaDataElement(const char * key, char * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMetaDataElement(key, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetMetaDataElement(const char * key, const char * value) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetMetaDataElement(key, value); } \
  NS_SCRIPTABLE NS_IMETHOD VisitMetaData(nsICacheMetaDataVisitor *visitor) { return !_to ? NS_ERROR_NULL_POINTER : _to->VisitMetaData(visitor); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsCacheEntryDescriptor : public nsICacheEntryDescriptor
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSICACHEENTRYDESCRIPTOR

  nsCacheEntryDescriptor();

private:
  ~nsCacheEntryDescriptor();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsCacheEntryDescriptor, nsICacheEntryDescriptor)

nsCacheEntryDescriptor::nsCacheEntryDescriptor()
{
  /* member initializers and constructor code */
}

nsCacheEntryDescriptor::~nsCacheEntryDescriptor()
{
  /* destructor code */
}

/* void setExpirationTime (in PRUint32 expirationTime); */
NS_IMETHODIMP nsCacheEntryDescriptor::SetExpirationTime(PRUint32 expirationTime)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setDataSize (in unsigned long size); */
NS_IMETHODIMP nsCacheEntryDescriptor::SetDataSize(PRUint32 size)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIInputStream openInputStream (in unsigned long offset); */
NS_IMETHODIMP nsCacheEntryDescriptor::OpenInputStream(PRUint32 offset, nsIInputStream * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIOutputStream openOutputStream (in unsigned long offset); */
NS_IMETHODIMP nsCacheEntryDescriptor::OpenOutputStream(PRUint32 offset, nsIOutputStream * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsISupports cacheElement; */
NS_IMETHODIMP nsCacheEntryDescriptor::GetCacheElement(nsISupports * *aCacheElement)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsCacheEntryDescriptor::SetCacheElement(nsISupports *aCacheElement)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute PRInt64 predictedDataSize; */
NS_IMETHODIMP nsCacheEntryDescriptor::GetPredictedDataSize(PRInt64 *aPredictedDataSize)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsCacheEntryDescriptor::SetPredictedDataSize(PRInt64 aPredictedDataSize)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsCacheAccessMode accessGranted; */
NS_IMETHODIMP nsCacheEntryDescriptor::GetAccessGranted(nsCacheAccessMode *aAccessGranted)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsCacheStoragePolicy storagePolicy; */
NS_IMETHODIMP nsCacheEntryDescriptor::GetStoragePolicy(nsCacheStoragePolicy *aStoragePolicy)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsCacheEntryDescriptor::SetStoragePolicy(nsCacheStoragePolicy aStoragePolicy)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIFile file; */
NS_IMETHODIMP nsCacheEntryDescriptor::GetFile(nsIFile * *aFile)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsISupports securityInfo; */
NS_IMETHODIMP nsCacheEntryDescriptor::GetSecurityInfo(nsISupports * *aSecurityInfo)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsCacheEntryDescriptor::SetSecurityInfo(nsISupports *aSecurityInfo)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void doom (); */
NS_IMETHODIMP nsCacheEntryDescriptor::Doom()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void doomAndFailPendingRequests (in nsresult status); */
NS_IMETHODIMP nsCacheEntryDescriptor::DoomAndFailPendingRequests(nsresult status)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void markValid (); */
NS_IMETHODIMP nsCacheEntryDescriptor::MarkValid()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void close (); */
NS_IMETHODIMP nsCacheEntryDescriptor::Close()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* string getMetaDataElement (in string key); */
NS_IMETHODIMP nsCacheEntryDescriptor::GetMetaDataElement(const char * key, char * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setMetaDataElement (in string key, in string value); */
NS_IMETHODIMP nsCacheEntryDescriptor::SetMetaDataElement(const char * key, const char * value)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void visitMetaData (in nsICacheMetaDataVisitor visitor); */
NS_IMETHODIMP nsCacheEntryDescriptor::VisitMetaData(nsICacheMetaDataVisitor *visitor)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsICacheMetaDataVisitor */
#define NS_ICACHEMETADATAVISITOR_IID_STR "22f9a49c-3cf8-4c23-8006-54efb11ac562"

#define NS_ICACHEMETADATAVISITOR_IID \
  {0x22f9a49c, 0x3cf8, 0x4c23, \
    { 0x80, 0x06, 0x54, 0xef, 0xb1, 0x1a, 0xc5, 0x62 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsICacheMetaDataVisitor : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ICACHEMETADATAVISITOR_IID)

  /* boolean visitMetaDataElement (in string key, in string value); */
  NS_SCRIPTABLE NS_IMETHOD VisitMetaDataElement(const char * key, const char * value, bool *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsICacheMetaDataVisitor, NS_ICACHEMETADATAVISITOR_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSICACHEMETADATAVISITOR \
  NS_SCRIPTABLE NS_IMETHOD VisitMetaDataElement(const char * key, const char * value, bool *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSICACHEMETADATAVISITOR(_to) \
  NS_SCRIPTABLE NS_IMETHOD VisitMetaDataElement(const char * key, const char * value, bool *_retval NS_OUTPARAM) { return _to VisitMetaDataElement(key, value, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSICACHEMETADATAVISITOR(_to) \
  NS_SCRIPTABLE NS_IMETHOD VisitMetaDataElement(const char * key, const char * value, bool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->VisitMetaDataElement(key, value, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsCacheMetaDataVisitor : public nsICacheMetaDataVisitor
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSICACHEMETADATAVISITOR

  nsCacheMetaDataVisitor();

private:
  ~nsCacheMetaDataVisitor();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsCacheMetaDataVisitor, nsICacheMetaDataVisitor)

nsCacheMetaDataVisitor::nsCacheMetaDataVisitor()
{
  /* member initializers and constructor code */
}

nsCacheMetaDataVisitor::~nsCacheMetaDataVisitor()
{
  /* destructor code */
}

/* boolean visitMetaDataElement (in string key, in string value); */
NS_IMETHODIMP nsCacheMetaDataVisitor::VisitMetaDataElement(const char * key, const char * value, bool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsICacheEntryDescriptor_h__ */
