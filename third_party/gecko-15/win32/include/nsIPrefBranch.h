/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/modules/libpref/public/nsIPrefBranch.idl
 */

#ifndef __gen_nsIPrefBranch_h__
#define __gen_nsIPrefBranch_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIObserver; /* forward declaration */


/* starting interface:    nsIPrefBranch */
#define NS_IPREFBRANCH_IID_STR "7df46a54-d8b0-448e-903c-4341a1b2499c"

#define NS_IPREFBRANCH_IID \
  {0x7df46a54, 0xd8b0, 0x448e, \
    { 0x90, 0x3c, 0x43, 0x41, 0xa1, 0xb2, 0x49, 0x9c }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIPrefBranch : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IPREFBRANCH_IID)

  enum {
    PREF_INVALID = 0,
    PREF_STRING = 32,
    PREF_INT = 64,
    PREF_BOOL = 128
  };

  /* readonly attribute string root; */
  NS_SCRIPTABLE NS_IMETHOD GetRoot(char * *aRoot) = 0;

  /* long getPrefType (in string aPrefName); */
  NS_SCRIPTABLE NS_IMETHOD GetPrefType(const char * aPrefName, PRInt32 *_retval NS_OUTPARAM) = 0;

  /* boolean getBoolPref (in string aPrefName); */
  NS_SCRIPTABLE NS_IMETHOD GetBoolPref(const char * aPrefName, bool *_retval NS_OUTPARAM) = 0;

  /* void setBoolPref (in string aPrefName, in boolean aValue); */
  NS_SCRIPTABLE NS_IMETHOD SetBoolPref(const char * aPrefName, bool aValue) = 0;

  /* string getCharPref (in string aPrefName); */
  NS_SCRIPTABLE NS_IMETHOD GetCharPref(const char * aPrefName, char * *_retval NS_OUTPARAM) = 0;

  /* void setCharPref (in string aPrefName, in string aValue); */
  NS_SCRIPTABLE NS_IMETHOD SetCharPref(const char * aPrefName, const char * aValue) = 0;

  /* long getIntPref (in string aPrefName); */
  NS_SCRIPTABLE NS_IMETHOD GetIntPref(const char * aPrefName, PRInt32 *_retval NS_OUTPARAM) = 0;

  /* void setIntPref (in string aPrefName, in long aValue); */
  NS_SCRIPTABLE NS_IMETHOD SetIntPref(const char * aPrefName, PRInt32 aValue) = 0;

  /* void getComplexValue (in string aPrefName, in nsIIDRef aType, [iid_is (aType), retval] out nsQIResult aValue); */
  NS_SCRIPTABLE NS_IMETHOD GetComplexValue(const char * aPrefName, const nsIID & aType, void **aValue NS_OUTPARAM) = 0;

  /* void setComplexValue (in string aPrefName, in nsIIDRef aType, in nsISupports aValue); */
  NS_SCRIPTABLE NS_IMETHOD SetComplexValue(const char * aPrefName, const nsIID & aType, nsISupports *aValue) = 0;

  /* void clearUserPref (in string aPrefName); */
  NS_SCRIPTABLE NS_IMETHOD ClearUserPref(const char * aPrefName) = 0;

  /* void lockPref (in string aPrefName); */
  NS_SCRIPTABLE NS_IMETHOD LockPref(const char * aPrefName) = 0;

  /* boolean prefHasUserValue (in string aPrefName); */
  NS_SCRIPTABLE NS_IMETHOD PrefHasUserValue(const char * aPrefName, bool *_retval NS_OUTPARAM) = 0;

  /* boolean prefIsLocked (in string aPrefName); */
  NS_SCRIPTABLE NS_IMETHOD PrefIsLocked(const char * aPrefName, bool *_retval NS_OUTPARAM) = 0;

  /* void unlockPref (in string aPrefName); */
  NS_SCRIPTABLE NS_IMETHOD UnlockPref(const char * aPrefName) = 0;

  /* void deleteBranch (in string aStartingAt); */
  NS_SCRIPTABLE NS_IMETHOD DeleteBranch(const char * aStartingAt) = 0;

  /* void getChildList (in string aStartingAt, [optional] out unsigned long aCount, [array, size_is (aCount), retval] out string aChildArray); */
  NS_SCRIPTABLE NS_IMETHOD GetChildList(const char * aStartingAt, PRUint32 *aCount NS_OUTPARAM, char * **aChildArray NS_OUTPARAM) = 0;

  /* void resetBranch (in string aStartingAt); */
  NS_SCRIPTABLE NS_IMETHOD ResetBranch(const char * aStartingAt) = 0;

  /* void addObserver (in string aDomain, in nsIObserver aObserver, in boolean aHoldWeak); */
  NS_SCRIPTABLE NS_IMETHOD AddObserver(const char * aDomain, nsIObserver *aObserver, bool aHoldWeak) = 0;

  /* void removeObserver (in string aDomain, in nsIObserver aObserver); */
  NS_SCRIPTABLE NS_IMETHOD RemoveObserver(const char * aDomain, nsIObserver *aObserver) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIPrefBranch, NS_IPREFBRANCH_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIPREFBRANCH \
  NS_SCRIPTABLE NS_IMETHOD GetRoot(char * *aRoot); \
  NS_SCRIPTABLE NS_IMETHOD GetPrefType(const char * aPrefName, PRInt32 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetBoolPref(const char * aPrefName, bool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetBoolPref(const char * aPrefName, bool aValue); \
  NS_SCRIPTABLE NS_IMETHOD GetCharPref(const char * aPrefName, char * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetCharPref(const char * aPrefName, const char * aValue); \
  NS_SCRIPTABLE NS_IMETHOD GetIntPref(const char * aPrefName, PRInt32 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetIntPref(const char * aPrefName, PRInt32 aValue); \
  NS_SCRIPTABLE NS_IMETHOD GetComplexValue(const char * aPrefName, const nsIID & aType, void **aValue NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetComplexValue(const char * aPrefName, const nsIID & aType, nsISupports *aValue); \
  NS_SCRIPTABLE NS_IMETHOD ClearUserPref(const char * aPrefName); \
  NS_SCRIPTABLE NS_IMETHOD LockPref(const char * aPrefName); \
  NS_SCRIPTABLE NS_IMETHOD PrefHasUserValue(const char * aPrefName, bool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD PrefIsLocked(const char * aPrefName, bool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD UnlockPref(const char * aPrefName); \
  NS_SCRIPTABLE NS_IMETHOD DeleteBranch(const char * aStartingAt); \
  NS_SCRIPTABLE NS_IMETHOD GetChildList(const char * aStartingAt, PRUint32 *aCount NS_OUTPARAM, char * **aChildArray NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD ResetBranch(const char * aStartingAt); \
  NS_SCRIPTABLE NS_IMETHOD AddObserver(const char * aDomain, nsIObserver *aObserver, bool aHoldWeak); \
  NS_SCRIPTABLE NS_IMETHOD RemoveObserver(const char * aDomain, nsIObserver *aObserver); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIPREFBRANCH(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetRoot(char * *aRoot) { return _to GetRoot(aRoot); } \
  NS_SCRIPTABLE NS_IMETHOD GetPrefType(const char * aPrefName, PRInt32 *_retval NS_OUTPARAM) { return _to GetPrefType(aPrefName, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetBoolPref(const char * aPrefName, bool *_retval NS_OUTPARAM) { return _to GetBoolPref(aPrefName, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetBoolPref(const char * aPrefName, bool aValue) { return _to SetBoolPref(aPrefName, aValue); } \
  NS_SCRIPTABLE NS_IMETHOD GetCharPref(const char * aPrefName, char * *_retval NS_OUTPARAM) { return _to GetCharPref(aPrefName, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetCharPref(const char * aPrefName, const char * aValue) { return _to SetCharPref(aPrefName, aValue); } \
  NS_SCRIPTABLE NS_IMETHOD GetIntPref(const char * aPrefName, PRInt32 *_retval NS_OUTPARAM) { return _to GetIntPref(aPrefName, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetIntPref(const char * aPrefName, PRInt32 aValue) { return _to SetIntPref(aPrefName, aValue); } \
  NS_SCRIPTABLE NS_IMETHOD GetComplexValue(const char * aPrefName, const nsIID & aType, void **aValue NS_OUTPARAM) { return _to GetComplexValue(aPrefName, aType, aValue); } \
  NS_SCRIPTABLE NS_IMETHOD SetComplexValue(const char * aPrefName, const nsIID & aType, nsISupports *aValue) { return _to SetComplexValue(aPrefName, aType, aValue); } \
  NS_SCRIPTABLE NS_IMETHOD ClearUserPref(const char * aPrefName) { return _to ClearUserPref(aPrefName); } \
  NS_SCRIPTABLE NS_IMETHOD LockPref(const char * aPrefName) { return _to LockPref(aPrefName); } \
  NS_SCRIPTABLE NS_IMETHOD PrefHasUserValue(const char * aPrefName, bool *_retval NS_OUTPARAM) { return _to PrefHasUserValue(aPrefName, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD PrefIsLocked(const char * aPrefName, bool *_retval NS_OUTPARAM) { return _to PrefIsLocked(aPrefName, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD UnlockPref(const char * aPrefName) { return _to UnlockPref(aPrefName); } \
  NS_SCRIPTABLE NS_IMETHOD DeleteBranch(const char * aStartingAt) { return _to DeleteBranch(aStartingAt); } \
  NS_SCRIPTABLE NS_IMETHOD GetChildList(const char * aStartingAt, PRUint32 *aCount NS_OUTPARAM, char * **aChildArray NS_OUTPARAM) { return _to GetChildList(aStartingAt, aCount, aChildArray); } \
  NS_SCRIPTABLE NS_IMETHOD ResetBranch(const char * aStartingAt) { return _to ResetBranch(aStartingAt); } \
  NS_SCRIPTABLE NS_IMETHOD AddObserver(const char * aDomain, nsIObserver *aObserver, bool aHoldWeak) { return _to AddObserver(aDomain, aObserver, aHoldWeak); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveObserver(const char * aDomain, nsIObserver *aObserver) { return _to RemoveObserver(aDomain, aObserver); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIPREFBRANCH(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetRoot(char * *aRoot) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRoot(aRoot); } \
  NS_SCRIPTABLE NS_IMETHOD GetPrefType(const char * aPrefName, PRInt32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPrefType(aPrefName, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetBoolPref(const char * aPrefName, bool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetBoolPref(aPrefName, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetBoolPref(const char * aPrefName, bool aValue) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetBoolPref(aPrefName, aValue); } \
  NS_SCRIPTABLE NS_IMETHOD GetCharPref(const char * aPrefName, char * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCharPref(aPrefName, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetCharPref(const char * aPrefName, const char * aValue) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetCharPref(aPrefName, aValue); } \
  NS_SCRIPTABLE NS_IMETHOD GetIntPref(const char * aPrefName, PRInt32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIntPref(aPrefName, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetIntPref(const char * aPrefName, PRInt32 aValue) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetIntPref(aPrefName, aValue); } \
  NS_SCRIPTABLE NS_IMETHOD GetComplexValue(const char * aPrefName, const nsIID & aType, void **aValue NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetComplexValue(aPrefName, aType, aValue); } \
  NS_SCRIPTABLE NS_IMETHOD SetComplexValue(const char * aPrefName, const nsIID & aType, nsISupports *aValue) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetComplexValue(aPrefName, aType, aValue); } \
  NS_SCRIPTABLE NS_IMETHOD ClearUserPref(const char * aPrefName) { return !_to ? NS_ERROR_NULL_POINTER : _to->ClearUserPref(aPrefName); } \
  NS_SCRIPTABLE NS_IMETHOD LockPref(const char * aPrefName) { return !_to ? NS_ERROR_NULL_POINTER : _to->LockPref(aPrefName); } \
  NS_SCRIPTABLE NS_IMETHOD PrefHasUserValue(const char * aPrefName, bool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->PrefHasUserValue(aPrefName, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD PrefIsLocked(const char * aPrefName, bool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->PrefIsLocked(aPrefName, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD UnlockPref(const char * aPrefName) { return !_to ? NS_ERROR_NULL_POINTER : _to->UnlockPref(aPrefName); } \
  NS_SCRIPTABLE NS_IMETHOD DeleteBranch(const char * aStartingAt) { return !_to ? NS_ERROR_NULL_POINTER : _to->DeleteBranch(aStartingAt); } \
  NS_SCRIPTABLE NS_IMETHOD GetChildList(const char * aStartingAt, PRUint32 *aCount NS_OUTPARAM, char * **aChildArray NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetChildList(aStartingAt, aCount, aChildArray); } \
  NS_SCRIPTABLE NS_IMETHOD ResetBranch(const char * aStartingAt) { return !_to ? NS_ERROR_NULL_POINTER : _to->ResetBranch(aStartingAt); } \
  NS_SCRIPTABLE NS_IMETHOD AddObserver(const char * aDomain, nsIObserver *aObserver, bool aHoldWeak) { return !_to ? NS_ERROR_NULL_POINTER : _to->AddObserver(aDomain, aObserver, aHoldWeak); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveObserver(const char * aDomain, nsIObserver *aObserver) { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveObserver(aDomain, aObserver); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsPrefBranch : public nsIPrefBranch
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIPREFBRANCH

  nsPrefBranch();

private:
  ~nsPrefBranch();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsPrefBranch, nsIPrefBranch)

nsPrefBranch::nsPrefBranch()
{
  /* member initializers and constructor code */
}

nsPrefBranch::~nsPrefBranch()
{
  /* destructor code */
}

/* readonly attribute string root; */
NS_IMETHODIMP nsPrefBranch::GetRoot(char * *aRoot)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* long getPrefType (in string aPrefName); */
NS_IMETHODIMP nsPrefBranch::GetPrefType(const char * aPrefName, PRInt32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean getBoolPref (in string aPrefName); */
NS_IMETHODIMP nsPrefBranch::GetBoolPref(const char * aPrefName, bool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setBoolPref (in string aPrefName, in boolean aValue); */
NS_IMETHODIMP nsPrefBranch::SetBoolPref(const char * aPrefName, bool aValue)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* string getCharPref (in string aPrefName); */
NS_IMETHODIMP nsPrefBranch::GetCharPref(const char * aPrefName, char * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setCharPref (in string aPrefName, in string aValue); */
NS_IMETHODIMP nsPrefBranch::SetCharPref(const char * aPrefName, const char * aValue)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* long getIntPref (in string aPrefName); */
NS_IMETHODIMP nsPrefBranch::GetIntPref(const char * aPrefName, PRInt32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setIntPref (in string aPrefName, in long aValue); */
NS_IMETHODIMP nsPrefBranch::SetIntPref(const char * aPrefName, PRInt32 aValue)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void getComplexValue (in string aPrefName, in nsIIDRef aType, [iid_is (aType), retval] out nsQIResult aValue); */
NS_IMETHODIMP nsPrefBranch::GetComplexValue(const char * aPrefName, const nsIID & aType, void **aValue NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setComplexValue (in string aPrefName, in nsIIDRef aType, in nsISupports aValue); */
NS_IMETHODIMP nsPrefBranch::SetComplexValue(const char * aPrefName, const nsIID & aType, nsISupports *aValue)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void clearUserPref (in string aPrefName); */
NS_IMETHODIMP nsPrefBranch::ClearUserPref(const char * aPrefName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void lockPref (in string aPrefName); */
NS_IMETHODIMP nsPrefBranch::LockPref(const char * aPrefName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean prefHasUserValue (in string aPrefName); */
NS_IMETHODIMP nsPrefBranch::PrefHasUserValue(const char * aPrefName, bool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean prefIsLocked (in string aPrefName); */
NS_IMETHODIMP nsPrefBranch::PrefIsLocked(const char * aPrefName, bool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void unlockPref (in string aPrefName); */
NS_IMETHODIMP nsPrefBranch::UnlockPref(const char * aPrefName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void deleteBranch (in string aStartingAt); */
NS_IMETHODIMP nsPrefBranch::DeleteBranch(const char * aStartingAt)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void getChildList (in string aStartingAt, [optional] out unsigned long aCount, [array, size_is (aCount), retval] out string aChildArray); */
NS_IMETHODIMP nsPrefBranch::GetChildList(const char * aStartingAt, PRUint32 *aCount NS_OUTPARAM, char * **aChildArray NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void resetBranch (in string aStartingAt); */
NS_IMETHODIMP nsPrefBranch::ResetBranch(const char * aStartingAt)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void addObserver (in string aDomain, in nsIObserver aObserver, in boolean aHoldWeak); */
NS_IMETHODIMP nsPrefBranch::AddObserver(const char * aDomain, nsIObserver *aObserver, bool aHoldWeak)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void removeObserver (in string aDomain, in nsIObserver aObserver); */
NS_IMETHODIMP nsPrefBranch::RemoveObserver(const char * aDomain, nsIObserver *aObserver)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#define NS_PREFBRANCH_CONTRACTID "@mozilla.org/preferencesbranch;1"
#define NS_PREFBRANCH_CLASSNAME "Preferences Branch"
/**
 * Notification sent when a preference changes.
 */
#define NS_PREFBRANCH_PREFCHANGE_TOPIC_ID "nsPref:changed"

#endif /* __gen_nsIPrefBranch_h__ */
