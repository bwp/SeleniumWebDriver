/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/netwerk/cache/nsICacheSession.idl
 */

#ifndef __gen_nsICacheSession_h__
#define __gen_nsICacheSession_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#ifndef __gen_nsICache_h__
#include "nsICache.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsICacheEntryDescriptor; /* forward declaration */

class nsICacheListener; /* forward declaration */

class nsILocalFile; /* forward declaration */


/* starting interface:    nsICacheSession */
#define NS_ICACHESESSION_IID_STR "1dd7708c-de48-4ffe-b5aa-cd218c762887"

#define NS_ICACHESESSION_IID \
  {0x1dd7708c, 0xde48, 0x4ffe, \
    { 0xb5, 0xaa, 0xcd, 0x21, 0x8c, 0x76, 0x28, 0x87 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsICacheSession : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ICACHESESSION_IID)

  /* attribute boolean doomEntriesIfExpired; */
  NS_SCRIPTABLE NS_IMETHOD GetDoomEntriesIfExpired(bool *aDoomEntriesIfExpired) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetDoomEntriesIfExpired(bool aDoomEntriesIfExpired) = 0;

  /* attribute nsILocalFile profileDirectory; */
  NS_SCRIPTABLE NS_IMETHOD GetProfileDirectory(nsILocalFile * *aProfileDirectory) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetProfileDirectory(nsILocalFile *aProfileDirectory) = 0;

  /* nsICacheEntryDescriptor openCacheEntry (in ACString key, in nsCacheAccessMode accessRequested, in boolean blockingMode); */
  NS_SCRIPTABLE NS_IMETHOD OpenCacheEntry(const nsACString & key, nsCacheAccessMode accessRequested, bool blockingMode, nsICacheEntryDescriptor * *_retval NS_OUTPARAM) = 0;

  /* void asyncOpenCacheEntry (in ACString key, in nsCacheAccessMode accessRequested, in nsICacheListener listener, [optional] in boolean noWait); */
  NS_SCRIPTABLE NS_IMETHOD AsyncOpenCacheEntry(const nsACString & key, nsCacheAccessMode accessRequested, nsICacheListener *listener, bool noWait) = 0;

  /* void evictEntries (); */
  NS_SCRIPTABLE NS_IMETHOD EvictEntries(void) = 0;

  /* boolean isStorageEnabled (); */
  NS_SCRIPTABLE NS_IMETHOD IsStorageEnabled(bool *_retval NS_OUTPARAM) = 0;

  /* void doomEntry (in ACString key, in nsICacheListener listener); */
  NS_SCRIPTABLE NS_IMETHOD DoomEntry(const nsACString & key, nsICacheListener *listener) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsICacheSession, NS_ICACHESESSION_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSICACHESESSION \
  NS_SCRIPTABLE NS_IMETHOD GetDoomEntriesIfExpired(bool *aDoomEntriesIfExpired); \
  NS_SCRIPTABLE NS_IMETHOD SetDoomEntriesIfExpired(bool aDoomEntriesIfExpired); \
  NS_SCRIPTABLE NS_IMETHOD GetProfileDirectory(nsILocalFile * *aProfileDirectory); \
  NS_SCRIPTABLE NS_IMETHOD SetProfileDirectory(nsILocalFile *aProfileDirectory); \
  NS_SCRIPTABLE NS_IMETHOD OpenCacheEntry(const nsACString & key, nsCacheAccessMode accessRequested, bool blockingMode, nsICacheEntryDescriptor * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD AsyncOpenCacheEntry(const nsACString & key, nsCacheAccessMode accessRequested, nsICacheListener *listener, bool noWait); \
  NS_SCRIPTABLE NS_IMETHOD EvictEntries(void); \
  NS_SCRIPTABLE NS_IMETHOD IsStorageEnabled(bool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD DoomEntry(const nsACString & key, nsICacheListener *listener); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSICACHESESSION(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetDoomEntriesIfExpired(bool *aDoomEntriesIfExpired) { return _to GetDoomEntriesIfExpired(aDoomEntriesIfExpired); } \
  NS_SCRIPTABLE NS_IMETHOD SetDoomEntriesIfExpired(bool aDoomEntriesIfExpired) { return _to SetDoomEntriesIfExpired(aDoomEntriesIfExpired); } \
  NS_SCRIPTABLE NS_IMETHOD GetProfileDirectory(nsILocalFile * *aProfileDirectory) { return _to GetProfileDirectory(aProfileDirectory); } \
  NS_SCRIPTABLE NS_IMETHOD SetProfileDirectory(nsILocalFile *aProfileDirectory) { return _to SetProfileDirectory(aProfileDirectory); } \
  NS_SCRIPTABLE NS_IMETHOD OpenCacheEntry(const nsACString & key, nsCacheAccessMode accessRequested, bool blockingMode, nsICacheEntryDescriptor * *_retval NS_OUTPARAM) { return _to OpenCacheEntry(key, accessRequested, blockingMode, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD AsyncOpenCacheEntry(const nsACString & key, nsCacheAccessMode accessRequested, nsICacheListener *listener, bool noWait) { return _to AsyncOpenCacheEntry(key, accessRequested, listener, noWait); } \
  NS_SCRIPTABLE NS_IMETHOD EvictEntries(void) { return _to EvictEntries(); } \
  NS_SCRIPTABLE NS_IMETHOD IsStorageEnabled(bool *_retval NS_OUTPARAM) { return _to IsStorageEnabled(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD DoomEntry(const nsACString & key, nsICacheListener *listener) { return _to DoomEntry(key, listener); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSICACHESESSION(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetDoomEntriesIfExpired(bool *aDoomEntriesIfExpired) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDoomEntriesIfExpired(aDoomEntriesIfExpired); } \
  NS_SCRIPTABLE NS_IMETHOD SetDoomEntriesIfExpired(bool aDoomEntriesIfExpired) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDoomEntriesIfExpired(aDoomEntriesIfExpired); } \
  NS_SCRIPTABLE NS_IMETHOD GetProfileDirectory(nsILocalFile * *aProfileDirectory) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetProfileDirectory(aProfileDirectory); } \
  NS_SCRIPTABLE NS_IMETHOD SetProfileDirectory(nsILocalFile *aProfileDirectory) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetProfileDirectory(aProfileDirectory); } \
  NS_SCRIPTABLE NS_IMETHOD OpenCacheEntry(const nsACString & key, nsCacheAccessMode accessRequested, bool blockingMode, nsICacheEntryDescriptor * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->OpenCacheEntry(key, accessRequested, blockingMode, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD AsyncOpenCacheEntry(const nsACString & key, nsCacheAccessMode accessRequested, nsICacheListener *listener, bool noWait) { return !_to ? NS_ERROR_NULL_POINTER : _to->AsyncOpenCacheEntry(key, accessRequested, listener, noWait); } \
  NS_SCRIPTABLE NS_IMETHOD EvictEntries(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->EvictEntries(); } \
  NS_SCRIPTABLE NS_IMETHOD IsStorageEnabled(bool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsStorageEnabled(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD DoomEntry(const nsACString & key, nsICacheListener *listener) { return !_to ? NS_ERROR_NULL_POINTER : _to->DoomEntry(key, listener); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsCacheSession : public nsICacheSession
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSICACHESESSION

  nsCacheSession();

private:
  ~nsCacheSession();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsCacheSession, nsICacheSession)

nsCacheSession::nsCacheSession()
{
  /* member initializers and constructor code */
}

nsCacheSession::~nsCacheSession()
{
  /* destructor code */
}

/* attribute boolean doomEntriesIfExpired; */
NS_IMETHODIMP nsCacheSession::GetDoomEntriesIfExpired(bool *aDoomEntriesIfExpired)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsCacheSession::SetDoomEntriesIfExpired(bool aDoomEntriesIfExpired)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsILocalFile profileDirectory; */
NS_IMETHODIMP nsCacheSession::GetProfileDirectory(nsILocalFile * *aProfileDirectory)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsCacheSession::SetProfileDirectory(nsILocalFile *aProfileDirectory)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsICacheEntryDescriptor openCacheEntry (in ACString key, in nsCacheAccessMode accessRequested, in boolean blockingMode); */
NS_IMETHODIMP nsCacheSession::OpenCacheEntry(const nsACString & key, nsCacheAccessMode accessRequested, bool blockingMode, nsICacheEntryDescriptor * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void asyncOpenCacheEntry (in ACString key, in nsCacheAccessMode accessRequested, in nsICacheListener listener, [optional] in boolean noWait); */
NS_IMETHODIMP nsCacheSession::AsyncOpenCacheEntry(const nsACString & key, nsCacheAccessMode accessRequested, nsICacheListener *listener, bool noWait)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void evictEntries (); */
NS_IMETHODIMP nsCacheSession::EvictEntries()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean isStorageEnabled (); */
NS_IMETHODIMP nsCacheSession::IsStorageEnabled(bool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void doomEntry (in ACString key, in nsICacheListener listener); */
NS_IMETHODIMP nsCacheSession::DoomEntry(const nsACString & key, nsICacheListener *listener)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsICacheSession_h__ */
