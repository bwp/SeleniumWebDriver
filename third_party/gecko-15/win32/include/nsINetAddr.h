/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/netwerk/base/public/nsINetAddr.idl
 */

#ifndef __gen_nsINetAddr_h__
#define __gen_nsINetAddr_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsINetAddr */
#define NS_INETADDR_IID_STR "c407ab6c-c3ca-4cb2-a99b-a7dfbb88af33"

#define NS_INETADDR_IID \
  {0xc407ab6c, 0xc3ca, 0x4cb2, \
    { 0xa9, 0x9b, 0xa7, 0xdf, 0xbb, 0x88, 0xaf, 0x33 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsINetAddr : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_INETADDR_IID)

  /* readonly attribute unsigned short family; */
  NS_SCRIPTABLE NS_IMETHOD GetFamily(PRUint16 *aFamily) = 0;

  /* readonly attribute AUTF8String address; */
  NS_SCRIPTABLE NS_IMETHOD GetAddress(nsACString & aAddress) = 0;

  /* readonly attribute unsigned short port; */
  NS_SCRIPTABLE NS_IMETHOD GetPort(PRUint16 *aPort) = 0;

  /* readonly attribute unsigned long flow; */
  NS_SCRIPTABLE NS_IMETHOD GetFlow(PRUint32 *aFlow) = 0;

  /* readonly attribute unsigned long scope; */
  NS_SCRIPTABLE NS_IMETHOD GetScope(PRUint32 *aScope) = 0;

  enum {
    FAMILY_INET = 1U,
    FAMILY_INET6 = 2U,
    FAMILY_LOCAL = 3U
  };

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsINetAddr, NS_INETADDR_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSINETADDR \
  NS_SCRIPTABLE NS_IMETHOD GetFamily(PRUint16 *aFamily); \
  NS_SCRIPTABLE NS_IMETHOD GetAddress(nsACString & aAddress); \
  NS_SCRIPTABLE NS_IMETHOD GetPort(PRUint16 *aPort); \
  NS_SCRIPTABLE NS_IMETHOD GetFlow(PRUint32 *aFlow); \
  NS_SCRIPTABLE NS_IMETHOD GetScope(PRUint32 *aScope); \

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSINETADDR(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetFamily(PRUint16 *aFamily) { return _to GetFamily(aFamily); } \
  NS_SCRIPTABLE NS_IMETHOD GetAddress(nsACString & aAddress) { return _to GetAddress(aAddress); } \
  NS_SCRIPTABLE NS_IMETHOD GetPort(PRUint16 *aPort) { return _to GetPort(aPort); } \
  NS_SCRIPTABLE NS_IMETHOD GetFlow(PRUint32 *aFlow) { return _to GetFlow(aFlow); } \
  NS_SCRIPTABLE NS_IMETHOD GetScope(PRUint32 *aScope) { return _to GetScope(aScope); } \

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSINETADDR(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetFamily(PRUint16 *aFamily) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFamily(aFamily); } \
  NS_SCRIPTABLE NS_IMETHOD GetAddress(nsACString & aAddress) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAddress(aAddress); } \
  NS_SCRIPTABLE NS_IMETHOD GetPort(PRUint16 *aPort) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPort(aPort); } \
  NS_SCRIPTABLE NS_IMETHOD GetFlow(PRUint32 *aFlow) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFlow(aFlow); } \
  NS_SCRIPTABLE NS_IMETHOD GetScope(PRUint32 *aScope) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetScope(aScope); } \

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsNetAddr : public nsINetAddr
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSINETADDR

  nsNetAddr();

private:
  ~nsNetAddr();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsNetAddr, nsINetAddr)

nsNetAddr::nsNetAddr()
{
  /* member initializers and constructor code */
}

nsNetAddr::~nsNetAddr()
{
  /* destructor code */
}

/* readonly attribute unsigned short family; */
NS_IMETHODIMP nsNetAddr::GetFamily(PRUint16 *aFamily)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute AUTF8String address; */
NS_IMETHODIMP nsNetAddr::GetAddress(nsACString & aAddress)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned short port; */
NS_IMETHODIMP nsNetAddr::GetPort(PRUint16 *aPort)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long flow; */
NS_IMETHODIMP nsNetAddr::GetFlow(PRUint32 *aFlow)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long scope; */
NS_IMETHODIMP nsNetAddr::GetScope(PRUint32 *aScope)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsINetAddr_h__ */
