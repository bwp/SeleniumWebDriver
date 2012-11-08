/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/interfaces/contacts/nsIDOMContactManager.idl
 */

#ifndef __gen_nsIDOMContactManager_h__
#define __gen_nsIDOMContactManager_h__


#ifndef __gen_domstubs_h__
#include "domstubs.h"
#endif

#ifndef __gen_nsIDOMContactProperties_h__
#include "nsIDOMContactProperties.h"
#endif

#ifndef __gen_nsIDOMEvent_h__
#include "nsIDOMEvent.h"
#endif

#include "jspubtd.h"

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIArray; /* forward declaration */

class nsIDOMContactFindOptions; /* forward declaration */

class nsIDOMContactProperties; /* forward declaration */

class nsIDOMDOMRequest; /* forward declaration */


/* starting interface:    nsIDOMContact */
#define NS_IDOMCONTACT_IID_STR "da0f7040-388b-11e1-b86c-0800200c9a66"

#define NS_IDOMCONTACT_IID \
  {0xda0f7040, 0x388b, 0x11e1, \
    { 0xb8, 0x6c, 0x08, 0x00, 0x20, 0x0c, 0x9a, 0x66 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMContact : public nsIDOMContactProperties {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMCONTACT_IID)

  /* attribute DOMString id; */
  NS_SCRIPTABLE NS_IMETHOD GetId(nsAString & aId) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetId(const nsAString & aId) = 0;

  /* readonly attribute jsval published; */
  NS_SCRIPTABLE NS_IMETHOD GetPublished(JS::Value *aPublished) = 0;

  /* readonly attribute jsval updated; */
  NS_SCRIPTABLE NS_IMETHOD GetUpdated(JS::Value *aUpdated) = 0;

  /* void init (in nsIDOMContactProperties properties); */
  NS_SCRIPTABLE NS_IMETHOD Init(nsIDOMContactProperties *properties) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMContact, NS_IDOMCONTACT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMCONTACT \
  NS_SCRIPTABLE NS_IMETHOD GetId(nsAString & aId); \
  NS_SCRIPTABLE NS_IMETHOD SetId(const nsAString & aId); \
  NS_SCRIPTABLE NS_IMETHOD GetPublished(JS::Value *aPublished); \
  NS_SCRIPTABLE NS_IMETHOD GetUpdated(JS::Value *aUpdated); \
  NS_SCRIPTABLE NS_IMETHOD Init(nsIDOMContactProperties *properties); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMCONTACT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetId(nsAString & aId) { return _to GetId(aId); } \
  NS_SCRIPTABLE NS_IMETHOD SetId(const nsAString & aId) { return _to SetId(aId); } \
  NS_SCRIPTABLE NS_IMETHOD GetPublished(JS::Value *aPublished) { return _to GetPublished(aPublished); } \
  NS_SCRIPTABLE NS_IMETHOD GetUpdated(JS::Value *aUpdated) { return _to GetUpdated(aUpdated); } \
  NS_SCRIPTABLE NS_IMETHOD Init(nsIDOMContactProperties *properties) { return _to Init(properties); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMCONTACT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetId(nsAString & aId) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetId(aId); } \
  NS_SCRIPTABLE NS_IMETHOD SetId(const nsAString & aId) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetId(aId); } \
  NS_SCRIPTABLE NS_IMETHOD GetPublished(JS::Value *aPublished) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPublished(aPublished); } \
  NS_SCRIPTABLE NS_IMETHOD GetUpdated(JS::Value *aUpdated) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetUpdated(aUpdated); } \
  NS_SCRIPTABLE NS_IMETHOD Init(nsIDOMContactProperties *properties) { return !_to ? NS_ERROR_NULL_POINTER : _to->Init(properties); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMContact : public nsIDOMContact
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMCONTACT

  nsDOMContact();

private:
  ~nsDOMContact();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMContact, nsIDOMContact)

nsDOMContact::nsDOMContact()
{
  /* member initializers and constructor code */
}

nsDOMContact::~nsDOMContact()
{
  /* destructor code */
}

