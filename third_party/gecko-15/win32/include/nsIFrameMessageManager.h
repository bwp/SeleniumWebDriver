/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/content/base/public/nsIFrameMessageManager.idl
 */

#ifndef __gen_nsIFrameMessageManager_h__
#define __gen_nsIFrameMessageManager_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#include "jspubtd.h"

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIDOMWindow; /* forward declaration */

class nsIDocShell; /* forward declaration */

class nsIContent; /* forward declaration */


/* starting interface:    nsIFrameMessageListener */
#define NS_IFRAMEMESSAGELISTENER_IID_STR "938fcb95-3d63-46be-aa72-94d08fd3b418"

#define NS_IFRAMEMESSAGELISTENER_IID \
  {0x938fcb95, 0x3d63, 0x46be, \
    { 0xaa, 0x72, 0x94, 0xd0, 0x8f, 0xd3, 0xb4, 0x18 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIFrameMessageListener : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IFRAMEMESSAGELISTENER_IID)

  /* void receiveMessage (); */
  NS_SCRIPTABLE NS_IMETHOD ReceiveMessage(void) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIFrameMessageListener, NS_IFRAMEMESSAGELISTENER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIFRAMEMESSAGELISTENER \
  NS_SCRIPTABLE NS_IMETHOD ReceiveMessage(void); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIFRAMEMESSAGELISTENER(_to) \
  NS_SCRIPTABLE NS_IMETHOD ReceiveMessage(void) { return _to ReceiveMessage(); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIFRAMEMESSAGELISTENER(_to) \
  NS_SCRIPTABLE NS_IMETHOD ReceiveMessage(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->ReceiveMessage(); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsFrameMessageListener : public nsIFrameMessageListener
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIFRAMEMESSAGELISTENER

  nsFrameMessageListener();

private:
  ~nsFrameMessageListener();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsFrameMessageListener, nsIFrameMessageListener)

nsFrameMessageListener::nsFrameMessageListener()
{
  /* member initializers and constructor code */
}

nsFrameMessageListener::~nsFrameMessageListener()
{
  /* destructor code */
}

/* void receiveMessage (); */
NS_IMETHODIMP nsFrameMessageListener::ReceiveMessage()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIFrameMessageManager */
#define NS_IFRAMEMESSAGEMANAGER_IID_STR "9be42627-a5db-456f-8de2-9097da45a8c3"

#define NS_IFRAMEMESSAGEMANAGER_IID \
  {0x9be42627, 0xa5db, 0x456f, \
    { 0x8d, 0xe2, 0x90, 0x97, 0xda, 0x45, 0xa8, 0xc3 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIFrameMessageManager : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IFRAMEMESSAGEMANAGER_IID)

  /* void addMessageListener (in AString aMessage, in nsIFrameMessageListener aListener); */
  NS_SCRIPTABLE NS_IMETHOD AddMessageListener(const nsAString & aMessage, nsIFrameMessageListener *aListener) = 0;

  /* void removeMessageListener (in AString aMessage, in nsIFrameMessageListener aListener); */
  NS_SCRIPTABLE NS_IMETHOD RemoveMessageListener(const nsAString & aMessage, nsIFrameMessageListener *aListener) = 0;

  /* [implicit_jscontext,optional_argc] void sendAsyncMessage ([optional] in AString messageName, [optional] in jsval obj); */
  NS_SCRIPTABLE NS_IMETHOD SendAsyncMessage(const nsAString & messageName, const JS::Value & obj, JSContext* cx, PRUint8 _argc) = 0;

  /* [notxpcom] boolean markForCC (); */
  NS_IMETHOD_(bool) MarkForCC(void) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIFrameMessageManager, NS_IFRAMEMESSAGEMANAGER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIFRAMEMESSAGEMANAGER \
  NS_SCRIPTABLE NS_IMETHOD AddMessageListener(const nsAString & aMessage, nsIFrameMessageListener *aListener); \
  NS_SCRIPTABLE NS_IMETHOD RemoveMessageListener(const nsAString & aMessage, nsIFrameMessageListener *aListener); \
  NS_SCRIPTABLE NS_IMETHOD SendAsyncMessage(const nsAString & messageName, const JS::Value & obj, JSContext* cx, PRUint8 _argc); \
  NS_IMETHOD_(bool) MarkForCC(void); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIFRAMEMESSAGEMANAGER(_to) \
  NS_SCRIPTABLE NS_IMETHOD AddMessageListener(const nsAString & aMessage, nsIFrameMessageListener *aListener) { return _to AddMessageListener(aMessage, aListener); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveMessageListener(const nsAString & aMessage, nsIFrameMessageListener *aListener) { return _to RemoveMessageListener(aMessage, aListener); } \
  NS_SCRIPTABLE NS_IMETHOD SendAsyncMessage(const nsAString & messageName, const JS::Value & obj, JSContext* cx, PRUint8 _argc) { return _to SendAsyncMessage(messageName, obj, cx, _argc); } \
  NS_IMETHOD_(bool) MarkForCC(void) { return _to MarkForCC(); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIFRAMEMESSAGEMANAGER(_to) \
  NS_SCRIPTABLE NS_IMETHOD AddMessageListener(const nsAString & aMessage, nsIFrameMessageListener *aListener) { return !_to ? NS_ERROR_NULL_POINTER : _to->AddMessageListener(aMessage, aListener); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveMessageListener(const nsAString & aMessage, nsIFrameMessageListener *aListener) { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveMessageListener(aMessage, aListener); } \
  NS_SCRIPTABLE NS_IMETHOD SendAsyncMessage(const nsAString & messageName, const JS::Value & obj, JSContext* cx, PRUint8 _argc) { return !_to ? NS_ERROR_NULL_POINTER : _to->SendAsyncMessage(messageName, obj, cx, _argc); } \
  NS_IMETHOD_(bool) MarkForCC(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->MarkForCC(); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsFrameMessageManager : public nsIFrameMessageManager
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIFRAMEMESSAGEMANAGER

  nsFrameMessageManager();

private:
  ~nsFrameMessageManager();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsFrameMessageManager, nsIFrameMessageManager)

nsFrameMessageManager::nsFrameMessageManager()
{
  /* member initializers and constructor code */
}

nsFrameMessageManager::~nsFrameMessageManager()
{
  /* destructor code */
}

/* void addMessageListener (in AString aMessage, in nsIFrameMessageListener aListener); */
NS_IMETHODIMP nsFrameMessageManager::AddMessageListener(const nsAString & aMessage, nsIFrameMessageListener *aListener)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void removeMessageListener (in AString aMessage, in nsIFrameMessageListener aListener); */
NS_IMETHODIMP nsFrameMessageManager::RemoveMessageListener(const nsAString & aMessage, nsIFrameMessageListener *aListener)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext,optional_argc] void sendAsyncMessage ([optional] in AString messageName, [optional] in jsval obj); */
NS_IMETHODIMP nsFrameMessageManager::SendAsyncMessage(const nsAString & messageName, const JS::Value & obj, JSContext* cx, PRUint8 _argc)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [notxpcom] boolean markForCC (); */
NS_IMETHODIMP_(bool) nsFrameMessageManager::MarkForCC()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsISyncMessageSender */
#define NS_ISYNCMESSAGESENDER_IID_STR "28a36ac7-2868-4fa0-ae24-be957d7dce10"

#define NS_ISYNCMESSAGESENDER_IID \
  {0x28a36ac7, 0x2868, 0x4fa0, \
    { 0xae, 0x24, 0xbe, 0x95, 0x7d, 0x7d, 0xce, 0x10 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsISyncMessageSender : public nsIFrameMessageManager {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ISYNCMESSAGESENDER_IID)

  /* [implicit_jscontext,optional_argc] jsval sendSyncMessage ([optional] in AString messageName, [optional] in jsval obj); */
  NS_SCRIPTABLE NS_IMETHOD SendSyncMessage(const nsAString & messageName, const JS::Value & obj, JSContext* cx, PRUint8 _argc, JS::Value *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsISyncMessageSender, NS_ISYNCMESSAGESENDER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSISYNCMESSAGESENDER \
  NS_SCRIPTABLE NS_IMETHOD SendSyncMessage(const nsAString & messageName, const JS::Value & obj, JSContext* cx, PRUint8 _argc, JS::Value *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSISYNCMESSAGESENDER(_to) \
  NS_SCRIPTABLE NS_IMETHOD SendSyncMessage(const nsAString & messageName, const JS::Value & obj, JSContext* cx, PRUint8 _argc, JS::Value *_retval NS_OUTPARAM) { return _to SendSyncMessage(messageName, obj, cx, _argc, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSISYNCMESSAGESENDER(_to) \
  NS_SCRIPTABLE NS_IMETHOD SendSyncMessage(const nsAString & messageName, const JS::Value & obj, JSContext* cx, PRUint8 _argc, JS::Value *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->SendSyncMessage(messageName, obj, cx, _argc, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsSyncMessageSender : public nsISyncMessageSender
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSISYNCMESSAGESENDER

  nsSyncMessageSender();

private:
  ~nsSyncMessageSender();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsSyncMessageSender, nsISyncMessageSender)

nsSyncMessageSender::nsSyncMessageSender()
{
  /* member initializers and constructor code */
}

nsSyncMessageSender::~nsSyncMessageSender()
{
  /* destructor code */
}

/* [implicit_jscontext,optional_argc] jsval sendSyncMessage ([optional] in AString messageName, [optional] in jsval obj); */
NS_IMETHODIMP nsSyncMessageSender::SendSyncMessage(const nsAString & messageName, const JS::Value & obj, JSContext* cx, PRUint8 _argc, JS::Value *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIContentFrameMessageManager */
#define NS_ICONTENTFRAMEMESSAGEMANAGER_IID_STR "a83f4393-e3cf-44da-8867-1f9174c2c595"

#define NS_ICONTENTFRAMEMESSAGEMANAGER_IID \
  {0xa83f4393, 0xe3cf, 0x44da, \
    { 0x88, 0x67, 0x1f, 0x91, 0x74, 0xc2, 0xc5, 0x95 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIContentFrameMessageManager : public nsISyncMessageSender {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ICONTENTFRAMEMESSAGEMANAGER_IID)

  /* readonly attribute nsIDOMWindow content; */
  NS_SCRIPTABLE NS_IMETHOD GetContent(nsIDOMWindow * *aContent) = 0;

  /* readonly attribute nsIDocShell docShell; */
  NS_SCRIPTABLE NS_IMETHOD GetDocShell(nsIDocShell * *aDocShell) = 0;

  /* void dump (in DOMString aStr); */
  NS_SCRIPTABLE NS_IMETHOD Dump(const nsAString & aStr) = 0;

  /* void privateNoteIntentionalCrash (); */
  NS_SCRIPTABLE NS_IMETHOD PrivateNoteIntentionalCrash(void) = 0;

  /* DOMString atob (in DOMString aAsciiString); */
  NS_SCRIPTABLE NS_IMETHOD Atob(const nsAString & aAsciiString, nsAString & _retval NS_OUTPARAM) = 0;

  /* DOMString btoa (in DOMString aBase64Data); */
  NS_SCRIPTABLE NS_IMETHOD Btoa(const nsAString & aBase64Data, nsAString & _retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIContentFrameMessageManager, NS_ICONTENTFRAMEMESSAGEMANAGER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSICONTENTFRAMEMESSAGEMANAGER \
  NS_SCRIPTABLE NS_IMETHOD GetContent(nsIDOMWindow * *aContent); \
  NS_SCRIPTABLE NS_IMETHOD GetDocShell(nsIDocShell * *aDocShell); \
  NS_SCRIPTABLE NS_IMETHOD Dump(const nsAString & aStr); \
  NS_SCRIPTABLE NS_IMETHOD PrivateNoteIntentionalCrash(void); \
  NS_SCRIPTABLE NS_IMETHOD Atob(const nsAString & aAsciiString, nsAString & _retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Btoa(const nsAString & aBase64Data, nsAString & _retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSICONTENTFRAMEMESSAGEMANAGER(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetContent(nsIDOMWindow * *aContent) { return _to GetContent(aContent); } \
  NS_SCRIPTABLE NS_IMETHOD GetDocShell(nsIDocShell * *aDocShell) { return _to GetDocShell(aDocShell); } \
  NS_SCRIPTABLE NS_IMETHOD Dump(const nsAString & aStr) { return _to Dump(aStr); } \
  NS_SCRIPTABLE NS_IMETHOD PrivateNoteIntentionalCrash(void) { return _to PrivateNoteIntentionalCrash(); } \
  NS_SCRIPTABLE NS_IMETHOD Atob(const nsAString & aAsciiString, nsAString & _retval NS_OUTPARAM) { return _to Atob(aAsciiString, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Btoa(const nsAString & aBase64Data, nsAString & _retval NS_OUTPARAM) { return _to Btoa(aBase64Data, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSICONTENTFRAMEMESSAGEMANAGER(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetContent(nsIDOMWindow * *aContent) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetContent(aContent); } \
  NS_SCRIPTABLE NS_IMETHOD GetDocShell(nsIDocShell * *aDocShell) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDocShell(aDocShell); } \
  NS_SCRIPTABLE NS_IMETHOD Dump(const nsAString & aStr) { return !_to ? NS_ERROR_NULL_POINTER : _to->Dump(aStr); } \
  NS_SCRIPTABLE NS_IMETHOD PrivateNoteIntentionalCrash(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->PrivateNoteIntentionalCrash(); } \
  NS_SCRIPTABLE NS_IMETHOD Atob(const nsAString & aAsciiString, nsAString & _retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Atob(aAsciiString, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Btoa(const nsAString & aBase64Data, nsAString & _retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Btoa(aBase64Data, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsContentFrameMessageManager : public nsIContentFrameMessageManager
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSICONTENTFRAMEMESSAGEMANAGER

  nsContentFrameMessageManager();

private:
  ~nsContentFrameMessageManager();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsContentFrameMessageManager, nsIContentFrameMessageManager)

nsContentFrameMessageManager::nsContentFrameMessageManager()
{
  /* member initializers and constructor code */
}

nsContentFrameMessageManager::~nsContentFrameMessageManager()
{
  /* destructor code */
}

/* readonly attribute nsIDOMWindow content; */
NS_IMETHODIMP nsContentFrameMessageManager::GetContent(nsIDOMWindow * *aContent)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDocShell docShell; */
NS_IMETHODIMP nsContentFrameMessageManager::GetDocShell(nsIDocShell * *aDocShell)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void dump (in DOMString aStr); */
NS_IMETHODIMP nsContentFrameMessageManager::Dump(const nsAString & aStr)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void privateNoteIntentionalCrash (); */
NS_IMETHODIMP nsContentFrameMessageManager::PrivateNoteIntentionalCrash()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* DOMString atob (in DOMString aAsciiString); */
NS_IMETHODIMP nsContentFrameMessageManager::Atob(const nsAString & aAsciiString, nsAString & _retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* DOMString btoa (in DOMString aBase64Data); */
NS_IMETHODIMP nsContentFrameMessageManager::Btoa(const nsAString & aBase64Data, nsAString & _retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIInProcessContentFrameMessageManager */
#define NS_IINPROCESSCONTENTFRAMEMESSAGEMANAGER_IID_STR "f0936c56-e92c-4927-a85b-e289c3d4a01c"

#define NS_IINPROCESSCONTENTFRAMEMESSAGEMANAGER_IID \
  {0xf0936c56, 0xe92c, 0x4927, \
    { 0xa8, 0x5b, 0xe2, 0x89, 0xc3, 0xd4, 0xa0, 0x1c }}

class NS_NO_VTABLE nsIInProcessContentFrameMessageManager : public nsIContentFrameMessageManager {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IINPROCESSCONTENTFRAMEMESSAGEMANAGER_IID)

  /* [notxpcom] nsIContent getOwnerContent (); */
  NS_IMETHOD_(nsIContent *) GetOwnerContent(void) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIInProcessContentFrameMessageManager, NS_IINPROCESSCONTENTFRAMEMESSAGEMANAGER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIINPROCESSCONTENTFRAMEMESSAGEMANAGER \
  NS_IMETHOD_(nsIContent *) GetOwnerContent(void); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIINPROCESSCONTENTFRAMEMESSAGEMANAGER(_to) \
  NS_IMETHOD_(nsIContent *) GetOwnerContent(void) { return _to GetOwnerContent(); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIINPROCESSCONTENTFRAMEMESSAGEMANAGER(_to) \
  NS_IMETHOD_(nsIContent *) GetOwnerContent(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOwnerContent(); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsInProcessContentFrameMessageManager : public nsIInProcessContentFrameMessageManager
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIINPROCESSCONTENTFRAMEMESSAGEMANAGER

  nsInProcessContentFrameMessageManager();

private:
  ~nsInProcessContentFrameMessageManager();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsInProcessContentFrameMessageManager, nsIInProcessContentFrameMessageManager)

nsInProcessContentFrameMessageManager::nsInProcessContentFrameMessageManager()
{
  /* member initializers and constructor code */
}

nsInProcessContentFrameMessageManager::~nsInProcessContentFrameMessageManager()
{
  /* destructor code */
}

/* [notxpcom] nsIContent getOwnerContent (); */
NS_IMETHODIMP_(nsIContent *) nsInProcessContentFrameMessageManager::GetOwnerContent()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsITreeItemFrameMessageManager */
#define NS_ITREEITEMFRAMEMESSAGEMANAGER_IID_STR "09f79e8c-101b-432b-a494-02f9b5e111c0"

#define NS_ITREEITEMFRAMEMESSAGEMANAGER_IID \
  {0x09f79e8c, 0x101b, 0x432b, \
    { 0xa4, 0x94, 0x02, 0xf9, 0xb5, 0xe1, 0x11, 0xc0 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsITreeItemFrameMessageManager : public nsIFrameMessageManager {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ITREEITEMFRAMEMESSAGEMANAGER_IID)

  /* readonly attribute unsigned long childCount; */
  NS_SCRIPTABLE NS_IMETHOD GetChildCount(PRUint32 *aChildCount) = 0;

  /* nsITreeItemFrameMessageManager getChildAt (in unsigned long aIndex); */
  NS_SCRIPTABLE NS_IMETHOD GetChildAt(PRUint32 aIndex, nsITreeItemFrameMessageManager * *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsITreeItemFrameMessageManager, NS_ITREEITEMFRAMEMESSAGEMANAGER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSITREEITEMFRAMEMESSAGEMANAGER \
  NS_SCRIPTABLE NS_IMETHOD GetChildCount(PRUint32 *aChildCount); \
  NS_SCRIPTABLE NS_IMETHOD GetChildAt(PRUint32 aIndex, nsITreeItemFrameMessageManager * *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSITREEITEMFRAMEMESSAGEMANAGER(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetChildCount(PRUint32 *aChildCount) { return _to GetChildCount(aChildCount); } \
  NS_SCRIPTABLE NS_IMETHOD GetChildAt(PRUint32 aIndex, nsITreeItemFrameMessageManager * *_retval NS_OUTPARAM) { return _to GetChildAt(aIndex, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSITREEITEMFRAMEMESSAGEMANAGER(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetChildCount(PRUint32 *aChildCount) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetChildCount(aChildCount); } \
  NS_SCRIPTABLE NS_IMETHOD GetChildAt(PRUint32 aIndex, nsITreeItemFrameMessageManager * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetChildAt(aIndex, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsTreeItemFrameMessageManager : public nsITreeItemFrameMessageManager
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSITREEITEMFRAMEMESSAGEMANAGER

  nsTreeItemFrameMessageManager();

private:
  ~nsTreeItemFrameMessageManager();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsTreeItemFrameMessageManager, nsITreeItemFrameMessageManager)

nsTreeItemFrameMessageManager::nsTreeItemFrameMessageManager()
{
  /* member initializers and constructor code */
}

nsTreeItemFrameMessageManager::~nsTreeItemFrameMessageManager()
{
  /* destructor code */
}

/* readonly attribute unsigned long childCount; */
NS_IMETHODIMP nsTreeItemFrameMessageManager::GetChildCount(PRUint32 *aChildCount)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsITreeItemFrameMessageManager getChildAt (in unsigned long aIndex); */
NS_IMETHODIMP nsTreeItemFrameMessageManager::GetChildAt(PRUint32 aIndex, nsITreeItemFrameMessageManager * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIChromeFrameMessageManager */
#define NS_ICHROMEFRAMEMESSAGEMANAGER_IID_STR "a51597f0-d669-4260-83e6-1d426a8ac802"

#define NS_ICHROMEFRAMEMESSAGEMANAGER_IID \
  {0xa51597f0, 0xd669, 0x4260, \
    { 0x83, 0xe6, 0x1d, 0x42, 0x6a, 0x8a, 0xc8, 0x02 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIChromeFrameMessageManager : public nsITreeItemFrameMessageManager {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ICHROMEFRAMEMESSAGEMANAGER_IID)

  /* void loadFrameScript (in AString aURL, in boolean aAllowDelayedLoad); */
  NS_SCRIPTABLE NS_IMETHOD LoadFrameScript(const nsAString & aURL, bool aAllowDelayedLoad) = 0;

  /* void removeDelayedFrameScript (in AString aURL); */
  NS_SCRIPTABLE NS_IMETHOD RemoveDelayedFrameScript(const nsAString & aURL) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIChromeFrameMessageManager, NS_ICHROMEFRAMEMESSAGEMANAGER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSICHROMEFRAMEMESSAGEMANAGER \
  NS_SCRIPTABLE NS_IMETHOD LoadFrameScript(const nsAString & aURL, bool aAllowDelayedLoad); \
  NS_SCRIPTABLE NS_IMETHOD RemoveDelayedFrameScript(const nsAString & aURL); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSICHROMEFRAMEMESSAGEMANAGER(_to) \
  NS_SCRIPTABLE NS_IMETHOD LoadFrameScript(const nsAString & aURL, bool aAllowDelayedLoad) { return _to LoadFrameScript(aURL, aAllowDelayedLoad); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveDelayedFrameScript(const nsAString & aURL) { return _to RemoveDelayedFrameScript(aURL); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSICHROMEFRAMEMESSAGEMANAGER(_to) \
  NS_SCRIPTABLE NS_IMETHOD LoadFrameScript(const nsAString & aURL, bool aAllowDelayedLoad) { return !_to ? NS_ERROR_NULL_POINTER : _to->LoadFrameScript(aURL, aAllowDelayedLoad); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveDelayedFrameScript(const nsAString & aURL) { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveDelayedFrameScript(aURL); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsChromeFrameMessageManager : public nsIChromeFrameMessageManager
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSICHROMEFRAMEMESSAGEMANAGER

  nsChromeFrameMessageManager();

private:
  ~nsChromeFrameMessageManager();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsChromeFrameMessageManager, nsIChromeFrameMessageManager)

nsChromeFrameMessageManager::nsChromeFrameMessageManager()
{
  /* member initializers and constructor code */
}

nsChromeFrameMessageManager::~nsChromeFrameMessageManager()
{
  /* destructor code */
}

/* void loadFrameScript (in AString aURL, in boolean aAllowDelayedLoad); */
NS_IMETHODIMP nsChromeFrameMessageManager::LoadFrameScript(const nsAString & aURL, bool aAllowDelayedLoad)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void removeDelayedFrameScript (in AString aURL); */
NS_IMETHODIMP nsChromeFrameMessageManager::RemoveDelayedFrameScript(const nsAString & aURL)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIFrameMessageManager_h__ */
