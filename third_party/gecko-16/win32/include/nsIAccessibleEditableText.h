/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/accessible/public/nsIAccessibleEditableText.idl
 */

#ifndef __gen_nsIAccessibleEditableText_h__
#define __gen_nsIAccessibleEditableText_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIEditor; /* forward declaration */


/* starting interface:    nsIAccessibleEditableText */
#define NS_IACCESSIBLEEDITABLETEXT_IID_STR "e242d495-5cde-4b1c-8c84-2525b14939f5"

#define NS_IACCESSIBLEEDITABLETEXT_IID \
  {0xe242d495, 0x5cde, 0x4b1c, \
    { 0x8c, 0x84, 0x25, 0x25, 0xb1, 0x49, 0x39, 0xf5 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIAccessibleEditableText : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IACCESSIBLEEDITABLETEXT_IID)

  /* void setAttributes (in long startPos, in long endPos, in nsISupports attributes); */
  NS_SCRIPTABLE NS_IMETHOD SetAttributes(PRInt32 startPos, PRInt32 endPos, nsISupports *attributes) = 0;

  /* void setTextContents (in AString text); */
  NS_SCRIPTABLE NS_IMETHOD SetTextContents(const nsAString & text) = 0;

  /* void insertText (in AString text, in long position); */
  NS_SCRIPTABLE NS_IMETHOD InsertText(const nsAString & text, PRInt32 position) = 0;

  /* void copyText (in long startPos, in long endPos); */
  NS_SCRIPTABLE NS_IMETHOD CopyText(PRInt32 startPos, PRInt32 endPos) = 0;

  /* void cutText (in long startPos, in long endPos); */
  NS_SCRIPTABLE NS_IMETHOD CutText(PRInt32 startPos, PRInt32 endPos) = 0;

  /* void deleteText (in long startPos, in long endPos); */
  NS_SCRIPTABLE NS_IMETHOD DeleteText(PRInt32 startPos, PRInt32 endPos) = 0;

  /* void pasteText (in long position); */
  NS_SCRIPTABLE NS_IMETHOD PasteText(PRInt32 position) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIAccessibleEditableText, NS_IACCESSIBLEEDITABLETEXT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIACCESSIBLEEDITABLETEXT \
  NS_SCRIPTABLE NS_IMETHOD SetAttributes(PRInt32 startPos, PRInt32 endPos, nsISupports *attributes); \
  NS_SCRIPTABLE NS_IMETHOD SetTextContents(const nsAString & text); \
  NS_SCRIPTABLE NS_IMETHOD InsertText(const nsAString & text, PRInt32 position); \
  NS_SCRIPTABLE NS_IMETHOD CopyText(PRInt32 startPos, PRInt32 endPos); \
  NS_SCRIPTABLE NS_IMETHOD CutText(PRInt32 startPos, PRInt32 endPos); \
  NS_SCRIPTABLE NS_IMETHOD DeleteText(PRInt32 startPos, PRInt32 endPos); \
  NS_SCRIPTABLE NS_IMETHOD PasteText(PRInt32 position); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIACCESSIBLEEDITABLETEXT(_to) \
  NS_SCRIPTABLE NS_IMETHOD SetAttributes(PRInt32 startPos, PRInt32 endPos, nsISupports *attributes) { return _to SetAttributes(startPos, endPos, attributes); } \
  NS_SCRIPTABLE NS_IMETHOD SetTextContents(const nsAString & text) { return _to SetTextContents(text); } \
  NS_SCRIPTABLE NS_IMETHOD InsertText(const nsAString & text, PRInt32 position) { return _to InsertText(text, position); } \
  NS_SCRIPTABLE NS_IMETHOD CopyText(PRInt32 startPos, PRInt32 endPos) { return _to CopyText(startPos, endPos); } \
  NS_SCRIPTABLE NS_IMETHOD CutText(PRInt32 startPos, PRInt32 endPos) { return _to CutText(startPos, endPos); } \
  NS_SCRIPTABLE NS_IMETHOD DeleteText(PRInt32 startPos, PRInt32 endPos) { return _to DeleteText(startPos, endPos); } \
  NS_SCRIPTABLE NS_IMETHOD PasteText(PRInt32 position) { return _to PasteText(position); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIACCESSIBLEEDITABLETEXT(_to) \
  NS_SCRIPTABLE NS_IMETHOD SetAttributes(PRInt32 startPos, PRInt32 endPos, nsISupports *attributes) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAttributes(startPos, endPos, attributes); } \
  NS_SCRIPTABLE NS_IMETHOD SetTextContents(const nsAString & text) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetTextContents(text); } \
  NS_SCRIPTABLE NS_IMETHOD InsertText(const nsAString & text, PRInt32 position) { return !_to ? NS_ERROR_NULL_POINTER : _to->InsertText(text, position); } \
  NS_SCRIPTABLE NS_IMETHOD CopyText(PRInt32 startPos, PRInt32 endPos) { return !_to ? NS_ERROR_NULL_POINTER : _to->CopyText(startPos, endPos); } \
  NS_SCRIPTABLE NS_IMETHOD CutText(PRInt32 startPos, PRInt32 endPos) { return !_to ? NS_ERROR_NULL_POINTER : _to->CutText(startPos, endPos); } \
  NS_SCRIPTABLE NS_IMETHOD DeleteText(PRInt32 startPos, PRInt32 endPos) { return !_to ? NS_ERROR_NULL_POINTER : _to->DeleteText(startPos, endPos); } \
  NS_SCRIPTABLE NS_IMETHOD PasteText(PRInt32 position) { return !_to ? NS_ERROR_NULL_POINTER : _to->PasteText(position); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsAccessibleEditableText : public nsIAccessibleEditableText
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIACCESSIBLEEDITABLETEXT

  nsAccessibleEditableText();

private:
  ~nsAccessibleEditableText();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsAccessibleEditableText, nsIAccessibleEditableText)

nsAccessibleEditableText::nsAccessibleEditableText()
{
  /* member initializers and constructor code */
}

nsAccessibleEditableText::~nsAccessibleEditableText()
{
  /* destructor code */
}

/* void setAttributes (in long startPos, in long endPos, in nsISupports attributes); */
NS_IMETHODIMP nsAccessibleEditableText::SetAttributes(PRInt32 startPos, PRInt32 endPos, nsISupports *attributes)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setTextContents (in AString text); */
NS_IMETHODIMP nsAccessibleEditableText::SetTextContents(const nsAString & text)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void insertText (in AString text, in long position); */
NS_IMETHODIMP nsAccessibleEditableText::InsertText(const nsAString & text, PRInt32 position)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void copyText (in long startPos, in long endPos); */
NS_IMETHODIMP nsAccessibleEditableText::CopyText(PRInt32 startPos, PRInt32 endPos)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void cutText (in long startPos, in long endPos); */
NS_IMETHODIMP nsAccessibleEditableText::CutText(PRInt32 startPos, PRInt32 endPos)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void deleteText (in long startPos, in long endPos); */
NS_IMETHODIMP nsAccessibleEditableText::DeleteText(PRInt32 startPos, PRInt32 endPos)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void pasteText (in long position); */
NS_IMETHODIMP nsAccessibleEditableText::PasteText(PRInt32 position)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIAccessibleEditableText_h__ */