/* attribute DOMString id; */
NS_IMETHODIMP nsDOMContact::GetId(nsAString & aId)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMContact::SetId(const nsAString & aId)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute jsval published; */
NS_IMETHODIMP nsDOMContact::GetPublished(JS::Value *aPublished)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute jsval updated; */
NS_IMETHODIMP nsDOMContact::GetUpdated(JS::Value *aUpdated)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void init (in nsIDOMContactProperties properties); */
NS_IMETHODIMP nsDOMContact::Init(nsIDOMContactProperties *properties)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    mozIDOMContactEvent */
#define MOZIDOMCONTACTEVENT_IID_STR "a8cd4ba0-93d1-11e1-b0c4-0800200c9a66"

#define MOZIDOMCONTACTEVENT_IID \
  {0xa8cd4ba0, 0x93d1, 0x11e1, \
    { 0xb0, 0xc4, 0x08, 0x00, 0x20, 0x0c, 0x9a, 0x66 }}

class NS_NO_VTABLE NS_SCRIPTABLE mozIDOMContactEvent : public nsIDOMEvent {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(MOZIDOMCONTACTEVENT_IID)

  /* readonly attribute DOMString contactID; */
  NS_SCRIPTABLE NS_IMETHOD GetContactID(nsAString & aContactID) = 0;

