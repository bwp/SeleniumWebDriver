/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/sms/interfaces/nsIDOMSmsEvent.idl
 */

#ifndef __gen_nsIDOMSmsEvent_h__
#define __gen_nsIDOMSmsEvent_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#ifndef __gen_nsIDOMEvent_h__
#include "nsIDOMEvent.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIDOMMozSmsMessage; /* forward declaration */


/* starting interface:    nsIDOMMozSmsEvent */
#define NS_IDOMMOZSMSEVENT_IID_STR "6db4d0d3-6708-47e8-be0f-06e4cdc0b062"

#define NS_IDOMMOZSMSEVENT_IID \
  {0x6db4d0d3, 0x6708, 0x47e8, \
    { 0xbe, 0x0f, 0x06, 0xe4, 0xcd, 0xc0, 0xb0, 0x62 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMMozSmsEvent : public nsIDOMEvent {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMMOZSMSEVENT_IID)

  /* [binaryname(MessageMoz)] readonly attribute nsIDOMMozSmsMessage message; */
  NS_SCRIPTABLE NS_IMETHOD GetMessageMoz(nsIDOMMozSmsMessage * *aMessage) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMMozSmsEvent, NS_IDOMMOZSMSEVENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMMOZSMSEVENT \
  NS_SCRIPTABLE NS_IMETHOD GetMessageMoz(nsIDOMMozSmsMessage * *aMessage); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMMOZSMSEVENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetMessageMoz(nsIDOMMozSmsMessage * *aMessage) { return _to GetMessageMoz(aMessage); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMMOZSMSEVENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetMessageMoz(nsIDOMMozSmsMessage * *aMessage) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMessageMoz(aMessage); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMMozSmsEvent : public nsIDOMMozSmsEvent
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMMOZSMSEVENT

  nsDOMMozSmsEvent();

private:
  ~nsDOMMozSmsEvent();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMMozSmsEvent, nsIDOMMozSmsEvent)

nsDOMMozSmsEvent::nsDOMMozSmsEvent()
{
  /* member initializers and constructor code */
}

nsDOMMozSmsEvent::~nsDOMMozSmsEvent()
{
  /* destructor code */
}

/* [binaryname(MessageMoz)] readonly attribute nsIDOMMozSmsMessage message; */
NS_IMETHODIMP nsDOMMozSmsEvent::GetMessageMoz(nsIDOMMozSmsMessage * *aMessage)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMSmsEvent_h__ */
