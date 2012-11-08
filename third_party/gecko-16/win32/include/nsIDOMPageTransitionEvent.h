/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/interfaces/events/nsIDOMPageTransitionEvent.idl
 */

#ifndef __gen_nsIDOMPageTransitionEvent_h__
#define __gen_nsIDOMPageTransitionEvent_h__


#ifndef __gen_nsIDOMEvent_h__
#include "nsIDOMEvent.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIDOMPageTransitionEvent */
#define NS_IDOMPAGETRANSITIONEVENT_IID_STR "06910e55-a9fc-4194-bd6e-57a302a7ea2d"

#define NS_IDOMPAGETRANSITIONEVENT_IID \
  {0x06910e55, 0xa9fc, 0x4194, \
    { 0xbd, 0x6e, 0x57, 0xa3, 0x02, 0xa7, 0xea, 0x2d }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMPageTransitionEvent : public nsIDOMEvent {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMPAGETRANSITIONEVENT_IID)

  /* readonly attribute boolean persisted; */
  NS_SCRIPTABLE NS_IMETHOD GetPersisted(bool *aPersisted) = 0;

  /* void initPageTransitionEvent (in DOMString typeArg, in boolean canBubbleArg, in boolean canCancelArg, in boolean persisted); */
  NS_SCRIPTABLE NS_IMETHOD InitPageTransitionEvent(const nsAString & typeArg, bool canBubbleArg, bool canCancelArg, bool persisted) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMPageTransitionEvent, NS_IDOMPAGETRANSITIONEVENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMPAGETRANSITIONEVENT \
  NS_SCRIPTABLE NS_IMETHOD GetPersisted(bool *aPersisted); \
  NS_SCRIPTABLE NS_IMETHOD InitPageTransitionEvent(const nsAString & typeArg, bool canBubbleArg, bool canCancelArg, bool persisted); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMPAGETRANSITIONEVENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetPersisted(bool *aPersisted) { return _to GetPersisted(aPersisted); } \
  NS_SCRIPTABLE NS_IMETHOD InitPageTransitionEvent(const nsAString & typeArg, bool canBubbleArg, bool canCancelArg, bool persisted) { return _to InitPageTransitionEvent(typeArg, canBubbleArg, canCancelArg, persisted); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMPAGETRANSITIONEVENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetPersisted(bool *aPersisted) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPersisted(aPersisted); } \
  NS_SCRIPTABLE NS_IMETHOD InitPageTransitionEvent(const nsAString & typeArg, bool canBubbleArg, bool canCancelArg, bool persisted) { return !_to ? NS_ERROR_NULL_POINTER : _to->InitPageTransitionEvent(typeArg, canBubbleArg, canCancelArg, persisted); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMPageTransitionEvent : public nsIDOMPageTransitionEvent
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMPAGETRANSITIONEVENT

  nsDOMPageTransitionEvent();

private:
  ~nsDOMPageTransitionEvent();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMPageTransitionEvent, nsIDOMPageTransitionEvent)

nsDOMPageTransitionEvent::nsDOMPageTransitionEvent()
{
  /* member initializers and constructor code */
}

nsDOMPageTransitionEvent::~nsDOMPageTransitionEvent()
{
  /* destructor code */
}

/* readonly attribute boolean persisted; */
NS_IMETHODIMP nsDOMPageTransitionEvent::GetPersisted(bool *aPersisted)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void initPageTransitionEvent (in DOMString typeArg, in boolean canBubbleArg, in boolean canCancelArg, in boolean persisted); */
NS_IMETHODIMP nsDOMPageTransitionEvent::InitPageTransitionEvent(const nsAString & typeArg, bool canBubbleArg, bool canCancelArg, bool persisted)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMPageTransitionEvent_h__ */
