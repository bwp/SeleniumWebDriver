/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/netwerk/base/public/nsICachingChannel.idl
 */

#ifndef __gen_nsICachingChannel_h__
#define __gen_nsICachingChannel_h__


#ifndef __gen_nsICacheInfoChannel_h__
#include "nsICacheInfoChannel.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIFile; /* forward declaration */


/* starting interface:    nsICachingChannel */
#define NS_ICACHINGCHANNEL_IID_STR "8456ebee-7127-485b-9518-c2e328c09f5d"

#define NS_ICACHINGCHANNEL_IID \
  {0x8456ebee, 0x7127, 0x485b, \
    { 0x95, 0x18, 0xc2, 0xe3, 0x28, 0xc0, 0x9f, 0x5d }}

class NS_NO_VTABLE NS_SCRIPTABLE nsICachingChannel : public nsICacheInfoChannel {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ICACHINGCHANNEL_IID)

  /* attribute nsISupports cacheToken; */
  NS_SCRIPTABLE NS_IMETHOD GetCacheToken(nsISupports * *aCacheToken) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetCacheToken(nsISupports *aCacheToken) = 0;

  /* attribute nsISupports offlineCacheToken; */
  NS_SCRIPTABLE NS_IMETHOD GetOfflineCacheToken(nsISupports * *aOfflineCacheToken) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetOfflineCacheToken(nsISupports *aOfflineCacheToken) = 0;

  /* attribute nsISupports cacheKey; */
  NS_SCRIPTABLE NS_IMETHOD GetCacheKey(nsISupports * *aCacheKey) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetCacheKey(nsISupports *aCacheKey) = 0;

  /* attribute boolean cacheAsFile; */
  NS_SCRIPTABLE NS_IMETHOD GetCacheAsFile(bool *aCacheAsFile) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetCacheAsFile(bool aCacheAsFile) = 0;

  /* readonly attribute nsIFile cacheFile; */
  NS_SCRIPTABLE NS_IMETHOD GetCacheFile(nsIFile * *aCacheFile) = 0;

  enum {
    LOAD_NO_NETWORK_IO = 67108864U,
    LOAD_CHECK_OFFLINE_CACHE = 134217728U,
    LOAD_BYPASS_LOCAL_CACHE = 268435456U,
    LOAD_BYPASS_LOCAL_CACHE_IF_BUSY = 536870912U,
    LOAD_ONLY_FROM_CACHE = 1073741824U,
    LOAD_ONLY_IF_MODIFIED = 2147483648U
  };

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsICachingChannel, NS_ICACHINGCHANNEL_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSICACHINGCHANNEL \
  NS_SCRIPTABLE NS_IMETHOD GetCacheToken(nsISupports * *aCacheToken); \
  NS_SCRIPTABLE NS_IMETHOD SetCacheToken(nsISupports *aCacheToken); \
  NS_SCRIPTABLE NS_IMETHOD GetOfflineCacheToken(nsISupports * *aOfflineCacheToken); \
  NS_SCRIPTABLE NS_IMETHOD SetOfflineCacheToken(nsISupports *aOfflineCacheToken); \
  NS_SCRIPTABLE NS_IMETHOD GetCacheKey(nsISupports * *aCacheKey); \
  NS_SCRIPTABLE NS_IMETHOD SetCacheKey(nsISupports *aCacheKey); \
  NS_SCRIPTABLE NS_IMETHOD GetCacheAsFile(bool *aCacheAsFile); \
  NS_SCRIPTABLE NS_IMETHOD SetCacheAsFile(bool aCacheAsFile); \
  NS_SCRIPTABLE NS_IMETHOD GetCacheFile(nsIFile * *aCacheFile); \

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSICACHINGCHANNEL(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetCacheToken(nsISupports * *aCacheToken) { return _to GetCacheToken(aCacheToken); } \
  NS_SCRIPTABLE NS_IMETHOD SetCacheToken(nsISupports *aCacheToken) { return _to SetCacheToken(aCacheToken); } \
  NS_SCRIPTABLE NS_IMETHOD GetOfflineCacheToken(nsISupports * *aOfflineCacheToken) { return _to GetOfflineCacheToken(aOfflineCacheToken); } \
  NS_SCRIPTABLE NS_IMETHOD SetOfflineCacheToken(nsISupports *aOfflineCacheToken) { return _to SetOfflineCacheToken(aOfflineCacheToken); } \
  NS_SCRIPTABLE NS_IMETHOD GetCacheKey(nsISupports * *aCacheKey) { return _to GetCacheKey(aCacheKey); } \
  NS_SCRIPTABLE NS_IMETHOD SetCacheKey(nsISupports *aCacheKey) { return _to SetCacheKey(aCacheKey); } \
  NS_SCRIPTABLE NS_IMETHOD GetCacheAsFile(bool *aCacheAsFile) { return _to GetCacheAsFile(aCacheAsFile); } \
  NS_SCRIPTABLE NS_IMETHOD SetCacheAsFile(bool aCacheAsFile) { return _to SetCacheAsFile(aCacheAsFile); } \
  NS_SCRIPTABLE NS_IMETHOD GetCacheFile(nsIFile * *aCacheFile) { return _to GetCacheFile(aCacheFile); } \

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSICACHINGCHANNEL(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetCacheToken(nsISupports * *aCacheToken) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCacheToken(aCacheToken); } \
  NS_SCRIPTABLE NS_IMETHOD SetCacheToken(nsISupports *aCacheToken) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetCacheToken(aCacheToken); } \
  NS_SCRIPTABLE NS_IMETHOD GetOfflineCacheToken(nsISupports * *aOfflineCacheToken) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOfflineCacheToken(aOfflineCacheToken); } \
  NS_SCRIPTABLE NS_IMETHOD SetOfflineCacheToken(nsISupports *aOfflineCacheToken) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOfflineCacheToken(aOfflineCacheToken); } \
  NS_SCRIPTABLE NS_IMETHOD GetCacheKey(nsISupports * *aCacheKey) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCacheKey(aCacheKey); } \
  NS_SCRIPTABLE NS_IMETHOD SetCacheKey(nsISupports *aCacheKey) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetCacheKey(aCacheKey); } \
  NS_SCRIPTABLE NS_IMETHOD GetCacheAsFile(bool *aCacheAsFile) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCacheAsFile(aCacheAsFile); } \
  NS_SCRIPTABLE NS_IMETHOD SetCacheAsFile(bool aCacheAsFile) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetCacheAsFile(aCacheAsFile); } \
  NS_SCRIPTABLE NS_IMETHOD GetCacheFile(nsIFile * *aCacheFile) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCacheFile(aCacheFile); } \

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsCachingChannel : public nsICachingChannel
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSICACHINGCHANNEL

  nsCachingChannel();

