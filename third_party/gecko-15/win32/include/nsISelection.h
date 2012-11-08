/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/content/base/public/nsISelection.idl
 */

#ifndef __gen_nsISelection_h__
#define __gen_nsISelection_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIDOMNode; /* forward declaration */

class nsIDOMRange; /* forward declaration */

class nsINode; /* forward declaration */


/* starting interface:    nsISelection */
#define NS_ISELECTION_IID_STR "dd40d5b8-1fe1-487f-b66e-28f4b837024f"

#define NS_ISELECTION_IID \
  {0xdd40d5b8, 0x1fe1, 0x487f, \
    { 0xb6, 0x6e, 0x28, 0xf4, 0xb8, 0x37, 0x02, 0x4f }}

class NS_NO_VTABLE NS_SCRIPTABLE nsISelection : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ISELECTION_IID)

  /* readonly attribute nsIDOMNode anchorNode; */
  NS_SCRIPTABLE NS_IMETHOD GetAnchorNode(nsIDOMNode * *aAnchorNode) = 0;

  /* readonly attribute long anchorOffset; */
  NS_SCRIPTABLE NS_IMETHOD GetAnchorOffset(PRInt32 *aAnchorOffset) = 0;

  /* readonly attribute nsIDOMNode focusNode; */
  NS_SCRIPTABLE NS_IMETHOD GetFocusNode(nsIDOMNode * *aFocusNode) = 0;

  /* readonly attribute long focusOffset; */
  NS_SCRIPTABLE NS_IMETHOD GetFocusOffset(PRInt32 *aFocusOffset) = 0;

  /* readonly attribute boolean isCollapsed; */
  NS_SCRIPTABLE NS_IMETHOD GetIsCollapsed(bool *aIsCollapsed) = 0;

  /* [noscript,nostdcall,notxpcom] boolean collapsed (); */
  virtual bool Collapsed(void) = 0;

  /* readonly attribute long rangeCount; */
  NS_SCRIPTABLE NS_IMETHOD GetRangeCount(PRInt32 *aRangeCount) = 0;

  /* nsIDOMRange getRangeAt (in long index); */
  NS_SCRIPTABLE NS_IMETHOD GetRangeAt(PRInt32 index, nsIDOMRange * *_retval NS_OUTPARAM) = 0;

  /* void collapse (in nsIDOMNode parentNode, in long offset); */
  NS_SCRIPTABLE NS_IMETHOD Collapse(nsIDOMNode *parentNode, PRInt32 offset) = 0;

  /* [noscript] void collapseNative (in nsINode parentNode, in long offset); */
  NS_IMETHOD CollapseNative(nsINode *parentNode, PRInt32 offset) = 0;

  /* void extend (in nsIDOMNode parentNode, in long offset); */
  NS_SCRIPTABLE NS_IMETHOD Extend(nsIDOMNode *parentNode, PRInt32 offset) = 0;

  /* [noscript] void extendNative (in nsINode parentNode, in long offset); */
  NS_IMETHOD ExtendNative(nsINode *parentNode, PRInt32 offset) = 0;

  /* void collapseToStart (); */
  NS_SCRIPTABLE NS_IMETHOD CollapseToStart(void) = 0;

  /* void collapseToEnd (); */
  NS_SCRIPTABLE NS_IMETHOD CollapseToEnd(void) = 0;

  /* boolean containsNode (in nsIDOMNode node, in boolean partlyContained); */
  NS_SCRIPTABLE NS_IMETHOD ContainsNode(nsIDOMNode *node, bool partlyContained, bool *_retval NS_OUTPARAM) = 0;

  /* void selectAllChildren (in nsIDOMNode parentNode); */
  NS_SCRIPTABLE NS_IMETHOD SelectAllChildren(nsIDOMNode *parentNode) = 0;

  /* void addRange (in nsIDOMRange range); */
  NS_SCRIPTABLE NS_IMETHOD AddRange(nsIDOMRange *range) = 0;

  /* void removeRange (in nsIDOMRange range); */
  NS_SCRIPTABLE NS_IMETHOD RemoveRange(nsIDOMRange *range) = 0;

  /* void removeAllRanges (); */
  NS_SCRIPTABLE NS_IMETHOD RemoveAllRanges(void) = 0;

  /* void deleteFromDocument (); */
  NS_SCRIPTABLE NS_IMETHOD DeleteFromDocument(void) = 0;

  /* void selectionLanguageChange (in boolean langRTL); */
  NS_SCRIPTABLE NS_IMETHOD SelectionLanguageChange(bool langRTL) = 0;

  /* wstring toString (); */
  NS_SCRIPTABLE NS_IMETHOD ToString(PRUnichar * *_retval NS_OUTPARAM) = 0;

  /* void modify (in DOMString alter, in DOMString direction, in DOMString granularity); */
  NS_SCRIPTABLE NS_IMETHOD Modify(const nsAString & alter, const nsAString & direction, const nsAString & granularity) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsISelection, NS_ISELECTION_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSISELECTION \
  NS_SCRIPTABLE NS_IMETHOD GetAnchorNode(nsIDOMNode * *aAnchorNode); \
  NS_SCRIPTABLE NS_IMETHOD GetAnchorOffset(PRInt32 *aAnchorOffset); \
  NS_SCRIPTABLE NS_IMETHOD GetFocusNode(nsIDOMNode * *aFocusNode); \
  NS_SCRIPTABLE NS_IMETHOD GetFocusOffset(PRInt32 *aFocusOffset); \
  NS_SCRIPTABLE NS_IMETHOD GetIsCollapsed(bool *aIsCollapsed); \
  virtual bool Collapsed(void); \
  NS_SCRIPTABLE NS_IMETHOD GetRangeCount(PRInt32 *aRangeCount); \
  NS_SCRIPTABLE NS_IMETHOD GetRangeAt(PRInt32 index, nsIDOMRange * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Collapse(nsIDOMNode *parentNode, PRInt32 offset); \
  NS_IMETHOD CollapseNative(nsINode *parentNode, PRInt32 offset); \
  NS_SCRIPTABLE NS_IMETHOD Extend(nsIDOMNode *parentNode, PRInt32 offset); \
  NS_IMETHOD ExtendNative(nsINode *parentNode, PRInt32 offset); \
  NS_SCRIPTABLE NS_IMETHOD CollapseToStart(void); \
  NS_SCRIPTABLE NS_IMETHOD CollapseToEnd(void); \
  NS_SCRIPTABLE NS_IMETHOD ContainsNode(nsIDOMNode *node, bool partlyContained, bool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SelectAllChildren(nsIDOMNode *parentNode); \
  NS_SCRIPTABLE NS_IMETHOD AddRange(nsIDOMRange *range); \
  NS_SCRIPTABLE NS_IMETHOD RemoveRange(nsIDOMRange *range); \
  NS_SCRIPTABLE NS_IMETHOD RemoveAllRanges(void); \
  NS_SCRIPTABLE NS_IMETHOD DeleteFromDocument(void); \
  NS_SCRIPTABLE NS_IMETHOD SelectionLanguageChange(bool langRTL); \
  NS_SCRIPTABLE NS_IMETHOD ToString(PRUnichar * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Modify(const nsAString & alter, const nsAString & direction, const nsAString & granularity); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSISELECTION(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetAnchorNode(nsIDOMNode * *aAnchorNode) { return _to GetAnchorNode(aAnchorNode); } \
  NS_SCRIPTABLE NS_IMETHOD GetAnchorOffset(PRInt32 *aAnchorOffset) { return _to GetAnchorOffset(aAnchorOffset); } \
  NS_SCRIPTABLE NS_IMETHOD GetFocusNode(nsIDOMNode * *aFocusNode) { return _to GetFocusNode(aFocusNode); } \
  NS_SCRIPTABLE NS_IMETHOD GetFocusOffset(PRInt32 *aFocusOffset) { return _to GetFocusOffset(aFocusOffset); } \
  NS_SCRIPTABLE NS_IMETHOD GetIsCollapsed(bool *aIsCollapsed) { return _to GetIsCollapsed(aIsCollapsed); } \
  virtual bool Collapsed(void) { return _to Collapsed(); } \
  NS_SCRIPTABLE NS_IMETHOD GetRangeCount(PRInt32 *aRangeCount) { return _to GetRangeCount(aRangeCount); } \
  NS_SCRIPTABLE NS_IMETHOD GetRangeAt(PRInt32 index, nsIDOMRange * *_retval NS_OUTPARAM) { return _to GetRangeAt(index, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Collapse(nsIDOMNode *parentNode, PRInt32 offset) { return _to Collapse(parentNode, offset); } \
  NS_IMETHOD CollapseNative(nsINode *parentNode, PRInt32 offset) { return _to CollapseNative(parentNode, offset); } \
  NS_SCRIPTABLE NS_IMETHOD Extend(nsIDOMNode *parentNode, PRInt32 offset) { return _to Extend(parentNode, offset); } \
  NS_IMETHOD ExtendNative(nsINode *parentNode, PRInt32 offset) { return _to ExtendNative(parentNode, offset); } \
  NS_SCRIPTABLE NS_IMETHOD CollapseToStart(void) { return _to CollapseToStart(); } \
  NS_SCRIPTABLE NS_IMETHOD CollapseToEnd(void) { return _to CollapseToEnd(); } \
  NS_SCRIPTABLE NS_IMETHOD ContainsNode(nsIDOMNode *node, bool partlyContained, bool *_retval NS_OUTPARAM) { return _to ContainsNode(node, partlyContained, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SelectAllChildren(nsIDOMNode *parentNode) { return _to SelectAllChildren(parentNode); } \
  NS_SCRIPTABLE NS_IMETHOD AddRange(nsIDOMRange *range) { return _to AddRange(range); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveRange(nsIDOMRange *range) { return _to RemoveRange(range); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveAllRanges(void) { return _to RemoveAllRanges(); } \
  NS_SCRIPTABLE NS_IMETHOD DeleteFromDocument(void) { return _to DeleteFromDocument(); } \
  NS_SCRIPTABLE NS_IMETHOD SelectionLanguageChange(bool langRTL) { return _to SelectionLanguageChange(langRTL); } \
  NS_SCRIPTABLE NS_IMETHOD ToString(PRUnichar * *_retval NS_OUTPARAM) { return _to ToString(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD Modify(const nsAString & alter, const nsAString & direction, const nsAString & granularity) { return _to Modify(alter, direction, granularity); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSISELECTION(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetAnchorNode(nsIDOMNode * *aAnchorNode) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAnchorNode(aAnchorNode); } \
  NS_SCRIPTABLE NS_IMETHOD GetAnchorOffset(PRInt32 *aAnchorOffset) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAnchorOffset(aAnchorOffset); } \
  NS_SCRIPTABLE NS_IMETHOD GetFocusNode(nsIDOMNode * *aFocusNode) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFocusNode(aFocusNode); } \
  NS_SCRIPTABLE NS_IMETHOD GetFocusOffset(PRInt32 *aFocusOffset) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFocusOffset(aFocusOffset); } \
  NS_SCRIPTABLE NS_IMETHOD GetIsCollapsed(bool *aIsCollapsed) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIsCollapsed(aIsCollapsed); } \
  virtual bool Collapsed(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Collapsed(); } \
  NS_SCRIPTABLE NS_IMETHOD GetRangeCount(PRInt32 *aRangeCount) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRangeCount(aRangeCount); } \
  NS_SCRIPTABLE NS_IMETHOD GetRangeAt(PRInt32 index, nsIDOMRange * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRangeAt(index, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Collapse(nsIDOMNode *parentNode, PRInt32 offset) { return !_to ? NS_ERROR_NULL_POINTER : _to->Collapse(parentNode, offset); } \
  NS_IMETHOD CollapseNative(nsINode *parentNode, PRInt32 offset) { return !_to ? NS_ERROR_NULL_POINTER : _to->CollapseNative(parentNode, offset); } \
  NS_SCRIPTABLE NS_IMETHOD Extend(nsIDOMNode *parentNode, PRInt32 offset) { return !_to ? NS_ERROR_NULL_POINTER : _to->Extend(parentNode, offset); } \
  NS_IMETHOD ExtendNative(nsINode *parentNode, PRInt32 offset) { return !_to ? NS_ERROR_NULL_POINTER : _to->ExtendNative(parentNode, offset); } \
  NS_SCRIPTABLE NS_IMETHOD CollapseToStart(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->CollapseToStart(); } \
  NS_SCRIPTABLE NS_IMETHOD CollapseToEnd(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->CollapseToEnd(); } \
  NS_SCRIPTABLE NS_IMETHOD ContainsNode(nsIDOMNode *node, bool partlyContained, bool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->ContainsNode(node, partlyContained, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SelectAllChildren(nsIDOMNode *parentNode) { return !_to ? NS_ERROR_NULL_POINTER : _to->SelectAllChildren(parentNode); } \
  NS_SCRIPTABLE NS_IMETHOD AddRange(nsIDOMRange *range) { return !_to ? NS_ERROR_NULL_POINTER : _to->AddRange(range); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveRange(nsIDOMRange *range) { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveRange(range); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveAllRanges(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveAllRanges(); } \
  NS_SCRIPTABLE NS_IMETHOD DeleteFromDocument(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->DeleteFromDocument(); } \
  NS_SCRIPTABLE NS_IMETHOD SelectionLanguageChange(bool langRTL) { return !_to ? NS_ERROR_NULL_POINTER : _to->SelectionLanguageChange(langRTL); } \
  NS_SCRIPTABLE NS_IMETHOD ToString(PRUnichar * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->ToString(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD Modify(const nsAString & alter, const nsAString & direction, const nsAString & granularity) { return !_to ? NS_ERROR_NULL_POINTER : _to->Modify(alter, direction, granularity); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsSelection : public nsISelection
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSISELECTION

  nsSelection();

private:
  ~nsSelection();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsSelection, nsISelection)

nsSelection::nsSelection()
{
  /* member initializers and constructor code */
}

nsSelection::~nsSelection()
{
  /* destructor code */
}

/* readonly attribute nsIDOMNode anchorNode; */
NS_IMETHODIMP nsSelection::GetAnchorNode(nsIDOMNode * *aAnchorNode)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long anchorOffset; */
NS_IMETHODIMP nsSelection::GetAnchorOffset(PRInt32 *aAnchorOffset)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMNode focusNode; */
NS_IMETHODIMP nsSelection::GetFocusNode(nsIDOMNode * *aFocusNode)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long focusOffset; */
NS_IMETHODIMP nsSelection::GetFocusOffset(PRInt32 *aFocusOffset)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean isCollapsed; */
NS_IMETHODIMP nsSelection::GetIsCollapsed(bool *aIsCollapsed)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript,nostdcall,notxpcom] boolean collapsed (); */
bool nsSelection::Collapsed()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long rangeCount; */
NS_IMETHODIMP nsSelection::GetRangeCount(PRInt32 *aRangeCount)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMRange getRangeAt (in long index); */
NS_IMETHODIMP nsSelection::GetRangeAt(PRInt32 index, nsIDOMRange * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void collapse (in nsIDOMNode parentNode, in long offset); */
NS_IMETHODIMP nsSelection::Collapse(nsIDOMNode *parentNode, PRInt32 offset)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void collapseNative (in nsINode parentNode, in long offset); */
NS_IMETHODIMP nsSelection::CollapseNative(nsINode *parentNode, PRInt32 offset)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void extend (in nsIDOMNode parentNode, in long offset); */
NS_IMETHODIMP nsSelection::Extend(nsIDOMNode *parentNode, PRInt32 offset)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void extendNative (in nsINode parentNode, in long offset); */
NS_IMETHODIMP nsSelection::ExtendNative(nsINode *parentNode, PRInt32 offset)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void collapseToStart (); */
NS_IMETHODIMP nsSelection::CollapseToStart()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void collapseToEnd (); */
NS_IMETHODIMP nsSelection::CollapseToEnd()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean containsNode (in nsIDOMNode node, in boolean partlyContained); */
NS_IMETHODIMP nsSelection::ContainsNode(nsIDOMNode *node, bool partlyContained, bool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void selectAllChildren (in nsIDOMNode parentNode); */
NS_IMETHODIMP nsSelection::SelectAllChildren(nsIDOMNode *parentNode)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void addRange (in nsIDOMRange range); */
NS_IMETHODIMP nsSelection::AddRange(nsIDOMRange *range)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void removeRange (in nsIDOMRange range); */
NS_IMETHODIMP nsSelection::RemoveRange(nsIDOMRange *range)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void removeAllRanges (); */
NS_IMETHODIMP nsSelection::RemoveAllRanges()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void deleteFromDocument (); */
NS_IMETHODIMP nsSelection::DeleteFromDocument()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void selectionLanguageChange (in boolean langRTL); */
NS_IMETHODIMP nsSelection::SelectionLanguageChange(bool langRTL)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* wstring toString (); */
NS_IMETHODIMP nsSelection::ToString(PRUnichar * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void modify (in DOMString alter, in DOMString direction, in DOMString granularity); */
NS_IMETHODIMP nsSelection::Modify(const nsAString & alter, const nsAString & direction, const nsAString & granularity)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsISelection_h__ */
