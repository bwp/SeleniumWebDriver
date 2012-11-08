/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/sms/interfaces/nsISmsService.idl
 */

#ifndef __gen_nsISmsService_h__
#define __gen_nsISmsService_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#include "jspubtd.h"

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIDOMMozSmsMessage; /* forward declaration */

#define SMS_SERVICE_CID { 0xbada3cb8, 0xa568, 0x4dff, { 0xb5, 0x43, 0x52, 0xbb, 0xb3, 0x14, 0x31, 0x21 } }
#define SMS_SERVICE_CONTRACTID "@mozilla.org/sms/smsservice;1"

/* starting interface:    nsISmsService */
#define NS_ISMSSERVICE_IID_STR "00d23a50-6ed1-48b4-b1e9-5987b155e54b"

#define NS_ISMSSERVICE_IID \
  {0x00d23a50, 0x6ed1, 0x48b4, \
    { 0xb1, 0xe9, 0x59, 0x87, 0xb1, 0x55, 0xe5, 0x4b }}

class NS_NO_VTABLE NS_SCRIPTABLE nsISmsService : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ISMSSERVICE_IID)

  /* boolean hasSupport (); */
  NS_SCRIPTABLE NS_IMETHOD HasSupport(bool *_retval NS_OUTPARAM) = 0;

  /* unsigned short getNumberOfMessagesForText (in DOMString text); */
  NS_SCRIPTABLE NS_IMETHOD GetNumberOfMessagesForText(const nsAString & text, PRUint16 *_retval NS_OUTPARAM) = 0;

  /* void send (in DOMString number, in DOMString message, in long requestId, [optional] in unsigned long long processId); */
  NS_SCRIPTABLE NS_IMETHOD Send(const nsAString & number, const nsAString & message, PRInt32 requestId, PRUint64 processId) = 0;

  /* [implicit_jscontext] nsIDOMMozSmsMessage createSmsMessage (in long id, in DOMString delivery, in DOMString sender, in DOMString receiver, in DOMString body, in jsval timestamp, in bool read); */
  NS_SCRIPTABLE NS_IMETHOD CreateSmsMessage(PRInt32 id, const nsAString & delivery, const nsAString & sender, const nsAString & receiver, const nsAString & body, const JS::Value & timestamp, bool read, JSContext* cx, nsIDOMMozSmsMessage * *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsISmsService, NS_ISMSSERVICE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSISMSSERVICE \
  NS_SCRIPTABLE NS_IMETHOD HasSupport(bool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetNumberOfMessagesForText(const nsAString & text, PRUint16 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Send(const nsAString & number, const nsAString & message, PRInt32 requestId, PRUint64 processId); \
  NS_SCRIPTABLE NS_IMETHOD CreateSmsMessage(PRInt32 id, const nsAString & delivery, const nsAString & sender, const nsAString & receiver, const nsAString & body, const JS::Value & timestamp, bool read, JSContext* cx, nsIDOMMozSmsMessage * *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSISMSSERVICE(_to) \
  NS_SCRIPTABLE NS_IMETHOD HasSupport(bool *_retval NS_OUTPARAM) { return _to HasSupport(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetNumberOfMessagesForText(const nsAString & text, PRUint16 *_retval NS_OUTPARAM) { return _to GetNumberOfMessagesForText(text, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Send(const nsAString & number, const nsAString & message, PRInt32 requestId, PRUint64 processId) { return _to Send(number, message, requestId, processId); } \
  NS_SCRIPTABLE NS_IMETHOD CreateSmsMessage(PRInt32 id, const nsAString & delivery, const nsAString & sender, const nsAString & receiver, const nsAString & body, const JS::Value & timestamp, bool read, JSContext* cx, nsIDOMMozSmsMessage * *_retval NS_OUTPARAM) { return _to CreateSmsMessage(id, delivery, sender, receiver, body, timestamp, read, cx, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSISMSSERVICE(_to) \
  NS_SCRIPTABLE NS_IMETHOD HasSupport(bool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->HasSupport(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetNumberOfMessagesForText(const nsAString & text, PRUint16 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNumberOfMessagesForText(text, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Send(const nsAString & number, const nsAString & message, PRInt32 requestId, PRUint64 processId) { return !_to ? NS_ERROR_NULL_POINTER : _to->Send(number, message, requestId, processId); } \
  NS_SCRIPTABLE NS_IMETHOD CreateSmsMessage(PRInt32 id, const nsAString & delivery, const nsAString & sender, const nsAString & receiver, const nsAString & body, const JS::Value & timestamp, bool read, JSContext* cx, nsIDOMMozSmsMessage * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->CreateSmsMessage(id, delivery, sender, receiver, body, timestamp, read, cx, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsSmsService : public nsISmsService
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSISMSSERVICE

  nsSmsService();

private:
  ~nsSmsService();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsSmsService, nsISmsService)

nsSmsService::nsSmsService()
{
  /* member initializers and constructor code */
}

nsSmsService::~nsSmsService()
{
  /* destructor code */
}

/* boolean hasSupport (); */
NS_IMETHODIMP nsSmsService::HasSupport(bool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* unsigned short getNumberOfMessagesForText (in DOMString text); */
NS_IMETHODIMP nsSmsService::GetNumberOfMessagesForText(const nsAString & text, PRUint16 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void send (in DOMString number, in DOMString message, in long requestId, [optional] in unsigned long long processId); */
NS_IMETHODIMP nsSmsService::Send(const nsAString & number, const nsAString & message, PRInt32 requestId, PRUint64 processId)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] nsIDOMMozSmsMessage createSmsMessage (in long id, in DOMString delivery, in DOMString sender, in DOMString receiver, in DOMString body, in jsval timestamp, in bool read); */
NS_IMETHODIMP nsSmsService::CreateSmsMessage(PRInt32 id, const nsAString & delivery, const nsAString & sender, const nsAString & receiver, const nsAString & body, const JS::Value & timestamp, bool read, JSContext* cx, nsIDOMMozSmsMessage * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsISmsService_h__ */
