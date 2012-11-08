/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/editor/idl/nsIPlaintextEditor.idl
 */

#ifndef __gen_nsIPlaintextEditor_h__
#define __gen_nsIPlaintextEditor_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIPlaintextEditor */
#define NS_IPLAINTEXTEDITOR_IID_STR "07b6d070-ccea-4a00-84b4-f4b94dd9eb52"

#define NS_IPLAINTEXTEDITOR_IID \
  {0x07b6d070, 0xccea, 0x4a00, \
    { 0x84, 0xb4, 0xf4, 0xb9, 0x4d, 0xd9, 0xeb, 0x52 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIPlaintextEditor : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IPLAINTEXTEDITOR_IID)

  enum {
    eEditorPlaintextMask = 1,
    eEditorSingleLineMask = 2,
    eEditorPasswordMask = 4,
    eEditorReadonlyMask = 8,
    eEditorDisabledMask = 16,
    eEditorFilterInputMask = 32,
    eEditorMailMask = 64,
    eEditorEnableWrapHackMask = 128,
    eEditorWidgetMask = 256,
    eEditorNoCSSMask = 512,
    eEditorAllowInteraction = 1024,
    eEditorDontEchoPassword = 2048,
    eEditorRightToLeft = 4096,
    eEditorLeftToRight = 8192,
    eEditorSkipSpellCheck = 16384,
    eNewlinesPasteIntact = 0,
    eNewlinesPasteToFirst = 1,
    eNewlinesReplaceWithSpaces = 2,
    eNewlinesStrip = 3,
    eNewlinesReplaceWithCommas = 4,
    eNewlinesStripSurroundingWhitespace = 5
  };

  /* readonly attribute long textLength; */
  NS_SCRIPTABLE NS_IMETHOD GetTextLength(PRInt32 *aTextLength) = 0;

  /* attribute long maxTextLength; */
  NS_SCRIPTABLE NS_IMETHOD GetMaxTextLength(PRInt32 *aMaxTextLength) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetMaxTextLength(PRInt32 aMaxTextLength) = 0;

  /* attribute long wrapWidth; */
  NS_SCRIPTABLE NS_IMETHOD GetWrapWidth(PRInt32 *aWrapWidth) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetWrapWidth(PRInt32 aWrapWidth) = 0;

  /* void setWrapColumn (in long aWrapColumn); */
  NS_SCRIPTABLE NS_IMETHOD SetWrapColumn(PRInt32 aWrapColumn) = 0;

  /* attribute long newlineHandling; */
  NS_SCRIPTABLE NS_IMETHOD GetNewlineHandling(PRInt32 *aNewlineHandling) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetNewlineHandling(PRInt32 aNewlineHandling) = 0;

  /* void insertText (in DOMString aStringToInsert); */
  NS_SCRIPTABLE NS_IMETHOD InsertText(const nsAString & aStringToInsert) = 0;

  /* void insertLineBreak (); */
  NS_SCRIPTABLE NS_IMETHOD InsertLineBreak(void) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIPlaintextEditor, NS_IPLAINTEXTEDITOR_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIPLAINTEXTEDITOR \
  NS_SCRIPTABLE NS_IMETHOD GetTextLength(PRInt32 *aTextLength); \
  NS_SCRIPTABLE NS_IMETHOD GetMaxTextLength(PRInt32 *aMaxTextLength); \
  NS_SCRIPTABLE NS_IMETHOD SetMaxTextLength(PRInt32 aMaxTextLength); \
  NS_SCRIPTABLE NS_IMETHOD GetWrapWidth(PRInt32 *aWrapWidth); \
  NS_SCRIPTABLE NS_IMETHOD SetWrapWidth(PRInt32 aWrapWidth); \
  NS_SCRIPTABLE NS_IMETHOD SetWrapColumn(PRInt32 aWrapColumn); \
  NS_SCRIPTABLE NS_IMETHOD GetNewlineHandling(PRInt32 *aNewlineHandling); \
  NS_SCRIPTABLE NS_IMETHOD SetNewlineHandling(PRInt32 aNewlineHandling); \
  NS_SCRIPTABLE NS_IMETHOD InsertText(const nsAString & aStringToInsert); \
  NS_SCRIPTABLE NS_IMETHOD InsertLineBreak(void); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIPLAINTEXTEDITOR(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetTextLength(PRInt32 *aTextLength) { return _to GetTextLength(aTextLength); } \
  NS_SCRIPTABLE NS_IMETHOD GetMaxTextLength(PRInt32 *aMaxTextLength) { return _to GetMaxTextLength(aMaxTextLength); } \
  NS_SCRIPTABLE NS_IMETHOD SetMaxTextLength(PRInt32 aMaxTextLength) { return _to SetMaxTextLength(aMaxTextLength); } \
  NS_SCRIPTABLE NS_IMETHOD GetWrapWidth(PRInt32 *aWrapWidth) { return _to GetWrapWidth(aWrapWidth); } \
  NS_SCRIPTABLE NS_IMETHOD SetWrapWidth(PRInt32 aWrapWidth) { return _to SetWrapWidth(aWrapWidth); } \
  NS_SCRIPTABLE NS_IMETHOD SetWrapColumn(PRInt32 aWrapColumn) { return _to SetWrapColumn(aWrapColumn); } \
  NS_SCRIPTABLE NS_IMETHOD GetNewlineHandling(PRInt32 *aNewlineHandling) { return _to GetNewlineHandling(aNewlineHandling); } \
  NS_SCRIPTABLE NS_IMETHOD SetNewlineHandling(PRInt32 aNewlineHandling) { return _to SetNewlineHandling(aNewlineHandling); } \
  NS_SCRIPTABLE NS_IMETHOD InsertText(const nsAString & aStringToInsert) { return _to InsertText(aStringToInsert); } \
  NS_SCRIPTABLE NS_IMETHOD InsertLineBreak(void) { return _to InsertLineBreak(); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIPLAINTEXTEDITOR(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetTextLength(PRInt32 *aTextLength) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTextLength(aTextLength); } \
  NS_SCRIPTABLE NS_IMETHOD GetMaxTextLength(PRInt32 *aMaxTextLength) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMaxTextLength(aMaxTextLength); } \
  NS_SCRIPTABLE NS_IMETHOD SetMaxTextLength(PRInt32 aMaxTextLength) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetMaxTextLength(aMaxTextLength); } \
  NS_SCRIPTABLE NS_IMETHOD GetWrapWidth(PRInt32 *aWrapWidth) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetWrapWidth(aWrapWidth); } \
  NS_SCRIPTABLE NS_IMETHOD SetWrapWidth(PRInt32 aWrapWidth) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetWrapWidth(aWrapWidth); } \
  NS_SCRIPTABLE NS_IMETHOD SetWrapColumn(PRInt32 aWrapColumn) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetWrapColumn(aWrapColumn); } \
  NS_SCRIPTABLE NS_IMETHOD GetNewlineHandling(PRInt32 *aNewlineHandling) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNewlineHandling(aNewlineHandling); } \
  NS_SCRIPTABLE NS_IMETHOD SetNewlineHandling(PRInt32 aNewlineHandling) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetNewlineHandling(aNewlineHandling); } \
  NS_SCRIPTABLE NS_IMETHOD InsertText(const nsAString & aStringToInsert) { return !_to ? NS_ERROR_NULL_POINTER : _to->InsertText(aStringToInsert); } \
  NS_SCRIPTABLE NS_IMETHOD InsertLineBreak(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->InsertLineBreak(); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsPlaintextEditor : public nsIPlaintextEditor
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIPLAINTEXTEDITOR

  nsPlaintextEditor();

private:
  ~nsPlaintextEditor();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsPlaintextEditor, nsIPlaintextEditor)

