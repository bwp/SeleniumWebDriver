/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/interfaces/events/nsIDOMPopStateEvent.idl
 */

#ifndef __gen_nsIDOMPopStateEvent_h__
#define __gen_nsIDOMPopStateEvent_h__


#ifndef __gen_nsIDOMEvent_h__
#include "nsIDOMEvent.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIVariant; /* forward declaration */


/* starting interface:    nsIDOMPopStateEvent */
#define NS_IDOMPOPSTATEEVENT_IID_STR "f7cfe6a2-da6f-4894-affe-e03b39251767"

#define NS_IDOMPOPSTATEEVENT_IID \
  {0xf7cfe6a2, 0xda6f, 0x4894, \
    { 0xaf, 0xfe, 0xe0, 0x3b, 0x39, 0x25, 0x17, 0x67 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMPopStateEvent : public nsIDOMEvent {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMPOPSTATEEVENT_IID)

  /* readonly attribute nsIVariant state; */
  NS_SCRIPTABLE NS_IMETHOD GetState(nsIVariant * *aState) = 0;

  /* void initPopStateEvent (in DOMString typeArg, in boolean canBubbleArg, in boolean cancelableArg, in nsIVariant stateArg); */
  NS_SCRIPTABLE NS_IMETHOD InitPopStateEvent(const nsAString & typeArg, bool canBubbleArg, bool cancelableArg, nsIVariant *stateArg) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMPopStateEvent, NS_IDOMPOPSTATEEVENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMPOPSTATEEVENT \
  NS_SCRIPTABLE NS_IMETHOD GetState(nsIVariant * *aState); \
  NS_SCRIPTABLE NS_IMETHOD InitPopStateEvent(const nsAString & typeArg, bool canBubbleArg, bool cancelableArg, nsIVariant *stateArg); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMPOPSTATEEVENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetState(nsIVariant * *aState) { return _to GetState(aState); } \
  NS_SCRIPTABLE NS_IMETHOD InitPopStateEvent(const nsAString & typeArg, bool canBubbleArg, bool cancelableArg, nsIVariant *stateArg) { return _to InitPopStateEvent(typeArg, canBubbleArg, cancelableArg, stateArg); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMPOPSTATEEVENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetState(nsIVariant * *aState) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetState(aState); } \
  NS_SCRIPTABLE NS_IMETHOD InitPopStateEvent(const nsAString & typeArg, bool canBubbleArg, bool cancelableArg, nsIVariant *stateArg) { return !_to ? NS_ERROR_NULL_POINTER : _to->InitPopStateEvent(typeArg, canBubbleArg, cancelableArg, stateArg); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMPopStateEvent : public nsIDOMPopStateEvent
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMPOPSTATEEVENT

  nsDOMPopStateEvent();

private:
  ~nsDOMPopStateEvent();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMPopStateEvent, nsIDOMPopStateEvent)

nsDOMPopStateEvent::nsDOMPopStateEvent()
{
  /* member initializers and constructor code */
}

nsDOMPopStateEvent::~nsDOMPopStateEvent()
{
  /* destructor code */
}

/* readonly attribute nsIVariant state; */
NS_IMETHODIMP nsDOMPopStateEvent::GetState(nsIVariant * *aState)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void initPopStateEvent (in DOMString typeArg, in boolean canBubbleArg, in boolean cancelableArg, in nsIVariant stateArg); */
NS_IMETHODIMP nsDOMPopStateEvent::InitPopStateEvent(const nsAString & typeArg, bool canBubbleArg, bool cancelableArg, nsIVariant *stateArg)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMPopStateEvent_h__ */
