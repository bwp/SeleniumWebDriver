#ifndef mozilla_dom_UnionConversions_h__
#define mozilla_dom_UnionConversions_h__

#include "mozilla/dom/UnionTypes.h"
#include "nsDOMQS.h"
#include "nsDebug.h"

namespace mozilla {
namespace dom {

class HTMLImageElementOrHTMLCanvasElementOrHTMLVideoElementArgument {
public:
  HTMLImageElementOrHTMLCanvasElementOrHTMLVideoElementArgument(const HTMLImageElementOrHTMLCanvasElementOrHTMLVideoElement& aUnion) : mUnion(const_cast<HTMLImageElementOrHTMLCanvasElementOrHTMLVideoElement&>(aUnion))
  {
  }

  bool TrySetToHTMLImageElement(JSContext* cx, const JS::Value& value, JS::Value* pvalue, bool& tryNext)
  {
    tryNext = false;
    jsval tmpVal = value;
    nsHTMLImageElement* tmp;
    if (NS_FAILED(xpc_qsUnwrapArg<nsHTMLImageElement>(cx, value, &tmp, static_cast<nsHTMLImageElement**>(getter_AddRefs(mHTMLImageElementHolder)), &tmpVal))) {
      if (mUnion.mType != mUnion.eUninitialized) {
        mUnion.DestroyHTMLImageElement();
      }tryNext = true;
      return true;
    }
    MOZ_ASSERT(tmp);
    SetAsHTMLImageElement() = tmp;
    return true;
  }

  bool TrySetToHTMLCanvasElement(JSContext* cx, const JS::Value& value, JS::Value* pvalue, bool& tryNext)
  {
    tryNext = false;
    jsval tmpVal = value;
    nsHTMLCanvasElement* tmp;
    if (NS_FAILED(xpc_qsUnwrapArg<nsHTMLCanvasElement>(cx, value, &tmp, static_cast<nsHTMLCanvasElement**>(getter_AddRefs(mHTMLCanvasElementHolder)), &tmpVal))) {
      if (mUnion.mType != mUnion.eUninitialized) {
        mUnion.DestroyHTMLCanvasElement();
      }tryNext = true;
      return true;
    }
    MOZ_ASSERT(tmp);
    SetAsHTMLCanvasElement() = tmp;
    return true;
  }

  bool TrySetToHTMLVideoElement(JSContext* cx, const JS::Value& value, JS::Value* pvalue, bool& tryNext)
  {
    tryNext = false;
    jsval tmpVal = value;
    nsHTMLVideoElement* tmp;
    if (NS_FAILED(xpc_qsUnwrapArg<nsHTMLVideoElement>(cx, value, &tmp, static_cast<nsHTMLVideoElement**>(getter_AddRefs(mHTMLVideoElementHolder)), &tmpVal))) {
      if (mUnion.mType != mUnion.eUninitialized) {
        mUnion.DestroyHTMLVideoElement();
      }tryNext = true;
      return true;
    }
    MOZ_ASSERT(tmp);
    SetAsHTMLVideoElement() = tmp;
    return true;
  }

private:
  nsHTMLImageElement*& SetAsHTMLImageElement()
  {
    mUnion.mType = mUnion.eHTMLImageElement;
    return mUnion.mValue.mHTMLImageElement.SetValue();
  }
  nsHTMLCanvasElement*& SetAsHTMLCanvasElement()
  {
    mUnion.mType = mUnion.eHTMLCanvasElement;
    return mUnion.mValue.mHTMLCanvasElement.SetValue();
  }
  nsHTMLVideoElement*& SetAsHTMLVideoElement()
  {
    mUnion.mType = mUnion.eHTMLVideoElement;
    return mUnion.mValue.mHTMLVideoElement.SetValue();
  }

  nsRefPtr<nsHTMLImageElement> mHTMLImageElementHolder;
  nsRefPtr<nsHTMLCanvasElement> mHTMLCanvasElementHolder;
  nsRefPtr<nsHTMLVideoElement> mHTMLVideoElementHolder;

  HTMLImageElementOrHTMLCanvasElementOrHTMLVideoElement& mUnion;
};


} // namespace dom
} // namespace mozilla


#endif // mozilla_dom_UnionConversions_h__
