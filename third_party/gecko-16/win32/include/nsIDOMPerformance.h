/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/interfaces/base/nsIDOMPerformance.idl
 */

#ifndef __gen_nsIDOMPerformance_h__
#define __gen_nsIDOMPerformance_h__


#ifndef __gen_domstubs_h__
#include "domstubs.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIDOMPerformanceTiming; /* forward declaration */

class nsIDOMPerformanceNavigation; /* forward declaration */


/* starting interface:    nsIDOMPerformance */
#define NS_IDOMPERFORMANCE_IID_STR "ac274ec8-ee9f-44ef-b2f0-b13c22225a98"

#define NS_IDOMPERFORMANCE_IID \
  {0xac274ec8, 0xee9f, 0x44ef, \
    { 0xb2, 0xf0, 0xb1, 0x3c, 0x22, 0x22, 0x5a, 0x98 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMPerformance : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMPERFORMANCE_IID)

  /* readonly attribute nsIDOMPerformanceTiming timing; */
  NS_SCRIPTABLE NS_IMETHOD GetTiming(nsIDOMPerformanceTiming * *aTiming) = 0;

  /* readonly attribute nsIDOMPerformanceNavigation navigation; */
  NS_SCRIPTABLE NS_IMETHOD GetNavigation(nsIDOMPerformanceNavigation * *aNavigation) = 0;

  /* DOMHighResTimeStamp now (); */
  NS_SCRIPTABLE NS_IMETHOD Now(DOMHighResTimeStamp *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMPerformance, NS_IDOMPERFORMANCE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMPERFORMANCE \
  NS_SCRIPTABLE NS_IMETHOD GetTiming(nsIDOMPerformanceTiming * *aTiming); \
  NS_SCRIPTABLE NS_IMETHOD GetNavigation(nsIDOMPerformanceNavigation * *aNavigation); \
  NS_SCRIPTABLE NS_IMETHOD Now(DOMHighResTimeStamp *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMPERFORMANCE(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetTiming(nsIDOMPerformanceTiming * *aTiming) { return _to GetTiming(aTiming); } \
  NS_SCRIPTABLE NS_IMETHOD GetNavigation(nsIDOMPerformanceNavigation * *aNavigation) { return _to GetNavigation(aNavigation); } \
  NS_SCRIPTABLE NS_IMETHOD Now(DOMHighResTimeStamp *_retval NS_OUTPARAM) { return _to Now(_retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMPERFORMANCE(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetTiming(nsIDOMPerformanceTiming * *aTiming) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTiming(aTiming); } \
  NS_SCRIPTABLE NS_IMETHOD GetNavigation(nsIDOMPerformanceNavigation * *aNavigation) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNavigation(aNavigation); } \
  NS_SCRIPTABLE NS_IMETHOD Now(DOMHighResTimeStamp *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Now(_retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMPerformance : public nsIDOMPerformance
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMPERFORMANCE

  nsDOMPerformance();

private:
  ~nsDOMPerformance();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMPerformance, nsIDOMPerformance)

nsDOMPerformance::nsDOMPerformance()
{
  /* member initializers and constructor code */
}

nsDOMPerformance::~nsDOMPerformance()
{
  /* destructor code */
}

/* readonly attribute nsIDOMPerformanceTiming timing; */
NS_IMETHODIMP nsDOMPerformance::GetTiming(nsIDOMPerformanceTiming * *aTiming)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMPerformanceNavigation navigation; */
NS_IMETHODIMP nsDOMPerformance::GetNavigation(nsIDOMPerformanceNavigation * *aNavigation)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* DOMHighResTimeStamp now (); */
NS_IMETHODIMP nsDOMPerformance::Now(DOMHighResTimeStamp *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMPerformance_h__ */
