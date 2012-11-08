#ifndef mozilla_dom_UnionTypes_h__
#define mozilla_dom_UnionTypes_h__

#include "mozilla/dom/BindingUtils.h"

class nsHTMLCanvasElement;
class nsHTMLImageElement;
class nsHTMLVideoElement;

namespace mozilla {
namespace dom {

class HTMLImageElementOrHTMLCanvasElementOrHTMLVideoElement {
public:
  HTMLImageElementOrHTMLCanvasElementOrHTMLVideoElement() : mType(eUninitialized)
  {
  }
  ~HTMLImageElementOrHTMLCanvasElementOrHTMLVideoElement()
  {
    switch (mType) {
      case eHTMLImageElement:
         DestroyHTMLImageElement();
         break;
      case eHTMLCanvasElement:
         DestroyHTMLCanvasElement();
         break;
      case eHTMLVideoElement:
         DestroyHTMLVideoElement();
         break;
      case eUninitialized:
        break;
    }
  }

  bool IsHTMLImageElement() const
  {
    return mType == eHTMLImageElement;
  }
  nsHTMLImageElement* GetAsHTMLImageElement() const
  {
    MOZ_ASSERT(IsHTMLImageElement(), "Wrong type!");
    // The cast to nsHTMLImageElement* is needed to work around a bug in Apple's
    // clang compiler, for some reason it doesn't call |S::operator T&| when
    // casting S<T> to T& and T is forward declared.
    return (nsHTMLImageElement*)mValue.mHTMLImageElement.Value();
  }
  nsHTMLImageElement*& SetAsHTMLImageElement()
  {
    mType = eHTMLImageElement;
    return mValue.mHTMLImageElement.SetValue();
  }

  bool IsHTMLCanvasElement() const
  {
    return mType == eHTMLCanvasElement;
  }
  nsHTMLCanvasElement* GetAsHTMLCanvasElement() const
  {
    MOZ_ASSERT(IsHTMLCanvasElement(), "Wrong type!");
    // The cast to nsHTMLCanvasElement* is needed to work around a bug in Apple's
    // clang compiler, for some reason it doesn't call |S::operator T&| when
    // casting S<T> to T& and T is forward declared.
    return (nsHTMLCanvasElement*)mValue.mHTMLCanvasElement.Value();
  }
  nsHTMLCanvasElement*& SetAsHTMLCanvasElement()
  {
    mType = eHTMLCanvasElement;
    return mValue.mHTMLCanvasElement.SetValue();
  }

  bool IsHTMLVideoElement() const
  {
    return mType == eHTMLVideoElement;
  }
  nsHTMLVideoElement* GetAsHTMLVideoElement() const
  {
    MOZ_ASSERT(IsHTMLVideoElement(), "Wrong type!");
    // The cast to nsHTMLVideoElement* is needed to work around a bug in Apple's
    // clang compiler, for some reason it doesn't call |S::operator T&| when
    // casting S<T> to T& and T is forward declared.
    return (nsHTMLVideoElement*)mValue.mHTMLVideoElement.Value();
  }
  nsHTMLVideoElement*& SetAsHTMLVideoElement()
  {
    mType = eHTMLVideoElement;
    return mValue.mHTMLVideoElement.SetValue();
  }

private:
  friend class HTMLImageElementOrHTMLCanvasElementOrHTMLVideoElementArgument;

  void DestroyHTMLImageElement()
  {
    MOZ_ASSERT(IsHTMLImageElement(), "Wrong type!");
    mValue.mHTMLImageElement.Destroy();
    mType = eUninitialized;
  }
  void DestroyHTMLCanvasElement()
  {
    MOZ_ASSERT(IsHTMLCanvasElement(), "Wrong type!");
    mValue.mHTMLCanvasElement.Destroy();
    mType = eUninitialized;
  }
  void DestroyHTMLVideoElement()
  {
    MOZ_ASSERT(IsHTMLVideoElement(), "Wrong type!");
    mValue.mHTMLVideoElement.Destroy();
    mType = eUninitialized;
  }

  enum Type {
    eUninitialized,
    eHTMLImageElement,
    eHTMLCanvasElement,
    eHTMLVideoElement
  };
  union Value {
    UnionMember<nsHTMLImageElement* > mHTMLImageElement;
    UnionMember<nsHTMLCanvasElement* > mHTMLCanvasElement;
    UnionMember<nsHTMLVideoElement* > mHTMLVideoElement;
  };

  Type mType;
  Value mValue;
};

} // namespace dom
} // namespace mozilla


#endif // mozilla_dom_UnionTypes_h__
