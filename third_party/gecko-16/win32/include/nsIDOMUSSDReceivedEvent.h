/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/network/interfaces/nsIDOMUSSDReceivedEvent.idl
 */

#ifndef __gen_nsIDOMUSSDReceivedEvent_h__
#define __gen_nsIDOMUSSDReceivedEvent_h__


#ifndef __gen_nsIDOMEvent_h__
#include "nsIDOMEvent.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIDOMUSSDReceivedEvent */
#define NS_IDOMUSSDRECEIVEDEVENT_IID_STR "7a6723d3-2165-4aa6-a4a3-697e7b7af673"

#define NS_IDOMUSSDRECEIVEDEVENT_IID \
  {0x7a6723d3, 0x2165, 0x4aa6, \
    { 0xa4, 0xa3, 0x69, 0x7e, 0x7b, 0x7a, 0xf6, 0x73 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMUSSDReceivedEvent : public nsIDOMEvent {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMUSSDRECEIVEDEVENT_IID)

  /* readonly attribute DOMString message; */
  NS_SCRIPTABLE NS_IMETHOD GetMessage(nsAString & aMessage) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMUSSDReceivedEvent, NS_IDOMUSSDRECEIVEDEVENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMUSSDRECEIVEDEVENT \
  NS_SCRIPTABLE NS_IMETHOD GetMessage(nsAString & aMessage); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMUSSDRECEIVEDEVENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetMessage(nsAString & aMessage) { return _to GetMessage(aMessage); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMUSSDRECEIVEDEVENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetMessage(nsAString & aMessage) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMessage(aMessage); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMUSSDReceivedEvent : public nsIDOMUSSDReceivedEvent
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMUSSDRECEIVEDEVENT

  nsDOMUSSDReceivedEvent();

private:
  ~nsDOMUSSDReceivedEvent();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMUSSDReceivedEvent, nsIDOMUSSDReceivedEvent)

nsDOMUSSDReceivedEvent::nsDOMUSSDReceivedEvent()
{
  /* member initializers and constructor code */
}

nsDOMUSSDReceivedEvent::~nsDOMUSSDReceivedEvent()
{
  /* destructor code */
}

/* readonly attribute DOMString message; */
NS_IMETHODIMP nsDOMUSSDReceivedEvent::GetMessage(nsAString & aMessage)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMUSSDReceivedEvent_h__ */
