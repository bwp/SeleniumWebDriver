/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/netwerk/base/public/nsISpeculativeConnect.idl
 */

#ifndef __gen_nsISpeculativeConnect_h__
#define __gen_nsISpeculativeConnect_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIURI; /* forward declaration */

class nsIInterfaceRequestor; /* forward declaration */

class nsIEventTarget; /* forward declaration */


/* starting interface:    nsISpeculativeConnect */
#define NS_ISPECULATIVECONNECT_IID_STR "b3c53863-1313-480a-90a2-5b0da651ee5e"

#define NS_ISPECULATIVECONNECT_IID \
  {0xb3c53863, 0x1313, 0x480a, \
    { 0x90, 0xa2, 0x5b, 0x0d, 0xa6, 0x51, 0xee, 0x5e }}

class NS_NO_VTABLE NS_SCRIPTABLE nsISpeculativeConnect : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ISPECULATIVECONNECT_IID)

  /* void speculativeConnect (in nsIURI aURI, in nsIInterfaceRequestor aCallbacks, in nsIEventTarget aTarget); */
  NS_SCRIPTABLE NS_IMETHOD SpeculativeConnect(nsIURI *aURI, nsIInterfaceRequestor *aCallbacks, nsIEventTarget *aTarget) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsISpeculativeConnect, NS_ISPECULATIVECONNECT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSISPECULATIVECONNECT \
  NS_SCRIPTABLE NS_IMETHOD SpeculativeConnect(nsIURI *aURI, nsIInterfaceRequestor *aCallbacks, nsIEventTarget *aTarget); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSISPECULATIVECONNECT(_to) \
  NS_SCRIPTABLE NS_IMETHOD SpeculativeConnect(nsIURI *aURI, nsIInterfaceRequestor *aCallbacks, nsIEventTarget *aTarget) { return _to SpeculativeConnect(aURI, aCallbacks, aTarget); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSISPECULATIVECONNECT(_to) \
  NS_SCRIPTABLE NS_IMETHOD SpeculativeConnect(nsIURI *aURI, nsIInterfaceRequestor *aCallbacks, nsIEventTarget *aTarget) { return !_to ? NS_ERROR_NULL_POINTER : _to->SpeculativeConnect(aURI, aCallbacks, aTarget); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsSpeculativeConnect : public nsISpeculativeConnect
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSISPECULATIVECONNECT

  nsSpeculativeConnect();

private:
  ~nsSpeculativeConnect();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsSpeculativeConnect, nsISpeculativeConnect)

nsSpeculativeConnect::nsSpeculativeConnect()
{
  /* member initializers and constructor code */
}

nsSpeculativeConnect::~nsSpeculativeConnect()
{
  /* destructor code */
}

/* void speculativeConnect (in nsIURI aURI, in nsIInterfaceRequestor aCallbacks, in nsIEventTarget aTarget); */
NS_IMETHODIMP nsSpeculativeConnect::SpeculativeConnect(nsIURI *aURI, nsIInterfaceRequestor *aCallbacks, nsIEventTarget *aTarget)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsISpeculativeConnect_h__ */
