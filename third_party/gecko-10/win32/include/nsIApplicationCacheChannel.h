/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/netwerk/base/public/nsIApplicationCacheChannel.idl
 */

#ifndef __gen_nsIApplicationCacheChannel_h__
#define __gen_nsIApplicationCacheChannel_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#ifndef __gen_nsIApplicationCacheContainer_h__
#include "nsIApplicationCacheContainer.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIApplicationCacheChannel */
#define NS_IAPPLICATIONCACHECHANNEL_IID_STR "8d9024e6-ab01-442d-8119-2f55d55d91b0"

#define NS_IAPPLICATIONCACHECHANNEL_IID \
  {0x8d9024e6, 0xab01, 0x442d, \
    { 0x81, 0x19, 0x2f, 0x55, 0xd5, 0x5d, 0x91, 0xb0 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIApplicationCacheChannel : public nsIApplicationCacheContainer {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IAPPLICATIONCACHECHANNEL_IID)

  /* readonly attribute boolean loadedFromApplicationCache; */
  NS_SCRIPTABLE NS_IMETHOD GetLoadedFromApplicationCache(bool *aLoadedFromApplicationCache) = 0;

  /* attribute boolean inheritApplicationCache; */
  NS_SCRIPTABLE NS_IMETHOD GetInheritApplicationCache(bool *aInheritApplicationCache) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetInheritApplicationCache(bool aInheritApplicationCache) = 0;

  /* attribute boolean chooseApplicationCache; */
  NS_SCRIPTABLE NS_IMETHOD GetChooseApplicationCache(bool *aChooseApplicationCache) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetChooseApplicationCache(bool aChooseApplicationCache) = 0;

  /* void markOfflineCacheEntryAsForeign (); */
  NS_SCRIPTABLE NS_IMETHOD MarkOfflineCacheEntryAsForeign(void) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIApplicationCacheChannel, NS_IAPPLICATIONCACHECHANNEL_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIAPPLICATIONCACHECHANNEL \
  NS_SCRIPTABLE NS_IMETHOD GetLoadedFromApplicationCache(bool *aLoadedFromApplicationCache); \
  NS_SCRIPTABLE NS_IMETHOD GetInheritApplicationCache(bool *aInheritApplicationCache); \
  NS_SCRIPTABLE NS_IMETHOD SetInheritApplicationCache(bool aInheritApplicationCache); \
  NS_SCRIPTABLE NS_IMETHOD GetChooseApplicationCache(bool *aChooseApplicationCache); \
  NS_SCRIPTABLE NS_IMETHOD SetChooseApplicationCache(bool aChooseApplicationCache); \
  NS_SCRIPTABLE NS_IMETHOD MarkOfflineCacheEntryAsForeign(void); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIAPPLICATIONCACHECHANNEL(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetLoadedFromApplicationCache(bool *aLoadedFromApplicationCache) { return _to GetLoadedFromApplicationCache(aLoadedFromApplicationCache); } \
  NS_SCRIPTABLE NS_IMETHOD GetInheritApplicationCache(bool *aInheritApplicationCache) { return _to GetInheritApplicationCache(aInheritApplicationCache); } \
  NS_SCRIPTABLE NS_IMETHOD SetInheritApplicationCache(bool aInheritApplicationCache) { return _to SetInheritApplicationCache(aInheritApplicationCache); } \
  NS_SCRIPTABLE NS_IMETHOD GetChooseApplicationCache(bool *aChooseApplicationCache) { return _to GetChooseApplicationCache(aChooseApplicationCache); } \
  NS_SCRIPTABLE NS_IMETHOD SetChooseApplicationCache(bool aChooseApplicationCache) { return _to SetChooseApplicationCache(aChooseApplicationCache); } \
  NS_SCRIPTABLE NS_IMETHOD MarkOfflineCacheEntryAsForeign(void) { return _to MarkOfflineCacheEntryAsForeign(); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIAPPLICATIONCACHECHANNEL(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetLoadedFromApplicationCache(bool *aLoadedFromApplicationCache) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLoadedFromApplicationCache(aLoadedFromApplicationCache); } \
  NS_SCRIPTABLE NS_IMETHOD GetInheritApplicationCache(bool *aInheritApplicationCache) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetInheritApplicationCache(aInheritApplicationCache); } \
  NS_SCRIPTABLE NS_IMETHOD SetInheritApplicationCache(bool aInheritApplicationCache) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetInheritApplicationCache(aInheritApplicationCache); } \
  NS_SCRIPTABLE NS_IMETHOD GetChooseApplicationCache(bool *aChooseApplicationCache) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetChooseApplicationCache(aChooseApplicationCache); } \
  NS_SCRIPTABLE NS_IMETHOD SetChooseApplicationCache(bool aChooseApplicationCache) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetChooseApplicationCache(aChooseApplicationCache); } \
  NS_SCRIPTABLE NS_IMETHOD MarkOfflineCacheEntryAsForeign(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->MarkOfflineCacheEntryAsForeign(); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsApplicationCacheChannel : public nsIApplicationCacheChannel
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIAPPLICATIONCACHECHANNEL

  nsApplicationCacheChannel();

private:
  ~nsApplicationCacheChannel();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsApplicationCacheChannel, nsIApplicationCacheChannel)

nsApplicationCacheChannel::nsApplicationCacheChannel()
{
  /* member initializers and constructor code */
}

nsApplicationCacheChannel::~nsApplicationCacheChannel()
{
  /* destructor code */
}

/* readonly attribute boolean loadedFromApplicationCache; */
NS_IMETHODIMP nsApplicationCacheChannel::GetLoadedFromApplicationCache(bool *aLoadedFromApplicationCache)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean inheritApplicationCache; */
NS_IMETHODIMP nsApplicationCacheChannel::GetInheritApplicationCache(bool *aInheritApplicationCache)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsApplicationCacheChannel::SetInheritApplicationCache(bool aInheritApplicationCache)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean chooseApplicationCache; */
NS_IMETHODIMP nsApplicationCacheChannel::GetChooseApplicationCache(bool *aChooseApplicationCache)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsApplicationCacheChannel::SetChooseApplicationCache(bool aChooseApplicationCache)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void markOfflineCacheEntryAsForeign (); */
NS_IMETHODIMP nsApplicationCacheChannel::MarkOfflineCacheEntryAsForeign()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIApplicationCacheChannel_h__ */
