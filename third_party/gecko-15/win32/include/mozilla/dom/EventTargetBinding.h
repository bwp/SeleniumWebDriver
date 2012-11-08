/* THIS FILE IS AUTOGENERATED - DO NOT EDIT */

#ifndef mozilla_dom_EventTargetBinding_h__
#define mozilla_dom_EventTargetBinding_h__

#include "mozilla/dom/BindingUtils.h"
#include "mozilla/dom/DOMJSClass.h"

class XPCWrappedNativeScope;
class nsDOMEventTargetHelper;

namespace mozilla {
namespace dom {
namespace workers {

class EventTarget;

} // namespace workers
} // namespace dom
} // namespace mozilla



namespace mozilla {
namespace dom {

template <>
struct PrototypeTraits<prototypes::id::EventTarget>
{
  enum
  {
    Depth = 0
  };
  typedef nsDOMEventTargetHelper NativeType;
};

template <>
struct PrototypeTraits<prototypes::id::EventTarget_workers>
{
  enum
  {
    Depth = 0
  };
  typedef mozilla::dom::workers::EventTarget NativeType;
};

} // namespace dom
} // namespace mozilla


namespace mozilla {
namespace dom {

namespace EventTargetBinding {
  extern const NativePropertyHooks NativeHooks;

  JSObject* CreateInterfaceObjects(JSContext* aCx, JSObject* aGlobal, JSObject* aReceiver);

  inline JSObject* GetProtoObject(JSContext* aCx, JSObject* aGlobal, JSObject* aReceiver)
  {

    /* Get the interface prototype object for this class.  This will create the
       object as needed. */

    /* aGlobal and aReceiver are usually the same, but they can be different
       too. For example a sandbox often has an xray wrapper for a window as the
       prototype of the sandbox's global. In that case aReceiver is the xray
       wrapper and aGlobal is the sandbox's global.
     */

    /* Make sure our global is sane.  Hopefully we can remove this sometime */
    if (!(js::GetObjectClass(aGlobal)->flags & JSCLASS_DOM_GLOBAL)) {
      return NULL;
    }
    /* Check to see whether the interface objects are already installed */
    JSObject** protoOrIfaceArray = GetProtoOrIfaceArray(aGlobal);
    JSObject* cachedObject = protoOrIfaceArray[prototypes::id::EventTarget];
    if (!cachedObject) {
      protoOrIfaceArray[prototypes::id::EventTarget] = cachedObject = CreateInterfaceObjects(aCx, aGlobal, aReceiver);
    }

    /* cachedObject might _still_ be null, but that's OK */
    return cachedObject;
  }

  bool ResolveProperty(JSContext* cx, JSObject* wrapper, jsid id, bool set, JSPropertyDescriptor* desc);

  bool EnumerateProperties(JS::AutoIdVector& props);

  bool DefineDOMInterface(JSContext* aCx, JSObject* aReceiver, bool* aEnabled);

} // namespace EventTargetBinding


namespace EventTargetBinding_workers {

  JSObject* CreateInterfaceObjects(JSContext* aCx, JSObject* aGlobal, JSObject* aReceiver);

  inline JSObject* GetProtoObject(JSContext* aCx, JSObject* aGlobal, JSObject* aReceiver)
  {

    /* Get the interface prototype object for this class.  This will create the
       object as needed. */

    /* aGlobal and aReceiver are usually the same, but they can be different
       too. For example a sandbox often has an xray wrapper for a window as the
       prototype of the sandbox's global. In that case aReceiver is the xray
       wrapper and aGlobal is the sandbox's global.
     */

    /* Make sure our global is sane.  Hopefully we can remove this sometime */
    if (!(js::GetObjectClass(aGlobal)->flags & JSCLASS_DOM_GLOBAL)) {
      return NULL;
    }
    /* Check to see whether the interface objects are already installed */
    JSObject** protoOrIfaceArray = GetProtoOrIfaceArray(aGlobal);
    JSObject* cachedObject = protoOrIfaceArray[prototypes::id::EventTarget_workers];
    if (!cachedObject) {
      protoOrIfaceArray[prototypes::id::EventTarget_workers] = cachedObject = CreateInterfaceObjects(aCx, aGlobal, aReceiver);
    }

    /* cachedObject might _still_ be null, but that's OK */
    return cachedObject;
  }

} // namespace EventTargetBinding_workers

} // namespace dom
} // namespace mozilla

#endif // mozilla_dom_EventTargetBinding_h__