/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/accessible/public/nsIAccessiblePivot.idl
 */

#ifndef __gen_nsIAccessiblePivot_h__
#define __gen_nsIAccessiblePivot_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
typedef PRInt16  TextBoundaryType;

class nsIAccessible; /* forward declaration */

class nsIAccessibleText; /* forward declaration */

class nsIAccessibleTraversalRule; /* forward declaration */

class nsIAccessiblePivotObserver; /* forward declaration */


/* starting interface:    nsIAccessiblePivot */
#define NS_IACCESSIBLEPIVOT_IID_STR "15ff23de-879e-47ea-b536-6532466108c5"

#define NS_IACCESSIBLEPIVOT_IID \
  {0x15ff23de, 0x879e, 0x47ea, \
    { 0xb5, 0x36, 0x65, 0x32, 0x46, 0x61, 0x08, 0xc5 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIAccessiblePivot : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IACCESSIBLEPIVOT_IID)

  enum {
    CHAR_BOUNDARY = 0,
    WORD_BOUNDARY = 1,
    LINE_BOUNDARY = 2,
    ATTRIBUTE_RANGE_BOUNDARY = 3
  };

  /* attribute nsIAccessible position; */
  NS_SCRIPTABLE NS_IMETHOD GetPosition(nsIAccessible * *aPosition) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetPosition(nsIAccessible *aPosition) = 0;

  /* readonly attribute nsIAccessible root; */
  NS_SCRIPTABLE NS_IMETHOD GetRoot(nsIAccessible * *aRoot) = 0;

  /* readonly attribute long startOffset; */
  NS_SCRIPTABLE NS_IMETHOD GetStartOffset(PRInt32 *aStartOffset) = 0;

  /* readonly attribute long endOffset; */
  NS_SCRIPTABLE NS_IMETHOD GetEndOffset(PRInt32 *aEndOffset) = 0;

  /* void setTextRange (in nsIAccessibleText aTextAccessible, in long aStartOffset, in long aEndOffset); */
  NS_SCRIPTABLE NS_IMETHOD SetTextRange(nsIAccessibleText *aTextAccessible, PRInt32 aStartOffset, PRInt32 aEndOffset) = 0;

  /* [optional_argc] boolean moveNext (in nsIAccessibleTraversalRule aRule, [optional] in nsIAccessible aAnchor, [optional] in boolean aIncludeStart); */
  NS_SCRIPTABLE NS_IMETHOD MoveNext(nsIAccessibleTraversalRule *aRule, nsIAccessible *aAnchor, bool aIncludeStart, PRUint8 _argc, bool *_retval NS_OUTPARAM) = 0;

  /* [optional_argc] boolean movePrevious (in nsIAccessibleTraversalRule aRule, [optional] in nsIAccessible aAnchor, [optional] in boolean aIncludeStart); */
  NS_SCRIPTABLE NS_IMETHOD MovePrevious(nsIAccessibleTraversalRule *aRule, nsIAccessible *aAnchor, bool aIncludeStart, PRUint8 _argc, bool *_retval NS_OUTPARAM) = 0;

  /* boolean moveFirst (in nsIAccessibleTraversalRule aRule); */
  NS_SCRIPTABLE NS_IMETHOD MoveFirst(nsIAccessibleTraversalRule *aRule, bool *_retval NS_OUTPARAM) = 0;

  /* boolean moveLast (in nsIAccessibleTraversalRule aRule); */
  NS_SCRIPTABLE NS_IMETHOD MoveLast(nsIAccessibleTraversalRule *aRule, bool *_retval NS_OUTPARAM) = 0;

  /* boolean moveNextByText (in TextBoundaryType aBoundary); */
  NS_SCRIPTABLE NS_IMETHOD MoveNextByText(TextBoundaryType aBoundary, bool *_retval NS_OUTPARAM) = 0;

  /* boolean movePreviousByText (in TextBoundaryType aBoundary); */
  NS_SCRIPTABLE NS_IMETHOD MovePreviousByText(TextBoundaryType aBoundary, bool *_retval NS_OUTPARAM) = 0;

  /* void addObserver (in nsIAccessiblePivotObserver aObserver); */
  NS_SCRIPTABLE NS_IMETHOD AddObserver(nsIAccessiblePivotObserver *aObserver) = 0;

  /* void removeObserver (in nsIAccessiblePivotObserver aObserver); */
  NS_SCRIPTABLE NS_IMETHOD RemoveObserver(nsIAccessiblePivotObserver *aObserver) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIAccessiblePivot, NS_IACCESSIBLEPIVOT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIACCESSIBLEPIVOT \
  NS_SCRIPTABLE NS_IMETHOD GetPosition(nsIAccessible * *aPosition); \
  NS_SCRIPTABLE NS_IMETHOD SetPosition(nsIAccessible *aPosition); \
  NS_SCRIPTABLE NS_IMETHOD GetRoot(nsIAccessible * *aRoot); \
  NS_SCRIPTABLE NS_IMETHOD GetStartOffset(PRInt32 *aStartOffset); \
  NS_SCRIPTABLE NS_IMETHOD GetEndOffset(PRInt32 *aEndOffset); \
  NS_SCRIPTABLE NS_IMETHOD SetTextRange(nsIAccessibleText *aTextAccessible, PRInt32 aStartOffset, PRInt32 aEndOffset); \
  NS_SCRIPTABLE NS_IMETHOD MoveNext(nsIAccessibleTraversalRule *aRule, nsIAccessible *aAnchor, bool aIncludeStart, PRUint8 _argc, bool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD MovePrevious(nsIAccessibleTraversalRule *aRule, nsIAccessible *aAnchor, bool aIncludeStart, PRUint8 _argc, bool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD MoveFirst(nsIAccessibleTraversalRule *aRule, bool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD MoveLast(nsIAccessibleTraversalRule *aRule, bool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD MoveNextByText(TextBoundaryType aBoundary, bool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD MovePreviousByText(TextBoundaryType aBoundary, bool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD AddObserver(nsIAccessiblePivotObserver *aObserver); \
  NS_SCRIPTABLE NS_IMETHOD RemoveObserver(nsIAccessiblePivotObserver *aObserver); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIACCESSIBLEPIVOT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetPosition(nsIAccessible * *aPosition) { return _to GetPosition(aPosition); } \
  NS_SCRIPTABLE NS_IMETHOD SetPosition(nsIAccessible *aPosition) { return _to SetPosition(aPosition); } \
  NS_SCRIPTABLE NS_IMETHOD GetRoot(nsIAccessible * *aRoot) { return _to GetRoot(aRoot); } \
  NS_SCRIPTABLE NS_IMETHOD GetStartOffset(PRInt32 *aStartOffset) { return _to GetStartOffset(aStartOffset); } \
  NS_SCRIPTABLE NS_IMETHOD GetEndOffset(PRInt32 *aEndOffset) { return _to GetEndOffset(aEndOffset); } \
  NS_SCRIPTABLE NS_IMETHOD SetTextRange(nsIAccessibleText *aTextAccessible, PRInt32 aStartOffset, PRInt32 aEndOffset) { return _to SetTextRange(aTextAccessible, aStartOffset, aEndOffset); } \
  NS_SCRIPTABLE NS_IMETHOD MoveNext(nsIAccessibleTraversalRule *aRule, nsIAccessible *aAnchor, bool aIncludeStart, PRUint8 _argc, bool *_retval NS_OUTPARAM) { return _to MoveNext(aRule, aAnchor, aIncludeStart, _argc, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD MovePrevious(nsIAccessibleTraversalRule *aRule, nsIAccessible *aAnchor, bool aIncludeStart, PRUint8 _argc, bool *_retval NS_OUTPARAM) { return _to MovePrevious(aRule, aAnchor, aIncludeStart, _argc, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD MoveFirst(nsIAccessibleTraversalRule *aRule, bool *_retval NS_OUTPARAM) { return _to MoveFirst(aRule, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD MoveLast(nsIAccessibleTraversalRule *aRule, bool *_retval NS_OUTPARAM) { return _to MoveLast(aRule, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD MoveNextByText(TextBoundaryType aBoundary, bool *_retval NS_OUTPARAM) { return _to MoveNextByText(aBoundary, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD MovePreviousByText(TextBoundaryType aBoundary, bool *_retval NS_OUTPARAM) { return _to MovePreviousByText(aBoundary, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD AddObserver(nsIAccessiblePivotObserver *aObserver) { return _to AddObserver(aObserver); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveObserver(nsIAccessiblePivotObserver *aObserver) { return _to RemoveObserver(aObserver); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIACCESSIBLEPIVOT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetPosition(nsIAccessible * *aPosition) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPosition(aPosition); } \
  NS_SCRIPTABLE NS_IMETHOD SetPosition(nsIAccessible *aPosition) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetPosition(aPosition); } \
  NS_SCRIPTABLE NS_IMETHOD GetRoot(nsIAccessible * *aRoot) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRoot(aRoot); } \
  NS_SCRIPTABLE NS_IMETHOD GetStartOffset(PRInt32 *aStartOffset) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetStartOffset(aStartOffset); } \
  NS_SCRIPTABLE NS_IMETHOD GetEndOffset(PRInt32 *aEndOffset) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetEndOffset(aEndOffset); } \
  NS_SCRIPTABLE NS_IMETHOD SetTextRange(nsIAccessibleText *aTextAccessible, PRInt32 aStartOffset, PRInt32 aEndOffset) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetTextRange(aTextAccessible, aStartOffset, aEndOffset); } \
  NS_SCRIPTABLE NS_IMETHOD MoveNext(nsIAccessibleTraversalRule *aRule, nsIAccessible *aAnchor, bool aIncludeStart, PRUint8 _argc, bool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->MoveNext(aRule, aAnchor, aIncludeStart, _argc, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD MovePrevious(nsIAccessibleTraversalRule *aRule, nsIAccessible *aAnchor, bool aIncludeStart, PRUint8 _argc, bool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->MovePrevious(aRule, aAnchor, aIncludeStart, _argc, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD MoveFirst(nsIAccessibleTraversalRule *aRule, bool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->MoveFirst(aRule, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD MoveLast(nsIAccessibleTraversalRule *aRule, bool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->MoveLast(aRule, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD MoveNextByText(TextBoundaryType aBoundary, bool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->MoveNextByText(aBoundary, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD MovePreviousByText(TextBoundaryType aBoundary, bool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->MovePreviousByText(aBoundary, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD AddObserver(nsIAccessiblePivotObserver *aObserver) { return !_to ? NS_ERROR_NULL_POINTER : _to->AddObserver(aObserver); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveObserver(nsIAccessiblePivotObserver *aObserver) { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveObserver(aObserver); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsAccessiblePivot : public nsIAccessiblePivot
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIACCESSIBLEPIVOT

  nsAccessiblePivot();

private:
  ~nsAccessiblePivot();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsAccessiblePivot, nsIAccessiblePivot)

nsAccessiblePivot::nsAccessiblePivot()
{
  /* member initializers and constructor code */
}

nsAccessiblePivot::~nsAccessiblePivot()
{
  /* destructor code */
}

/* attribute nsIAccessible position; */
NS_IMETHODIMP nsAccessiblePivot::GetPosition(nsIAccessible * *aPosition)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsAccessiblePivot::SetPosition(nsIAccessible *aPosition)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIAccessible root; */
NS_IMETHODIMP nsAccessiblePivot::GetRoot(nsIAccessible * *aRoot)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long startOffset; */
NS_IMETHODIMP nsAccessiblePivot::GetStartOffset(PRInt32 *aStartOffset)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long endOffset; */
NS_IMETHODIMP nsAccessiblePivot::GetEndOffset(PRInt32 *aEndOffset)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setTextRange (in nsIAccessibleText aTextAccessible, in long aStartOffset, in long aEndOffset); */
NS_IMETHODIMP nsAccessiblePivot::SetTextRange(nsIAccessibleText *aTextAccessible, PRInt32 aStartOffset, PRInt32 aEndOffset)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [optional_argc] boolean moveNext (in nsIAccessibleTraversalRule aRule, [optional] in nsIAccessible aAnchor, [optional] in boolean aIncludeStart); */
NS_IMETHODIMP nsAccessiblePivot::MoveNext(nsIAccessibleTraversalRule *aRule, nsIAccessible *aAnchor, bool aIncludeStart, PRUint8 _argc, bool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [optional_argc] boolean movePrevious (in nsIAccessibleTraversalRule aRule, [optional] in nsIAccessible aAnchor, [optional] in boolean aIncludeStart); */
NS_IMETHODIMP nsAccessiblePivot::MovePrevious(nsIAccessibleTraversalRule *aRule, nsIAccessible *aAnchor, bool aIncludeStart, PRUint8 _argc, bool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean moveFirst (in nsIAccessibleTraversalRule aRule); */
NS_IMETHODIMP nsAccessiblePivot::MoveFirst(nsIAccessibleTraversalRule *aRule, bool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean moveLast (in nsIAccessibleTraversalRule aRule); */
NS_IMETHODIMP nsAccessiblePivot::MoveLast(nsIAccessibleTraversalRule *aRule, bool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean moveNextByText (in TextBoundaryType aBoundary); */
NS_IMETHODIMP nsAccessiblePivot::MoveNextByText(TextBoundaryType aBoundary, bool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean movePreviousByText (in TextBoundaryType aBoundary); */
NS_IMETHODIMP nsAccessiblePivot::MovePreviousByText(TextBoundaryType aBoundary, bool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void addObserver (in nsIAccessiblePivotObserver aObserver); */
NS_IMETHODIMP nsAccessiblePivot::AddObserver(nsIAccessiblePivotObserver *aObserver)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void removeObserver (in nsIAccessiblePivotObserver aObserver); */
NS_IMETHODIMP nsAccessiblePivot::RemoveObserver(nsIAccessiblePivotObserver *aObserver)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIAccessiblePivotObserver */
#define NS_IACCESSIBLEPIVOTOBSERVER_IID_STR "b6508c5e-c081-467d-835c-613eedf9ee9b"

#define NS_IACCESSIBLEPIVOTOBSERVER_IID \
  {0xb6508c5e, 0xc081, 0x467d, \
    { 0x83, 0x5c, 0x61, 0x3e, 0xed, 0xf9, 0xee, 0x9b }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIAccessiblePivotObserver : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IACCESSIBLEPIVOTOBSERVER_IID)

  /* void onPivotChanged (in nsIAccessiblePivot aPivot, in nsIAccessible aOldAccessible, in long aOldStart, in long aOldEnd); */
  NS_SCRIPTABLE NS_IMETHOD OnPivotChanged(nsIAccessiblePivot *aPivot, nsIAccessible *aOldAccessible, PRInt32 aOldStart, PRInt32 aOldEnd) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIAccessiblePivotObserver, NS_IACCESSIBLEPIVOTOBSERVER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIACCESSIBLEPIVOTOBSERVER \
  NS_SCRIPTABLE NS_IMETHOD OnPivotChanged(nsIAccessiblePivot *aPivot, nsIAccessible *aOldAccessible, PRInt32 aOldStart, PRInt32 aOldEnd); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIACCESSIBLEPIVOTOBSERVER(_to) \
  NS_SCRIPTABLE NS_IMETHOD OnPivotChanged(nsIAccessiblePivot *aPivot, nsIAccessible *aOldAccessible, PRInt32 aOldStart, PRInt32 aOldEnd) { return _to OnPivotChanged(aPivot, aOldAccessible, aOldStart, aOldEnd); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIACCESSIBLEPIVOTOBSERVER(_to) \
  NS_SCRIPTABLE NS_IMETHOD OnPivotChanged(nsIAccessiblePivot *aPivot, nsIAccessible *aOldAccessible, PRInt32 aOldStart, PRInt32 aOldEnd) { return !_to ? NS_ERROR_NULL_POINTER : _to->OnPivotChanged(aPivot, aOldAccessible, aOldStart, aOldEnd); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsAccessiblePivotObserver : public nsIAccessiblePivotObserver
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIACCESSIBLEPIVOTOBSERVER

  nsAccessiblePivotObserver();

private:
  ~nsAccessiblePivotObserver();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsAccessiblePivotObserver, nsIAccessiblePivotObserver)

nsAccessiblePivotObserver::nsAccessiblePivotObserver()
{
  /* member initializers and constructor code */
}

nsAccessiblePivotObserver::~nsAccessiblePivotObserver()
{
  /* destructor code */
}

/* void onPivotChanged (in nsIAccessiblePivot aPivot, in nsIAccessible aOldAccessible, in long aOldStart, in long aOldEnd); */
NS_IMETHODIMP nsAccessiblePivotObserver::OnPivotChanged(nsIAccessiblePivot *aPivot, nsIAccessible *aOldAccessible, PRInt32 aOldStart, PRInt32 aOldEnd)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIAccessibleTraversalRule */
#define NS_IACCESSIBLETRAVERSALRULE_IID_STR "307d98b6-dba9-49cf-ba17-ef8b053044eb"

#define NS_IACCESSIBLETRAVERSALRULE_IID \
  {0x307d98b6, 0xdba9, 0x49cf, \
    { 0xba, 0x17, 0xef, 0x8b, 0x05, 0x30, 0x44, 0xeb }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIAccessibleTraversalRule : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IACCESSIBLETRAVERSALRULE_IID)

  enum {
    FILTER_IGNORE = 0U,
    FILTER_MATCH = 1U,
    FILTER_IGNORE_SUBTREE = 2U,
    PREFILTER_INVISIBLE = 1U,
    PREFILTER_OFFSCREEN = 2U,
    PREFILTER_NOT_FOCUSABLE = 4U
  };

  /* readonly attribute unsigned long preFilter; */
  NS_SCRIPTABLE NS_IMETHOD GetPreFilter(PRUint32 *aPreFilter) = 0;

  /* void getMatchRoles ([array, size_is (aCount)] out unsigned long aRoles, [retval] out unsigned long aCount); */
  NS_SCRIPTABLE NS_IMETHOD GetMatchRoles(PRUint32 **aRoles NS_OUTPARAM, PRUint32 *aCount NS_OUTPARAM) = 0;

  /* unsigned short match (in nsIAccessible aAccessible); */
  NS_SCRIPTABLE NS_IMETHOD Match(nsIAccessible *aAccessible, PRUint16 *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIAccessibleTraversalRule, NS_IACCESSIBLETRAVERSALRULE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIACCESSIBLETRAVERSALRULE \
  NS_SCRIPTABLE NS_IMETHOD GetPreFilter(PRUint32 *aPreFilter); \
  NS_SCRIPTABLE NS_IMETHOD GetMatchRoles(PRUint32 **aRoles NS_OUTPARAM, PRUint32 *aCount NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Match(nsIAccessible *aAccessible, PRUint16 *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIACCESSIBLETRAVERSALRULE(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetPreFilter(PRUint32 *aPreFilter) { return _to GetPreFilter(aPreFilter); } \
  NS_SCRIPTABLE NS_IMETHOD GetMatchRoles(PRUint32 **aRoles NS_OUTPARAM, PRUint32 *aCount NS_OUTPARAM) { return _to GetMatchRoles(aRoles, aCount); } \
  NS_SCRIPTABLE NS_IMETHOD Match(nsIAccessible *aAccessible, PRUint16 *_retval NS_OUTPARAM) { return _to Match(aAccessible, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIACCESSIBLETRAVERSALRULE(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetPreFilter(PRUint32 *aPreFilter) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPreFilter(aPreFilter); } \
  NS_SCRIPTABLE NS_IMETHOD GetMatchRoles(PRUint32 **aRoles NS_OUTPARAM, PRUint32 *aCount NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMatchRoles(aRoles, aCount); } \
  NS_SCRIPTABLE NS_IMETHOD Match(nsIAccessible *aAccessible, PRUint16 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Match(aAccessible, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsAccessibleTraversalRule : public nsIAccessibleTraversalRule
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIACCESSIBLETRAVERSALRULE

  nsAccessibleTraversalRule();

private:
  ~nsAccessibleTraversalRule();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsAccessibleTraversalRule, nsIAccessibleTraversalRule)

nsAccessibleTraversalRule::nsAccessibleTraversalRule()
{
  /* member initializers and constructor code */
}

nsAccessibleTraversalRule::~nsAccessibleTraversalRule()
{
  /* destructor code */
}

/* readonly attribute unsigned long preFilter; */
NS_IMETHODIMP nsAccessibleTraversalRule::GetPreFilter(PRUint32 *aPreFilter)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void getMatchRoles ([array, size_is (aCount)] out unsigned long aRoles, [retval] out unsigned long aCount); */
NS_IMETHODIMP nsAccessibleTraversalRule::GetMatchRoles(PRUint32 **aRoles NS_OUTPARAM, PRUint32 *aCount NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* unsigned short match (in nsIAccessible aAccessible); */
NS_IMETHODIMP nsAccessibleTraversalRule::Match(nsIAccessible *aAccessible, PRUint16 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIAccessiblePivot_h__ */
