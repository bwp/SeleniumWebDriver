/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/interfaces/core/nsIDOMMutationObserver.idl
 */

#ifndef __gen_nsIDOMMutationObserver_h__
#define __gen_nsIDOMMutationObserver_h__


#ifndef __gen_domstubs_h__
#include "domstubs.h"
#endif

#include "jspubtd.h"

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIVariant; /* forward declaration */


/* starting interface:    nsIDOMMutationRecord */
#define NS_IDOMMUTATIONRECORD_IID_STR "2fa4716f-405a-449b-954b-ae570c170364"

#define NS_IDOMMUTATIONRECORD_IID \
  {0x2fa4716f, 0x405a, 0x449b, \
    { 0x95, 0x4b, 0xae, 0x57, 0x0c, 0x17, 0x03, 0x64 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMMutationRecord : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMMUTATIONRECORD_IID)

  /* readonly attribute DOMString type; */
  NS_SCRIPTABLE NS_IMETHOD GetType(nsAString & aType) = 0;

  /* readonly attribute nsIDOMNode target; */
  NS_SCRIPTABLE NS_IMETHOD GetTarget(nsIDOMNode * *aTarget) = 0;

  /* readonly attribute nsIDOMNodeList addedNodes; */
  NS_SCRIPTABLE NS_IMETHOD GetAddedNodes(nsIDOMNodeList * *aAddedNodes) = 0;

  /* readonly attribute nsIDOMNodeList removedNodes; */
  NS_SCRIPTABLE NS_IMETHOD GetRemovedNodes(nsIDOMNodeList * *aRemovedNodes) = 0;

  /* readonly attribute nsIDOMNode previousSibling; */
  NS_SCRIPTABLE NS_IMETHOD GetPreviousSibling(nsIDOMNode * *aPreviousSibling) = 0;

  /* readonly attribute nsIDOMNode nextSibling; */
  NS_SCRIPTABLE NS_IMETHOD GetNextSibling(nsIDOMNode * *aNextSibling) = 0;

  /* readonly attribute DOMString attributeName; */
  NS_SCRIPTABLE NS_IMETHOD GetAttributeName(nsAString & aAttributeName) = 0;

  /* readonly attribute DOMString attributeNamespace; */
  NS_SCRIPTABLE NS_IMETHOD GetAttributeNamespace(nsAString & aAttributeNamespace) = 0;

  /* readonly attribute DOMString oldValue; */
  NS_SCRIPTABLE NS_IMETHOD GetOldValue(nsAString & aOldValue) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMMutationRecord, NS_IDOMMUTATIONRECORD_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMMUTATIONRECORD \
  NS_SCRIPTABLE NS_IMETHOD GetType(nsAString & aType); \
  NS_SCRIPTABLE NS_IMETHOD GetTarget(nsIDOMNode * *aTarget); \
  NS_SCRIPTABLE NS_IMETHOD GetAddedNodes(nsIDOMNodeList * *aAddedNodes); \
  NS_SCRIPTABLE NS_IMETHOD GetRemovedNodes(nsIDOMNodeList * *aRemovedNodes); \
  NS_SCRIPTABLE NS_IMETHOD GetPreviousSibling(nsIDOMNode * *aPreviousSibling); \
  NS_SCRIPTABLE NS_IMETHOD GetNextSibling(nsIDOMNode * *aNextSibling); \
  NS_SCRIPTABLE NS_IMETHOD GetAttributeName(nsAString & aAttributeName); \
  NS_SCRIPTABLE NS_IMETHOD GetAttributeNamespace(nsAString & aAttributeNamespace); \
  NS_SCRIPTABLE NS_IMETHOD GetOldValue(nsAString & aOldValue); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMMUTATIONRECORD(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetType(nsAString & aType) { return _to GetType(aType); } \
  NS_SCRIPTABLE NS_IMETHOD GetTarget(nsIDOMNode * *aTarget) { return _to GetTarget(aTarget); } \
  NS_SCRIPTABLE NS_IMETHOD GetAddedNodes(nsIDOMNodeList * *aAddedNodes) { return _to GetAddedNodes(aAddedNodes); } \
  NS_SCRIPTABLE NS_IMETHOD GetRemovedNodes(nsIDOMNodeList * *aRemovedNodes) { return _to GetRemovedNodes(aRemovedNodes); } \
  NS_SCRIPTABLE NS_IMETHOD GetPreviousSibling(nsIDOMNode * *aPreviousSibling) { return _to GetPreviousSibling(aPreviousSibling); } \
  NS_SCRIPTABLE NS_IMETHOD GetNextSibling(nsIDOMNode * *aNextSibling) { return _to GetNextSibling(aNextSibling); } \
  NS_SCRIPTABLE NS_IMETHOD GetAttributeName(nsAString & aAttributeName) { return _to GetAttributeName(aAttributeName); } \
  NS_SCRIPTABLE NS_IMETHOD GetAttributeNamespace(nsAString & aAttributeNamespace) { return _to GetAttributeNamespace(aAttributeNamespace); } \
  NS_SCRIPTABLE NS_IMETHOD GetOldValue(nsAString & aOldValue) { return _to GetOldValue(aOldValue); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMMUTATIONRECORD(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetType(nsAString & aType) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetType(aType); } \
  NS_SCRIPTABLE NS_IMETHOD GetTarget(nsIDOMNode * *aTarget) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTarget(aTarget); } \
  NS_SCRIPTABLE NS_IMETHOD GetAddedNodes(nsIDOMNodeList * *aAddedNodes) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAddedNodes(aAddedNodes); } \
  NS_SCRIPTABLE NS_IMETHOD GetRemovedNodes(nsIDOMNodeList * *aRemovedNodes) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRemovedNodes(aRemovedNodes); } \
  NS_SCRIPTABLE NS_IMETHOD GetPreviousSibling(nsIDOMNode * *aPreviousSibling) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPreviousSibling(aPreviousSibling); } \
  NS_SCRIPTABLE NS_IMETHOD GetNextSibling(nsIDOMNode * *aNextSibling) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNextSibling(aNextSibling); } \
  NS_SCRIPTABLE NS_IMETHOD GetAttributeName(nsAString & aAttributeName) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAttributeName(aAttributeName); } \
  NS_SCRIPTABLE NS_IMETHOD GetAttributeNamespace(nsAString & aAttributeNamespace) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAttributeNamespace(aAttributeNamespace); } \
  NS_SCRIPTABLE NS_IMETHOD GetOldValue(nsAString & aOldValue) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOldValue(aOldValue); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMMutationRecord : public nsIDOMMutationRecord
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMMUTATIONRECORD

  nsDOMMutationRecord();

