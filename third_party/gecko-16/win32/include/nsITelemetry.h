/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/toolkit/components/telemetry/nsITelemetry.idl
 */

#ifndef __gen_nsITelemetry_h__
#define __gen_nsITelemetry_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#ifndef __gen_nsIFile_h__
#include "nsIFile.h"
#endif

#include "jspubtd.h"

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsITelemetry */
#define NS_ITELEMETRY_IID_STR "de54f594-4c20-4968-a27a-83b38ff952b9"

#define NS_ITELEMETRY_IID \
  {0xde54f594, 0x4c20, 0x4968, \
    { 0xa2, 0x7a, 0x83, 0xb3, 0x8f, 0xf9, 0x52, 0xb9 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsITelemetry : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ITELEMETRY_IID)

  enum {
    HISTOGRAM_EXPONENTIAL = 0U,
    HISTOGRAM_LINEAR = 1U,
    HISTOGRAM_BOOLEAN = 2U,
    HISTOGRAM_FLAG = 3U
  };

  /* [implicit_jscontext] readonly attribute jsval histogramSnapshots; */
  NS_SCRIPTABLE NS_IMETHOD GetHistogramSnapshots(JSContext* cx, JS::Value *aHistogramSnapshots) = 0;

  /* [implicit_jscontext] readonly attribute jsval slowSQL; */
  NS_SCRIPTABLE NS_IMETHOD GetSlowSQL(JSContext* cx, JS::Value *aSlowSQL) = 0;

  /* [implicit_jscontext] readonly attribute jsval debugSlowSQL; */
  NS_SCRIPTABLE NS_IMETHOD GetDebugSlowSQL(JSContext* cx, JS::Value *aDebugSlowSQL) = 0;

  /* [implicit_jscontext] readonly attribute jsval chromeHangs; */
  NS_SCRIPTABLE NS_IMETHOD GetChromeHangs(JSContext* cx, JS::Value *aChromeHangs) = 0;

  /* [implicit_jscontext] readonly attribute jsval registeredHistograms; */
  NS_SCRIPTABLE NS_IMETHOD GetRegisteredHistograms(JSContext* cx, JS::Value *aRegisteredHistograms) = 0;

  /* [implicit_jscontext] jsval newHistogram (in ACString name, in PRUint32 min, in PRUint32 max, in PRUint32 bucket_count, in unsigned long histogram_type); */
  NS_SCRIPTABLE NS_IMETHOD NewHistogram(const nsACString & name, PRUint32 min, PRUint32 max, PRUint32 bucket_count, PRUint32 histogram_type, JSContext* cx, JS::Value *_retval NS_OUTPARAM) = 0;

  /* [implicit_jscontext] jsval histogramFrom (in ACString name, in ACString existing_name); */
  NS_SCRIPTABLE NS_IMETHOD HistogramFrom(const nsACString & name, const nsACString & existing_name, JSContext* cx, JS::Value *_retval NS_OUTPARAM) = 0;

  /* [implicit_jscontext] jsval getHistogramById (in ACString id); */
  NS_SCRIPTABLE NS_IMETHOD GetHistogramById(const nsACString & id, JSContext* cx, JS::Value *_retval NS_OUTPARAM) = 0;

  /* attribute boolean canRecord; */
  NS_SCRIPTABLE NS_IMETHOD GetCanRecord(bool *aCanRecord) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetCanRecord(bool aCanRecord) = 0;

  /* readonly attribute boolean canSend; */
  NS_SCRIPTABLE NS_IMETHOD GetCanSend(bool *aCanSend) = 0;

  /* void registerAddonHistogram (in ACString addon_id, in ACString name, in PRUint32 min, in PRUint32 max, in PRUint32 bucket_count, in unsigned long histogram_type); */
  NS_SCRIPTABLE NS_IMETHOD RegisterAddonHistogram(const nsACString & addon_id, const nsACString & name, PRUint32 min, PRUint32 max, PRUint32 bucket_count, PRUint32 histogram_type) = 0;

  /* [implicit_jscontext] jsval getAddonHistogram (in ACString addon_id, in ACString name); */
  NS_SCRIPTABLE NS_IMETHOD GetAddonHistogram(const nsACString & addon_id, const nsACString & name, JSContext* cx, JS::Value *_retval NS_OUTPARAM) = 0;

  /* void unregisterAddonHistograms (in ACString addon_id); */
  NS_SCRIPTABLE NS_IMETHOD UnregisterAddonHistograms(const nsACString & addon_id) = 0;

  /* [implicit_jscontext] readonly attribute jsval addonHistogramSnapshots; */
  NS_SCRIPTABLE NS_IMETHOD GetAddonHistogramSnapshots(JSContext* cx, JS::Value *aAddonHistogramSnapshots) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsITelemetry, NS_ITELEMETRY_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSITELEMETRY \
  NS_SCRIPTABLE NS_IMETHOD GetHistogramSnapshots(JSContext* cx, JS::Value *aHistogramSnapshots); \
  NS_SCRIPTABLE NS_IMETHOD GetSlowSQL(JSContext* cx, JS::Value *aSlowSQL); \
  NS_SCRIPTABLE NS_IMETHOD GetDebugSlowSQL(JSContext* cx, JS::Value *aDebugSlowSQL); \
  NS_SCRIPTABLE NS_IMETHOD GetChromeHangs(JSContext* cx, JS::Value *aChromeHangs); \
  NS_SCRIPTABLE NS_IMETHOD GetRegisteredHistograms(JSContext* cx, JS::Value *aRegisteredHistograms); \
  NS_SCRIPTABLE NS_IMETHOD NewHistogram(const nsACString & name, PRUint32 min, PRUint32 max, PRUint32 bucket_count, PRUint32 histogram_type, JSContext* cx, JS::Value *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD HistogramFrom(const nsACString & name, const nsACString & existing_name, JSContext* cx, JS::Value *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetHistogramById(const nsACString & id, JSContext* cx, JS::Value *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetCanRecord(bool *aCanRecord); \
  NS_SCRIPTABLE NS_IMETHOD SetCanRecord(bool aCanRecord); \
  NS_SCRIPTABLE NS_IMETHOD GetCanSend(bool *aCanSend); \
  NS_SCRIPTABLE NS_IMETHOD RegisterAddonHistogram(const nsACString & addon_id, const nsACString & name, PRUint32 min, PRUint32 max, PRUint32 bucket_count, PRUint32 histogram_type); \
  NS_SCRIPTABLE NS_IMETHOD GetAddonHistogram(const nsACString & addon_id, const nsACString & name, JSContext* cx, JS::Value *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD UnregisterAddonHistograms(const nsACString & addon_id); \
  NS_SCRIPTABLE NS_IMETHOD GetAddonHistogramSnapshots(JSContext* cx, JS::Value *aAddonHistogramSnapshots); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSITELEMETRY(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetHistogramSnapshots(JSContext* cx, JS::Value *aHistogramSnapshots) { return _to GetHistogramSnapshots(cx, aHistogramSnapshots); } \
  NS_SCRIPTABLE NS_IMETHOD GetSlowSQL(JSContext* cx, JS::Value *aSlowSQL) { return _to GetSlowSQL(cx, aSlowSQL); } \
  NS_SCRIPTABLE NS_IMETHOD GetDebugSlowSQL(JSContext* cx, JS::Value *aDebugSlowSQL) { return _to GetDebugSlowSQL(cx, aDebugSlowSQL); } \
  NS_SCRIPTABLE NS_IMETHOD GetChromeHangs(JSContext* cx, JS::Value *aChromeHangs) { return _to GetChromeHangs(cx, aChromeHangs); } \
  NS_SCRIPTABLE NS_IMETHOD GetRegisteredHistograms(JSContext* cx, JS::Value *aRegisteredHistograms) { return _to GetRegisteredHistograms(cx, aRegisteredHistograms); } \
  NS_SCRIPTABLE NS_IMETHOD NewHistogram(const nsACString & name, PRUint32 min, PRUint32 max, PRUint32 bucket_count, PRUint32 histogram_type, JSContext* cx, JS::Value *_retval NS_OUTPARAM) { return _to NewHistogram(name, min, max, bucket_count, histogram_type, cx, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD HistogramFrom(const nsACString & name, const nsACString & existing_name, JSContext* cx, JS::Value *_retval NS_OUTPARAM) { return _to HistogramFrom(name, existing_name, cx, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetHistogramById(const nsACString & id, JSContext* cx, JS::Value *_retval NS_OUTPARAM) { return _to GetHistogramById(id, cx, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetCanRecord(bool *aCanRecord) { return _to GetCanRecord(aCanRecord); } \
  NS_SCRIPTABLE NS_IMETHOD SetCanRecord(bool aCanRecord) { return _to SetCanRecord(aCanRecord); } \
  NS_SCRIPTABLE NS_IMETHOD GetCanSend(bool *aCanSend) { return _to GetCanSend(aCanSend); } \
  NS_SCRIPTABLE NS_IMETHOD RegisterAddonHistogram(const nsACString & addon_id, const nsACString & name, PRUint32 min, PRUint32 max, PRUint32 bucket_count, PRUint32 histogram_type) { return _to RegisterAddonHistogram(addon_id, name, min, max, bucket_count, histogram_type); } \
  NS_SCRIPTABLE NS_IMETHOD GetAddonHistogram(const nsACString & addon_id, const nsACString & name, JSContext* cx, JS::Value *_retval NS_OUTPARAM) { return _to GetAddonHistogram(addon_id, name, cx, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD UnregisterAddonHistograms(const nsACString & addon_id) { return _to UnregisterAddonHistograms(addon_id); } \
  NS_SCRIPTABLE NS_IMETHOD GetAddonHistogramSnapshots(JSContext* cx, JS::Value *aAddonHistogramSnapshots) { return _to GetAddonHistogramSnapshots(cx, aAddonHistogramSnapshots); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSITELEMETRY(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetHistogramSnapshots(JSContext* cx, JS::Value *aHistogramSnapshots) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetHistogramSnapshots(cx, aHistogramSnapshots); } \
  NS_SCRIPTABLE NS_IMETHOD GetSlowSQL(JSContext* cx, JS::Value *aSlowSQL) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSlowSQL(cx, aSlowSQL); } \
  NS_SCRIPTABLE NS_IMETHOD GetDebugSlowSQL(JSContext* cx, JS::Value *aDebugSlowSQL) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDebugSlowSQL(cx, aDebugSlowSQL); } \
  NS_SCRIPTABLE NS_IMETHOD GetChromeHangs(JSContext* cx, JS::Value *aChromeHangs) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetChromeHangs(cx, aChromeHangs); } \
  NS_SCRIPTABLE NS_IMETHOD GetRegisteredHistograms(JSContext* cx, JS::Value *aRegisteredHistograms) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRegisteredHistograms(cx, aRegisteredHistograms); } \
  NS_SCRIPTABLE NS_IMETHOD NewHistogram(const nsACString & name, PRUint32 min, PRUint32 max, PRUint32 bucket_count, PRUint32 histogram_type, JSContext* cx, JS::Value *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->NewHistogram(name, min, max, bucket_count, histogram_type, cx, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD HistogramFrom(const nsACString & name, const nsACString & existing_name, JSContext* cx, JS::Value *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->HistogramFrom(name, existing_name, cx, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetHistogramById(const nsACString & id, JSContext* cx, JS::Value *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetHistogramById(id, cx, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetCanRecord(bool *aCanRecord) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCanRecord(aCanRecord); } \
  NS_SCRIPTABLE NS_IMETHOD SetCanRecord(bool aCanRecord) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetCanRecord(aCanRecord); } \
  NS_SCRIPTABLE NS_IMETHOD GetCanSend(bool *aCanSend) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCanSend(aCanSend); } \
  NS_SCRIPTABLE NS_IMETHOD RegisterAddonHistogram(const nsACString & addon_id, const nsACString & name, PRUint32 min, PRUint32 max, PRUint32 bucket_count, PRUint32 histogram_type) { return !_to ? NS_ERROR_NULL_POINTER : _to->RegisterAddonHistogram(addon_id, name, min, max, bucket_count, histogram_type); } \
  NS_SCRIPTABLE NS_IMETHOD GetAddonHistogram(const nsACString & addon_id, const nsACString & name, JSContext* cx, JS::Value *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAddonHistogram(addon_id, name, cx, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD UnregisterAddonHistograms(const nsACString & addon_id) { return !_to ? NS_ERROR_NULL_POINTER : _to->UnregisterAddonHistograms(addon_id); } \
  NS_SCRIPTABLE NS_IMETHOD GetAddonHistogramSnapshots(JSContext* cx, JS::Value *aAddonHistogramSnapshots) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAddonHistogramSnapshots(cx, aAddonHistogramSnapshots); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsTelemetry : public nsITelemetry
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSITELEMETRY

  nsTelemetry();

private:
  ~nsTelemetry();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsTelemetry, nsITelemetry)

nsTelemetry::nsTelemetry()
{
  /* member initializers and constructor code */
}

nsTelemetry::~nsTelemetry()
{
  /* destructor code */
}

/* [implicit_jscontext] readonly attribute jsval histogramSnapshots; */
NS_IMETHODIMP nsTelemetry::GetHistogramSnapshots(JSContext* cx, JS::Value *aHistogramSnapshots)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] readonly attribute jsval slowSQL; */
NS_IMETHODIMP nsTelemetry::GetSlowSQL(JSContext* cx, JS::Value *aSlowSQL)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] readonly attribute jsval debugSlowSQL; */
NS_IMETHODIMP nsTelemetry::GetDebugSlowSQL(JSContext* cx, JS::Value *aDebugSlowSQL)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] readonly attribute jsval chromeHangs; */
NS_IMETHODIMP nsTelemetry::GetChromeHangs(JSContext* cx, JS::Value *aChromeHangs)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] readonly attribute jsval registeredHistograms; */
NS_IMETHODIMP nsTelemetry::GetRegisteredHistograms(JSContext* cx, JS::Value *aRegisteredHistograms)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] jsval newHistogram (in ACString name, in PRUint32 min, in PRUint32 max, in PRUint32 bucket_count, in unsigned long histogram_type); */
NS_IMETHODIMP nsTelemetry::NewHistogram(const nsACString & name, PRUint32 min, PRUint32 max, PRUint32 bucket_count, PRUint32 histogram_type, JSContext* cx, JS::Value *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] jsval histogramFrom (in ACString name, in ACString existing_name); */
NS_IMETHODIMP nsTelemetry::HistogramFrom(const nsACString & name, const nsACString & existing_name, JSContext* cx, JS::Value *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] jsval getHistogramById (in ACString id); */
NS_IMETHODIMP nsTelemetry::GetHistogramById(const nsACString & id, JSContext* cx, JS::Value *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean canRecord; */
NS_IMETHODIMP nsTelemetry::GetCanRecord(bool *aCanRecord)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsTelemetry::SetCanRecord(bool aCanRecord)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean canSend; */
NS_IMETHODIMP nsTelemetry::GetCanSend(bool *aCanSend)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void registerAddonHistogram (in ACString addon_id, in ACString name, in PRUint32 min, in PRUint32 max, in PRUint32 bucket_count, in unsigned long histogram_type); */
NS_IMETHODIMP nsTelemetry::RegisterAddonHistogram(const nsACString & addon_id, const nsACString & name, PRUint32 min, PRUint32 max, PRUint32 bucket_count, PRUint32 histogram_type)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] jsval getAddonHistogram (in ACString addon_id, in ACString name); */
NS_IMETHODIMP nsTelemetry::GetAddonHistogram(const nsACString & addon_id, const nsACString & name, JSContext* cx, JS::Value *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void unregisterAddonHistograms (in ACString addon_id); */
NS_IMETHODIMP nsTelemetry::UnregisterAddonHistograms(const nsACString & addon_id)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] readonly attribute jsval addonHistogramSnapshots; */
NS_IMETHODIMP nsTelemetry::GetAddonHistogramSnapshots(JSContext* cx, JS::Value *aAddonHistogramSnapshots)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsITelemetry_h__ */