private:
  ~nsCachingChannel();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsCachingChannel, nsICachingChannel)

nsCachingChannel::nsCachingChannel()
{
  /* member initializers and constructor code */
}

nsCachingChannel::~nsCachingChannel()
{
  /* destructor code */
}

/* attribute nsISupports cacheToken; */
NS_IMETHODIMP nsCachingChannel::GetCacheToken(nsISupports * *aCacheToken)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsCachingChannel::SetCacheToken(nsISupports *aCacheToken)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsISupports offlineCacheToken; */
NS_IMETHODIMP nsCachingChannel::GetOfflineCacheToken(nsISupports * *aOfflineCacheToken)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsCachingChannel::SetOfflineCacheToken(nsISupports *aOfflineCacheToken)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsISupports cacheKey; */
NS_IMETHODIMP nsCachingChannel::GetCacheKey(nsISupports * *aCacheKey)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsCachingChannel::SetCacheKey(nsISupports *aCacheKey)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean cacheAsFile; */
NS_IMETHODIMP nsCachingChannel::GetCacheAsFile(bool *aCacheAsFile)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsCachingChannel::SetCacheAsFile(bool aCacheAsFile)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIFile cacheFile; */
NS_IMETHODIMP nsCachingChannel::GetCacheFile(nsIFile * *aCacheFile)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsICachingChannel_h__ */
