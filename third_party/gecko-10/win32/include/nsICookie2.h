/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/netwerk/cookie/nsICookie2.idl
 */

#ifndef __gen_nsICookie2_h__
#define __gen_nsICookie2_h__


#ifndef __gen_nsICookie_h__
#include "nsICookie.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsICookie2 */
#define NS_ICOOKIE2_IID_STR "05c420e5-03d0-4c7b-a605-df7ebe5ca326"

#define NS_ICOOKIE2_IID \
  {0x05c420e5, 0x03d0, 0x4c7b, \
    { 0xa6, 0x05, 0xdf, 0x7e, 0xbe, 0x5c, 0xa3, 0x26 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsICookie2 : public nsICookie {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ICOOKIE2_IID)

  /* readonly attribute AUTF8String rawHost; */
  NS_SCRIPTABLE NS_IMETHOD GetRawHost(nsACString & aRawHost) = 0;

  /* readonly attribute boolean isSession; */
  NS_SCRIPTABLE NS_IMETHOD GetIsSession(bool *aIsSession) = 0;

  /* readonly attribute PRInt64 expiry; */
  NS_SCRIPTABLE NS_IMETHOD GetExpiry(PRInt64 *aExpiry) = 0;

  /* readonly attribute boolean isHttpOnly; */
  NS_SCRIPTABLE NS_IMETHOD GetIsHttpOnly(bool *aIsHttpOnly) = 0;

  /* readonly attribute PRInt64 creationTime; */
  NS_SCRIPTABLE NS_IMETHOD GetCreationTime(PRInt64 *aCreationTime) = 0;

  /* readonly attribute PRInt64 lastAccessed; */
  NS_SCRIPTABLE NS_IMETHOD GetLastAccessed(PRInt64 *aLastAccessed) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsICookie2, NS_ICOOKIE2_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSICOOKIE2 \
  NS_SCRIPTABLE NS_IMETHOD GetRawHost(nsACString & aRawHost); \
  NS_SCRIPTABLE NS_IMETHOD GetIsSession(bool *aIsSession); \
  NS_SCRIPTABLE NS_IMETHOD GetExpiry(PRInt64 *aExpiry); \
  NS_SCRIPTABLE NS_IMETHOD GetIsHttpOnly(bool *aIsHttpOnly); \
  NS_SCRIPTABLE NS_IMETHOD GetCreationTime(PRInt64 *aCreationTime); \
  NS_SCRIPTABLE NS_IMETHOD GetLastAccessed(PRInt64 *aLastAccessed); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSICOOKIE2(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetRawHost(nsACString & aRawHost) { return _to GetRawHost(aRawHost); } \
  NS_SCRIPTABLE NS_IMETHOD GetIsSession(bool *aIsSession) { return _to GetIsSession(aIsSession); } \
  NS_SCRIPTABLE NS_IMETHOD GetExpiry(PRInt64 *aExpiry) { return _to GetExpiry(aExpiry); } \
  NS_SCRIPTABLE NS_IMETHOD GetIsHttpOnly(bool *aIsHttpOnly) { return _to GetIsHttpOnly(aIsHttpOnly); } \
  NS_SCRIPTABLE NS_IMETHOD GetCreationTime(PRInt64 *aCreationTime) { return _to GetCreationTime(aCreationTime); } \
  NS_SCRIPTABLE NS_IMETHOD GetLastAccessed(PRInt64 *aLastAccessed) { return _to GetLastAccessed(aLastAccessed); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSICOOKIE2(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetRawHost(nsACString & aRawHost) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRawHost(aRawHost); } \
  NS_SCRIPTABLE NS_IMETHOD GetIsSession(bool *aIsSession) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIsSession(aIsSession); } \
  NS_SCRIPTABLE NS_IMETHOD GetExpiry(PRInt64 *aExpiry) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetExpiry(aExpiry); } \
  NS_SCRIPTABLE NS_IMETHOD GetIsHttpOnly(bool *aIsHttpOnly) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIsHttpOnly(aIsHttpOnly); } \
  NS_SCRIPTABLE NS_IMETHOD GetCreationTime(PRInt64 *aCreationTime) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCreationTime(aCreationTime); } \
  NS_SCRIPTABLE NS_IMETHOD GetLastAccessed(PRInt64 *aLastAccessed) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLastAccessed(aLastAccessed); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsCookie2 : public nsICookie2
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSICOOKIE2

  nsCookie2();

private:
  ~nsCookie2();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsCookie2, nsICookie2)

nsCookie2::nsCookie2()
{
  /* member initializers and constructor code */
}

nsCookie2::~nsCookie2()
{
  /* destructor code */
}

/* readonly attribute AUTF8String rawHost; */
NS_IMETHODIMP nsCookie2::GetRawHost(nsACString & aRawHost)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean isSession; */
NS_IMETHODIMP nsCookie2::GetIsSession(bool *aIsSession)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute PRInt64 expiry; */
NS_IMETHODIMP nsCookie2::GetExpiry(PRInt64 *aExpiry)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean isHttpOnly; */
NS_IMETHODIMP nsCookie2::GetIsHttpOnly(bool *aIsHttpOnly)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute PRInt64 creationTime; */
NS_IMETHODIMP nsCookie2::GetCreationTime(PRInt64 *aCreationTime)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute PRInt64 lastAccessed; */
NS_IMETHODIMP nsCookie2::GetLastAccessed(PRInt64 *aLastAccessed)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsICookie2_h__ */
