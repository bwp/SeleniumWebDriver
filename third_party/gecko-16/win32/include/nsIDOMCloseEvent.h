/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/interfaces/events/nsIDOMCloseEvent.idl
 */

#ifndef __gen_nsIDOMCloseEvent_h__
#define __gen_nsIDOMCloseEvent_h__


#ifndef __gen_nsIDOMEvent_h__
#include "nsIDOMEvent.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIDOMCloseEvent */
#define NS_IDOMCLOSEEVENT_IID_STR "0e3f4687-921c-4141-9615-0fca9e3b02f4"

#define NS_IDOMCLOSEEVENT_IID \
  {0x0e3f4687, 0x921c, 0x4141, \
    { 0x96, 0x15, 0x0f, 0xca, 0x9e, 0x3b, 0x02, 0xf4 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMCloseEvent : public nsIDOMEvent {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMCLOSEEVENT_IID)

  /* readonly attribute boolean wasClean; */
  NS_SCRIPTABLE NS_IMETHOD GetWasClean(bool *aWasClean) = 0;

  /* readonly attribute unsigned short code; */
  NS_SCRIPTABLE NS_IMETHOD GetCode(PRUint16 *aCode) = 0;

  /* readonly attribute DOMString reason; */
  NS_SCRIPTABLE NS_IMETHOD GetReason(nsAString & aReason) = 0;

  /* void initCloseEvent (in DOMString aType, in boolean aCanBubble, in boolean aCancelable, in boolean aWasClean, in unsigned short aReasonCode, in DOMString aReason); */
  NS_SCRIPTABLE NS_IMETHOD InitCloseEvent(const nsAString & aType, bool aCanBubble, bool aCancelable, bool aWasClean, PRUint16 aReasonCode, const nsAString & aReason) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMCloseEvent, NS_IDOMCLOSEEVENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMCLOSEEVENT \
  NS_SCRIPTABLE NS_IMETHOD GetWasClean(bool *aWasClean); \
  NS_SCRIPTABLE NS_IMETHOD GetCode(PRUint16 *aCode); \
  NS_SCRIPTABLE NS_IMETHOD GetReason(nsAString & aReason); \
  NS_SCRIPTABLE NS_IMETHOD InitCloseEvent(const nsAString & aType, bool aCanBubble, bool aCancelable, bool aWasClean, PRUint16 aReasonCode, const nsAString & aReason); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMCLOSEEVENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetWasClean(bool *aWasClean) { return _to GetWasClean(aWasClean); } \
  NS_SCRIPTABLE NS_IMETHOD GetCode(PRUint16 *aCode) { return _to GetCode(aCode); } \
  NS_SCRIPTABLE NS_IMETHOD GetReason(nsAString & aReason) { return _to GetReason(aReason); } \
  NS_SCRIPTABLE NS_IMETHOD InitCloseEvent(const nsAString & aType, bool aCanBubble, bool aCancelable, bool aWasClean, PRUint16 aReasonCode, const nsAString & aReason) { return _to InitCloseEvent(aType, aCanBubble, aCancelable, aWasClean, aReasonCode, aReason); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMCLOSEEVENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetWasClean(bool *aWasClean) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetWasClean(aWasClean); } \
  NS_SCRIPTABLE NS_IMETHOD GetCode(PRUint16 *aCode) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCode(aCode); } \
  NS_SCRIPTABLE NS_IMETHOD GetReason(nsAString & aReason) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetReason(aReason); } \
  NS_SCRIPTABLE NS_IMETHOD InitCloseEvent(const nsAString & aType, bool aCanBubble, bool aCancelable, bool aWasClean, PRUint16 aReasonCode, const nsAString & aReason) { return !_to ? NS_ERROR_NULL_POINTER : _to->InitCloseEvent(aType, aCanBubble, aCancelable, aWasClean, aReasonCode, aReason); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMCloseEvent : public nsIDOMCloseEvent
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMCLOSEEVENT

  nsDOMCloseEvent();

private:
  ~nsDOMCloseEvent();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMCloseEvent, nsIDOMCloseEvent)

nsDOMCloseEvent::nsDOMCloseEvent()
{
  /* member initializers and constructor code */
}

nsDOMCloseEvent::~nsDOMCloseEvent()
{
  /* destructor code */
}

/* readonly attribute boolean wasClean; */
NS_IMETHODIMP nsDOMCloseEvent::GetWasClean(bool *aWasClean)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned short code; */
NS_IMETHODIMP nsDOMCloseEvent::GetCode(PRUint16 *aCode)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString reason; */
NS_IMETHODIMP nsDOMCloseEvent::GetReason(nsAString & aReason)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void initCloseEvent (in DOMString aType, in boolean aCanBubble, in boolean aCancelable, in boolean aWasClean, in unsigned short aReasonCode, in DOMString aReason); */
NS_IMETHODIMP nsDOMCloseEvent::InitCloseEvent(const nsAString & aType, bool aCanBubble, bool aCancelable, bool aWasClean, PRUint16 aReasonCode, const nsAString & aReason)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMCloseEvent_h__ */
