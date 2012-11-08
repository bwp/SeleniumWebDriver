/* THIS FILE IS AUTOGENERATED - DO NOT EDIT */

#ifndef __gen_dombindings_gen_h__
#define __gen_dombindings_gen_h__

class nsHTMLOptionCollection;
class nsIHTMLCollection;
class nsINodeList;

namespace mozilla {
namespace dom {
namespace binding {

bool
DefinePropertyStaticJSVals(JSContext *cx);

class NodeList {
public:
    template<typename I>
    static JSObject *create(JSContext *cx, XPCWrappedNativeScope *scope, I *list, bool *triedToWrap)
    {
        return create(cx, scope, list, GetWrapperCache(list), triedToWrap);
    }

    static bool objIsWrapper(JSObject *obj);
    static nsINodeList *getNative(JSObject *obj);

private:
    static JSObject *create(JSContext *cx, XPCWrappedNativeScope *scope, nsINodeList *list, nsWrapperCache *cache, bool *triedToWrap);
};

class HTMLCollection {
public:
    template<typename I>
    static JSObject *create(JSContext *cx, XPCWrappedNativeScope *scope, I *list, bool *triedToWrap)
    {
        return create(cx, scope, list, GetWrapperCache(list), triedToWrap);
    }

    static bool objIsWrapper(JSObject *obj);
    static nsIHTMLCollection *getNative(JSObject *obj);

private:
    static JSObject *create(JSContext *cx, XPCWrappedNativeScope *scope, nsIHTMLCollection *list, nsWrapperCache *cache, bool *triedToWrap);
};

class HTMLOptionsCollection {
public:
    template<typename I>
    static JSObject *create(JSContext *cx, XPCWrappedNativeScope *scope, I *list, bool *triedToWrap)
    {
        return create(cx, scope, list, GetWrapperCache(list), triedToWrap);
    }

    static bool objIsWrapper(JSObject *obj);
    static nsHTMLOptionCollection *getNative(JSObject *obj);

private:
    static JSObject *create(JSContext *cx, XPCWrappedNativeScope *scope, nsHTMLOptionCollection *list, nsWrapperCache *cache, bool *triedToWrap);
};


}
}
}

#endif