nsPlaintextEditor::nsPlaintextEditor()
{
  /* member initializers and constructor code */
}

nsPlaintextEditor::~nsPlaintextEditor()
{
  /* destructor code */
}

/* readonly attribute long textLength; */
NS_IMETHODIMP nsPlaintextEditor::GetTextLength(PRInt32 *aTextLength)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute long maxTextLength; */
NS_IMETHODIMP nsPlaintextEditor::GetMaxTextLength(PRInt32 *aMaxTextLength)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsPlaintextEditor::SetMaxTextLength(PRInt32 aMaxTextLength)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute long wrapWidth; */
NS_IMETHODIMP nsPlaintextEditor::GetWrapWidth(PRInt32 *aWrapWidth)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsPlaintextEditor::SetWrapWidth(PRInt32 aWrapWidth)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setWrapColumn (in long aWrapColumn); */
NS_IMETHODIMP nsPlaintextEditor::SetWrapColumn(PRInt32 aWrapColumn)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute long newlineHandling; */
NS_IMETHODIMP nsPlaintextEditor::GetNewlineHandling(PRInt32 *aNewlineHandling)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsPlaintextEditor::SetNewlineHandling(PRInt32 aNewlineHandling)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void insertText (in DOMString aStringToInsert); */
NS_IMETHODIMP nsPlaintextEditor::InsertText(const nsAString & aStringToInsert)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void insertLineBreak (); */
NS_IMETHODIMP nsPlaintextEditor::InsertLineBreak()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIPlaintextEditor_h__ */
