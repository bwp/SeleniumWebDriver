/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/network/interfaces/nsIDOMConnection.idl
 */

#ifndef __gen_nsIDOMConnection_h__
#define __gen_nsIDOMConnection_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIDOMEventListener; /* forward declaration */


/* starting interface:    nsIDOMMozConnection */
#define NS_IDOMMOZCONNECTION_IID_STR "8c6b574d-1135-4387-a6e3-6d8ba38d79a1"

#define NS_IDOMMOZCONNECTION_IID \
  {0x8c6b574d, 0x1135, 0x4387, \
    { 0xa6, 0xe3, 0x6d, 0x8b, 0xa3, 0x8d, 0x79, 0xa1 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMMozConnection : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMMOZCONNECTION_IID)

  /* readonly attribute double bandwidth; */
  NS_SCRIPTABLE NS_IMETHOD GetBandwidth(double *aBandwidth) = 0;

  /* readonly attribute boolean metered; */
  NS_SCRIPTABLE NS_IMETHOD GetMetered(bool *aMetered) = 0;

  /* attribute nsIDOMEventListener onchange; */
  NS_SCRIPTABLE NS_IMETHOD GetOnchange(nsIDOMEventListener * *aOnchange) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetOnchange(nsIDOMEventListener *aOnchange) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMMozConnection, NS_IDOMMOZCONNECTION_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMMOZCONNECTION \
  NS_SCRIPTABLE NS_IMETHOD GetBandwidth(double *aBandwidth); \
  NS_SCRIPTABLE NS_IMETHOD GetMetered(bool *aMetered); \
  NS_SCRIPTABLE NS_IMETHOD GetOnchange(nsIDOMEventListener * *aOnchange); \
  NS_SCRIPTABLE NS_IMETHOD SetOnchange(nsIDOMEventListener *aOnchange); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMMOZCONNECTION(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetBandwidth(double *aBandwidth) { return _to GetBandwidth(aBandwidth); } \
  NS_SCRIPTABLE NS_IMETHOD GetMetered(bool *aMetered) { return _to GetMetered(aMetered); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnchange(nsIDOMEventListener * *aOnchange) { return _to GetOnchange(aOnchange); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnchange(nsIDOMEventListener *aOnchange) { return _to SetOnchange(aOnchange); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMMOZCONNECTION(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetBandwidth(double *aBandwidth) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetBandwidth(aBandwidth); } \
  NS_SCRIPTABLE NS_IMETHOD GetMetered(bool *aMetered) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMetered(aMetered); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnchange(nsIDOMEventListener * *aOnchange) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOnchange(aOnchange); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnchange(nsIDOMEventListener *aOnchange) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOnchange(aOnchange); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMMozConnection : public nsIDOMMozConnection
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMMOZCONNECTION

  nsDOMMozConnection();

private:
  ~nsDOMMozConnection();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMMozConnection, nsIDOMMozConnection)

nsDOMMozConnection::nsDOMMozConnection()
{
  /* member initializers and constructor code */
}

nsDOMMozConnection::~nsDOMMozConnection()
{
  /* destructor code */
}

/* readonly attribute double bandwidth; */
NS_IMETHODIMP nsDOMMozConnection::GetBandwidth(double *aBandwidth)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean metered; */
NS_IMETHODIMP nsDOMMozConnection::GetMetered(bool *aMetered)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIDOMEventListener onchange; */
NS_IMETHODIMP nsDOMMozConnection::GetOnchange(nsIDOMEventListener * *aOnchange)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMMozConnection::SetOnchange(nsIDOMEventListener *aOnchange)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMConnection_h__ */
