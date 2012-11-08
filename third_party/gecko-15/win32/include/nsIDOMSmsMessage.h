/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/sms/interfaces/nsIDOMSmsMessage.idl
 */

#ifndef __gen_nsIDOMSmsMessage_h__
#define __gen_nsIDOMSmsMessage_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#include "jspubtd.h"

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIDOMMozSmsMessage */
#define NS_IDOMMOZSMSMESSAGE_IID_STR "fc58ba6e-70de-4550-aa1e-790ecc19cf98"

#define NS_IDOMMOZSMSMESSAGE_IID \
  {0xfc58ba6e, 0x70de, 0x4550, \
    { 0xaa, 0x1e, 0x79, 0x0e, 0xcc, 0x19, 0xcf, 0x98 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMMozSmsMessage : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMMOZSMSMESSAGE_IID)

  /* readonly attribute long id; */
  NS_SCRIPTABLE NS_IMETHOD GetId(PRInt32 *aId) = 0;

  /* readonly attribute DOMString delivery; */
  NS_SCRIPTABLE NS_IMETHOD GetDelivery(nsAString & aDelivery) = 0;

  /* readonly attribute DOMString sender; */
  NS_SCRIPTABLE NS_IMETHOD GetSender(nsAString & aSender) = 0;

  /* readonly attribute DOMString receiver; */
  NS_SCRIPTABLE NS_IMETHOD GetReceiver(nsAString & aReceiver) = 0;

  /* readonly attribute DOMString body; */
  NS_SCRIPTABLE NS_IMETHOD GetBody(nsAString & aBody) = 0;

  /* [implicit_jscontext] readonly attribute jsval timestamp; */
  NS_SCRIPTABLE NS_IMETHOD GetTimestamp(JSContext* cx, JS::Value *aTimestamp) = 0;

  /* readonly attribute boolean read; */
  NS_SCRIPTABLE NS_IMETHOD GetRead(bool *aRead) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMMozSmsMessage, NS_IDOMMOZSMSMESSAGE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMMOZSMSMESSAGE \
  NS_SCRIPTABLE NS_IMETHOD GetId(PRInt32 *aId); \
  NS_SCRIPTABLE NS_IMETHOD GetDelivery(nsAString & aDelivery); \
  NS_SCRIPTABLE NS_IMETHOD GetSender(nsAString & aSender); \
  NS_SCRIPTABLE NS_IMETHOD GetReceiver(nsAString & aReceiver); \
  NS_SCRIPTABLE NS_IMETHOD GetBody(nsAString & aBody); \
  NS_SCRIPTABLE NS_IMETHOD GetTimestamp(JSContext* cx, JS::Value *aTimestamp); \
  NS_SCRIPTABLE NS_IMETHOD GetRead(bool *aRead); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMMOZSMSMESSAGE(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetId(PRInt32 *aId) { return _to GetId(aId); } \
  NS_SCRIPTABLE NS_IMETHOD GetDelivery(nsAString & aDelivery) { return _to GetDelivery(aDelivery); } \
  NS_SCRIPTABLE NS_IMETHOD GetSender(nsAString & aSender) { return _to GetSender(aSender); } \
  NS_SCRIPTABLE NS_IMETHOD GetReceiver(nsAString & aReceiver) { return _to GetReceiver(aReceiver); } \
  NS_SCRIPTABLE NS_IMETHOD GetBody(nsAString & aBody) { return _to GetBody(aBody); } \
  NS_SCRIPTABLE NS_IMETHOD GetTimestamp(JSContext* cx, JS::Value *aTimestamp) { return _to GetTimestamp(cx, aTimestamp); } \
  NS_SCRIPTABLE NS_IMETHOD GetRead(bool *aRead) { return _to GetRead(aRead); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMMOZSMSMESSAGE(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetId(PRInt32 *aId) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetId(aId); } \
  NS_SCRIPTABLE NS_IMETHOD GetDelivery(nsAString & aDelivery) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDelivery(aDelivery); } \
  NS_SCRIPTABLE NS_IMETHOD GetSender(nsAString & aSender) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSender(aSender); } \
  NS_SCRIPTABLE NS_IMETHOD GetReceiver(nsAString & aReceiver) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetReceiver(aReceiver); } \
  NS_SCRIPTABLE NS_IMETHOD GetBody(nsAString & aBody) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetBody(aBody); } \
  NS_SCRIPTABLE NS_IMETHOD GetTimestamp(JSContext* cx, JS::Value *aTimestamp) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTimestamp(cx, aTimestamp); } \
  NS_SCRIPTABLE NS_IMETHOD GetRead(bool *aRead) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRead(aRead); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMMozSmsMessage : public nsIDOMMozSmsMessage
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMMOZSMSMESSAGE

  nsDOMMozSmsMessage();

private:
  ~nsDOMMozSmsMessage();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMMozSmsMessage, nsIDOMMozSmsMessage)

nsDOMMozSmsMessage::nsDOMMozSmsMessage()
{
  /* member initializers and constructor code */
}

nsDOMMozSmsMessage::~nsDOMMozSmsMessage()
{
  /* destructor code */
}

/* readonly attribute long id; */
NS_IMETHODIMP nsDOMMozSmsMessage::GetId(PRInt32 *aId)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString delivery; */
NS_IMETHODIMP nsDOMMozSmsMessage::GetDelivery(nsAString & aDelivery)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString sender; */
NS_IMETHODIMP nsDOMMozSmsMessage::GetSender(nsAString & aSender)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString receiver; */
NS_IMETHODIMP nsDOMMozSmsMessage::GetReceiver(nsAString & aReceiver)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString body; */
NS_IMETHODIMP nsDOMMozSmsMessage::GetBody(nsAString & aBody)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] readonly attribute jsval timestamp; */
NS_IMETHODIMP nsDOMMozSmsMessage::GetTimestamp(JSContext* cx, JS::Value *aTimestamp)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean read; */
NS_IMETHODIMP nsDOMMozSmsMessage::GetRead(bool *aRead)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMSmsMessage_h__ */
