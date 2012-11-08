/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/network/interfaces/nsIDOMNavigatorNetwork.idl
 */

#ifndef __gen_nsIDOMNavigatorNetwork_h__
#define __gen_nsIDOMNavigatorNetwork_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIDOMMozConnection; /* forward declaration */

class nsIDOMMozMobileConnection; /* forward declaration */


/* starting interface:    nsIDOMMozNavigatorNetwork */
#define NS_IDOMMOZNAVIGATORNETWORK_IID_STR "fb7c3429-aa2c-4ccc-948a-467c0de29fff"

#define NS_IDOMMOZNAVIGATORNETWORK_IID \
  {0xfb7c3429, 0xaa2c, 0x4ccc, \
    { 0x94, 0x8a, 0x46, 0x7c, 0x0d, 0xe2, 0x9f, 0xff }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMMozNavigatorNetwork : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMMOZNAVIGATORNETWORK_IID)

  /* readonly attribute nsIDOMMozConnection mozConnection; */
  NS_SCRIPTABLE NS_IMETHOD GetMozConnection(nsIDOMMozConnection * *aMozConnection) = 0;

  /* readonly attribute nsIDOMMozMobileConnection mozMobileConnection; */
  NS_SCRIPTABLE NS_IMETHOD GetMozMobileConnection(nsIDOMMozMobileConnection * *aMozMobileConnection) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMMozNavigatorNetwork, NS_IDOMMOZNAVIGATORNETWORK_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMMOZNAVIGATORNETWORK \
  NS_SCRIPTABLE NS_IMETHOD GetMozConnection(nsIDOMMozConnection * *aMozConnection); \
  NS_SCRIPTABLE NS_IMETHOD GetMozMobileConnection(nsIDOMMozMobileConnection * *aMozMobileConnection); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMMOZNAVIGATORNETWORK(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetMozConnection(nsIDOMMozConnection * *aMozConnection) { return _to GetMozConnection(aMozConnection); } \
  NS_SCRIPTABLE NS_IMETHOD GetMozMobileConnection(nsIDOMMozMobileConnection * *aMozMobileConnection) { return _to GetMozMobileConnection(aMozMobileConnection); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMMOZNAVIGATORNETWORK(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetMozConnection(nsIDOMMozConnection * *aMozConnection) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMozConnection(aMozConnection); } \
  NS_SCRIPTABLE NS_IMETHOD GetMozMobileConnection(nsIDOMMozMobileConnection * *aMozMobileConnection) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMozMobileConnection(aMozMobileConnection); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMMozNavigatorNetwork : public nsIDOMMozNavigatorNetwork
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMMOZNAVIGATORNETWORK

  nsDOMMozNavigatorNetwork();

private:
  ~nsDOMMozNavigatorNetwork();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMMozNavigatorNetwork, nsIDOMMozNavigatorNetwork)

nsDOMMozNavigatorNetwork::nsDOMMozNavigatorNetwork()
{
  /* member initializers and constructor code */
}

nsDOMMozNavigatorNetwork::~nsDOMMozNavigatorNetwork()
{
  /* destructor code */
}

/* readonly attribute nsIDOMMozConnection mozConnection; */
NS_IMETHODIMP nsDOMMozNavigatorNetwork::GetMozConnection(nsIDOMMozConnection * *aMozConnection)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMMozMobileConnection mozMobileConnection; */
NS_IMETHODIMP nsDOMMozNavigatorNetwork::GetMozMobileConnection(nsIDOMMozMobileConnection * *aMozMobileConnection)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMNavigatorNetwork_h__ */
