/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/sms/interfaces/nsISmsDatabaseService.idl
 */

#ifndef __gen_nsISmsDatabaseService_h__
#define __gen_nsISmsDatabaseService_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
#define SMS_DATABASE_SERVICE_CID \
{ 0x2454c2a1, 0xefdd, 0x4d96,    \
{ 0x83, 0xbd, 0x51, 0xa2, 0x9a, 0x21, 0xf5, 0xab } }
#define SMS_DATABASE_SERVICE_CONTRACTID "@mozilla.org/sms/smsdatabaseservice;1"
class nsIDOMMozSmsFilter; /* forward declaration */


/* starting interface:    nsISmsDatabaseService */
#define NS_ISMSDATABASESERVICE_IID_STR "30e8cdfb-155d-44c7-8fb3-6bcd9c1c3f99"

#define NS_ISMSDATABASESERVICE_IID \
  {0x30e8cdfb, 0x155d, 0x44c7, \
    { 0x8f, 0xb3, 0x6b, 0xcd, 0x9c, 0x1c, 0x3f, 0x99 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsISmsDatabaseService : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ISMSDATABASESERVICE_IID)

  /* long saveReceivedMessage (in DOMString aSender, in DOMString aBody, in unsigned long long aDate); */
  NS_SCRIPTABLE NS_IMETHOD SaveReceivedMessage(const nsAString & aSender, const nsAString & aBody, PRUint64 aDate, PRInt32 *_retval NS_OUTPARAM) = 0;

  /* long saveSentMessage (in DOMString aReceiver, in DOMString aBody, in unsigned long long aDate); */
  NS_SCRIPTABLE NS_IMETHOD SaveSentMessage(const nsAString & aReceiver, const nsAString & aBody, PRUint64 aDate, PRInt32 *_retval NS_OUTPARAM) = 0;

  /* [binaryname(GetMessageMoz)] void getMessage (in long messageId, in long requestId, [optional] in unsigned long long processId); */
  NS_SCRIPTABLE NS_IMETHOD GetMessageMoz(PRInt32 messageId, PRInt32 requestId, PRUint64 processId) = 0;

  /* void deleteMessage (in long messageId, in long requestId, [optional] in unsigned long long processId); */
  NS_SCRIPTABLE NS_IMETHOD DeleteMessage(PRInt32 messageId, PRInt32 requestId, PRUint64 processId) = 0;

  /* void createMessageList (in nsIDOMMozSmsFilter filter, in boolean reverse, in long requestId, [optional] in unsigned long long processId); */
  NS_SCRIPTABLE NS_IMETHOD CreateMessageList(nsIDOMMozSmsFilter *filter, bool reverse, PRInt32 requestId, PRUint64 processId) = 0;

  /* void getNextMessageInList (in long listId, in long requestId, [optional] in unsigned long long processId); */
  NS_SCRIPTABLE NS_IMETHOD GetNextMessageInList(PRInt32 listId, PRInt32 requestId, PRUint64 processId) = 0;

  /* void clearMessageList (in long listId); */
  NS_SCRIPTABLE NS_IMETHOD ClearMessageList(PRInt32 listId) = 0;

  /* void markMessageRead (in long messageId, in boolean value, in long requestId, [optional] in unsigned long long processId); */
  NS_SCRIPTABLE NS_IMETHOD MarkMessageRead(PRInt32 messageId, bool value, PRInt32 requestId, PRUint64 processId) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsISmsDatabaseService, NS_ISMSDATABASESERVICE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSISMSDATABASESERVICE \
  NS_SCRIPTABLE NS_IMETHOD SaveReceivedMessage(const nsAString & aSender, const nsAString & aBody, PRUint64 aDate, PRInt32 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SaveSentMessage(const nsAString & aReceiver, const nsAString & aBody, PRUint64 aDate, PRInt32 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetMessageMoz(PRInt32 messageId, PRInt32 requestId, PRUint64 processId); \
  NS_SCRIPTABLE NS_IMETHOD DeleteMessage(PRInt32 messageId, PRInt32 requestId, PRUint64 processId); \
  NS_SCRIPTABLE NS_IMETHOD CreateMessageList(nsIDOMMozSmsFilter *filter, bool reverse, PRInt32 requestId, PRUint64 processId); \
  NS_SCRIPTABLE NS_IMETHOD GetNextMessageInList(PRInt32 listId, PRInt32 requestId, PRUint64 processId); \
  NS_SCRIPTABLE NS_IMETHOD ClearMessageList(PRInt32 listId); \
  NS_SCRIPTABLE NS_IMETHOD MarkMessageRead(PRInt32 messageId, bool value, PRInt32 requestId, PRUint64 processId); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSISMSDATABASESERVICE(_to) \
  NS_SCRIPTABLE NS_IMETHOD SaveReceivedMessage(const nsAString & aSender, const nsAString & aBody, PRUint64 aDate, PRInt32 *_retval NS_OUTPARAM) { return _to SaveReceivedMessage(aSender, aBody, aDate, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SaveSentMessage(const nsAString & aReceiver, const nsAString & aBody, PRUint64 aDate, PRInt32 *_retval NS_OUTPARAM) { return _to SaveSentMessage(aReceiver, aBody, aDate, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetMessageMoz(PRInt32 messageId, PRInt32 requestId, PRUint64 processId) { return _to GetMessageMoz(messageId, requestId, processId); } \
  NS_SCRIPTABLE NS_IMETHOD DeleteMessage(PRInt32 messageId, PRInt32 requestId, PRUint64 processId) { return _to DeleteMessage(messageId, requestId, processId); } \
  NS_SCRIPTABLE NS_IMETHOD CreateMessageList(nsIDOMMozSmsFilter *filter, bool reverse, PRInt32 requestId, PRUint64 processId) { return _to CreateMessageList(filter, reverse, requestId, processId); } \
  NS_SCRIPTABLE NS_IMETHOD GetNextMessageInList(PRInt32 listId, PRInt32 requestId, PRUint64 processId) { return _to GetNextMessageInList(listId, requestId, processId); } \
  NS_SCRIPTABLE NS_IMETHOD ClearMessageList(PRInt32 listId) { return _to ClearMessageList(listId); } \
  NS_SCRIPTABLE NS_IMETHOD MarkMessageRead(PRInt32 messageId, bool value, PRInt32 requestId, PRUint64 processId) { return _to MarkMessageRead(messageId, value, requestId, processId); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSISMSDATABASESERVICE(_to) \
  NS_SCRIPTABLE NS_IMETHOD SaveReceivedMessage(const nsAString & aSender, const nsAString & aBody, PRUint64 aDate, PRInt32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->SaveReceivedMessage(aSender, aBody, aDate, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SaveSentMessage(const nsAString & aReceiver, const nsAString & aBody, PRUint64 aDate, PRInt32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->SaveSentMessage(aReceiver, aBody, aDate, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetMessageMoz(PRInt32 messageId, PRInt32 requestId, PRUint64 processId) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMessageMoz(messageId, requestId, processId); } \
  NS_SCRIPTABLE NS_IMETHOD DeleteMessage(PRInt32 messageId, PRInt32 requestId, PRUint64 processId) { return !_to ? NS_ERROR_NULL_POINTER : _to->DeleteMessage(messageId, requestId, processId); } \
  NS_SCRIPTABLE NS_IMETHOD CreateMessageList(nsIDOMMozSmsFilter *filter, bool reverse, PRInt32 requestId, PRUint64 processId) { return !_to ? NS_ERROR_NULL_POINTER : _to->CreateMessageList(filter, reverse, requestId, processId); } \
  NS_SCRIPTABLE NS_IMETHOD GetNextMessageInList(PRInt32 listId, PRInt32 requestId, PRUint64 processId) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNextMessageInList(listId, requestId, processId); } \
  NS_SCRIPTABLE NS_IMETHOD ClearMessageList(PRInt32 listId) { return !_to ? NS_ERROR_NULL_POINTER : _to->ClearMessageList(listId); } \
  NS_SCRIPTABLE NS_IMETHOD MarkMessageRead(PRInt32 messageId, bool value, PRInt32 requestId, PRUint64 processId) { return !_to ? NS_ERROR_NULL_POINTER : _to->MarkMessageRead(messageId, value, requestId, processId); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsSmsDatabaseService : public nsISmsDatabaseService
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSISMSDATABASESERVICE

  nsSmsDatabaseService();

private:
  ~nsSmsDatabaseService();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsSmsDatabaseService, nsISmsDatabaseService)

nsSmsDatabaseService::nsSmsDatabaseService()
{
  /* member initializers and constructor code */
}

nsSmsDatabaseService::~nsSmsDatabaseService()
{
  /* destructor code */
}

/* long saveReceivedMessage (in DOMString aSender, in DOMString aBody, in unsigned long long aDate); */
NS_IMETHODIMP nsSmsDatabaseService::SaveReceivedMessage(const nsAString & aSender, const nsAString & aBody, PRUint64 aDate, PRInt32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* long saveSentMessage (in DOMString aReceiver, in DOMString aBody, in unsigned long long aDate); */
NS_IMETHODIMP nsSmsDatabaseService::SaveSentMessage(const nsAString & aReceiver, const nsAString & aBody, PRUint64 aDate, PRInt32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [binaryname(GetMessageMoz)] void getMessage (in long messageId, in long requestId, [optional] in unsigned long long processId); */
NS_IMETHODIMP nsSmsDatabaseService::GetMessageMoz(PRInt32 messageId, PRInt32 requestId, PRUint64 processId)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void deleteMessage (in long messageId, in long requestId, [optional] in unsigned long long processId); */
NS_IMETHODIMP nsSmsDatabaseService::DeleteMessage(PRInt32 messageId, PRInt32 requestId, PRUint64 processId)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void createMessageList (in nsIDOMMozSmsFilter filter, in boolean reverse, in long requestId, [optional] in unsigned long long processId); */
NS_IMETHODIMP nsSmsDatabaseService::CreateMessageList(nsIDOMMozSmsFilter *filter, bool reverse, PRInt32 requestId, PRUint64 processId)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void getNextMessageInList (in long listId, in long requestId, [optional] in unsigned long long processId); */
NS_IMETHODIMP nsSmsDatabaseService::GetNextMessageInList(PRInt32 listId, PRInt32 requestId, PRUint64 processId)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void clearMessageList (in long listId); */
NS_IMETHODIMP nsSmsDatabaseService::ClearMessageList(PRInt32 listId)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void markMessageRead (in long messageId, in boolean value, in long requestId, [optional] in unsigned long long processId); */
NS_IMETHODIMP nsSmsDatabaseService::MarkMessageRead(PRInt32 messageId, bool value, PRInt32 requestId, PRUint64 processId)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsISmsDatabaseService_h__ */