private:
  ~nsDOMMutationRecord();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMMutationRecord, nsIDOMMutationRecord)

nsDOMMutationRecord::nsDOMMutationRecord()
{
  /* member initializers and constructor code */
}

nsDOMMutationRecord::~nsDOMMutationRecord()
{
  /* destructor code */
}

/* readonly attribute DOMString type; */
NS_IMETHODIMP nsDOMMutationRecord::GetType(nsAString & aType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMNode target; */
NS_IMETHODIMP nsDOMMutationRecord::GetTarget(nsIDOMNode * *aTarget)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMNodeList addedNodes; */
NS_IMETHODIMP nsDOMMutationRecord::GetAddedNodes(nsIDOMNodeList * *aAddedNodes)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMNodeList removedNodes; */
NS_IMETHODIMP nsDOMMutationRecord::GetRemovedNodes(nsIDOMNodeList * *aRemovedNodes)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMNode previousSibling; */
NS_IMETHODIMP nsDOMMutationRecord::GetPreviousSibling(nsIDOMNode * *aPreviousSibling)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMNode nextSibling; */
NS_IMETHODIMP nsDOMMutationRecord::GetNextSibling(nsIDOMNode * *aNextSibling)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString attributeName; */
NS_IMETHODIMP nsDOMMutationRecord::GetAttributeName(nsAString & aAttributeName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString attributeNamespace; */
NS_IMETHODIMP nsDOMMutationRecord::GetAttributeNamespace(nsAString & aAttributeNamespace)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString oldValue; */
NS_IMETHODIMP nsDOMMutationRecord::GetOldValue(nsAString & aOldValue)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIDOMMutationObserver */
#define NS_IDOMMUTATIONOBSERVER_IID_STR "573105b5-d64e-468f-959f-87eebf93913e"

#define NS_IDOMMUTATIONOBSERVER_IID \
  {0x573105b5, 0xd64e, 0x468f, \
    { 0x95, 0x9f, 0x87, 0xee, 0xbf, 0x93, 0x91, 0x3e }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMMutationObserver : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMMUTATIONOBSERVER_IID)

  /* [implicit_jscontext] void observe (in nsIDOMNode aTarget, in jsval aOptions); */
  NS_SCRIPTABLE NS_IMETHOD Observe(nsIDOMNode *aTarget, const JS::Value & aOptions, JSContext* cx) = 0;

  /* void disconnect (); */
  NS_SCRIPTABLE NS_IMETHOD Disconnect(void) = 0;

  /* nsIVariant takeRecords (); */
  NS_SCRIPTABLE NS_IMETHOD TakeRecords(nsIVariant * *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMMutationObserver, NS_IDOMMUTATIONOBSERVER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMMUTATIONOBSERVER \
  NS_SCRIPTABLE NS_IMETHOD Observe(nsIDOMNode *aTarget, const JS::Value & aOptions, JSContext* cx); \
  NS_SCRIPTABLE NS_IMETHOD Disconnect(void); \
  NS_SCRIPTABLE NS_IMETHOD TakeRecords(nsIVariant * *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMMUTATIONOBSERVER(_to) \
  NS_SCRIPTABLE NS_IMETHOD Observe(nsIDOMNode *aTarget, const JS::Value & aOptions, JSContext* cx) { return _to Observe(aTarget, aOptions, cx); } \
  NS_SCRIPTABLE NS_IMETHOD Disconnect(void) { return _to Disconnect(); } \
  NS_SCRIPTABLE NS_IMETHOD TakeRecords(nsIVariant * *_retval NS_OUTPARAM) { return _to TakeRecords(_retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMMUTATIONOBSERVER(_to) \
  NS_SCRIPTABLE NS_IMETHOD Observe(nsIDOMNode *aTarget, const JS::Value & aOptions, JSContext* cx) { return !_to ? NS_ERROR_NULL_POINTER : _to->Observe(aTarget, aOptions, cx); } \
  NS_SCRIPTABLE NS_IMETHOD Disconnect(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Disconnect(); } \
  NS_SCRIPTABLE NS_IMETHOD TakeRecords(nsIVariant * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->TakeRecords(_retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMMutationObserver : public nsIDOMMutationObserver
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMMUTATIONOBSERVER

  nsDOMMutationObserver();

private:
  ~nsDOMMutationObserver();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMMutationObserver, nsIDOMMutationObserver)

nsDOMMutationObserver::nsDOMMutationObserver()
{
  /* member initializers and constructor code */
}

nsDOMMutationObserver::~nsDOMMutationObserver()
{
  /* destructor code */
}

/* [implicit_jscontext] void observe (in nsIDOMNode aTarget, in jsval aOptions); */
NS_IMETHODIMP nsDOMMutationObserver::Observe(nsIDOMNode *aTarget, const JS::Value & aOptions, JSContext* cx)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void disconnect (); */
NS_IMETHODIMP nsDOMMutationObserver::Disconnect()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIVariant takeRecords (); */
NS_IMETHODIMP nsDOMMutationObserver::TakeRecords(nsIVariant * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIMutationObserverCallback */
#define NS_IMUTATIONOBSERVERCALLBACK_IID_STR "5b52ce60-2210-42f0-842b-7f9f03d62f85"

#define NS_IMUTATIONOBSERVERCALLBACK_IID \
  {0x5b52ce60, 0x2210, 0x42f0, \
    { 0x84, 0x2b, 0x7f, 0x9f, 0x03, 0xd6, 0x2f, 0x85 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIMutationObserverCallback : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IMUTATIONOBSERVERCALLBACK_IID)

  /* void handleMutations (in nsIVariant aRecords, in nsIDOMMutationObserver aObserver); */
  NS_SCRIPTABLE NS_IMETHOD HandleMutations(nsIVariant *aRecords, nsIDOMMutationObserver *aObserver) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIMutationObserverCallback, NS_IMUTATIONOBSERVERCALLBACK_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIMUTATIONOBSERVERCALLBACK \
  NS_SCRIPTABLE NS_IMETHOD HandleMutations(nsIVariant *aRecords, nsIDOMMutationObserver *aObserver); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIMUTATIONOBSERVERCALLBACK(_to) \
  NS_SCRIPTABLE NS_IMETHOD HandleMutations(nsIVariant *aRecords, nsIDOMMutationObserver *aObserver) { return _to HandleMutations(aRecords, aObserver); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIMUTATIONOBSERVERCALLBACK(_to) \
  NS_SCRIPTABLE NS_IMETHOD HandleMutations(nsIVariant *aRecords, nsIDOMMutationObserver *aObserver) { return !_to ? NS_ERROR_NULL_POINTER : _to->HandleMutations(aRecords, aObserver); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsMutationObserverCallback : public nsIMutationObserverCallback
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIMUTATIONOBSERVERCALLBACK

  nsMutationObserverCallback();

private:
  ~nsMutationObserverCallback();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsMutationObserverCallback, nsIMutationObserverCallback)

nsMutationObserverCallback::nsMutationObserverCallback()
{
  /* member initializers and constructor code */
}

nsMutationObserverCallback::~nsMutationObserverCallback()
{
  /* destructor code */
}

/* void handleMutations (in nsIVariant aRecords, in nsIDOMMutationObserver aObserver); */
NS_IMETHODIMP nsMutationObserverCallback::HandleMutations(nsIVariant *aRecords, nsIDOMMutationObserver *aObserver)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMMutationObserver_h__ */
