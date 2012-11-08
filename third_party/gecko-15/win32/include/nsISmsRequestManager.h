/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/sms/interfaces/nsISmsRequestManager.idl
 */

#ifndef __gen_nsISmsRequestManager_h__
#define __gen_nsISmsRequestManager_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIDOMMozSmsMessage; /* forward declaration */

class nsIDOMMozSmsRequest; /* forward declaration */

class nsIDOMMozSmsManager; /* forward declaration */

#define SMS_REQUEST_MANAGER_CID \
{ 0xa97a3129, 0x1e0b, 0x45da,    \
{ 0xa3, 0x85, 0xcf, 0xe5, 0xb0, 0xb1, 0xc4, 0x8f } }
#define SMS_REQUEST_MANAGER_CONTRACTID "@mozilla.org/sms/smsrequestmanager;1"

/* starting interface:    nsISmsRequestManager */
#define NS_ISMSREQUESTMANAGER_IID_STR "be747cca-ba07-410a-8b91-2754d5406d66"

#define NS_ISMSREQUESTMANAGER_IID \
  {0xbe747cca, 0xba07, 0x410a, \
    { 0x8b, 0x91, 0x27, 0x54, 0xd5, 0x40, 0x6d, 0x66 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsISmsRequestManager : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ISMSREQUESTMANAGER_IID)

  enum {
    SUCCESS_NO_ERROR = 0U,
    NO_SIGNAL_ERROR = 1U,
    NOT_FOUND_ERROR = 2U,
    UNKNOWN_ERROR = 3U,
    INTERNAL_ERROR = 4U
  };

  /* long createRequest (in nsIDOMMozSmsManager aManager, out nsIDOMMozSmsRequest aRequest); */
  NS_SCRIPTABLE NS_IMETHOD CreateRequest(nsIDOMMozSmsManager *aManager, nsIDOMMozSmsRequest * *aRequest NS_OUTPARAM, PRInt32 *_retval NS_OUTPARAM) = 0;

  /* long addRequest (in nsIDOMMozSmsRequest aRequest); */
  NS_SCRIPTABLE NS_IMETHOD AddRequest(nsIDOMMozSmsRequest *aRequest, PRInt32 *_retval NS_OUTPARAM) = 0;

  /* void notifySmsSent (in long aRequestId, in nsIDOMMozSmsMessage aMessage); */
  NS_SCRIPTABLE NS_IMETHOD NotifySmsSent(PRInt32 aRequestId, nsIDOMMozSmsMessage *aMessage) = 0;

  /* void notifySmsSendFailed (in long aRequestId, in long aError); */
  NS_SCRIPTABLE NS_IMETHOD NotifySmsSendFailed(PRInt32 aRequestId, PRInt32 aError) = 0;

  /* void notifyGotSms (in long aRequestId, in nsIDOMMozSmsMessage aMessage); */
  NS_SCRIPTABLE NS_IMETHOD NotifyGotSms(PRInt32 aRequestId, nsIDOMMozSmsMessage *aMessage) = 0;

  /* void notifyGetSmsFailed (in long aRequestId, in long aError); */
  NS_SCRIPTABLE NS_IMETHOD NotifyGetSmsFailed(PRInt32 aRequestId, PRInt32 aError) = 0;

  /* void notifySmsDeleted (in long aRequestId, in bool aDeleted); */
  NS_SCRIPTABLE NS_IMETHOD NotifySmsDeleted(PRInt32 aRequestId, bool aDeleted) = 0;

  /* void notifySmsDeleteFailed (in long aRequestId, in long aError); */
  NS_SCRIPTABLE NS_IMETHOD NotifySmsDeleteFailed(PRInt32 aRequestId, PRInt32 aError) = 0;

  /* void notifyNoMessageInList (in long aRequestId); */
  NS_SCRIPTABLE NS_IMETHOD NotifyNoMessageInList(PRInt32 aRequestId) = 0;

  /* void notifyCreateMessageList (in long aRequestId, in long aListId, in nsIDOMMozSmsMessage aMessage); */
  NS_SCRIPTABLE NS_IMETHOD NotifyCreateMessageList(PRInt32 aRequestId, PRInt32 aListId, nsIDOMMozSmsMessage *aMessage) = 0;

  /* void notifyGotNextMessage (in long aRequestId, in nsIDOMMozSmsMessage aMessage); */
  NS_SCRIPTABLE NS_IMETHOD NotifyGotNextMessage(PRInt32 aRequestId, nsIDOMMozSmsMessage *aMessage) = 0;

  /* void notifyReadMessageListFailed (in long aRequestId, in long aError); */
  NS_SCRIPTABLE NS_IMETHOD NotifyReadMessageListFailed(PRInt32 aRequestId, PRInt32 aError) = 0;

  /* void notifyMarkedMessageRead (in long aRequestId, in bool aRead); */
  NS_SCRIPTABLE NS_IMETHOD NotifyMarkedMessageRead(PRInt32 aRequestId, bool aRead) = 0;

  /* void notifyMarkMessageReadFailed (in long aRequestId, in long aError); */
  NS_SCRIPTABLE NS_IMETHOD NotifyMarkMessageReadFailed(PRInt32 aRequestId, PRInt32 aError) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsISmsRequestManager, NS_ISMSREQUESTMANAGER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSISMSREQUESTMANAGER \
  NS_SCRIPTABLE NS_IMETHOD CreateRequest(nsIDOMMozSmsManager *aManager, nsIDOMMozSmsRequest * *aRequest NS_OUTPARAM, PRInt32 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD AddRequest(nsIDOMMozSmsRequest *aRequest, PRInt32 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD NotifySmsSent(PRInt32 aRequestId, nsIDOMMozSmsMessage *aMessage); \
  NS_SCRIPTABLE NS_IMETHOD NotifySmsSendFailed(PRInt32 aRequestId, PRInt32 aError); \
  NS_SCRIPTABLE NS_IMETHOD NotifyGotSms(PRInt32 aRequestId, nsIDOMMozSmsMessage *aMessage); \
  NS_SCRIPTABLE NS_IMETHOD NotifyGetSmsFailed(PRInt32 aRequestId, PRInt32 aError); \
  NS_SCRIPTABLE NS_IMETHOD NotifySmsDeleted(PRInt32 aRequestId, bool aDeleted); \
  NS_SCRIPTABLE NS_IMETHOD NotifySmsDeleteFailed(PRInt32 aRequestId, PRInt32 aError); \
  NS_SCRIPTABLE NS_IMETHOD NotifyNoMessageInList(PRInt32 aRequestId); \
  NS_SCRIPTABLE NS_IMETHOD NotifyCreateMessageList(PRInt32 aRequestId, PRInt32 aListId, nsIDOMMozSmsMessage *aMessage); \
  NS_SCRIPTABLE NS_IMETHOD NotifyGotNextMessage(PRInt32 aRequestId, nsIDOMMozSmsMessage *aMessage); \
  NS_SCRIPTABLE NS_IMETHOD NotifyReadMessageListFailed(PRInt32 aRequestId, PRInt32 aError); \
  NS_SCRIPTABLE NS_IMETHOD NotifyMarkedMessageRead(PRInt32 aRequestId, bool aRead); \
  NS_SCRIPTABLE NS_IMETHOD NotifyMarkMessageReadFailed(PRInt32 aRequestId, PRInt32 aError); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSISMSREQUESTMANAGER(_to) \
  NS_SCRIPTABLE NS_IMETHOD CreateRequest(nsIDOMMozSmsManager *aManager, nsIDOMMozSmsRequest * *aRequest NS_OUTPARAM, PRInt32 *_retval NS_OUTPARAM) { return _to CreateRequest(aManager, aRequest, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD AddRequest(nsIDOMMozSmsRequest *aRequest, PRInt32 *_retval NS_OUTPARAM) { return _to AddRequest(aRequest, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD NotifySmsSent(PRInt32 aRequestId, nsIDOMMozSmsMessage *aMessage) { return _to NotifySmsSent(aRequestId, aMessage); } \
  NS_SCRIPTABLE NS_IMETHOD NotifySmsSendFailed(PRInt32 aRequestId, PRInt32 aError) { return _to NotifySmsSendFailed(aRequestId, aError); } \
  NS_SCRIPTABLE NS_IMETHOD NotifyGotSms(PRInt32 aRequestId, nsIDOMMozSmsMessage *aMessage) { return _to NotifyGotSms(aRequestId, aMessage); } \
  NS_SCRIPTABLE NS_IMETHOD NotifyGetSmsFailed(PRInt32 aRequestId, PRInt32 aError) { return _to NotifyGetSmsFailed(aRequestId, aError); } \
  NS_SCRIPTABLE NS_IMETHOD NotifySmsDeleted(PRInt32 aRequestId, bool aDeleted) { return _to NotifySmsDeleted(aRequestId, aDeleted); } \
  NS_SCRIPTABLE NS_IMETHOD NotifySmsDeleteFailed(PRInt32 aRequestId, PRInt32 aError) { return _to NotifySmsDeleteFailed(aRequestId, aError); } \
  NS_SCRIPTABLE NS_IMETHOD NotifyNoMessageInList(PRInt32 aRequestId) { return _to NotifyNoMessageInList(aRequestId); } \
  NS_SCRIPTABLE NS_IMETHOD NotifyCreateMessageList(PRInt32 aRequestId, PRInt32 aListId, nsIDOMMozSmsMessage *aMessage) { return _to NotifyCreateMessageList(aRequestId, aListId, aMessage); } \
  NS_SCRIPTABLE NS_IMETHOD NotifyGotNextMessage(PRInt32 aRequestId, nsIDOMMozSmsMessage *aMessage) { return _to NotifyGotNextMessage(aRequestId, aMessage); } \
  NS_SCRIPTABLE NS_IMETHOD NotifyReadMessageListFailed(PRInt32 aRequestId, PRInt32 aError) { return _to NotifyReadMessageListFailed(aRequestId, aError); } \
  NS_SCRIPTABLE NS_IMETHOD NotifyMarkedMessageRead(PRInt32 aRequestId, bool aRead) { return _to NotifyMarkedMessageRead(aRequestId, aRead); } \
  NS_SCRIPTABLE NS_IMETHOD NotifyMarkMessageReadFailed(PRInt32 aRequestId, PRInt32 aError) { return _to NotifyMarkMessageReadFailed(aRequestId, aError); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSISMSREQUESTMANAGER(_to) \
  NS_SCRIPTABLE NS_IMETHOD CreateRequest(nsIDOMMozSmsManager *aManager, nsIDOMMozSmsRequest * *aRequest NS_OUTPARAM, PRInt32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->CreateRequest(aManager, aRequest, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD AddRequest(nsIDOMMozSmsRequest *aRequest, PRInt32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->AddRequest(aRequest, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD NotifySmsSent(PRInt32 aRequestId, nsIDOMMozSmsMessage *aMessage) { return !_to ? NS_ERROR_NULL_POINTER : _to->NotifySmsSent(aRequestId, aMessage); } \
  NS_SCRIPTABLE NS_IMETHOD NotifySmsSendFailed(PRInt32 aRequestId, PRInt32 aError) { return !_to ? NS_ERROR_NULL_POINTER : _to->NotifySmsSendFailed(aRequestId, aError); } \
  NS_SCRIPTABLE NS_IMETHOD NotifyGotSms(PRInt32 aRequestId, nsIDOMMozSmsMessage *aMessage) { return !_to ? NS_ERROR_NULL_POINTER : _to->NotifyGotSms(aRequestId, aMessage); } \
  NS_SCRIPTABLE NS_IMETHOD NotifyGetSmsFailed(PRInt32 aRequestId, PRInt32 aError) { return !_to ? NS_ERROR_NULL_POINTER : _to->NotifyGetSmsFailed(aRequestId, aError); } \
  NS_SCRIPTABLE NS_IMETHOD NotifySmsDeleted(PRInt32 aRequestId, bool aDeleted) { return !_to ? NS_ERROR_NULL_POINTER : _to->NotifySmsDeleted(aRequestId, aDeleted); } \
  NS_SCRIPTABLE NS_IMETHOD NotifySmsDeleteFailed(PRInt32 aRequestId, PRInt32 aError) { return !_to ? NS_ERROR_NULL_POINTER : _to->NotifySmsDeleteFailed(aRequestId, aError); } \
  NS_SCRIPTABLE NS_IMETHOD NotifyNoMessageInList(PRInt32 aRequestId) { return !_to ? NS_ERROR_NULL_POINTER : _to->NotifyNoMessageInList(aRequestId); } \
  NS_SCRIPTABLE NS_IMETHOD NotifyCreateMessageList(PRInt32 aRequestId, PRInt32 aListId, nsIDOMMozSmsMessage *aMessage) { return !_to ? NS_ERROR_NULL_POINTER : _to->NotifyCreateMessageList(aRequestId, aListId, aMessage); } \
  NS_SCRIPTABLE NS_IMETHOD NotifyGotNextMessage(PRInt32 aRequestId, nsIDOMMozSmsMessage *aMessage) { return !_to ? NS_ERROR_NULL_POINTER : _to->NotifyGotNextMessage(aRequestId, aMessage); } \
  NS_SCRIPTABLE NS_IMETHOD NotifyReadMessageListFailed(PRInt32 aRequestId, PRInt32 aError) { return !_to ? NS_ERROR_NULL_POINTER : _to->NotifyReadMessageListFailed(aRequestId, aError); } \
  NS_SCRIPTABLE NS_IMETHOD NotifyMarkedMessageRead(PRInt32 aRequestId, bool aRead) { return !_to ? NS_ERROR_NULL_POINTER : _to->NotifyMarkedMessageRead(aRequestId, aRead); } \
  NS_SCRIPTABLE NS_IMETHOD NotifyMarkMessageReadFailed(PRInt32 aRequestId, PRInt32 aError) { return !_to ? NS_ERROR_NULL_POINTER : _to->NotifyMarkMessageReadFailed(aRequestId, aError); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsSmsRequestManager : public nsISmsRequestManager
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSISMSREQUESTMANAGER

  nsSmsRequestManager();

private:
  ~nsSmsRequestManager();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsSmsRequestManager, nsISmsRequestManager)

nsSmsRequestManager::nsSmsRequestManager()
{
  /* member initializers and constructor code */
}

nsSmsRequestManager::~nsSmsRequestManager()
{
  /* destructor code */
}

/* long createRequest (in nsIDOMMozSmsManager aManager, out nsIDOMMozSmsRequest aRequest); */
NS_IMETHODIMP nsSmsRequestManager::CreateRequest(nsIDOMMozSmsManager *aManager, nsIDOMMozSmsRequest * *aRequest NS_OUTPARAM, PRInt32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* long addRequest (in nsIDOMMozSmsRequest aRequest); */
NS_IMETHODIMP nsSmsRequestManager::AddRequest(nsIDOMMozSmsRequest *aRequest, PRInt32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void notifySmsSent (in long aRequestId, in nsIDOMMozSmsMessage aMessage); */
NS_IMETHODIMP nsSmsRequestManager::NotifySmsSent(PRInt32 aRequestId, nsIDOMMozSmsMessage *aMessage)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void notifySmsSendFailed (in long aRequestId, in long aError); */
NS_IMETHODIMP nsSmsRequestManager::NotifySmsSendFailed(PRInt32 aRequestId, PRInt32 aError)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void notifyGotSms (in long aRequestId, in nsIDOMMozSmsMessage aMessage); */
NS_IMETHODIMP nsSmsRequestManager::NotifyGotSms(PRInt32 aRequestId, nsIDOMMozSmsMessage *aMessage)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void notifyGetSmsFailed (in long aRequestId, in long aError); */
NS_IMETHODIMP nsSmsRequestManager::NotifyGetSmsFailed(PRInt32 aRequestId, PRInt32 aError)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void notifySmsDeleted (in long aRequestId, in bool aDeleted); */
NS_IMETHODIMP nsSmsRequestManager::NotifySmsDeleted(PRInt32 aRequestId, bool aDeleted)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void notifySmsDeleteFailed (in long aRequestId, in long aError); */
NS_IMETHODIMP nsSmsRequestManager::NotifySmsDeleteFailed(PRInt32 aRequestId, PRInt32 aError)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void notifyNoMessageInList (in long aRequestId); */
NS_IMETHODIMP nsSmsRequestManager::NotifyNoMessageInList(PRInt32 aRequestId)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void notifyCreateMessageList (in long aRequestId, in long aListId, in nsIDOMMozSmsMessage aMessage); */
NS_IMETHODIMP nsSmsRequestManager::NotifyCreateMessageList(PRInt32 aRequestId, PRInt32 aListId, nsIDOMMozSmsMessage *aMessage)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void notifyGotNextMessage (in long aRequestId, in nsIDOMMozSmsMessage aMessage); */
NS_IMETHODIMP nsSmsRequestManager::NotifyGotNextMessage(PRInt32 aRequestId, nsIDOMMozSmsMessage *aMessage)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void notifyReadMessageListFailed (in long aRequestId, in long aError); */
NS_IMETHODIMP nsSmsRequestManager::NotifyReadMessageListFailed(PRInt32 aRequestId, PRInt32 aError)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void notifyMarkedMessageRead (in long aRequestId, in bool aRead); */
NS_IMETHODIMP nsSmsRequestManager::NotifyMarkedMessageRead(PRInt32 aRequestId, bool aRead)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void notifyMarkMessageReadFailed (in long aRequestId, in long aError); */
NS_IMETHODIMP nsSmsRequestManager::NotifyMarkMessageReadFailed(PRInt32 aRequestId, PRInt32 aError)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsISmsRequestManager_h__ */
