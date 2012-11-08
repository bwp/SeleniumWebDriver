/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/layout/xul/base/src/tree/public/nsITreeSelection.idl
 */

#ifndef __gen_nsITreeSelection_h__
#define __gen_nsITreeSelection_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsITreeBoxObject; /* forward declaration */

class nsITreeColumn; /* forward declaration */


/* starting interface:    nsITreeSelection */
#define NS_ITREESELECTION_IID_STR "ab6fe746-300b-4ab4-abb9-1c0e3977874c"

#define NS_ITREESELECTION_IID \
  {0xab6fe746, 0x300b, 0x4ab4, \
    { 0xab, 0xb9, 0x1c, 0x0e, 0x39, 0x77, 0x87, 0x4c }}

class NS_NO_VTABLE NS_SCRIPTABLE nsITreeSelection : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ITREESELECTION_IID)

  /* attribute nsITreeBoxObject tree; */
  NS_SCRIPTABLE NS_IMETHOD GetTree(nsITreeBoxObject * *aTree) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetTree(nsITreeBoxObject *aTree) = 0;

  /* readonly attribute boolean single; */
  NS_SCRIPTABLE NS_IMETHOD GetSingle(bool *aSingle) = 0;

  /* readonly attribute long count; */
  NS_SCRIPTABLE NS_IMETHOD GetCount(PRInt32 *aCount) = 0;

  /* boolean isSelected (in long index); */
  NS_SCRIPTABLE NS_IMETHOD IsSelected(PRInt32 index, bool *_retval NS_OUTPARAM) = 0;

  /* void select (in long index); */
  NS_SCRIPTABLE NS_IMETHOD Select(PRInt32 index) = 0;

  /* void timedSelect (in long index, in long delay); */
  NS_SCRIPTABLE NS_IMETHOD TimedSelect(PRInt32 index, PRInt32 delay) = 0;

  /* void toggleSelect (in long index); */
  NS_SCRIPTABLE NS_IMETHOD ToggleSelect(PRInt32 index) = 0;

  /* void rangedSelect (in long startIndex, in long endIndex, in boolean augment); */
  NS_SCRIPTABLE NS_IMETHOD RangedSelect(PRInt32 startIndex, PRInt32 endIndex, bool augment) = 0;

  /* void clearRange (in long startIndex, in long endIndex); */
  NS_SCRIPTABLE NS_IMETHOD ClearRange(PRInt32 startIndex, PRInt32 endIndex) = 0;

  /* void clearSelection (); */
  NS_SCRIPTABLE NS_IMETHOD ClearSelection(void) = 0;

  /* void invertSelection (); */
  NS_SCRIPTABLE NS_IMETHOD InvertSelection(void) = 0;

  /* void selectAll (); */
  NS_SCRIPTABLE NS_IMETHOD SelectAll(void) = 0;

  /* long getRangeCount (); */
  NS_SCRIPTABLE NS_IMETHOD GetRangeCount(PRInt32 *_retval NS_OUTPARAM) = 0;

  /* void getRangeAt (in long i, out long min, out long max); */
  NS_SCRIPTABLE NS_IMETHOD GetRangeAt(PRInt32 i, PRInt32 *min NS_OUTPARAM, PRInt32 *max NS_OUTPARAM) = 0;

  /* void invalidateSelection (); */
  NS_SCRIPTABLE NS_IMETHOD InvalidateSelection(void) = 0;

  /* void adjustSelection (in long index, in long count); */
  NS_SCRIPTABLE NS_IMETHOD AdjustSelection(PRInt32 index, PRInt32 count) = 0;

  /* attribute boolean selectEventsSuppressed; */
  NS_SCRIPTABLE NS_IMETHOD GetSelectEventsSuppressed(bool *aSelectEventsSuppressed) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetSelectEventsSuppressed(bool aSelectEventsSuppressed) = 0;

  /* attribute long currentIndex; */
  NS_SCRIPTABLE NS_IMETHOD GetCurrentIndex(PRInt32 *aCurrentIndex) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetCurrentIndex(PRInt32 aCurrentIndex) = 0;

  /* attribute nsITreeColumn currentColumn; */
  NS_SCRIPTABLE NS_IMETHOD GetCurrentColumn(nsITreeColumn * *aCurrentColumn) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetCurrentColumn(nsITreeColumn *aCurrentColumn) = 0;

  /* readonly attribute long shiftSelectPivot; */
  NS_SCRIPTABLE NS_IMETHOD GetShiftSelectPivot(PRInt32 *aShiftSelectPivot) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsITreeSelection, NS_ITREESELECTION_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSITREESELECTION \
  NS_SCRIPTABLE NS_IMETHOD GetTree(nsITreeBoxObject * *aTree); \
  NS_SCRIPTABLE NS_IMETHOD SetTree(nsITreeBoxObject *aTree); \
  NS_SCRIPTABLE NS_IMETHOD GetSingle(bool *aSingle); \
  NS_SCRIPTABLE NS_IMETHOD GetCount(PRInt32 *aCount); \
  NS_SCRIPTABLE NS_IMETHOD IsSelected(PRInt32 index, bool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Select(PRInt32 index); \
  NS_SCRIPTABLE NS_IMETHOD TimedSelect(PRInt32 index, PRInt32 delay); \
  NS_SCRIPTABLE NS_IMETHOD ToggleSelect(PRInt32 index); \
  NS_SCRIPTABLE NS_IMETHOD RangedSelect(PRInt32 startIndex, PRInt32 endIndex, bool augment); \
  NS_SCRIPTABLE NS_IMETHOD ClearRange(PRInt32 startIndex, PRInt32 endIndex); \
  NS_SCRIPTABLE NS_IMETHOD ClearSelection(void); \
  NS_SCRIPTABLE NS_IMETHOD InvertSelection(void); \
  NS_SCRIPTABLE NS_IMETHOD SelectAll(void); \
  NS_SCRIPTABLE NS_IMETHOD GetRangeCount(PRInt32 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetRangeAt(PRInt32 i, PRInt32 *min NS_OUTPARAM, PRInt32 *max NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD InvalidateSelection(void); \
  NS_SCRIPTABLE NS_IMETHOD AdjustSelection(PRInt32 index, PRInt32 count); \
  NS_SCRIPTABLE NS_IMETHOD GetSelectEventsSuppressed(bool *aSelectEventsSuppressed); \
  NS_SCRIPTABLE NS_IMETHOD SetSelectEventsSuppressed(bool aSelectEventsSuppressed); \
  NS_SCRIPTABLE NS_IMETHOD GetCurrentIndex(PRInt32 *aCurrentIndex); \
  NS_SCRIPTABLE NS_IMETHOD SetCurrentIndex(PRInt32 aCurrentIndex); \
  NS_SCRIPTABLE NS_IMETHOD GetCurrentColumn(nsITreeColumn * *aCurrentColumn); \
  NS_SCRIPTABLE NS_IMETHOD SetCurrentColumn(nsITreeColumn *aCurrentColumn); \
  NS_SCRIPTABLE NS_IMETHOD GetShiftSelectPivot(PRInt32 *aShiftSelectPivot); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSITREESELECTION(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetTree(nsITreeBoxObject * *aTree) { return _to GetTree(aTree); } \
  NS_SCRIPTABLE NS_IMETHOD SetTree(nsITreeBoxObject *aTree) { return _to SetTree(aTree); } \
  NS_SCRIPTABLE NS_IMETHOD GetSingle(bool *aSingle) { return _to GetSingle(aSingle); } \
  NS_SCRIPTABLE NS_IMETHOD GetCount(PRInt32 *aCount) { return _to GetCount(aCount); } \
  NS_SCRIPTABLE NS_IMETHOD IsSelected(PRInt32 index, bool *_retval NS_OUTPARAM) { return _to IsSelected(index, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Select(PRInt32 index) { return _to Select(index); } \
  NS_SCRIPTABLE NS_IMETHOD TimedSelect(PRInt32 index, PRInt32 delay) { return _to TimedSelect(index, delay); } \
  NS_SCRIPTABLE NS_IMETHOD ToggleSelect(PRInt32 index) { return _to ToggleSelect(index); } \
  NS_SCRIPTABLE NS_IMETHOD RangedSelect(PRInt32 startIndex, PRInt32 endIndex, bool augment) { return _to RangedSelect(startIndex, endIndex, augment); } \
  NS_SCRIPTABLE NS_IMETHOD ClearRange(PRInt32 startIndex, PRInt32 endIndex) { return _to ClearRange(startIndex, endIndex); } \
  NS_SCRIPTABLE NS_IMETHOD ClearSelection(void) { return _to ClearSelection(); } \
  NS_SCRIPTABLE NS_IMETHOD InvertSelection(void) { return _to InvertSelection(); } \
  NS_SCRIPTABLE NS_IMETHOD SelectAll(void) { return _to SelectAll(); } \
  NS_SCRIPTABLE NS_IMETHOD GetRangeCount(PRInt32 *_retval NS_OUTPARAM) { return _to GetRangeCount(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetRangeAt(PRInt32 i, PRInt32 *min NS_OUTPARAM, PRInt32 *max NS_OUTPARAM) { return _to GetRangeAt(i, min, max); } \
  NS_SCRIPTABLE NS_IMETHOD InvalidateSelection(void) { return _to InvalidateSelection(); } \
  NS_SCRIPTABLE NS_IMETHOD AdjustSelection(PRInt32 index, PRInt32 count) { return _to AdjustSelection(index, count); } \
  NS_SCRIPTABLE NS_IMETHOD GetSelectEventsSuppressed(bool *aSelectEventsSuppressed) { return _to GetSelectEventsSuppressed(aSelectEventsSuppressed); } \
  NS_SCRIPTABLE NS_IMETHOD SetSelectEventsSuppressed(bool aSelectEventsSuppressed) { return _to SetSelectEventsSuppressed(aSelectEventsSuppressed); } \
  NS_SCRIPTABLE NS_IMETHOD GetCurrentIndex(PRInt32 *aCurrentIndex) { return _to GetCurrentIndex(aCurrentIndex); } \
  NS_SCRIPTABLE NS_IMETHOD SetCurrentIndex(PRInt32 aCurrentIndex) { return _to SetCurrentIndex(aCurrentIndex); } \
  NS_SCRIPTABLE NS_IMETHOD GetCurrentColumn(nsITreeColumn * *aCurrentColumn) { return _to GetCurrentColumn(aCurrentColumn); } \
  NS_SCRIPTABLE NS_IMETHOD SetCurrentColumn(nsITreeColumn *aCurrentColumn) { return _to SetCurrentColumn(aCurrentColumn); } \
  NS_SCRIPTABLE NS_IMETHOD GetShiftSelectPivot(PRInt32 *aShiftSelectPivot) { return _to GetShiftSelectPivot(aShiftSelectPivot); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSITREESELECTION(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetTree(nsITreeBoxObject * *aTree) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTree(aTree); } \
  NS_SCRIPTABLE NS_IMETHOD SetTree(nsITreeBoxObject *aTree) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetTree(aTree); } \
  NS_SCRIPTABLE NS_IMETHOD GetSingle(bool *aSingle) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSingle(aSingle); } \
  NS_SCRIPTABLE NS_IMETHOD GetCount(PRInt32 *aCount) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCount(aCount); } \
  NS_SCRIPTABLE NS_IMETHOD IsSelected(PRInt32 index, bool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsSelected(index, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Select(PRInt32 index) { return !_to ? NS_ERROR_NULL_POINTER : _to->Select(index); } \
  NS_SCRIPTABLE NS_IMETHOD TimedSelect(PRInt32 index, PRInt32 delay) { return !_to ? NS_ERROR_NULL_POINTER : _to->TimedSelect(index, delay); } \
  NS_SCRIPTABLE NS_IMETHOD ToggleSelect(PRInt32 index) { return !_to ? NS_ERROR_NULL_POINTER : _to->ToggleSelect(index); } \
  NS_SCRIPTABLE NS_IMETHOD RangedSelect(PRInt32 startIndex, PRInt32 endIndex, bool augment) { return !_to ? NS_ERROR_NULL_POINTER : _to->RangedSelect(startIndex, endIndex, augment); } \
  NS_SCRIPTABLE NS_IMETHOD ClearRange(PRInt32 startIndex, PRInt32 endIndex) { return !_to ? NS_ERROR_NULL_POINTER : _to->ClearRange(startIndex, endIndex); } \
  NS_SCRIPTABLE NS_IMETHOD ClearSelection(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->ClearSelection(); } \
  NS_SCRIPTABLE NS_IMETHOD InvertSelection(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->InvertSelection(); } \
  NS_SCRIPTABLE NS_IMETHOD SelectAll(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->SelectAll(); } \
  NS_SCRIPTABLE NS_IMETHOD GetRangeCount(PRInt32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRangeCount(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetRangeAt(PRInt32 i, PRInt32 *min NS_OUTPARAM, PRInt32 *max NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRangeAt(i, min, max); } \
  NS_SCRIPTABLE NS_IMETHOD InvalidateSelection(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->InvalidateSelection(); } \
  NS_SCRIPTABLE NS_IMETHOD AdjustSelection(PRInt32 index, PRInt32 count) { return !_to ? NS_ERROR_NULL_POINTER : _to->AdjustSelection(index, count); } \
  NS_SCRIPTABLE NS_IMETHOD GetSelectEventsSuppressed(bool *aSelectEventsSuppressed) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSelectEventsSuppressed(aSelectEventsSuppressed); } \
  NS_SCRIPTABLE NS_IMETHOD SetSelectEventsSuppressed(bool aSelectEventsSuppressed) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSelectEventsSuppressed(aSelectEventsSuppressed); } \
  NS_SCRIPTABLE NS_IMETHOD GetCurrentIndex(PRInt32 *aCurrentIndex) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCurrentIndex(aCurrentIndex); } \
  NS_SCRIPTABLE NS_IMETHOD SetCurrentIndex(PRInt32 aCurrentIndex) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetCurrentIndex(aCurrentIndex); } \
  NS_SCRIPTABLE NS_IMETHOD GetCurrentColumn(nsITreeColumn * *aCurrentColumn) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCurrentColumn(aCurrentColumn); } \
  NS_SCRIPTABLE NS_IMETHOD SetCurrentColumn(nsITreeColumn *aCurrentColumn) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetCurrentColumn(aCurrentColumn); } \
  NS_SCRIPTABLE NS_IMETHOD GetShiftSelectPivot(PRInt32 *aShiftSelectPivot) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetShiftSelectPivot(aShiftSelectPivot); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsTreeSelection : public nsITreeSelection
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSITREESELECTION

  nsTreeSelection();

private:
  ~nsTreeSelection();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsTreeSelection, nsITreeSelection)

nsTreeSelection::nsTreeSelection()
{
  /* member initializers and constructor code */
}

nsTreeSelection::~nsTreeSelection()
{
  /* destructor code */
}

/* attribute nsITreeBoxObject tree; */
NS_IMETHODIMP nsTreeSelection::GetTree(nsITreeBoxObject * *aTree)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsTreeSelection::SetTree(nsITreeBoxObject *aTree)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean single; */
NS_IMETHODIMP nsTreeSelection::GetSingle(bool *aSingle)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long count; */
NS_IMETHODIMP nsTreeSelection::GetCount(PRInt32 *aCount)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean isSelected (in long index); */
NS_IMETHODIMP nsTreeSelection::IsSelected(PRInt32 index, bool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void select (in long index); */
NS_IMETHODIMP nsTreeSelection::Select(PRInt32 index)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void timedSelect (in long index, in long delay); */
NS_IMETHODIMP nsTreeSelection::TimedSelect(PRInt32 index, PRInt32 delay)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void toggleSelect (in long index); */
NS_IMETHODIMP nsTreeSelection::ToggleSelect(PRInt32 index)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void rangedSelect (in long startIndex, in long endIndex, in boolean augment); */
NS_IMETHODIMP nsTreeSelection::RangedSelect(PRInt32 startIndex, PRInt32 endIndex, bool augment)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void clearRange (in long startIndex, in long endIndex); */
NS_IMETHODIMP nsTreeSelection::ClearRange(PRInt32 startIndex, PRInt32 endIndex)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void clearSelection (); */
NS_IMETHODIMP nsTreeSelection::ClearSelection()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void invertSelection (); */
NS_IMETHODIMP nsTreeSelection::InvertSelection()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void selectAll (); */
NS_IMETHODIMP nsTreeSelection::SelectAll()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* long getRangeCount (); */
NS_IMETHODIMP nsTreeSelection::GetRangeCount(PRInt32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void getRangeAt (in long i, out long min, out long max); */
NS_IMETHODIMP nsTreeSelection::GetRangeAt(PRInt32 i, PRInt32 *min NS_OUTPARAM, PRInt32 *max NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void invalidateSelection (); */
NS_IMETHODIMP nsTreeSelection::InvalidateSelection()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void adjustSelection (in long index, in long count); */
NS_IMETHODIMP nsTreeSelection::AdjustSelection(PRInt32 index, PRInt32 count)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean selectEventsSuppressed; */
NS_IMETHODIMP nsTreeSelection::GetSelectEventsSuppressed(bool *aSelectEventsSuppressed)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsTreeSelection::SetSelectEventsSuppressed(bool aSelectEventsSuppressed)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute long currentIndex; */
NS_IMETHODIMP nsTreeSelection::GetCurrentIndex(PRInt32 *aCurrentIndex)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsTreeSelection::SetCurrentIndex(PRInt32 aCurrentIndex)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsITreeColumn currentColumn; */
NS_IMETHODIMP nsTreeSelection::GetCurrentColumn(nsITreeColumn * *aCurrentColumn)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsTreeSelection::SetCurrentColumn(nsITreeColumn *aCurrentColumn)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long shiftSelectPivot; */
NS_IMETHODIMP nsTreeSelection::GetShiftSelectPivot(PRInt32 *aShiftSelectPivot)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsINativeTreeSelection */
#define NS_INATIVETREESELECTION_IID_STR "1bd59678-5cb3-4316-b246-31a91b19aabe"

#define NS_INATIVETREESELECTION_IID \
  {0x1bd59678, 0x5cb3, 0x4316, \
    { 0xb2, 0x46, 0x31, 0xa9, 0x1b, 0x19, 0xaa, 0xbe }}

class NS_NO_VTABLE nsINativeTreeSelection : public nsITreeSelection {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_INATIVETREESELECTION_IID)

  /* [noscript] void ensureNative (); */
  NS_IMETHOD EnsureNative(void) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsINativeTreeSelection, NS_INATIVETREESELECTION_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSINATIVETREESELECTION \
  NS_IMETHOD EnsureNative(void); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSINATIVETREESELECTION(_to) \
  NS_IMETHOD EnsureNative(void) { return _to EnsureNative(); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSINATIVETREESELECTION(_to) \
  NS_IMETHOD EnsureNative(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->EnsureNative(); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsNativeTreeSelection : public nsINativeTreeSelection
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSINATIVETREESELECTION

  nsNativeTreeSelection();

private:
  ~nsNativeTreeSelection();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsNativeTreeSelection, nsINativeTreeSelection)

nsNativeTreeSelection::nsNativeTreeSelection()
{
  /* member initializers and constructor code */
}

nsNativeTreeSelection::~nsNativeTreeSelection()
{
  /* destructor code */
}

/* [noscript] void ensureNative (); */
NS_IMETHODIMP nsNativeTreeSelection::EnsureNative()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsITreeSelection_h__ */
