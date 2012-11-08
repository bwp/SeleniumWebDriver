/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/tools/profiler/nsIProfiler.idl
 */

#ifndef __gen_nsIProfiler_h__
#define __gen_nsIProfiler_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#include "jspubtd.h"

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIProfiler */
#define NS_IPROFILER_IID_STR "e388fded-1321-41af-a988-861a2bc5cfc3"

#define NS_IPROFILER_IID \
  {0xe388fded, 0x1321, 0x41af, \
    { 0xa9, 0x88, 0x86, 0x1a, 0x2b, 0xc5, 0xcf, 0xc3 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIProfiler : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IPROFILER_IID)

  /* void StartProfiler (in PRUint32 aInterval, in PRUint32 aEntries, [array, size_is (aFeatureCount)] in string aFeatures, in PRUint32 aFeatureCount); */
  NS_SCRIPTABLE NS_IMETHOD StartProfiler(PRUint32 aInterval, PRUint32 aEntries, const char * *aFeatures, PRUint32 aFeatureCount) = 0;

  /* void StopProfiler (); */
  NS_SCRIPTABLE NS_IMETHOD StopProfiler(void) = 0;

  /* string GetProfile (); */
  NS_SCRIPTABLE NS_IMETHOD GetProfile(char * *_retval NS_OUTPARAM) = 0;

  /* [implicit_jscontext] jsval getProfileData (); */
  NS_SCRIPTABLE NS_IMETHOD GetProfileData(JSContext* cx, JS::Value *_retval NS_OUTPARAM) = 0;

  /* boolean IsActive (); */
  NS_SCRIPTABLE NS_IMETHOD IsActive(bool *_retval NS_OUTPARAM) = 0;

  /* void GetResponsivenessTimes (out PRUint32 aCount, [array, size_is (aCount), retval] out double aResult); */
  NS_SCRIPTABLE NS_IMETHOD GetResponsivenessTimes(PRUint32 *aCount NS_OUTPARAM, double **aResult NS_OUTPARAM) = 0;

  /* void GetFeatures (out PRUint32 aCount, [array, size_is (aCount), retval] out string aFeatures); */
  NS_SCRIPTABLE NS_IMETHOD GetFeatures(PRUint32 *aCount NS_OUTPARAM, char * **aFeatures NS_OUTPARAM) = 0;

  /* AString getSharedLibraryInformation (); */
  NS_SCRIPTABLE NS_IMETHOD GetSharedLibraryInformation(nsAString & _retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIProfiler, NS_IPROFILER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIPROFILER \
  NS_SCRIPTABLE NS_IMETHOD StartProfiler(PRUint32 aInterval, PRUint32 aEntries, const char * *aFeatures, PRUint32 aFeatureCount); \
  NS_SCRIPTABLE NS_IMETHOD StopProfiler(void); \
  NS_SCRIPTABLE NS_IMETHOD GetProfile(char * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetProfileData(JSContext* cx, JS::Value *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD IsActive(bool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetResponsivenessTimes(PRUint32 *aCount NS_OUTPARAM, double **aResult NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetFeatures(PRUint32 *aCount NS_OUTPARAM, char * **aFeatures NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetSharedLibraryInformation(nsAString & _retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIPROFILER(_to) \
  NS_SCRIPTABLE NS_IMETHOD StartProfiler(PRUint32 aInterval, PRUint32 aEntries, const char * *aFeatures, PRUint32 aFeatureCount) { return _to StartProfiler(aInterval, aEntries, aFeatures, aFeatureCount); } \
  NS_SCRIPTABLE NS_IMETHOD StopProfiler(void) { return _to StopProfiler(); } \
  NS_SCRIPTABLE NS_IMETHOD GetProfile(char * *_retval NS_OUTPARAM) { return _to GetProfile(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetProfileData(JSContext* cx, JS::Value *_retval NS_OUTPARAM) { return _to GetProfileData(cx, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsActive(bool *_retval NS_OUTPARAM) { return _to IsActive(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetResponsivenessTimes(PRUint32 *aCount NS_OUTPARAM, double **aResult NS_OUTPARAM) { return _to GetResponsivenessTimes(aCount, aResult); } \
  NS_SCRIPTABLE NS_IMETHOD GetFeatures(PRUint32 *aCount NS_OUTPARAM, char * **aFeatures NS_OUTPARAM) { return _to GetFeatures(aCount, aFeatures); } \
  NS_SCRIPTABLE NS_IMETHOD GetSharedLibraryInformation(nsAString & _retval NS_OUTPARAM) { return _to GetSharedLibraryInformation(_retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIPROFILER(_to) \
  NS_SCRIPTABLE NS_IMETHOD StartProfiler(PRUint32 aInterval, PRUint32 aEntries, const char * *aFeatures, PRUint32 aFeatureCount) { return !_to ? NS_ERROR_NULL_POINTER : _to->StartProfiler(aInterval, aEntries, aFeatures, aFeatureCount); } \
  NS_SCRIPTABLE NS_IMETHOD StopProfiler(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->StopProfiler(); } \
  NS_SCRIPTABLE NS_IMETHOD GetProfile(char * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetProfile(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetProfileData(JSContext* cx, JS::Value *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetProfileData(cx, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsActive(bool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsActive(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetResponsivenessTimes(PRUint32 *aCount NS_OUTPARAM, double **aResult NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetResponsivenessTimes(aCount, aResult); } \
  NS_SCRIPTABLE NS_IMETHOD GetFeatures(PRUint32 *aCount NS_OUTPARAM, char * **aFeatures NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFeatures(aCount, aFeatures); } \
  NS_SCRIPTABLE NS_IMETHOD GetSharedLibraryInformation(nsAString & _retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSharedLibraryInformation(_retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsProfiler : public nsIProfiler
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIPROFILER

  nsProfiler();

private:
  ~nsProfiler();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsProfiler, nsIProfiler)

nsProfiler::nsProfiler()
{
  /* member initializers and constructor code */
}

nsProfiler::~nsProfiler()
{
  /* destructor code */
}

/* void StartProfiler (in PRUint32 aInterval, in PRUint32 aEntries, [array, size_is (aFeatureCount)] in string aFeatures, in PRUint32 aFeatureCount); */
NS_IMETHODIMP nsProfiler::StartProfiler(PRUint32 aInterval, PRUint32 aEntries, const char * *aFeatures, PRUint32 aFeatureCount)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void StopProfiler (); */
NS_IMETHODIMP nsProfiler::StopProfiler()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* string GetProfile (); */
NS_IMETHODIMP nsProfiler::GetProfile(char * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] jsval getProfileData (); */
NS_IMETHODIMP nsProfiler::GetProfileData(JSContext* cx, JS::Value *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean IsActive (); */
NS_IMETHODIMP nsProfiler::IsActive(bool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetResponsivenessTimes (out PRUint32 aCount, [array, size_is (aCount), retval] out double aResult); */
NS_IMETHODIMP nsProfiler::GetResponsivenessTimes(PRUint32 *aCount NS_OUTPARAM, double **aResult NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetFeatures (out PRUint32 aCount, [array, size_is (aCount), retval] out string aFeatures); */
NS_IMETHODIMP nsProfiler::GetFeatures(PRUint32 *aCount NS_OUTPARAM, char * **aFeatures NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* AString getSharedLibraryInformation (); */
NS_IMETHODIMP nsProfiler::GetSharedLibraryInformation(nsAString & _retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIProfiler_h__ */