  /* readonly attribute DOMString reason; */
  NS_SCRIPTABLE NS_IMETHOD GetReason(nsAString & aReason) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(mozIDOMContactEvent, MOZIDOMCONTACTEVENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_MOZIDOMCONTACTEVENT \
  NS_SCRIPTABLE NS_IMETHOD GetContactID(nsAString & aContactID); \
  NS_SCRIPTABLE NS_IMETHOD GetReason(nsAString & aReason); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_MOZIDOMCONTACTEVENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetContactID(nsAString & aContactID) { return _to GetContactID(aContactID); } \
  NS_SCRIPTABLE NS_IMETHOD GetReason(nsAString & aReason) { return _to GetReason(aReason); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_MOZIDOMCONTACTEVENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetContactID(nsAString & aContactID) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetContactID(aContactID); } \
  NS_SCRIPTABLE NS_IMETHOD GetReason(nsAString & aReason) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetReason(aReason); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public mozIDOMContactEvent
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_MOZIDOMCONTACTEVENT

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, mozIDOMContactEvent)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* readonly attribute DOMString contactID; */
NS_IMETHODIMP _MYCLASS_::GetContactID(nsAString & aContactID)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString reason; */
NS_IMETHODIMP _MYCLASS_::GetReason(nsAString & aReason)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIDOMContactManager */
#define NS_IDOMCONTACTMANAGER_IID_STR "d88af7e0-a45f-11e1-b3dd-0800200c9a66"

#define NS_IDOMCONTACTMANAGER_IID \
  {0xd88af7e0, 0xa45f, 0x11e1, \
    { 0xb3, 0xdd, 0x08, 0x00, 0x20, 0x0c, 0x9a, 0x66 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMContactManager : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMCONTACTMANAGER_IID)

  /* nsIDOMDOMRequest find (in nsIDOMContactFindOptions options); */
  NS_SCRIPTABLE NS_IMETHOD Find(nsIDOMContactFindOptions *options, nsIDOMDOMRequest * *_retval NS_OUTPARAM) = 0;

  /* nsIDOMDOMRequest clear (); */
  NS_SCRIPTABLE NS_IMETHOD Clear(nsIDOMDOMRequest * *_retval NS_OUTPARAM) = 0;

  /* nsIDOMDOMRequest save (in nsIDOMContact contact); */
  NS_SCRIPTABLE NS_IMETHOD Save(nsIDOMContact *contact, nsIDOMDOMRequest * *_retval NS_OUTPARAM) = 0;

  /* nsIDOMDOMRequest remove (in nsIDOMContact contact); */
  NS_SCRIPTABLE NS_IMETHOD Remove(nsIDOMContact *contact, nsIDOMDOMRequest * *_retval NS_OUTPARAM) = 0;

  /* nsIDOMDOMRequest getSimContacts (in DOMString type); */
  NS_SCRIPTABLE NS_IMETHOD GetSimContacts(const nsAString & type, nsIDOMDOMRequest * *_retval NS_OUTPARAM) = 0;

  /* attribute nsIDOMEventListener oncontactchange; */
  NS_SCRIPTABLE NS_IMETHOD GetOncontactchange(nsIDOMEventListener * *aOncontactchange) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetOncontactchange(nsIDOMEventListener *aOncontactchange) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMContactManager, NS_IDOMCONTACTMANAGER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMCONTACTMANAGER \
  NS_SCRIPTABLE NS_IMETHOD Find(nsIDOMContactFindOptions *options, nsIDOMDOMRequest * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Clear(nsIDOMDOMRequest * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Save(nsIDOMContact *contact, nsIDOMDOMRequest * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Remove(nsIDOMContact *contact, nsIDOMDOMRequest * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetSimContacts(const nsAString & type, nsIDOMDOMRequest * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetOncontactchange(nsIDOMEventListener * *aOncontactchange); \
  NS_SCRIPTABLE NS_IMETHOD SetOncontactchange(nsIDOMEventListener *aOncontactchange); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMCONTACTMANAGER(_to) \
  NS_SCRIPTABLE NS_IMETHOD Find(nsIDOMContactFindOptions *options, nsIDOMDOMRequest * *_retval NS_OUTPARAM) { return _to Find(options, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Clear(nsIDOMDOMRequest * *_retval NS_OUTPARAM) { return _to Clear(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD Save(nsIDOMContact *contact, nsIDOMDOMRequest * *_retval NS_OUTPARAM) { return _to Save(contact, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Remove(nsIDOMContact *contact, nsIDOMDOMRequest * *_retval NS_OUTPARAM) { return _to Remove(contact, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetSimContacts(const nsAString & type, nsIDOMDOMRequest * *_retval NS_OUTPARAM) { return _to GetSimContacts(type, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetOncontactchange(nsIDOMEventListener * *aOncontactchange) { return _to GetOncontactchange(aOncontactchange); } \
  NS_SCRIPTABLE NS_IMETHOD SetOncontactchange(nsIDOMEventListener *aOncontactchange) { return _to SetOncontactchange(aOncontactchange); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMCONTACTMANAGER(_to) \
  NS_SCRIPTABLE NS_IMETHOD Find(nsIDOMContactFindOptions *options, nsIDOMDOMRequest * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Find(options, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Clear(nsIDOMDOMRequest * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Clear(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD Save(nsIDOMContact *contact, nsIDOMDOMRequest * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Save(contact, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Remove(nsIDOMContact *contact, nsIDOMDOMRequest * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Remove(contact, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetSimContacts(const nsAString & type, nsIDOMDOMRequest * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSimContacts(type, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetOncontactchange(nsIDOMEventListener * *aOncontactchange) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOncontactchange(aOncontactchange); } \
  NS_SCRIPTABLE NS_IMETHOD SetOncontactchange(nsIDOMEventListener *aOncontactchange) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOncontactchange(aOncontactchange); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMContactManager : public nsIDOMContactManager
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMCONTACTMANAGER

  nsDOMContactManager();

private:
  ~nsDOMContactManager();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMContactManager, nsIDOMContactManager)

nsDOMContactManager::nsDOMContactManager()
{
  /* member initializers and constructor code */
}

nsDOMContactManager::~nsDOMContactManager()
{
  /* destructor code */
}

/* nsIDOMDOMRequest find (in nsIDOMContactFindOptions options); */
NS_IMETHODIMP nsDOMContactManager::Find(nsIDOMContactFindOptions *options, nsIDOMDOMRequest * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMDOMRequest clear (); */
NS_IMETHODIMP nsDOMContactManager::Clear(nsIDOMDOMRequest * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMDOMRequest save (in nsIDOMContact contact); */
NS_IMETHODIMP nsDOMContactManager::Save(nsIDOMContact *contact, nsIDOMDOMRequest * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMDOMRequest remove (in nsIDOMContact contact); */
NS_IMETHODIMP nsDOMContactManager::Remove(nsIDOMContact *contact, nsIDOMDOMRequest * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMDOMRequest getSimContacts (in DOMString type); */
NS_IMETHODIMP nsDOMContactManager::GetSimContacts(const nsAString & type, nsIDOMDOMRequest * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIDOMEventListener oncontactchange; */
NS_IMETHODIMP nsDOMContactManager::GetOncontactchange(nsIDOMEventListener * *aOncontactchange)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMContactManager::SetOncontactchange(nsIDOMEventListener *aOncontactchange)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMContactManager_h__ */
