/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/sms/interfaces/nsIDOMSmsRequest.idl
 */

#ifndef __gen_nsIDOMSmsRequest_h__
#define __gen_nsIDOMSmsRequest_h__


#ifndef __gen_nsIDOMDOMRequest_h__
#include "nsIDOMDOMRequest.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIDOMMozSmsRequest */
#define NS_IDOMMOZSMSREQUEST_IID_STR "f77caa0f-d957-40b4-b1c6-195ebaace60c"

#define NS_IDOMMOZSMSREQUEST_IID \
  {0xf77caa0f, 0xd957, 0x40b4, \
    { 0xb1, 0xc6, 0x19, 0x5e, 0xba, 0xac, 0xe6, 0x0c }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMMozSmsRequest : public nsIDOMDOMRequest {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMMOZSMSREQUEST_IID)

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMMozSmsRequest, NS_IDOMMOZSMSREQUEST_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMMOZSMSREQUEST \
  /* no methods! */

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMMOZSMSREQUEST(_to) \
  /* no methods! */

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMMOZSMSREQUEST(_to) \
  /* no methods! */

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMMozSmsRequest : public nsIDOMMozSmsRequest
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMMOZSMSREQUEST

  nsDOMMozSmsRequest();

private:
  ~nsDOMMozSmsRequest();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMMozSmsRequest, nsIDOMMozSmsRequest)

nsDOMMozSmsRequest::nsDOMMozSmsRequest()
{
  /* member initializers and constructor code */
}

nsDOMMozSmsRequest::~nsDOMMozSmsRequest()
{
  /* destructor code */
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMSmsRequest_h__ */
