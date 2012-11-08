/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/indexedDB/nsIIndexedDatabaseManager.idl
 */

#ifndef __gen_nsIIndexedDatabaseManager_h__
#define __gen_nsIIndexedDatabaseManager_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#include "jspubtd.h"

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIURI; /* forward declaration */


/* starting interface:    nsIIndexedDatabaseUsageCallback */
#define NS_IINDEXEDDATABASEUSAGECALLBACK_IID_STR "ef1795ec-7050-4658-b80f-0e48cbe1d64b"

#define NS_IINDEXEDDATABASEUSAGECALLBACK_IID \
  {0xef1795ec, 0x7050, 0x4658, \
    { 0xb8, 0x0f, 0x0e, 0x48, 0xcb, 0xe1, 0xd6, 0x4b }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIIndexedDatabaseUsageCallback : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IINDEXEDDATABASEUSAGECALLBACK_IID)

  /* void onUsageResult (in nsIURI aURI, in unsigned long long aUsage, in unsigned long long aFileUsage); */
  NS_SCRIPTABLE NS_IMETHOD OnUsageResult(nsIURI *aURI, PRUint64 aUsage, PRUint64 aFileUsage) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIIndexedDatabaseUsageCallback, NS_IINDEXEDDATABASEUSAGECALLBACK_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIINDEXEDDATABASEUSAGECALLBACK \
  NS_SCRIPTABLE NS_IMETHOD OnUsageResult(nsIURI *aURI, PRUint64 aUsage, PRUint64 aFileUsage); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIINDEXEDDATABASEUSAGECALLBACK(_to) \
  NS_SCRIPTABLE NS_IMETHOD OnUsageResult(nsIURI *aURI, PRUint64 aUsage, PRUint64 aFileUsage) { return _to OnUsageResult(aURI, aUsage, aFileUsage); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIINDEXEDDATABASEUSAGECALLBACK(_to) \
  NS_SCRIPTABLE NS_IMETHOD OnUsageResult(nsIURI *aURI, PRUint64 aUsage, PRUint64 aFileUsage) { return !_to ? NS_ERROR_NULL_POINTER : _to->OnUsageResult(aURI, aUsage, aFileUsage); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsIndexedDatabaseUsageCallback : public nsIIndexedDatabaseUsageCallback
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIINDEXEDDATABASEUSAGECALLBACK

  nsIndexedDatabaseUsageCallback();

private:
  ~nsIndexedDatabaseUsageCallback();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsIndexedDatabaseUsageCallback, nsIIndexedDatabaseUsageCallback)

nsIndexedDatabaseUsageCallback::nsIndexedDatabaseUsageCallback()
{
  /* member initializers and constructor code */
}

nsIndexedDatabaseUsageCallback::~nsIndexedDatabaseUsageCallback()
{
  /* destructor code */
}

/* void onUsageResult (in nsIURI aURI, in unsigned long long aUsage, in unsigned long long aFileUsage); */
NS_IMETHODIMP nsIndexedDatabaseUsageCallback::OnUsageResult(nsIURI *aURI, PRUint64 aUsage, PRUint64 aFileUsage)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIIndexedDatabaseManager */
#define NS_IINDEXEDDATABASEMANAGER_IID_STR "02256aa7-70d8-473f-bf3b-8cb35d28fd75"

#define NS_IINDEXEDDATABASEMANAGER_IID \
  {0x02256aa7, 0x70d8, 0x473f, \
    { 0xbf, 0x3b, 0x8c, 0xb3, 0x5d, 0x28, 0xfd, 0x75 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIIndexedDatabaseManager : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IINDEXEDDATABASEMANAGER_IID)

  /* void getUsageForURI (in nsIURI aURI, in nsIIndexedDatabaseUsageCallback aCallback); */
  NS_SCRIPTABLE NS_IMETHOD GetUsageForURI(nsIURI *aURI, nsIIndexedDatabaseUsageCallback *aCallback) = 0;

  /* void cancelGetUsageForURI (in nsIURI aURI, in nsIIndexedDatabaseUsageCallback aCallback); */
  NS_SCRIPTABLE NS_IMETHOD CancelGetUsageForURI(nsIURI *aURI, nsIIndexedDatabaseUsageCallback *aCallback) = 0;

  /* void clearDatabasesForURI (in nsIURI aURI); */
  NS_SCRIPTABLE NS_IMETHOD ClearDatabasesForURI(nsIURI *aURI) = 0;

  /* [implicit_jscontext] void initWindowless (in jsval aObject); */
  NS_SCRIPTABLE NS_IMETHOD InitWindowless(const JS::Value & aObject, JSContext* cx) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIIndexedDatabaseManager, NS_IINDEXEDDATABASEMANAGER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIINDEXEDDATABASEMANAGER \
  NS_SCRIPTABLE NS_IMETHOD GetUsageForURI(nsIURI *aURI, nsIIndexedDatabaseUsageCallback *aCallback); \
  NS_SCRIPTABLE NS_IMETHOD CancelGetUsageForURI(nsIURI *aURI, nsIIndexedDatabaseUsageCallback *aCallback); \
  NS_SCRIPTABLE NS_IMETHOD ClearDatabasesForURI(nsIURI *aURI); \
  NS_SCRIPTABLE NS_IMETHOD InitWindowless(const JS::Value & aObject, JSContext* cx); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIINDEXEDDATABASEMANAGER(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetUsageForURI(nsIURI *aURI, nsIIndexedDatabaseUsageCallback *aCallback) { return _to GetUsageForURI(aURI, aCallback); } \
  NS_SCRIPTABLE NS_IMETHOD CancelGetUsageForURI(nsIURI *aURI, nsIIndexedDatabaseUsageCallback *aCallback) { return _to CancelGetUsageForURI(aURI, aCallback); } \
  NS_SCRIPTABLE NS_IMETHOD ClearDatabasesForURI(nsIURI *aURI) { return _to ClearDatabasesForURI(aURI); } \
  NS_SCRIPTABLE NS_IMETHOD InitWindowless(const JS::Value & aObject, JSContext* cx) { return _to InitWindowless(aObject, cx); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIINDEXEDDATABASEMANAGER(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetUsageForURI(nsIURI *aURI, nsIIndexedDatabaseUsageCallback *aCallback) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetUsageForURI(aURI, aCallback); } \
  NS_SCRIPTABLE NS_IMETHOD CancelGetUsageForURI(nsIURI *aURI, nsIIndexedDatabaseUsageCallback *aCallback) { return !_to ? NS_ERROR_NULL_POINTER : _to->CancelGetUsageForURI(aURI, aCallback); } \
  NS_SCRIPTABLE NS_IMETHOD ClearDatabasesForURI(nsIURI *aURI) { return !_to ? NS_ERROR_NULL_POINTER : _to->ClearDatabasesForURI(aURI); } \
  NS_SCRIPTABLE NS_IMETHOD InitWindowless(const JS::Value & aObject, JSContext* cx) { return !_to ? NS_ERROR_NULL_POINTER : _to->InitWindowless(aObject, cx); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsIndexedDatabaseManager : public nsIIndexedDatabaseManager
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIINDEXEDDATABASEMANAGER

  nsIndexedDatabaseManager();

private:
  ~nsIndexedDatabaseManager();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsIndexedDatabaseManager, nsIIndexedDatabaseManager)

nsIndexedDatabaseManager::nsIndexedDatabaseManager()
{
  /* member initializers and constructor code */
}

nsIndexedDatabaseManager::~nsIndexedDatabaseManager()
{
  /* destructor code */
}

/* void getUsageForURI (in nsIURI aURI, in nsIIndexedDatabaseUsageCallback aCallback); */
NS_IMETHODIMP nsIndexedDatabaseManager::GetUsageForURI(nsIURI *aURI, nsIIndexedDatabaseUsageCallback *aCallback)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void cancelGetUsageForURI (in nsIURI aURI, in nsIIndexedDatabaseUsageCallback aCallback); */
NS_IMETHODIMP nsIndexedDatabaseManager::CancelGetUsageForURI(nsIURI *aURI, nsIIndexedDatabaseUsageCallback *aCallback)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void clearDatabasesForURI (in nsIURI aURI); */
NS_IMETHODIMP nsIndexedDatabaseManager::ClearDatabasesForURI(nsIURI *aURI)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] void initWindowless (in jsval aObject); */
NS_IMETHODIMP nsIndexedDatabaseManager::InitWindowless(const JS::Value & aObject, JSContext* cx)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIIndexedDatabaseManager_h__ */
