/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/interfaces/storage/nsIDOMStorageEventObsolete.idl
 */

#ifndef __gen_nsIDOMStorageEventObsolete_h__
#define __gen_nsIDOMStorageEventObsolete_h__


#ifndef __gen_domstubs_h__
#include "domstubs.h"
#endif

#ifndef __gen_nsIDOMEvent_h__
#include "nsIDOMEvent.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIDOMStorageEventObsolete */
#define NS_IDOMSTORAGEEVENTOBSOLETE_IID_STR "2b3b40fe-4734-4661-b7ff-dc555215db4e"

#define NS_IDOMSTORAGEEVENTOBSOLETE_IID \
  {0x2b3b40fe, 0x4734, 0x4661, \
    { 0xb7, 0xff, 0xdc, 0x55, 0x52, 0x15, 0xdb, 0x4e }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMStorageEventObsolete : public nsIDOMEvent {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMSTORAGEEVENTOBSOLETE_IID)

  /* readonly attribute DOMString domain; */
  NS_SCRIPTABLE NS_IMETHOD GetDomain(nsAString & aDomain) = 0;

  /* void initStorageEvent (in DOMString typeArg, in boolean canBubbleArg, in boolean cancelableArg, in DOMString domainArg); */
  NS_SCRIPTABLE NS_IMETHOD InitStorageEvent(const nsAString & typeArg, bool canBubbleArg, bool cancelableArg, const nsAString & domainArg) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMStorageEventObsolete, NS_IDOMSTORAGEEVENTOBSOLETE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMSTORAGEEVENTOBSOLETE \
  NS_SCRIPTABLE NS_IMETHOD GetDomain(nsAString & aDomain); \
  NS_SCRIPTABLE NS_IMETHOD InitStorageEvent(const nsAString & typeArg, bool canBubbleArg, bool cancelableArg, const nsAString & domainArg); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMSTORAGEEVENTOBSOLETE(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetDomain(nsAString & aDomain) { return _to GetDomain(aDomain); } \
  NS_SCRIPTABLE NS_IMETHOD InitStorageEvent(const nsAString & typeArg, bool canBubbleArg, bool cancelableArg, const nsAString & domainArg) { return _to InitStorageEvent(typeArg, canBubbleArg, cancelableArg, domainArg); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMSTORAGEEVENTOBSOLETE(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetDomain(nsAString & aDomain) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDomain(aDomain); } \
  NS_SCRIPTABLE NS_IMETHOD InitStorageEvent(const nsAString & typeArg, bool canBubbleArg, bool cancelableArg, const nsAString & domainArg) { return !_to ? NS_ERROR_NULL_POINTER : _to->InitStorageEvent(typeArg, canBubbleArg, cancelableArg, domainArg); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMStorageEventObsolete : public nsIDOMStorageEventObsolete
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMSTORAGEEVENTOBSOLETE

  nsDOMStorageEventObsolete();

private:
  ~nsDOMStorageEventObsolete();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMStorageEventObsolete, nsIDOMStorageEventObsolete)

nsDOMStorageEventObsolete::nsDOMStorageEventObsolete()
{
  /* member initializers and constructor code */
}

nsDOMStorageEventObsolete::~nsDOMStorageEventObsolete()
{
  /* destructor code */
}

/* readonly attribute DOMString domain; */
NS_IMETHODIMP nsDOMStorageEventObsolete::GetDomain(nsAString & aDomain)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void initStorageEvent (in DOMString typeArg, in boolean canBubbleArg, in boolean cancelableArg, in DOMString domainArg); */
NS_IMETHODIMP nsDOMStorageEventObsolete::InitStorageEvent(const nsAString & typeArg, bool canBubbleArg, bool cancelableArg, const nsAString & domainArg)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMStorageEventObsolete_h__ */
