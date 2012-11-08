/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/interfaces/events/nsIDOMBeforeUnloadEvent.idl
 */

#ifndef __gen_nsIDOMBeforeUnloadEvent_h__
#define __gen_nsIDOMBeforeUnloadEvent_h__


#ifndef __gen_nsIDOMEvent_h__
#include "nsIDOMEvent.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIDOMBeforeUnloadEvent */
#define NS_IDOMBEFOREUNLOADEVENT_IID_STR "f2aafd86-e3e3-461f-96c4-8ad3b5f10e6a"

#define NS_IDOMBEFOREUNLOADEVENT_IID \
  {0xf2aafd86, 0xe3e3, 0x461f, \
    { 0x96, 0xc4, 0x8a, 0xd3, 0xb5, 0xf1, 0x0e, 0x6a }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMBeforeUnloadEvent : public nsIDOMEvent {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMBEFOREUNLOADEVENT_IID)

  /* attribute DOMString returnValue; */
  NS_SCRIPTABLE NS_IMETHOD GetReturnValue(nsAString & aReturnValue) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetReturnValue(const nsAString & aReturnValue) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMBeforeUnloadEvent, NS_IDOMBEFOREUNLOADEVENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMBEFOREUNLOADEVENT \
  NS_SCRIPTABLE NS_IMETHOD GetReturnValue(nsAString & aReturnValue); \
  NS_SCRIPTABLE NS_IMETHOD SetReturnValue(const nsAString & aReturnValue); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMBEFOREUNLOADEVENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetReturnValue(nsAString & aReturnValue) { return _to GetReturnValue(aReturnValue); } \
  NS_SCRIPTABLE NS_IMETHOD SetReturnValue(const nsAString & aReturnValue) { return _to SetReturnValue(aReturnValue); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMBEFOREUNLOADEVENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetReturnValue(nsAString & aReturnValue) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetReturnValue(aReturnValue); } \
  NS_SCRIPTABLE NS_IMETHOD SetReturnValue(const nsAString & aReturnValue) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetReturnValue(aReturnValue); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMBeforeUnloadEvent : public nsIDOMBeforeUnloadEvent
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMBEFOREUNLOADEVENT

  nsDOMBeforeUnloadEvent();

private:
  ~nsDOMBeforeUnloadEvent();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMBeforeUnloadEvent, nsIDOMBeforeUnloadEvent)

nsDOMBeforeUnloadEvent::nsDOMBeforeUnloadEvent()
{
  /* member initializers and constructor code */
}

nsDOMBeforeUnloadEvent::~nsDOMBeforeUnloadEvent()
{
  /* destructor code */
}

/* attribute DOMString returnValue; */
NS_IMETHODIMP nsDOMBeforeUnloadEvent::GetReturnValue(nsAString & aReturnValue)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMBeforeUnloadEvent::SetReturnValue(const nsAString & aReturnValue)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMBeforeUnloadEvent_h__ */
