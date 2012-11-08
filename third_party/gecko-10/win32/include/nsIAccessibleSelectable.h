/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/accessible/public/nsIAccessibleSelectable.idl
 */

#ifndef __gen_nsIAccessibleSelectable_h__
#define __gen_nsIAccessibleSelectable_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#ifndef __gen_nsIAccessible_h__
#include "nsIAccessible.h"
#endif

#ifndef __gen_nsIArray_h__
#include "nsIArray.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIAccessibleSelectable */
#define NS_IACCESSIBLESELECTABLE_IID_STR "34d268d6-1dd2-11b2-9d63-83a5e0ada290"

#define NS_IACCESSIBLESELECTABLE_IID \
  {0x34d268d6, 0x1dd2, 0x11b2, \
    { 0x9d, 0x63, 0x83, 0xa5, 0xe0, 0xad, 0xa2, 0x90 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIAccessibleSelectable : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IACCESSIBLESELECTABLE_IID)

  enum { eSelection_Add = 0U };

  enum { eSelection_Remove = 1U };

  enum { eSelection_GetState = 2U };

  /* nsIArray GetSelectedChildren (); */
  NS_SCRIPTABLE NS_IMETHOD GetSelectedChildren(nsIArray * *_retval NS_OUTPARAM) = 0;

  /* readonly attribute long selectionCount; */
  NS_SCRIPTABLE NS_IMETHOD GetSelectionCount(PRInt32 *aSelectionCount) = 0;

  /* void addChildToSelection (in long index); */
  NS_SCRIPTABLE NS_IMETHOD AddChildToSelection(PRInt32 index) = 0;

  /* void removeChildFromSelection (in long index); */
  NS_SCRIPTABLE NS_IMETHOD RemoveChildFromSelection(PRInt32 index) = 0;

  /* void clearSelection (); */
  NS_SCRIPTABLE NS_IMETHOD ClearSelection(void) = 0;

  /* nsIAccessible refSelection (in long index); */
  NS_SCRIPTABLE NS_IMETHOD RefSelection(PRInt32 index, nsIAccessible * *_retval NS_OUTPARAM) = 0;

  /* boolean isChildSelected (in long index); */
  NS_SCRIPTABLE NS_IMETHOD IsChildSelected(PRInt32 index, bool *_retval NS_OUTPARAM) = 0;

  /* boolean selectAllSelection (); */
  NS_SCRIPTABLE NS_IMETHOD SelectAllSelection(bool *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIAccessibleSelectable, NS_IACCESSIBLESELECTABLE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIACCESSIBLESELECTABLE \
  NS_SCRIPTABLE NS_IMETHOD GetSelectedChildren(nsIArray * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetSelectionCount(PRInt32 *aSelectionCount); \
  NS_SCRIPTABLE NS_IMETHOD AddChildToSelection(PRInt32 index); \
  NS_SCRIPTABLE NS_IMETHOD RemoveChildFromSelection(PRInt32 index); \
  NS_SCRIPTABLE NS_IMETHOD ClearSelection(void); \
  NS_SCRIPTABLE NS_IMETHOD RefSelection(PRInt32 index, nsIAccessible * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD IsChildSelected(PRInt32 index, bool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SelectAllSelection(bool *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIACCESSIBLESELECTABLE(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetSelectedChildren(nsIArray * *_retval NS_OUTPARAM) { return _to GetSelectedChildren(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetSelectionCount(PRInt32 *aSelectionCount) { return _to GetSelectionCount(aSelectionCount); } \
  NS_SCRIPTABLE NS_IMETHOD AddChildToSelection(PRInt32 index) { return _to AddChildToSelection(index); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveChildFromSelection(PRInt32 index) { return _to RemoveChildFromSelection(index); } \
  NS_SCRIPTABLE NS_IMETHOD ClearSelection(void) { return _to ClearSelection(); } \
  NS_SCRIPTABLE NS_IMETHOD RefSelection(PRInt32 index, nsIAccessible * *_retval NS_OUTPARAM) { return _to RefSelection(index, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsChildSelected(PRInt32 index, bool *_retval NS_OUTPARAM) { return _to IsChildSelected(index, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SelectAllSelection(bool *_retval NS_OUTPARAM) { return _to SelectAllSelection(_retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIACCESSIBLESELECTABLE(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetSelectedChildren(nsIArray * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSelectedChildren(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetSelectionCount(PRInt32 *aSelectionCount) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSelectionCount(aSelectionCount); } \
  NS_SCRIPTABLE NS_IMETHOD AddChildToSelection(PRInt32 index) { return !_to ? NS_ERROR_NULL_POINTER : _to->AddChildToSelection(index); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveChildFromSelection(PRInt32 index) { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveChildFromSelection(index); } \
  NS_SCRIPTABLE NS_IMETHOD ClearSelection(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->ClearSelection(); } \
  NS_SCRIPTABLE NS_IMETHOD RefSelection(PRInt32 index, nsIAccessible * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->RefSelection(index, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsChildSelected(PRInt32 index, bool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsChildSelected(index, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SelectAllSelection(bool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->SelectAllSelection(_retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsAccessibleSelectable : public nsIAccessibleSelectable
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIACCESSIBLESELECTABLE

  nsAccessibleSelectable();

private:
  ~nsAccessibleSelectable();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsAccessibleSelectable, nsIAccessibleSelectable)

nsAccessibleSelectable::nsAccessibleSelectable()
{
  /* member initializers and constructor code */
}

nsAccessibleSelectable::~nsAccessibleSelectable()
{
  /* destructor code */
}

/* nsIArray GetSelectedChildren (); */
NS_IMETHODIMP nsAccessibleSelectable::GetSelectedChildren(nsIArray * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long selectionCount; */
NS_IMETHODIMP nsAccessibleSelectable::GetSelectionCount(PRInt32 *aSelectionCount)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void addChildToSelection (in long index); */
NS_IMETHODIMP nsAccessibleSelectable::AddChildToSelection(PRInt32 index)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void removeChildFromSelection (in long index); */
NS_IMETHODIMP nsAccessibleSelectable::RemoveChildFromSelection(PRInt32 index)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void clearSelection (); */
NS_IMETHODIMP nsAccessibleSelectable::ClearSelection()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIAccessible refSelection (in long index); */
NS_IMETHODIMP nsAccessibleSelectable::RefSelection(PRInt32 index, nsIAccessible * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean isChildSelected (in long index); */
NS_IMETHODIMP nsAccessibleSelectable::IsChildSelected(PRInt32 index, bool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean selectAllSelection (); */
NS_IMETHODIMP nsAccessibleSelectable::SelectAllSelection(bool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIAccessibleSelectable_h__ */
