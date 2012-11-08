/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/xpcom/base/nsICycleCollectorListener.idl
 */

#ifndef __gen_nsICycleCollectorListener_h__
#define __gen_nsICycleCollectorListener_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsICycleCollectorHandler */
#define NS_ICYCLECOLLECTORHANDLER_IID_STR "0ef15f15-7783-4991-af68-4976d7ec2267"

#define NS_ICYCLECOLLECTORHANDLER_IID \
  {0x0ef15f15, 0x7783, 0x4991, \
    { 0xaf, 0x68, 0x49, 0x76, 0xd7, 0xec, 0x22, 0x67 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsICycleCollectorHandler : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ICYCLECOLLECTORHANDLER_IID)

  /* void noteRefCountedObject (in ACString aAddress, in unsigned long aRefCount, in ACString aObjectDescription); */
  NS_SCRIPTABLE NS_IMETHOD NoteRefCountedObject(const nsACString & aAddress, PRUint32 aRefCount, const nsACString & aObjectDescription) = 0;

  /* void noteGCedObject (in ACString aAddress, in boolean aMarked, in ACString aObjectDescription); */
  NS_SCRIPTABLE NS_IMETHOD NoteGCedObject(const nsACString & aAddress, bool aMarked, const nsACString & aObjectDescription) = 0;

  /* void noteEdge (in ACString aFromAddress, in ACString aToAddress, in ACString aEdgeName); */
  NS_SCRIPTABLE NS_IMETHOD NoteEdge(const nsACString & aFromAddress, const nsACString & aToAddress, const nsACString & aEdgeName) = 0;

  /* void describeRoot (in ACString aAddress, in unsigned long aKnownEdges); */
  NS_SCRIPTABLE NS_IMETHOD DescribeRoot(const nsACString & aAddress, PRUint32 aKnownEdges) = 0;

  /* void describeGarbage (in ACString aAddress); */
  NS_SCRIPTABLE NS_IMETHOD DescribeGarbage(const nsACString & aAddress) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsICycleCollectorHandler, NS_ICYCLECOLLECTORHANDLER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSICYCLECOLLECTORHANDLER \
  NS_SCRIPTABLE NS_IMETHOD NoteRefCountedObject(const nsACString & aAddress, PRUint32 aRefCount, const nsACString & aObjectDescription); \
  NS_SCRIPTABLE NS_IMETHOD NoteGCedObject(const nsACString & aAddress, bool aMarked, const nsACString & aObjectDescription); \
  NS_SCRIPTABLE NS_IMETHOD NoteEdge(const nsACString & aFromAddress, const nsACString & aToAddress, const nsACString & aEdgeName); \
  NS_SCRIPTABLE NS_IMETHOD DescribeRoot(const nsACString & aAddress, PRUint32 aKnownEdges); \
  NS_SCRIPTABLE NS_IMETHOD DescribeGarbage(const nsACString & aAddress); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSICYCLECOLLECTORHANDLER(_to) \
  NS_SCRIPTABLE NS_IMETHOD NoteRefCountedObject(const nsACString & aAddress, PRUint32 aRefCount, const nsACString & aObjectDescription) { return _to NoteRefCountedObject(aAddress, aRefCount, aObjectDescription); } \
  NS_SCRIPTABLE NS_IMETHOD NoteGCedObject(const nsACString & aAddress, bool aMarked, const nsACString & aObjectDescription) { return _to NoteGCedObject(aAddress, aMarked, aObjectDescription); } \
  NS_SCRIPTABLE NS_IMETHOD NoteEdge(const nsACString & aFromAddress, const nsACString & aToAddress, const nsACString & aEdgeName) { return _to NoteEdge(aFromAddress, aToAddress, aEdgeName); } \
  NS_SCRIPTABLE NS_IMETHOD DescribeRoot(const nsACString & aAddress, PRUint32 aKnownEdges) { return _to DescribeRoot(aAddress, aKnownEdges); } \
  NS_SCRIPTABLE NS_IMETHOD DescribeGarbage(const nsACString & aAddress) { return _to DescribeGarbage(aAddress); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSICYCLECOLLECTORHANDLER(_to) \
  NS_SCRIPTABLE NS_IMETHOD NoteRefCountedObject(const nsACString & aAddress, PRUint32 aRefCount, const nsACString & aObjectDescription) { return !_to ? NS_ERROR_NULL_POINTER : _to->NoteRefCountedObject(aAddress, aRefCount, aObjectDescription); } \
  NS_SCRIPTABLE NS_IMETHOD NoteGCedObject(const nsACString & aAddress, bool aMarked, const nsACString & aObjectDescription) { return !_to ? NS_ERROR_NULL_POINTER : _to->NoteGCedObject(aAddress, aMarked, aObjectDescription); } \
  NS_SCRIPTABLE NS_IMETHOD NoteEdge(const nsACString & aFromAddress, const nsACString & aToAddress, const nsACString & aEdgeName) { return !_to ? NS_ERROR_NULL_POINTER : _to->NoteEdge(aFromAddress, aToAddress, aEdgeName); } \
  NS_SCRIPTABLE NS_IMETHOD DescribeRoot(const nsACString & aAddress, PRUint32 aKnownEdges) { return !_to ? NS_ERROR_NULL_POINTER : _to->DescribeRoot(aAddress, aKnownEdges); } \
  NS_SCRIPTABLE NS_IMETHOD DescribeGarbage(const nsACString & aAddress) { return !_to ? NS_ERROR_NULL_POINTER : _to->DescribeGarbage(aAddress); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsCycleCollectorHandler : public nsICycleCollectorHandler
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSICYCLECOLLECTORHANDLER

  nsCycleCollectorHandler();

private:
  ~nsCycleCollectorHandler();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsCycleCollectorHandler, nsICycleCollectorHandler)

nsCycleCollectorHandler::nsCycleCollectorHandler()
{
  /* member initializers and constructor code */
}

nsCycleCollectorHandler::~nsCycleCollectorHandler()
{
  /* destructor code */
}

/* void noteRefCountedObject (in ACString aAddress, in unsigned long aRefCount, in ACString aObjectDescription); */
NS_IMETHODIMP nsCycleCollectorHandler::NoteRefCountedObject(const nsACString & aAddress, PRUint32 aRefCount, const nsACString & aObjectDescription)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void noteGCedObject (in ACString aAddress, in boolean aMarked, in ACString aObjectDescription); */
NS_IMETHODIMP nsCycleCollectorHandler::NoteGCedObject(const nsACString & aAddress, bool aMarked, const nsACString & aObjectDescription)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void noteEdge (in ACString aFromAddress, in ACString aToAddress, in ACString aEdgeName); */
NS_IMETHODIMP nsCycleCollectorHandler::NoteEdge(const nsACString & aFromAddress, const nsACString & aToAddress, const nsACString & aEdgeName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void describeRoot (in ACString aAddress, in unsigned long aKnownEdges); */
NS_IMETHODIMP nsCycleCollectorHandler::DescribeRoot(const nsACString & aAddress, PRUint32 aKnownEdges)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void describeGarbage (in ACString aAddress); */
NS_IMETHODIMP nsCycleCollectorHandler::DescribeGarbage(const nsACString & aAddress)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsICycleCollectorListener */
#define NS_ICYCLECOLLECTORLISTENER_IID_STR "5d1c5d51-2022-4242-8c33-0a942b5fed06"

#define NS_ICYCLECOLLECTORLISTENER_IID \
  {0x5d1c5d51, 0x2022, 0x4242, \
    { 0x8c, 0x33, 0x0a, 0x94, 0x2b, 0x5f, 0xed, 0x06 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsICycleCollectorListener : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ICYCLECOLLECTORLISTENER_IID)

  /* nsICycleCollectorListener allTraces (); */
  NS_SCRIPTABLE NS_IMETHOD AllTraces(nsICycleCollectorListener * *_retval NS_OUTPARAM) = 0;

  /* readonly attribute boolean wantAllTraces; */
  NS_SCRIPTABLE NS_IMETHOD GetWantAllTraces(bool *aWantAllTraces) = 0;

  /* attribute boolean disableLog; */
  NS_SCRIPTABLE NS_IMETHOD GetDisableLog(bool *aDisableLog) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetDisableLog(bool aDisableLog) = 0;

  /* attribute boolean wantAfterProcessing; */
  NS_SCRIPTABLE NS_IMETHOD GetWantAfterProcessing(bool *aWantAfterProcessing) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetWantAfterProcessing(bool aWantAfterProcessing) = 0;

  /* void begin (); */
  NS_SCRIPTABLE NS_IMETHOD Begin(void) = 0;

  /* void noteRefCountedObject (in unsigned long long aAddress, in unsigned long aRefCount, in string aObjectDescription); */
  NS_SCRIPTABLE NS_IMETHOD NoteRefCountedObject(PRUint64 aAddress, PRUint32 aRefCount, const char * aObjectDescription) = 0;

  /* void noteGCedObject (in unsigned long long aAddress, in boolean aMarked, in string aObjectDescription); */
  NS_SCRIPTABLE NS_IMETHOD NoteGCedObject(PRUint64 aAddress, bool aMarked, const char * aObjectDescription) = 0;

  /* void noteEdge (in unsigned long long aToAddress, in string aEdgeName); */
  NS_SCRIPTABLE NS_IMETHOD NoteEdge(PRUint64 aToAddress, const char * aEdgeName) = 0;

  /* void beginResults (); */
  NS_SCRIPTABLE NS_IMETHOD BeginResults(void) = 0;

  /* void describeRoot (in unsigned long long aAddress, in unsigned long aKnownEdges); */
  NS_SCRIPTABLE NS_IMETHOD DescribeRoot(PRUint64 aAddress, PRUint32 aKnownEdges) = 0;

  /* void describeGarbage (in unsigned long long aAddress); */
  NS_SCRIPTABLE NS_IMETHOD DescribeGarbage(PRUint64 aAddress) = 0;

  /* void end (); */
  NS_SCRIPTABLE NS_IMETHOD End(void) = 0;

  /* boolean processNext (in nsICycleCollectorHandler aHandler); */
  NS_SCRIPTABLE NS_IMETHOD ProcessNext(nsICycleCollectorHandler *aHandler, bool *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsICycleCollectorListener, NS_ICYCLECOLLECTORLISTENER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSICYCLECOLLECTORLISTENER \
  NS_SCRIPTABLE NS_IMETHOD AllTraces(nsICycleCollectorListener * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetWantAllTraces(bool *aWantAllTraces); \
  NS_SCRIPTABLE NS_IMETHOD GetDisableLog(bool *aDisableLog); \
  NS_SCRIPTABLE NS_IMETHOD SetDisableLog(bool aDisableLog); \
  NS_SCRIPTABLE NS_IMETHOD GetWantAfterProcessing(bool *aWantAfterProcessing); \
  NS_SCRIPTABLE NS_IMETHOD SetWantAfterProcessing(bool aWantAfterProcessing); \
  NS_SCRIPTABLE NS_IMETHOD Begin(void); \
  NS_SCRIPTABLE NS_IMETHOD NoteRefCountedObject(PRUint64 aAddress, PRUint32 aRefCount, const char * aObjectDescription); \
  NS_SCRIPTABLE NS_IMETHOD NoteGCedObject(PRUint64 aAddress, bool aMarked, const char * aObjectDescription); \
  NS_SCRIPTABLE NS_IMETHOD NoteEdge(PRUint64 aToAddress, const char * aEdgeName); \
  NS_SCRIPTABLE NS_IMETHOD BeginResults(void); \
  NS_SCRIPTABLE NS_IMETHOD DescribeRoot(PRUint64 aAddress, PRUint32 aKnownEdges); \
  NS_SCRIPTABLE NS_IMETHOD DescribeGarbage(PRUint64 aAddress); \
  NS_SCRIPTABLE NS_IMETHOD End(void); \
  NS_SCRIPTABLE NS_IMETHOD ProcessNext(nsICycleCollectorHandler *aHandler, bool *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSICYCLECOLLECTORLISTENER(_to) \
  NS_SCRIPTABLE NS_IMETHOD AllTraces(nsICycleCollectorListener * *_retval NS_OUTPARAM) { return _to AllTraces(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetWantAllTraces(bool *aWantAllTraces) { return _to GetWantAllTraces(aWantAllTraces); } \
  NS_SCRIPTABLE NS_IMETHOD GetDisableLog(bool *aDisableLog) { return _to GetDisableLog(aDisableLog); } \
  NS_SCRIPTABLE NS_IMETHOD SetDisableLog(bool aDisableLog) { return _to SetDisableLog(aDisableLog); } \
  NS_SCRIPTABLE NS_IMETHOD GetWantAfterProcessing(bool *aWantAfterProcessing) { return _to GetWantAfterProcessing(aWantAfterProcessing); } \
  NS_SCRIPTABLE NS_IMETHOD SetWantAfterProcessing(bool aWantAfterProcessing) { return _to SetWantAfterProcessing(aWantAfterProcessing); } \
  NS_SCRIPTABLE NS_IMETHOD Begin(void) { return _to Begin(); } \
  NS_SCRIPTABLE NS_IMETHOD NoteRefCountedObject(PRUint64 aAddress, PRUint32 aRefCount, const char * aObjectDescription) { return _to NoteRefCountedObject(aAddress, aRefCount, aObjectDescription); } \
  NS_SCRIPTABLE NS_IMETHOD NoteGCedObject(PRUint64 aAddress, bool aMarked, const char * aObjectDescription) { return _to NoteGCedObject(aAddress, aMarked, aObjectDescription); } \
  NS_SCRIPTABLE NS_IMETHOD NoteEdge(PRUint64 aToAddress, const char * aEdgeName) { return _to NoteEdge(aToAddress, aEdgeName); } \
  NS_SCRIPTABLE NS_IMETHOD BeginResults(void) { return _to BeginResults(); } \
  NS_SCRIPTABLE NS_IMETHOD DescribeRoot(PRUint64 aAddress, PRUint32 aKnownEdges) { return _to DescribeRoot(aAddress, aKnownEdges); } \
  NS_SCRIPTABLE NS_IMETHOD DescribeGarbage(PRUint64 aAddress) { return _to DescribeGarbage(aAddress); } \
  NS_SCRIPTABLE NS_IMETHOD End(void) { return _to End(); } \
  NS_SCRIPTABLE NS_IMETHOD ProcessNext(nsICycleCollectorHandler *aHandler, bool *_retval NS_OUTPARAM) { return _to ProcessNext(aHandler, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSICYCLECOLLECTORLISTENER(_to) \
  NS_SCRIPTABLE NS_IMETHOD AllTraces(nsICycleCollectorListener * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->AllTraces(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetWantAllTraces(bool *aWantAllTraces) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetWantAllTraces(aWantAllTraces); } \
  NS_SCRIPTABLE NS_IMETHOD GetDisableLog(bool *aDisableLog) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDisableLog(aDisableLog); } \
  NS_SCRIPTABLE NS_IMETHOD SetDisableLog(bool aDisableLog) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDisableLog(aDisableLog); } \
  NS_SCRIPTABLE NS_IMETHOD GetWantAfterProcessing(bool *aWantAfterProcessing) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetWantAfterProcessing(aWantAfterProcessing); } \
  NS_SCRIPTABLE NS_IMETHOD SetWantAfterProcessing(bool aWantAfterProcessing) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetWantAfterProcessing(aWantAfterProcessing); } \
  NS_SCRIPTABLE NS_IMETHOD Begin(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Begin(); } \
  NS_SCRIPTABLE NS_IMETHOD NoteRefCountedObject(PRUint64 aAddress, PRUint32 aRefCount, const char * aObjectDescription) { return !_to ? NS_ERROR_NULL_POINTER : _to->NoteRefCountedObject(aAddress, aRefCount, aObjectDescription); } \
  NS_SCRIPTABLE NS_IMETHOD NoteGCedObject(PRUint64 aAddress, bool aMarked, const char * aObjectDescription) { return !_to ? NS_ERROR_NULL_POINTER : _to->NoteGCedObject(aAddress, aMarked, aObjectDescription); } \
  NS_SCRIPTABLE NS_IMETHOD NoteEdge(PRUint64 aToAddress, const char * aEdgeName) { return !_to ? NS_ERROR_NULL_POINTER : _to->NoteEdge(aToAddress, aEdgeName); } \
  NS_SCRIPTABLE NS_IMETHOD BeginResults(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->BeginResults(); } \
  NS_SCRIPTABLE NS_IMETHOD DescribeRoot(PRUint64 aAddress, PRUint32 aKnownEdges) { return !_to ? NS_ERROR_NULL_POINTER : _to->DescribeRoot(aAddress, aKnownEdges); } \
  NS_SCRIPTABLE NS_IMETHOD DescribeGarbage(PRUint64 aAddress) { return !_to ? NS_ERROR_NULL_POINTER : _to->DescribeGarbage(aAddress); } \
  NS_SCRIPTABLE NS_IMETHOD End(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->End(); } \
  NS_SCRIPTABLE NS_IMETHOD ProcessNext(nsICycleCollectorHandler *aHandler, bool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->ProcessNext(aHandler, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsCycleCollectorListener : public nsICycleCollectorListener
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSICYCLECOLLECTORLISTENER

  nsCycleCollectorListener();

private:
  ~nsCycleCollectorListener();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsCycleCollectorListener, nsICycleCollectorListener)

nsCycleCollectorListener::nsCycleCollectorListener()
{
  /* member initializers and constructor code */
}

nsCycleCollectorListener::~nsCycleCollectorListener()
{
  /* destructor code */
}

/* nsICycleCollectorListener allTraces (); */
NS_IMETHODIMP nsCycleCollectorListener::AllTraces(nsICycleCollectorListener * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean wantAllTraces; */
NS_IMETHODIMP nsCycleCollectorListener::GetWantAllTraces(bool *aWantAllTraces)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean disableLog; */
NS_IMETHODIMP nsCycleCollectorListener::GetDisableLog(bool *aDisableLog)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsCycleCollectorListener::SetDisableLog(bool aDisableLog)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean wantAfterProcessing; */
NS_IMETHODIMP nsCycleCollectorListener::GetWantAfterProcessing(bool *aWantAfterProcessing)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsCycleCollectorListener::SetWantAfterProcessing(bool aWantAfterProcessing)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void begin (); */
NS_IMETHODIMP nsCycleCollectorListener::Begin()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void noteRefCountedObject (in unsigned long long aAddress, in unsigned long aRefCount, in string aObjectDescription); */
NS_IMETHODIMP nsCycleCollectorListener::NoteRefCountedObject(PRUint64 aAddress, PRUint32 aRefCount, const char * aObjectDescription)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void noteGCedObject (in unsigned long long aAddress, in boolean aMarked, in string aObjectDescription); */
NS_IMETHODIMP nsCycleCollectorListener::NoteGCedObject(PRUint64 aAddress, bool aMarked, const char * aObjectDescription)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void noteEdge (in unsigned long long aToAddress, in string aEdgeName); */
NS_IMETHODIMP nsCycleCollectorListener::NoteEdge(PRUint64 aToAddress, const char * aEdgeName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void beginResults (); */
NS_IMETHODIMP nsCycleCollectorListener::BeginResults()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void describeRoot (in unsigned long long aAddress, in unsigned long aKnownEdges); */
NS_IMETHODIMP nsCycleCollectorListener::DescribeRoot(PRUint64 aAddress, PRUint32 aKnownEdges)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void describeGarbage (in unsigned long long aAddress); */
NS_IMETHODIMP nsCycleCollectorListener::DescribeGarbage(PRUint64 aAddress)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void end (); */
NS_IMETHODIMP nsCycleCollectorListener::End()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean processNext (in nsICycleCollectorHandler aHandler); */
NS_IMETHODIMP nsCycleCollectorListener::ProcessNext(nsICycleCollectorHandler *aHandler, bool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsICycleCollectorListener_h__ */
