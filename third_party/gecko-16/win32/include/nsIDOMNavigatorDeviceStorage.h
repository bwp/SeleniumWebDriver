/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/interfaces/devicestorage/nsIDOMNavigatorDeviceStorage.idl
 */

#ifndef __gen_nsIDOMNavigatorDeviceStorage_h__
#define __gen_nsIDOMNavigatorDeviceStorage_h__


#ifndef __gen_domstubs_h__
#include "domstubs.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIVariant; /* forward declaration */


/* starting interface:    nsIDOMNavigatorDeviceStorage */
#define NS_IDOMNAVIGATORDEVICESTORAGE_IID_STR "a4b2831d-6065-472f-8a6d-2c9085c74c15"

#define NS_IDOMNAVIGATORDEVICESTORAGE_IID \
  {0xa4b2831d, 0x6065, 0x472f, \
    { 0x8a, 0x6d, 0x2c, 0x90, 0x85, 0xc7, 0x4c, 0x15 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMNavigatorDeviceStorage : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMNAVIGATORDEVICESTORAGE_IID)

  /* nsIVariant getDeviceStorage (in DOMString type); */
  NS_SCRIPTABLE NS_IMETHOD GetDeviceStorage(const nsAString & type, nsIVariant * *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMNavigatorDeviceStorage, NS_IDOMNAVIGATORDEVICESTORAGE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMNAVIGATORDEVICESTORAGE \
  NS_SCRIPTABLE NS_IMETHOD GetDeviceStorage(const nsAString & type, nsIVariant * *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMNAVIGATORDEVICESTORAGE(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetDeviceStorage(const nsAString & type, nsIVariant * *_retval NS_OUTPARAM) { return _to GetDeviceStorage(type, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMNAVIGATORDEVICESTORAGE(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetDeviceStorage(const nsAString & type, nsIVariant * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDeviceStorage(type, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMNavigatorDeviceStorage : public nsIDOMNavigatorDeviceStorage
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMNAVIGATORDEVICESTORAGE

  nsDOMNavigatorDeviceStorage();

private:
  ~nsDOMNavigatorDeviceStorage();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMNavigatorDeviceStorage, nsIDOMNavigatorDeviceStorage)

nsDOMNavigatorDeviceStorage::nsDOMNavigatorDeviceStorage()
{
  /* member initializers and constructor code */
}

nsDOMNavigatorDeviceStorage::~nsDOMNavigatorDeviceStorage()
{
  /* destructor code */
}

/* nsIVariant getDeviceStorage (in DOMString type); */
NS_IMETHODIMP nsDOMNavigatorDeviceStorage::GetDeviceStorage(const nsAString & type, nsIVariant * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMNavigatorDeviceStorage_h__ */
