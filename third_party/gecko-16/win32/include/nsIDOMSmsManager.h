/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/sms/interfaces/nsIDOMSmsManager.idl
 */

#ifndef __gen_nsIDOMSmsManager_h__
#define __gen_nsIDOMSmsManager_h__


#ifndef __gen_nsIDOMEventTarget_h__
#include "nsIDOMEventTarget.h"
#endif

#include "jspubtd.h"

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIDOMEventListener; /* forward declaration */

class nsIDOMMozSmsRequest; /* forward declaration */

class nsIDOMMozSmsFilter; /* forward declaration */


/* starting interface:    nsIDOMMozSmsManager */
#define NS_IDOMMOZSMSMANAGER_IID_STR "6363c0ff-b58f-4fb3-9707-0ba27f120b2c"

#define NS_IDOMMOZSMSMANAGER_IID \
  {0x6363c0ff, 0xb58f, 0x4fb3, \
    { 0x97, 0x07, 0x0b, 0xa2, 0x7f, 0x12, 0x0b, 0x2c }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMMozSmsManager : public nsIDOMEventTarget {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMMOZSMSMANAGER_IID)

  /* unsigned short getNumberOfMessagesForText (in DOMString text); */
  NS_SCRIPTABLE NS_IMETHOD GetNumberOfMessagesForText(const nsAString & text, PRUint16 *_retval NS_OUTPARAM) = 0;

  /* jsval send (in jsval number, in DOMString message); */
  NS_SCRIPTABLE NS_IMETHOD Send(const JS::Value & number, const nsAString & message, JS::Value *_retval NS_OUTPARAM) = 0;

  /* [binaryname(GetMessageMoz)] nsIDOMMozSmsRequest getMessage (in long id); */
  NS_SCRIPTABLE NS_IMETHOD GetMessageMoz(PRInt32 id, nsIDOMMozSmsRequest * *_retval NS_OUTPARAM) = 0;

  /* nsIDOMMozSmsRequest delete (in jsval param); */
  NS_SCRIPTABLE NS_IMETHOD Delete(const JS::Value & param, nsIDOMMozSmsRequest * *_retval NS_OUTPARAM) = 0;

  /* nsIDOMMozSmsRequest getMessages (in nsIDOMMozSmsFilter filter, in boolean reverse); */
  NS_SCRIPTABLE NS_IMETHOD GetMessages(nsIDOMMozSmsFilter *filter, bool reverse, nsIDOMMozSmsRequest * *_retval NS_OUTPARAM) = 0;

  /* nsIDOMMozSmsRequest markMessageRead (in long id, in boolean aValue); */
  NS_SCRIPTABLE NS_IMETHOD MarkMessageRead(PRInt32 id, bool aValue, nsIDOMMozSmsRequest * *_retval NS_OUTPARAM) = 0;

  /* attribute nsIDOMEventListener onreceived; */
  NS_SCRIPTABLE NS_IMETHOD GetOnreceived(nsIDOMEventListener * *aOnreceived) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetOnreceived(nsIDOMEventListener *aOnreceived) = 0;

  /* attribute nsIDOMEventListener onsent; */
  NS_SCRIPTABLE NS_IMETHOD GetOnsent(nsIDOMEventListener * *aOnsent) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetOnsent(nsIDOMEventListener *aOnsent) = 0;

  /* attribute nsIDOMEventListener ondelivered; */
  NS_SCRIPTABLE NS_IMETHOD GetOndelivered(nsIDOMEventListener * *aOndelivered) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetOndelivered(nsIDOMEventListener *aOndelivered) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMMozSmsManager, NS_IDOMMOZSMSMANAGER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMMOZSMSMANAGER \
  NS_SCRIPTABLE NS_IMETHOD GetNumberOfMessagesForText(const nsAString & text, PRUint16 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Send(const JS::Value & number, const nsAString & message, JS::Value *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetMessageMoz(PRInt32 id, nsIDOMMozSmsRequest * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Delete(const JS::Value & param, nsIDOMMozSmsRequest * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetMessages(nsIDOMMozSmsFilter *filter, bool reverse, nsIDOMMozSmsRequest * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD MarkMessageRead(PRInt32 id, bool aValue, nsIDOMMozSmsRequest * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetOnreceived(nsIDOMEventListener * *aOnreceived); \
  NS_SCRIPTABLE NS_IMETHOD SetOnreceived(nsIDOMEventListener *aOnreceived); \
  NS_SCRIPTABLE NS_IMETHOD GetOnsent(nsIDOMEventListener * *aOnsent); \
  NS_SCRIPTABLE NS_IMETHOD SetOnsent(nsIDOMEventListener *aOnsent); \
  NS_SCRIPTABLE NS_IMETHOD GetOndelivered(nsIDOMEventListener * *aOndelivered); \
  NS_SCRIPTABLE NS_IMETHOD SetOndelivered(nsIDOMEventListener *aOndelivered); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMMOZSMSMANAGER(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetNumberOfMessagesForText(const nsAString & text, PRUint16 *_retval NS_OUTPARAM) { return _to GetNumberOfMessagesForText(text, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Send(const JS::Value & number, const nsAString & message, JS::Value *_retval NS_OUTPARAM) { return _to Send(number, message, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetMessageMoz(PRInt32 id, nsIDOMMozSmsRequest * *_retval NS_OUTPARAM) { return _to GetMessageMoz(id, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Delete(const JS::Value & param, nsIDOMMozSmsRequest * *_retval NS_OUTPARAM) { return _to Delete(param, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetMessages(nsIDOMMozSmsFilter *filter, bool reverse, nsIDOMMozSmsRequest * *_retval NS_OUTPARAM) { return _to GetMessages(filter, reverse, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD MarkMessageRead(PRInt32 id, bool aValue, nsIDOMMozSmsRequest * *_retval NS_OUTPARAM) { return _to MarkMessageRead(id, aValue, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnreceived(nsIDOMEventListener * *aOnreceived) { return _to GetOnreceived(aOnreceived); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnreceived(nsIDOMEventListener *aOnreceived) { return _to SetOnreceived(aOnreceived); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnsent(nsIDOMEventListener * *aOnsent) { return _to GetOnsent(aOnsent); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnsent(nsIDOMEventListener *aOnsent) { return _to SetOnsent(aOnsent); } \
  NS_SCRIPTABLE NS_IMETHOD GetOndelivered(nsIDOMEventListener * *aOndelivered) { return _to GetOndelivered(aOndelivered); } \
  NS_SCRIPTABLE NS_IMETHOD SetOndelivered(nsIDOMEventListener *aOndelivered) { return _to SetOndelivered(aOndelivered); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMMOZSMSMANAGER(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetNumberOfMessagesForText(const nsAString & text, PRUint16 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNumberOfMessagesForText(text, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Send(const JS::Value & number, const nsAString & message, JS::Value *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Send(number, message, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetMessageMoz(PRInt32 id, nsIDOMMozSmsRequest * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMessageMoz(id, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Delete(const JS::Value & param, nsIDOMMozSmsRequest * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Delete(param, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetMessages(nsIDOMMozSmsFilter *filter, bool reverse, nsIDOMMozSmsRequest * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMessages(filter, reverse, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD MarkMessageRead(PRInt32 id, bool aValue, nsIDOMMozSmsRequest * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->MarkMessageRead(id, aValue, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnreceived(nsIDOMEventListener * *aOnreceived) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOnreceived(aOnreceived); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnreceived(nsIDOMEventListener *aOnreceived) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOnreceived(aOnreceived); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnsent(nsIDOMEventListener * *aOnsent) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOnsent(aOnsent); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnsent(nsIDOMEventListener *aOnsent) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOnsent(aOnsent); } \
  NS_SCRIPTABLE NS_IMETHOD GetOndelivered(nsIDOMEventListener * *aOndelivered) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOndelivered(aOndelivered); } \
  NS_SCRIPTABLE NS_IMETHOD SetOndelivered(nsIDOMEventListener *aOndelivered) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOndelivered(aOndelivered); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMMozSmsManager : public nsIDOMMozSmsManager
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMMOZSMSMANAGER

  nsDOMMozSmsManager();

private:
  ~nsDOMMozSmsManager();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMMozSmsManager, nsIDOMMozSmsManager)

nsDOMMozSmsManager::nsDOMMozSmsManager()
{
  /* member initializers and constructor code */
}

nsDOMMozSmsManager::~nsDOMMozSmsManager()
{
  /* destructor code */
}

/* unsigned short getNumberOfMessagesForText (in DOMString text); */
NS_IMETHODIMP nsDOMMozSmsManager::GetNumberOfMessagesForText(const nsAString & text, PRUint16 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* jsval send (in jsval number, in DOMString message); */
NS_IMETHODIMP nsDOMMozSmsManager::Send(const JS::Value & number, const nsAString & message, JS::Value *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [binaryname(GetMessageMoz)] nsIDOMMozSmsRequest getMessage (in long id); */
NS_IMETHODIMP nsDOMMozSmsManager::GetMessageMoz(PRInt32 id, nsIDOMMozSmsRequest * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMMozSmsRequest delete (in jsval param); */
NS_IMETHODIMP nsDOMMozSmsManager::Delete(const JS::Value & param, nsIDOMMozSmsRequest * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMMozSmsRequest getMessages (in nsIDOMMozSmsFilter filter, in boolean reverse); */
NS_IMETHODIMP nsDOMMozSmsManager::GetMessages(nsIDOMMozSmsFilter *filter, bool reverse, nsIDOMMozSmsRequest * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMMozSmsRequest markMessageRead (in long id, in boolean aValue); */
NS_IMETHODIMP nsDOMMozSmsManager::MarkMessageRead(PRInt32 id, bool aValue, nsIDOMMozSmsRequest * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIDOMEventListener onreceived; */
NS_IMETHODIMP nsDOMMozSmsManager::GetOnreceived(nsIDOMEventListener * *aOnreceived)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMMozSmsManager::SetOnreceived(nsIDOMEventListener *aOnreceived)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIDOMEventListener onsent; */
NS_IMETHODIMP nsDOMMozSmsManager::GetOnsent(nsIDOMEventListener * *aOnsent)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMMozSmsManager::SetOnsent(nsIDOMEventListener *aOnsent)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIDOMEventListener ondelivered; */
NS_IMETHODIMP nsDOMMozSmsManager::GetOndelivered(nsIDOMEventListener * *aOndelivered)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMMozSmsManager::SetOndelivered(nsIDOMEventListener *aOndelivered)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMSmsManager_h__ */
