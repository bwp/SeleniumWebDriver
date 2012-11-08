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

/* starting interface:    nsITelemetrySessionData */
#define NS_ITELEMETRYSESSIONDATA_IID_STR "02719ffb-1a87-46cd-b8d3-5583f3267b32"

#define NS_ITELEMETRYSESSIONDATA_IID \
  {0x02719ffb, 0x1a87, 0x46cd, \
    { 0xb8, 0xd3, 0x55, 0x83, 0xf3, 0x26, 0x7b, 0x32 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsITelemetrySessionData : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ITELEMETRYSESSIONDATA_IID)

  /* readonly attribute ACString uuid; */
  NS_SCRIPTABLE NS_IMETHOD GetUuid(nsACString & aUuid) = 0;

  /* [implicit_jscontext] readonly attribute jsval snapshots; */
  NS_SCRIPTABLE NS_IMETHOD GetSnapshots(JSContext* cx, JS::Value *aSnapshots) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsITelemetrySessionData, NS_ITELEMETRYSESSIONDATA_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSITELEMETRYSESSIONDATA \
  NS_SCRIPTABLE NS_IMETHOD GetUuid(nsACString & aUuid); \
  NS_SCRIPTABLE NS_IMETHOD GetSnapshots(JSContext* cx, JS::Value *aSnapshots); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSITELEMETRYSESSIONDATA(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetUuid(nsACString & aUuid) { return _to GetUuid(aUuid); } \
  NS_SCRIPTABLE NS_IMETHOD GetSnapshots(JSContext* cx, JS::Value *aSnapshots) { return _to GetSnapshots(cx, aSnapshots); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSITELEMETRYSESSIONDATA(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetUuid(nsACString & aUuid) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetUuid(aUuid); } \
  NS_SCRIPTABLE NS_IMETHOD GetSnapshots(JSContext* cx, JS::Value *aSnapshots) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSnapshots(cx, aSnapshots); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsTelemetrySessionData : public nsITelemetrySessionData
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSITELEMETRYSESSIONDATA

  nsTelemetrySessionData();

private:
  ~nsTelemetrySessionData();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsTelemetrySessionData, nsITelemetrySessionData)

nsTelemetrySessionData::nsTelemetrySessionData()
{
  /* member initializers and constructor code */
}

nsTelemetrySessionData::~nsTelemetrySessionData()
{
  /* destructor code */
}

/* readonly attribute ACString uuid; */
NS_IMETHODIMP nsTelemetrySessionData::GetUuid(nsACString & aUuid)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] readonly attribute jsval snapshots; */
NS_IMETHODIMP nsTelemetrySessionData::GetSnapshots(JSContext* cx, JS::Value *aSnapshots)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsITelemetryLoadSessionDataCallback */
#define NS_ITELEMETRYLOADSESSIONDATACALLBACK_IID_STR "aff36c9d-7e4c-41ab-a9b6-53773bbca0cd"

#define NS_ITELEMETRYLOADSESSIONDATACALLBACK_IID \
  {0xaff36c9d, 0x7e4c, 0x41ab, \
    { 0xa9, 0xb6, 0x53, 0x77, 0x3b, 0xbc, 0xa0, 0xcd }}

class NS_NO_VTABLE NS_SCRIPTABLE nsITelemetryLoadSessionDataCallback : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ITELEMETRYLOADSESSIONDATACALLBACK_IID)

  /* void handle (in nsITelemetrySessionData data); */
  NS_SCRIPTABLE NS_IMETHOD Handle(nsITelemetrySessionData *data) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsITelemetryLoadSessionDataCallback, NS_ITELEMETRYLOADSESSIONDATACALLBACK_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSITELEMETRYLOADSESSIONDATACALLBACK \
  NS_SCRIPTABLE NS_IMETHOD Handle(nsITelemetrySessionData *data); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSITELEMETRYLOADSESSIONDATACALLBACK(_to) \
  NS_SCRIPTABLE NS_IMETHOD Handle(nsITelemetrySessionData *data) { return _to Handle(data); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSITELEMETRYLOADSESSIONDATACALLBACK(_to) \
  NS_SCRIPTABLE NS_IMETHOD Handle(nsITelemetrySessionData *data) { return !_to ? NS_ERROR_NULL_POINTER : _to->Handle(data); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsTelemetryLoadSessionDataCallback : public nsITelemetryLoadSessionDataCallback
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSITELEMETRYLOADSESSIONDATACALLBACK

  nsTelemetryLoadSessionDataCallback();

private:
  ~nsTelemetryLoadSessionDataCallback();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsTelemetryLoadSessionDataCallback, nsITelemetryLoadSessionDataCallback)

nsTelemetryLoadSessionDataCallback::nsTelemetryLoadSessionDataCallback()
{
  /* member initializers and constructor code */
}

nsTelemetryLoadSessionDataCallback::~nsTelemetryLoadSessionDataCallback()
{
  /* destructor code */
}

/* void handle (in nsITelemetrySessionData data); */
NS_IMETHODIMP nsTelemetryLoadSessionDataCallback::Handle(nsITelemetrySessionData *data)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsITelemetrySaveSessionDataCallback */
#define NS_ITELEMETRYSAVESESSIONDATACALLBACK_IID_STR "40065f26-afd2-4417-93de-c1de9adb1548"

#define NS_ITELEMETRYSAVESESSIONDATACALLBACK_IID \
  {0x40065f26, 0xafd2, 0x4417, \
    { 0x93, 0xde, 0xc1, 0xde, 0x9a, 0xdb, 0x15, 0x48 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsITelemetrySaveSessionDataCallback : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ITELEMETRYSAVESESSIONDATACALLBACK_IID)

  /* void handle (in bool success); */
  NS_SCRIPTABLE NS_IMETHOD Handle(bool success) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsITelemetrySaveSessionDataCallback, NS_ITELEMETRYSAVESESSIONDATACALLBACK_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSITELEMETRYSAVESESSIONDATACALLBACK \
  NS_SCRIPTABLE NS_IMETHOD Handle(bool success); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSITELEMETRYSAVESESSIONDATACALLBACK(_to) \
  NS_SCRIPTABLE NS_IMETHOD Handle(bool success) { return _to Handle(success); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSITELEMETRYSAVESESSIONDATACALLBACK(_to) \
  NS_SCRIPTABLE NS_IMETHOD Handle(bool success) { return !_to ? NS_ERROR_NULL_POINTER : _to->Handle(success); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsTelemetrySaveSessionDataCallback : public nsITelemetrySaveSessionDataCallback
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSITELEMETRYSAVESESSIONDATACALLBACK

  nsTelemetrySaveSessionDataCallback();

private:
  ~nsTelemetrySaveSessionDataCallback();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsTelemetrySaveSessionDataCallback, nsITelemetrySaveSessionDataCallback)

nsTelemetrySaveSessionDataCallback::nsTelemetrySaveSessionDataCallback()
{
  /* member initializers and constructor code */
}

nsTelemetrySaveSessionDataCallback::~nsTelemetrySaveSessionDataCallback()
{
  /* destructor code */
}

/* void handle (in bool success); */
NS_IMETHODIMP nsTelemetrySaveSessionDataCallback::Handle(bool success)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsITelemetry */
#define NS_ITELEMETRY_IID_STR "f23a2c8d-9286-42e9-ab1b-ed287eeade6d"

#define NS_ITELEMETRY_IID \
  {0xf23a2c8d, 0x9286, 0x42e9, \
    { 0xab, 0x1b, 0xed, 0x28, 0x7e, 0xea, 0xde, 0x6d }}

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

  /* void saveHistograms (in nsIFile file, in ACString uuid, in nsITelemetrySaveSessionDataCallback callback, in bool isSynchronous); */
  NS_SCRIPTABLE NS_IMETHOD SaveHistograms(nsIFile *file, const nsACString & uuid, nsITelemetrySaveSessionDataCallback *callback, bool isSynchronous) = 0;

  /* void loadHistograms (in nsIFile file, in nsITelemetryLoadSessionDataCallback callback, in bool isSynchronous); */
  NS_SCRIPTABLE NS_IMETHOD LoadHistograms(nsIFile *file, nsITelemetryLoadSessionDataCallback *callback, bool isSynchronous) = 0;

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
  NS_SCRIPTABLE NS_IMETHOD SaveHistograms(nsIFile *file, const nsACString & uuid, nsITelemetrySaveSessionDataCallback *callback, bool isSynchronous); \
  NS_SCRIPTABLE NS_IMETHOD LoadHistograms(nsIFile *file, nsITelemetryLoadSessionDataCallback *callback, bool isSynchronous); \
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
  NS_SCRIPTABLE NS_IMETHOD SaveHistograms(nsIFile *file, const nsACString & uuid, nsITelemetrySaveSessionDataCallback *callback, bool isSynchronous) { return _to SaveHistograms(file, uuid, callback, isSynchronous); } \
  NS_SCRIPTABLE NS_IMETHOD LoadHistograms(nsIFile *file, nsITelemetryLoadSessionDataCallback *callback, bool isSynchronous) { return _to LoadHistograms(file, callback, isSynchronous); } \
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
  NS_SCRIPTABLE NS_IMETHOD SaveHistograms(nsIFile *file, const nsACString & uuid, nsITelemetrySaveSessionDataCallback *callback, bool isSynchronous) { return !_to ? NS_ERROR_NULL_POINTER : _to->SaveHistograms(file, uuid, callback, isSynchronous); } \
  NS_SCRIPTABLE NS_IMETHOD LoadHistograms(nsIFile *file, nsITelemetryLoadSessionDataCallback *callback, bool isSynchronous) { return !_to ? NS_ERROR_NULL_POINTER : _to->LoadHistograms(file, callback, isSynchronous); } \
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

/* void saveHistograms (in nsIFile file, in ACString uuid, in nsITelemetrySaveSessionDataCallback callback, in bool isSynchronous); */
NS_IMETHODIMP nsTelemetry::SaveHistograms(nsIFile *file, const nsACString & uuid, nsITelemetrySaveSessionDataCallback *callback, bool isSynchronous)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void loadHistograms (in nsIFile file, in nsITelemetryLoadSessionDataCallback callback, in bool isSynchronous); */
NS_IMETHODIMP nsTelemetry::LoadHistograms(nsIFile *file, nsITelemetryLoadSessionDataCallback *callback, bool isSynchronous)
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
