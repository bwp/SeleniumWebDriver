/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/interfaces/core/nsIDOMElement.idl
 */

#ifndef __gen_nsIDOMElement_h__
#define __gen_nsIDOMElement_h__


#ifndef __gen_nsIDOMNode_h__
#include "nsIDOMNode.h"
#endif

#include "jspubtd.h"

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIDOMElement */
#define NS_IDOMELEMENT_IID_STR "69d44ce2-b544-49a8-bb5f-87804b971ee4"

#define NS_IDOMELEMENT_IID \
  {0x69d44ce2, 0xb544, 0x49a8, \
    { 0xbb, 0x5f, 0x87, 0x80, 0x4b, 0x97, 0x1e, 0xe4 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMElement : public nsIDOMNode {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMELEMENT_IID)

  /* readonly attribute DOMString tagName; */
  NS_SCRIPTABLE NS_IMETHOD GetTagName(nsAString & aTagName) = 0;

  /* readonly attribute nsIDOMDOMTokenList classList; */
  NS_SCRIPTABLE NS_IMETHOD GetClassList(nsIDOMDOMTokenList * *aClassList) = 0;

  /* DOMString getAttribute (in DOMString name); */
  NS_SCRIPTABLE NS_IMETHOD GetAttribute(const nsAString & name, nsAString & _retval NS_OUTPARAM) = 0;

  /* DOMString getAttributeNS (in DOMString namespaceURI, in DOMString localName); */
  NS_SCRIPTABLE NS_IMETHOD GetAttributeNS(const nsAString & namespaceURI, const nsAString & localName, nsAString & _retval NS_OUTPARAM) = 0;

  /* void setAttribute (in DOMString name, in DOMString value); */
  NS_SCRIPTABLE NS_IMETHOD SetAttribute(const nsAString & name, const nsAString & value) = 0;

  /* void setAttributeNS (in DOMString namespaceURI, in DOMString qualifiedName, in DOMString value); */
  NS_SCRIPTABLE NS_IMETHOD SetAttributeNS(const nsAString & namespaceURI, const nsAString & qualifiedName, const nsAString & value) = 0;

  /* void removeAttribute (in DOMString name); */
  NS_SCRIPTABLE NS_IMETHOD RemoveAttribute(const nsAString & name) = 0;

  /* void removeAttributeNS (in DOMString namespaceURI, in DOMString localName); */
  NS_SCRIPTABLE NS_IMETHOD RemoveAttributeNS(const nsAString & namespaceURI, const nsAString & localName) = 0;

  /* boolean hasAttribute (in DOMString name); */
  NS_SCRIPTABLE NS_IMETHOD HasAttribute(const nsAString & name, bool *_retval NS_OUTPARAM) = 0;

  /* boolean hasAttributeNS (in DOMString namespaceURI, in DOMString localName); */
  NS_SCRIPTABLE NS_IMETHOD HasAttributeNS(const nsAString & namespaceURI, const nsAString & localName, bool *_retval NS_OUTPARAM) = 0;

  /* nsIDOMAttr getAttributeNode (in DOMString name); */
  NS_SCRIPTABLE NS_IMETHOD GetAttributeNode(const nsAString & name, nsIDOMAttr * *_retval NS_OUTPARAM) = 0;

  /* nsIDOMAttr setAttributeNode (in nsIDOMAttr newAttr); */
  NS_SCRIPTABLE NS_IMETHOD SetAttributeNode(nsIDOMAttr *newAttr, nsIDOMAttr * *_retval NS_OUTPARAM) = 0;

  /* nsIDOMAttr removeAttributeNode (in nsIDOMAttr oldAttr); */
  NS_SCRIPTABLE NS_IMETHOD RemoveAttributeNode(nsIDOMAttr *oldAttr, nsIDOMAttr * *_retval NS_OUTPARAM) = 0;

  /* nsIDOMAttr getAttributeNodeNS (in DOMString namespaceURI, in DOMString localName); */
  NS_SCRIPTABLE NS_IMETHOD GetAttributeNodeNS(const nsAString & namespaceURI, const nsAString & localName, nsIDOMAttr * *_retval NS_OUTPARAM) = 0;

  /* nsIDOMAttr setAttributeNodeNS (in nsIDOMAttr newAttr) raises (DOMException); */
  NS_SCRIPTABLE NS_IMETHOD SetAttributeNodeNS(nsIDOMAttr *newAttr, nsIDOMAttr * *_retval NS_OUTPARAM) = 0;

  /* nsIDOMNodeList getElementsByTagName (in DOMString name); */
  NS_SCRIPTABLE NS_IMETHOD GetElementsByTagName(const nsAString & name, nsIDOMNodeList * *_retval NS_OUTPARAM) = 0;

  /* nsIDOMNodeList getElementsByTagNameNS (in DOMString namespaceURI, in DOMString localName); */
  NS_SCRIPTABLE NS_IMETHOD GetElementsByTagNameNS(const nsAString & namespaceURI, const nsAString & localName, nsIDOMNodeList * *_retval NS_OUTPARAM) = 0;

  /* nsIDOMNodeList getElementsByClassName (in DOMString classes); */
  NS_SCRIPTABLE NS_IMETHOD GetElementsByClassName(const nsAString & classes, nsIDOMNodeList * *_retval NS_OUTPARAM) = 0;

  /* [binaryname(ChildElements)] readonly attribute nsIDOMNodeList children; */
  NS_SCRIPTABLE NS_IMETHOD GetChildElements(nsIDOMNodeList * *aChildren) = 0;

  /* readonly attribute nsIDOMElement firstElementChild; */
  NS_SCRIPTABLE NS_IMETHOD GetFirstElementChild(nsIDOMElement * *aFirstElementChild) = 0;

  /* readonly attribute nsIDOMElement lastElementChild; */
  NS_SCRIPTABLE NS_IMETHOD GetLastElementChild(nsIDOMElement * *aLastElementChild) = 0;

  /* readonly attribute nsIDOMElement previousElementSibling; */
  NS_SCRIPTABLE NS_IMETHOD GetPreviousElementSibling(nsIDOMElement * *aPreviousElementSibling) = 0;

  /* readonly attribute nsIDOMElement nextElementSibling; */
  NS_SCRIPTABLE NS_IMETHOD GetNextElementSibling(nsIDOMElement * *aNextElementSibling) = 0;

  /* readonly attribute unsigned long childElementCount; */
  NS_SCRIPTABLE NS_IMETHOD GetChildElementCount(PRUint32 *aChildElementCount) = 0;

  /* [implicit_jscontext] attribute jsval onmouseenter; */
  NS_SCRIPTABLE NS_IMETHOD GetOnmouseenter(JSContext* cx, JS::Value *aOnmouseenter) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetOnmouseenter(JSContext* cx, const JS::Value & aOnmouseenter) = 0;

  /* [implicit_jscontext] attribute jsval onmouseleave; */
  NS_SCRIPTABLE NS_IMETHOD GetOnmouseleave(JSContext* cx, JS::Value *aOnmouseleave) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetOnmouseleave(JSContext* cx, const JS::Value & aOnmouseleave) = 0;

  /* nsIDOMClientRectList getClientRects (); */
  NS_SCRIPTABLE NS_IMETHOD GetClientRects(nsIDOMClientRectList * *_retval NS_OUTPARAM) = 0;

  /* nsIDOMClientRect getBoundingClientRect (); */
  NS_SCRIPTABLE NS_IMETHOD GetBoundingClientRect(nsIDOMClientRect * *_retval NS_OUTPARAM) = 0;

  /* attribute long scrollTop; */
  NS_SCRIPTABLE NS_IMETHOD GetScrollTop(PRInt32 *aScrollTop) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetScrollTop(PRInt32 aScrollTop) = 0;

  /* attribute long scrollLeft; */
  NS_SCRIPTABLE NS_IMETHOD GetScrollLeft(PRInt32 *aScrollLeft) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetScrollLeft(PRInt32 aScrollLeft) = 0;

  /* readonly attribute long scrollWidth; */
  NS_SCRIPTABLE NS_IMETHOD GetScrollWidth(PRInt32 *aScrollWidth) = 0;

  /* readonly attribute long scrollHeight; */
  NS_SCRIPTABLE NS_IMETHOD GetScrollHeight(PRInt32 *aScrollHeight) = 0;

  /* readonly attribute long clientTop; */
  NS_SCRIPTABLE NS_IMETHOD GetClientTop(PRInt32 *aClientTop) = 0;

  /* readonly attribute long clientLeft; */
  NS_SCRIPTABLE NS_IMETHOD GetClientLeft(PRInt32 *aClientLeft) = 0;

  /* readonly attribute long clientWidth; */
  NS_SCRIPTABLE NS_IMETHOD GetClientWidth(PRInt32 *aClientWidth) = 0;

  /* readonly attribute long clientHeight; */
  NS_SCRIPTABLE NS_IMETHOD GetClientHeight(PRInt32 *aClientHeight) = 0;

  /* boolean mozMatchesSelector ([Null (Stringify)] in DOMString selector); */
  NS_SCRIPTABLE NS_IMETHOD MozMatchesSelector(const nsAString & selector, bool *_retval NS_OUTPARAM) = 0;

  /* void setCapture ([optional] in boolean retargetToElement); */
  NS_SCRIPTABLE NS_IMETHOD SetCapture(bool retargetToElement) = 0;

  /* void releaseCapture (); */
  NS_SCRIPTABLE NS_IMETHOD ReleaseCapture(void) = 0;

  /* void mozRequestFullScreen (); */
  NS_SCRIPTABLE NS_IMETHOD MozRequestFullScreen(void) = 0;

  /* void mozRequestPointerLock (); */
  NS_SCRIPTABLE NS_IMETHOD MozRequestPointerLock(void) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMElement, NS_IDOMELEMENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMELEMENT \
  NS_SCRIPTABLE NS_IMETHOD GetTagName(nsAString & aTagName); \
  NS_SCRIPTABLE NS_IMETHOD GetClassList(nsIDOMDOMTokenList * *aClassList); \
  NS_SCRIPTABLE NS_IMETHOD GetAttribute(const nsAString & name, nsAString & _retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetAttributeNS(const nsAString & namespaceURI, const nsAString & localName, nsAString & _retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetAttribute(const nsAString & name, const nsAString & value); \
  NS_SCRIPTABLE NS_IMETHOD SetAttributeNS(const nsAString & namespaceURI, const nsAString & qualifiedName, const nsAString & value); \
  NS_SCRIPTABLE NS_IMETHOD RemoveAttribute(const nsAString & name); \
  NS_SCRIPTABLE NS_IMETHOD RemoveAttributeNS(const nsAString & namespaceURI, const nsAString & localName); \
  NS_SCRIPTABLE NS_IMETHOD HasAttribute(const nsAString & name, bool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD HasAttributeNS(const nsAString & namespaceURI, const nsAString & localName, bool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetAttributeNode(const nsAString & name, nsIDOMAttr * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetAttributeNode(nsIDOMAttr *newAttr, nsIDOMAttr * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD RemoveAttributeNode(nsIDOMAttr *oldAttr, nsIDOMAttr * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetAttributeNodeNS(const nsAString & namespaceURI, const nsAString & localName, nsIDOMAttr * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetAttributeNodeNS(nsIDOMAttr *newAttr, nsIDOMAttr * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetElementsByTagName(const nsAString & name, nsIDOMNodeList * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetElementsByTagNameNS(const nsAString & namespaceURI, const nsAString & localName, nsIDOMNodeList * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetElementsByClassName(const nsAString & classes, nsIDOMNodeList * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetChildElements(nsIDOMNodeList * *aChildren); \
  NS_SCRIPTABLE NS_IMETHOD GetFirstElementChild(nsIDOMElement * *aFirstElementChild); \
  NS_SCRIPTABLE NS_IMETHOD GetLastElementChild(nsIDOMElement * *aLastElementChild); \
  NS_SCRIPTABLE NS_IMETHOD GetPreviousElementSibling(nsIDOMElement * *aPreviousElementSibling); \
  NS_SCRIPTABLE NS_IMETHOD GetNextElementSibling(nsIDOMElement * *aNextElementSibling); \
  NS_SCRIPTABLE NS_IMETHOD GetChildElementCount(PRUint32 *aChildElementCount); \
  NS_SCRIPTABLE NS_IMETHOD GetOnmouseenter(JSContext* cx, JS::Value *aOnmouseenter); \
  NS_SCRIPTABLE NS_IMETHOD SetOnmouseenter(JSContext* cx, const JS::Value & aOnmouseenter); \
  NS_SCRIPTABLE NS_IMETHOD GetOnmouseleave(JSContext* cx, JS::Value *aOnmouseleave); \
  NS_SCRIPTABLE NS_IMETHOD SetOnmouseleave(JSContext* cx, const JS::Value & aOnmouseleave); \
  NS_SCRIPTABLE NS_IMETHOD GetClientRects(nsIDOMClientRectList * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetBoundingClientRect(nsIDOMClientRect * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetScrollTop(PRInt32 *aScrollTop); \
  NS_SCRIPTABLE NS_IMETHOD SetScrollTop(PRInt32 aScrollTop); \
  NS_SCRIPTABLE NS_IMETHOD GetScrollLeft(PRInt32 *aScrollLeft); \
  NS_SCRIPTABLE NS_IMETHOD SetScrollLeft(PRInt32 aScrollLeft); \
  NS_SCRIPTABLE NS_IMETHOD GetScrollWidth(PRInt32 *aScrollWidth); \
  NS_SCRIPTABLE NS_IMETHOD GetScrollHeight(PRInt32 *aScrollHeight); \
  NS_SCRIPTABLE NS_IMETHOD GetClientTop(PRInt32 *aClientTop); \
  NS_SCRIPTABLE NS_IMETHOD GetClientLeft(PRInt32 *aClientLeft); \
  NS_SCRIPTABLE NS_IMETHOD GetClientWidth(PRInt32 *aClientWidth); \
  NS_SCRIPTABLE NS_IMETHOD GetClientHeight(PRInt32 *aClientHeight); \
  NS_SCRIPTABLE NS_IMETHOD MozMatchesSelector(const nsAString & selector, bool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetCapture(bool retargetToElement); \
  NS_SCRIPTABLE NS_IMETHOD ReleaseCapture(void); \
  NS_SCRIPTABLE NS_IMETHOD MozRequestFullScreen(void); \
  NS_SCRIPTABLE NS_IMETHOD MozRequestPointerLock(void); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMELEMENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetTagName(nsAString & aTagName) { return _to GetTagName(aTagName); } \
  NS_SCRIPTABLE NS_IMETHOD GetClassList(nsIDOMDOMTokenList * *aClassList) { return _to GetClassList(aClassList); } \
  NS_SCRIPTABLE NS_IMETHOD GetAttribute(const nsAString & name, nsAString & _retval NS_OUTPARAM) { return _to GetAttribute(name, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetAttributeNS(const nsAString & namespaceURI, const nsAString & localName, nsAString & _retval NS_OUTPARAM) { return _to GetAttributeNS(namespaceURI, localName, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetAttribute(const nsAString & name, const nsAString & value) { return _to SetAttribute(name, value); } \
  NS_SCRIPTABLE NS_IMETHOD SetAttributeNS(const nsAString & namespaceURI, const nsAString & qualifiedName, const nsAString & value) { return _to SetAttributeNS(namespaceURI, qualifiedName, value); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveAttribute(const nsAString & name) { return _to RemoveAttribute(name); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveAttributeNS(const nsAString & namespaceURI, const nsAString & localName) { return _to RemoveAttributeNS(namespaceURI, localName); } \
  NS_SCRIPTABLE NS_IMETHOD HasAttribute(const nsAString & name, bool *_retval NS_OUTPARAM) { return _to HasAttribute(name, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD HasAttributeNS(const nsAString & namespaceURI, const nsAString & localName, bool *_retval NS_OUTPARAM) { return _to HasAttributeNS(namespaceURI, localName, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetAttributeNode(const nsAString & name, nsIDOMAttr * *_retval NS_OUTPARAM) { return _to GetAttributeNode(name, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetAttributeNode(nsIDOMAttr *newAttr, nsIDOMAttr * *_retval NS_OUTPARAM) { return _to SetAttributeNode(newAttr, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveAttributeNode(nsIDOMAttr *oldAttr, nsIDOMAttr * *_retval NS_OUTPARAM) { return _to RemoveAttributeNode(oldAttr, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetAttributeNodeNS(const nsAString & namespaceURI, const nsAString & localName, nsIDOMAttr * *_retval NS_OUTPARAM) { return _to GetAttributeNodeNS(namespaceURI, localName, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetAttributeNodeNS(nsIDOMAttr *newAttr, nsIDOMAttr * *_retval NS_OUTPARAM) { return _to SetAttributeNodeNS(newAttr, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetElementsByTagName(const nsAString & name, nsIDOMNodeList * *_retval NS_OUTPARAM) { return _to GetElementsByTagName(name, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetElementsByTagNameNS(const nsAString & namespaceURI, const nsAString & localName, nsIDOMNodeList * *_retval NS_OUTPARAM) { return _to GetElementsByTagNameNS(namespaceURI, localName, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetElementsByClassName(const nsAString & classes, nsIDOMNodeList * *_retval NS_OUTPARAM) { return _to GetElementsByClassName(classes, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetChildElements(nsIDOMNodeList * *aChildren) { return _to GetChildElements(aChildren); } \
  NS_SCRIPTABLE NS_IMETHOD GetFirstElementChild(nsIDOMElement * *aFirstElementChild) { return _to GetFirstElementChild(aFirstElementChild); } \
  NS_SCRIPTABLE NS_IMETHOD GetLastElementChild(nsIDOMElement * *aLastElementChild) { return _to GetLastElementChild(aLastElementChild); } \
  NS_SCRIPTABLE NS_IMETHOD GetPreviousElementSibling(nsIDOMElement * *aPreviousElementSibling) { return _to GetPreviousElementSibling(aPreviousElementSibling); } \
  NS_SCRIPTABLE NS_IMETHOD GetNextElementSibling(nsIDOMElement * *aNextElementSibling) { return _to GetNextElementSibling(aNextElementSibling); } \
  NS_SCRIPTABLE NS_IMETHOD GetChildElementCount(PRUint32 *aChildElementCount) { return _to GetChildElementCount(aChildElementCount); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnmouseenter(JSContext* cx, JS::Value *aOnmouseenter) { return _to GetOnmouseenter(cx, aOnmouseenter); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnmouseenter(JSContext* cx, const JS::Value & aOnmouseenter) { return _to SetOnmouseenter(cx, aOnmouseenter); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnmouseleave(JSContext* cx, JS::Value *aOnmouseleave) { return _to GetOnmouseleave(cx, aOnmouseleave); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnmouseleave(JSContext* cx, const JS::Value & aOnmouseleave) { return _to SetOnmouseleave(cx, aOnmouseleave); } \
  NS_SCRIPTABLE NS_IMETHOD GetClientRects(nsIDOMClientRectList * *_retval NS_OUTPARAM) { return _to GetClientRects(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetBoundingClientRect(nsIDOMClientRect * *_retval NS_OUTPARAM) { return _to GetBoundingClientRect(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetScrollTop(PRInt32 *aScrollTop) { return _to GetScrollTop(aScrollTop); } \
  NS_SCRIPTABLE NS_IMETHOD SetScrollTop(PRInt32 aScrollTop) { return _to SetScrollTop(aScrollTop); } \
  NS_SCRIPTABLE NS_IMETHOD GetScrollLeft(PRInt32 *aScrollLeft) { return _to GetScrollLeft(aScrollLeft); } \
  NS_SCRIPTABLE NS_IMETHOD SetScrollLeft(PRInt32 aScrollLeft) { return _to SetScrollLeft(aScrollLeft); } \
  NS_SCRIPTABLE NS_IMETHOD GetScrollWidth(PRInt32 *aScrollWidth) { return _to GetScrollWidth(aScrollWidth); } \
  NS_SCRIPTABLE NS_IMETHOD GetScrollHeight(PRInt32 *aScrollHeight) { return _to GetScrollHeight(aScrollHeight); } \
  NS_SCRIPTABLE NS_IMETHOD GetClientTop(PRInt32 *aClientTop) { return _to GetClientTop(aClientTop); } \
  NS_SCRIPTABLE NS_IMETHOD GetClientLeft(PRInt32 *aClientLeft) { return _to GetClientLeft(aClientLeft); } \
  NS_SCRIPTABLE NS_IMETHOD GetClientWidth(PRInt32 *aClientWidth) { return _to GetClientWidth(aClientWidth); } \
  NS_SCRIPTABLE NS_IMETHOD GetClientHeight(PRInt32 *aClientHeight) { return _to GetClientHeight(aClientHeight); } \
  NS_SCRIPTABLE NS_IMETHOD MozMatchesSelector(const nsAString & selector, bool *_retval NS_OUTPARAM) { return _to MozMatchesSelector(selector, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetCapture(bool retargetToElement) { return _to SetCapture(retargetToElement); } \
  NS_SCRIPTABLE NS_IMETHOD ReleaseCapture(void) { return _to ReleaseCapture(); } \
  NS_SCRIPTABLE NS_IMETHOD MozRequestFullScreen(void) { return _to MozRequestFullScreen(); } \
  NS_SCRIPTABLE NS_IMETHOD MozRequestPointerLock(void) { return _to MozRequestPointerLock(); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMELEMENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetTagName(nsAString & aTagName) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTagName(aTagName); } \
  NS_SCRIPTABLE NS_IMETHOD GetClassList(nsIDOMDOMTokenList * *aClassList) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetClassList(aClassList); } \
  NS_SCRIPTABLE NS_IMETHOD GetAttribute(const nsAString & name, nsAString & _retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAttribute(name, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetAttributeNS(const nsAString & namespaceURI, const nsAString & localName, nsAString & _retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAttributeNS(namespaceURI, localName, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetAttribute(const nsAString & name, const nsAString & value) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAttribute(name, value); } \
  NS_SCRIPTABLE NS_IMETHOD SetAttributeNS(const nsAString & namespaceURI, const nsAString & qualifiedName, const nsAString & value) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAttributeNS(namespaceURI, qualifiedName, value); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveAttribute(const nsAString & name) { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveAttribute(name); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveAttributeNS(const nsAString & namespaceURI, const nsAString & localName) { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveAttributeNS(namespaceURI, localName); } \
  NS_SCRIPTABLE NS_IMETHOD HasAttribute(const nsAString & name, bool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->HasAttribute(name, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD HasAttributeNS(const nsAString & namespaceURI, const nsAString & localName, bool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->HasAttributeNS(namespaceURI, localName, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetAttributeNode(const nsAString & name, nsIDOMAttr * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAttributeNode(name, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetAttributeNode(nsIDOMAttr *newAttr, nsIDOMAttr * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAttributeNode(newAttr, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveAttributeNode(nsIDOMAttr *oldAttr, nsIDOMAttr * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveAttributeNode(oldAttr, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetAttributeNodeNS(const nsAString & namespaceURI, const nsAString & localName, nsIDOMAttr * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAttributeNodeNS(namespaceURI, localName, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetAttributeNodeNS(nsIDOMAttr *newAttr, nsIDOMAttr * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAttributeNodeNS(newAttr, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetElementsByTagName(const nsAString & name, nsIDOMNodeList * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetElementsByTagName(name, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetElementsByTagNameNS(const nsAString & namespaceURI, const nsAString & localName, nsIDOMNodeList * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetElementsByTagNameNS(namespaceURI, localName, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetElementsByClassName(const nsAString & classes, nsIDOMNodeList * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetElementsByClassName(classes, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetChildElements(nsIDOMNodeList * *aChildren) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetChildElements(aChildren); } \
  NS_SCRIPTABLE NS_IMETHOD GetFirstElementChild(nsIDOMElement * *aFirstElementChild) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFirstElementChild(aFirstElementChild); } \
  NS_SCRIPTABLE NS_IMETHOD GetLastElementChild(nsIDOMElement * *aLastElementChild) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLastElementChild(aLastElementChild); } \
  NS_SCRIPTABLE NS_IMETHOD GetPreviousElementSibling(nsIDOMElement * *aPreviousElementSibling) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPreviousElementSibling(aPreviousElementSibling); } \
  NS_SCRIPTABLE NS_IMETHOD GetNextElementSibling(nsIDOMElement * *aNextElementSibling) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNextElementSibling(aNextElementSibling); } \
  NS_SCRIPTABLE NS_IMETHOD GetChildElementCount(PRUint32 *aChildElementCount) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetChildElementCount(aChildElementCount); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnmouseenter(JSContext* cx, JS::Value *aOnmouseenter) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOnmouseenter(cx, aOnmouseenter); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnmouseenter(JSContext* cx, const JS::Value & aOnmouseenter) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOnmouseenter(cx, aOnmouseenter); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnmouseleave(JSContext* cx, JS::Value *aOnmouseleave) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOnmouseleave(cx, aOnmouseleave); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnmouseleave(JSContext* cx, const JS::Value & aOnmouseleave) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOnmouseleave(cx, aOnmouseleave); } \
  NS_SCRIPTABLE NS_IMETHOD GetClientRects(nsIDOMClientRectList * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetClientRects(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetBoundingClientRect(nsIDOMClientRect * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetBoundingClientRect(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetScrollTop(PRInt32 *aScrollTop) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetScrollTop(aScrollTop); } \
  NS_SCRIPTABLE NS_IMETHOD SetScrollTop(PRInt32 aScrollTop) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetScrollTop(aScrollTop); } \
  NS_SCRIPTABLE NS_IMETHOD GetScrollLeft(PRInt32 *aScrollLeft) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetScrollLeft(aScrollLeft); } \
  NS_SCRIPTABLE NS_IMETHOD SetScrollLeft(PRInt32 aScrollLeft) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetScrollLeft(aScrollLeft); } \
  NS_SCRIPTABLE NS_IMETHOD GetScrollWidth(PRInt32 *aScrollWidth) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetScrollWidth(aScrollWidth); } \
  NS_SCRIPTABLE NS_IMETHOD GetScrollHeight(PRInt32 *aScrollHeight) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetScrollHeight(aScrollHeight); } \
  NS_SCRIPTABLE NS_IMETHOD GetClientTop(PRInt32 *aClientTop) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetClientTop(aClientTop); } \
  NS_SCRIPTABLE NS_IMETHOD GetClientLeft(PRInt32 *aClientLeft) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetClientLeft(aClientLeft); } \
  NS_SCRIPTABLE NS_IMETHOD GetClientWidth(PRInt32 *aClientWidth) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetClientWidth(aClientWidth); } \
  NS_SCRIPTABLE NS_IMETHOD GetClientHeight(PRInt32 *aClientHeight) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetClientHeight(aClientHeight); } \
  NS_SCRIPTABLE NS_IMETHOD MozMatchesSelector(const nsAString & selector, bool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->MozMatchesSelector(selector, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetCapture(bool retargetToElement) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetCapture(retargetToElement); } \
  NS_SCRIPTABLE NS_IMETHOD ReleaseCapture(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->ReleaseCapture(); } \
  NS_SCRIPTABLE NS_IMETHOD MozRequestFullScreen(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->MozRequestFullScreen(); } \
  NS_SCRIPTABLE NS_IMETHOD MozRequestPointerLock(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->MozRequestPointerLock(); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMElement : public nsIDOMElement
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMELEMENT

  nsDOMElement();

private:
  ~nsDOMElement();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMElement, nsIDOMElement)

nsDOMElement::nsDOMElement()
{
  /* member initializers and constructor code */
}

nsDOMElement::~nsDOMElement()
{
  /* destructor code */
}

/* readonly attribute DOMString tagName; */
NS_IMETHODIMP nsDOMElement::GetTagName(nsAString & aTagName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMDOMTokenList classList; */
NS_IMETHODIMP nsDOMElement::GetClassList(nsIDOMDOMTokenList * *aClassList)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* DOMString getAttribute (in DOMString name); */
NS_IMETHODIMP nsDOMElement::GetAttribute(const nsAString & name, nsAString & _retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* DOMString getAttributeNS (in DOMString namespaceURI, in DOMString localName); */
NS_IMETHODIMP nsDOMElement::GetAttributeNS(const nsAString & namespaceURI, const nsAString & localName, nsAString & _retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setAttribute (in DOMString name, in DOMString value); */
NS_IMETHODIMP nsDOMElement::SetAttribute(const nsAString & name, const nsAString & value)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setAttributeNS (in DOMString namespaceURI, in DOMString qualifiedName, in DOMString value); */
NS_IMETHODIMP nsDOMElement::SetAttributeNS(const nsAString & namespaceURI, const nsAString & qualifiedName, const nsAString & value)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void removeAttribute (in DOMString name); */
NS_IMETHODIMP nsDOMElement::RemoveAttribute(const nsAString & name)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void removeAttributeNS (in DOMString namespaceURI, in DOMString localName); */
NS_IMETHODIMP nsDOMElement::RemoveAttributeNS(const nsAString & namespaceURI, const nsAString & localName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean hasAttribute (in DOMString name); */
NS_IMETHODIMP nsDOMElement::HasAttribute(const nsAString & name, bool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean hasAttributeNS (in DOMString namespaceURI, in DOMString localName); */
NS_IMETHODIMP nsDOMElement::HasAttributeNS(const nsAString & namespaceURI, const nsAString & localName, bool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMAttr getAttributeNode (in DOMString name); */
NS_IMETHODIMP nsDOMElement::GetAttributeNode(const nsAString & name, nsIDOMAttr * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMAttr setAttributeNode (in nsIDOMAttr newAttr); */
NS_IMETHODIMP nsDOMElement::SetAttributeNode(nsIDOMAttr *newAttr, nsIDOMAttr * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMAttr removeAttributeNode (in nsIDOMAttr oldAttr); */
NS_IMETHODIMP nsDOMElement::RemoveAttributeNode(nsIDOMAttr *oldAttr, nsIDOMAttr * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMAttr getAttributeNodeNS (in DOMString namespaceURI, in DOMString localName); */
NS_IMETHODIMP nsDOMElement::GetAttributeNodeNS(const nsAString & namespaceURI, const nsAString & localName, nsIDOMAttr * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMAttr setAttributeNodeNS (in nsIDOMAttr newAttr) raises (DOMException); */
NS_IMETHODIMP nsDOMElement::SetAttributeNodeNS(nsIDOMAttr *newAttr, nsIDOMAttr * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMNodeList getElementsByTagName (in DOMString name); */
NS_IMETHODIMP nsDOMElement::GetElementsByTagName(const nsAString & name, nsIDOMNodeList * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMNodeList getElementsByTagNameNS (in DOMString namespaceURI, in DOMString localName); */
NS_IMETHODIMP nsDOMElement::GetElementsByTagNameNS(const nsAString & namespaceURI, const nsAString & localName, nsIDOMNodeList * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMNodeList getElementsByClassName (in DOMString classes); */
NS_IMETHODIMP nsDOMElement::GetElementsByClassName(const nsAString & classes, nsIDOMNodeList * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [binaryname(ChildElements)] readonly attribute nsIDOMNodeList children; */
NS_IMETHODIMP nsDOMElement::GetChildElements(nsIDOMNodeList * *aChildren)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMElement firstElementChild; */
NS_IMETHODIMP nsDOMElement::GetFirstElementChild(nsIDOMElement * *aFirstElementChild)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMElement lastElementChild; */
NS_IMETHODIMP nsDOMElement::GetLastElementChild(nsIDOMElement * *aLastElementChild)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMElement previousElementSibling; */
NS_IMETHODIMP nsDOMElement::GetPreviousElementSibling(nsIDOMElement * *aPreviousElementSibling)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMElement nextElementSibling; */
NS_IMETHODIMP nsDOMElement::GetNextElementSibling(nsIDOMElement * *aNextElementSibling)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long childElementCount; */
NS_IMETHODIMP nsDOMElement::GetChildElementCount(PRUint32 *aChildElementCount)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] attribute jsval onmouseenter; */
NS_IMETHODIMP nsDOMElement::GetOnmouseenter(JSContext* cx, JS::Value *aOnmouseenter)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMElement::SetOnmouseenter(JSContext* cx, const JS::Value & aOnmouseenter)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] attribute jsval onmouseleave; */
NS_IMETHODIMP nsDOMElement::GetOnmouseleave(JSContext* cx, JS::Value *aOnmouseleave)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMElement::SetOnmouseleave(JSContext* cx, const JS::Value & aOnmouseleave)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMClientRectList getClientRects (); */
NS_IMETHODIMP nsDOMElement::GetClientRects(nsIDOMClientRectList * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMClientRect getBoundingClientRect (); */
NS_IMETHODIMP nsDOMElement::GetBoundingClientRect(nsIDOMClientRect * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute long scrollTop; */
NS_IMETHODIMP nsDOMElement::GetScrollTop(PRInt32 *aScrollTop)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMElement::SetScrollTop(PRInt32 aScrollTop)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute long scrollLeft; */
NS_IMETHODIMP nsDOMElement::GetScrollLeft(PRInt32 *aScrollLeft)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMElement::SetScrollLeft(PRInt32 aScrollLeft)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long scrollWidth; */
NS_IMETHODIMP nsDOMElement::GetScrollWidth(PRInt32 *aScrollWidth)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long scrollHeight; */
NS_IMETHODIMP nsDOMElement::GetScrollHeight(PRInt32 *aScrollHeight)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long clientTop; */
NS_IMETHODIMP nsDOMElement::GetClientTop(PRInt32 *aClientTop)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long clientLeft; */
NS_IMETHODIMP nsDOMElement::GetClientLeft(PRInt32 *aClientLeft)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long clientWidth; */
NS_IMETHODIMP nsDOMElement::GetClientWidth(PRInt32 *aClientWidth)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long clientHeight; */
NS_IMETHODIMP nsDOMElement::GetClientHeight(PRInt32 *aClientHeight)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean mozMatchesSelector ([Null (Stringify)] in DOMString selector); */
NS_IMETHODIMP nsDOMElement::MozMatchesSelector(const nsAString & selector, bool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setCapture ([optional] in boolean retargetToElement); */
NS_IMETHODIMP nsDOMElement::SetCapture(bool retargetToElement)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void releaseCapture (); */
NS_IMETHODIMP nsDOMElement::ReleaseCapture()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void mozRequestFullScreen (); */
NS_IMETHODIMP nsDOMElement::MozRequestFullScreen()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void mozRequestPointerLock (); */
NS_IMETHODIMP nsDOMElement::MozRequestPointerLock()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMElement_h__ */
