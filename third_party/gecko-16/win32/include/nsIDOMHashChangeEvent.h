/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/interfaces/events/nsIDOMHashChangeEvent.idl
 */

#ifndef __gen_nsIDOMHashChangeEvent_h__
#define __gen_nsIDOMHashChangeEvent_h__


#ifndef __gen_nsIDOMEvent_h__
#include "nsIDOMEvent.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIDOMHashChangeEvent */
#define NS_IDOMHASHCHANGEEVENT_IID_STR "83a9bc2d-d82d-45cc-8f11-4c919519f6e0"

#define NS_IDOMHASHCHANGEEVENT_IID \
  {0x83a9bc2d, 0xd82d, 0x45cc, \
    { 0x8f, 0x11, 0x4c, 0x91, 0x95, 0x19, 0xf6, 0xe0 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMHashChangeEvent : public nsIDOMEvent {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMHASHCHANGEEVENT_IID)

  /* readonly attribute DOMString oldURL; */
  NS_SCRIPTABLE NS_IMETHOD GetOldURL(nsAString & aOldURL) = 0;

  /* readonly attribute DOMString newURL; */
  NS_SCRIPTABLE NS_IMETHOD GetNewURL(nsAString & aNewURL) = 0;

  /* void initHashChangeEvent (in DOMString typeArg, in boolean canBubbleArg, in boolean cancelableArg, in DOMString oldURLArg, in DOMString newURLArg); */
  NS_SCRIPTABLE NS_IMETHOD InitHashChangeEvent(const nsAString & typeArg, bool canBubbleArg, bool cancelableArg, const nsAString & oldURLArg, const nsAString & newURLArg) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMHashChangeEvent, NS_IDOMHASHCHANGEEVENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMHASHCHANGEEVENT \
  NS_SCRIPTABLE NS_IMETHOD GetOldURL(nsAString & aOldURL); \
  NS_SCRIPTABLE NS_IMETHOD GetNewURL(nsAString & aNewURL); \
  NS_SCRIPTABLE NS_IMETHOD InitHashChangeEvent(const nsAString & typeArg, bool canBubbleArg, bool cancelableArg, const nsAString & oldURLArg, const nsAString & newURLArg); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMHASHCHANGEEVENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetOldURL(nsAString & aOldURL) { return _to GetOldURL(aOldURL); } \
  NS_SCRIPTABLE NS_IMETHOD GetNewURL(nsAString & aNewURL) { return _to GetNewURL(aNewURL); } \
  NS_SCRIPTABLE NS_IMETHOD InitHashChangeEvent(const nsAString & typeArg, bool canBubbleArg, bool cancelableArg, const nsAString & oldURLArg, const nsAString & newURLArg) { return _to InitHashChangeEvent(typeArg, canBubbleArg, cancelableArg, oldURLArg, newURLArg); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMHASHCHANGEEVENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetOldURL(nsAString & aOldURL) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOldURL(aOldURL); } \
  NS_SCRIPTABLE NS_IMETHOD GetNewURL(nsAString & aNewURL) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNewURL(aNewURL); } \
  NS_SCRIPTABLE NS_IMETHOD InitHashChangeEvent(const nsAString & typeArg, bool canBubbleArg, bool cancelableArg, const nsAString & oldURLArg, const nsAString & newURLArg) { return !_to ? NS_ERROR_NULL_POINTER : _to->InitHashChangeEvent(typeArg, canBubbleArg, cancelableArg, oldURLArg, newURLArg); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMHashChangeEvent : public nsIDOMHashChangeEvent
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMHASHCHANGEEVENT

  nsDOMHashChangeEvent();

private:
  ~nsDOMHashChangeEvent();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMHashChangeEvent, nsIDOMHashChangeEvent)

nsDOMHashChangeEvent::nsDOMHashChangeEvent()
{
  /* member initializers and constructor code */
}

nsDOMHashChangeEvent::~nsDOMHashChangeEvent()
{
  /* destructor code */
}

/* readonly attribute DOMString oldURL; */
NS_IMETHODIMP nsDOMHashChangeEvent::GetOldURL(nsAString & aOldURL)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString newURL; */
NS_IMETHODIMP nsDOMHashChangeEvent::GetNewURL(nsAString & aNewURL)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void initHashChangeEvent (in DOMString typeArg, in boolean canBubbleArg, in boolean cancelableArg, in DOMString oldURLArg, in DOMString newURLArg); */
NS_IMETHODIMP nsDOMHashChangeEvent::InitHashChangeEvent(const nsAString & typeArg, bool canBubbleArg, bool cancelableArg, const nsAString & oldURLArg, const nsAString & newURLArg)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMHashChangeEvent_h__ */
