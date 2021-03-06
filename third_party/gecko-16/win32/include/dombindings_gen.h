/* THIS FILE IS AUTOGENERATED - DO NOT EDIT */

#ifndef __gen_dombindings_gen_h__
#define __gen_dombindings_gen_h__

namespace mozilla {
class DOMSVGLengthList;
class DOMSVGNumberList;
class DOMSVGPathSegList;
class DOMSVGPointList;
class DOMSVGTransformList;
namespace dom {
class HTMLPropertiesCollection;
class PropertyNodeList;
}
}
class nsClientRectList;
class nsDOMFileList;
class nsDOMSettableTokenList;
class nsDOMTokenList;
class nsHTMLOptionCollection;
class nsIHTMLCollection;
class nsINodeList;
class nsPaintRequestList;

namespace mozilla {
namespace dom {
namespace binding {

bool
DefinePropertyStaticJSVals(JSContext *cx);

class ClientRectList {
public:
    template<typename I>
    static JSObject *create(JSContext *cx, JSObject *scope, I *list, bool *triedToWrap)
    {
        return create(cx, scope, list, list, triedToWrap);
    }

    static bool objIsWrapper(JSObject *obj);
    static nsClientRectList *getNative(JSObject *obj);

private:
    static JSObject *create(JSContext *cx, JSObject *scope, nsClientRectList *list, nsWrapperCache *cache, bool *triedToWrap);
};

class PaintRequestList {
public:
    template<typename I>
    static JSObject *create(JSContext *cx, JSObject *scope, I *list, bool *triedToWrap)
    {
        return create(cx, scope, list, list, triedToWrap);
    }

    static bool objIsWrapper(JSObject *obj);
    static nsPaintRequestList *getNative(JSObject *obj);

private:
    static JSObject *create(JSContext *cx, JSObject *scope, nsPaintRequestList *list, nsWrapperCache *cache, bool *triedToWrap);
};

class NodeList {
public:
    template<typename I>
    static JSObject *create(JSContext *cx, JSObject *scope, I *list, bool *triedToWrap)
    {
        return create(cx, scope, list, list, triedToWrap);
    }

    static bool objIsWrapper(JSObject *obj);
    static nsINodeList *getNative(JSObject *obj);

private:
    static JSObject *create(JSContext *cx, JSObject *scope, nsINodeList *list, nsWrapperCache *cache, bool *triedToWrap);
};

class HTMLCollection {
public:
    template<typename I>
    static JSObject *create(JSContext *cx, JSObject *scope, I *list, bool *triedToWrap)
    {
        return create(cx, scope, list, list, triedToWrap);
    }

    static bool objIsWrapper(JSObject *obj);
    static nsIHTMLCollection *getNative(JSObject *obj);

private:
    static JSObject *create(JSContext *cx, JSObject *scope, nsIHTMLCollection *list, nsWrapperCache *cache, bool *triedToWrap);
};

class HTMLPropertiesCollection {
public:
    template<typename I>
    static JSObject *create(JSContext *cx, JSObject *scope, I *list, bool *triedToWrap)
    {
        return create(cx, scope, list, list, triedToWrap);
    }

    static bool objIsWrapper(JSObject *obj);
    static mozilla::dom::HTMLPropertiesCollection *getNative(JSObject *obj);

private:
    static JSObject *create(JSContext *cx, JSObject *scope, mozilla::dom::HTMLPropertiesCollection *list, nsWrapperCache *cache, bool *triedToWrap);
};

class DOMTokenList {
public:
    template<typename I>
    static JSObject *create(JSContext *cx, JSObject *scope, I *list, bool *triedToWrap)
    {
        return create(cx, scope, list, list, triedToWrap);
    }

    static bool objIsWrapper(JSObject *obj);
    static nsDOMTokenList *getNative(JSObject *obj);

private:
    static JSObject *create(JSContext *cx, JSObject *scope, nsDOMTokenList *list, nsWrapperCache *cache, bool *triedToWrap);
};

class FileList {
public:
    template<typename I>
    static JSObject *create(JSContext *cx, JSObject *scope, I *list, bool *triedToWrap)
    {
        return create(cx, scope, list, list, triedToWrap);
    }

    static bool objIsWrapper(JSObject *obj);
    static nsDOMFileList *getNative(JSObject *obj);

private:
    static JSObject *create(JSContext *cx, JSObject *scope, nsDOMFileList *list, nsWrapperCache *cache, bool *triedToWrap);
};

class PropertyNodeList {
public:
    template<typename I>
    static JSObject *create(JSContext *cx, JSObject *scope, I *list, bool *triedToWrap)
    {
        return create(cx, scope, list, list, triedToWrap);
    }

    static bool objIsWrapper(JSObject *obj);
    static mozilla::dom::PropertyNodeList *getNative(JSObject *obj);

private:
    static JSObject *create(JSContext *cx, JSObject *scope, mozilla::dom::PropertyNodeList *list, nsWrapperCache *cache, bool *triedToWrap);
};

class SVGPathSegList {
public:
    template<typename I>
    static JSObject *create(JSContext *cx, JSObject *scope, I *list, bool *triedToWrap)
    {
        return create(cx, scope, list, list, triedToWrap);
    }

    static bool objIsWrapper(JSObject *obj);
    static mozilla::DOMSVGPathSegList *getNative(JSObject *obj);

private:
    static JSObject *create(JSContext *cx, JSObject *scope, mozilla::DOMSVGPathSegList *list, nsWrapperCache *cache, bool *triedToWrap);
};

class SVGTransformList {
public:
    template<typename I>
    static JSObject *create(JSContext *cx, JSObject *scope, I *list, bool *triedToWrap)
    {
        return create(cx, scope, list, list, triedToWrap);
    }

    static bool objIsWrapper(JSObject *obj);
    static mozilla::DOMSVGTransformList *getNative(JSObject *obj);

private:
    static JSObject *create(JSContext *cx, JSObject *scope, mozilla::DOMSVGTransformList *list, nsWrapperCache *cache, bool *triedToWrap);
};

class DOMSettableTokenList {
public:
    template<typename I>
    static JSObject *create(JSContext *cx, JSObject *scope, I *list, bool *triedToWrap)
    {
        return create(cx, scope, list, list, triedToWrap);
    }

    static bool objIsWrapper(JSObject *obj);
    static nsDOMSettableTokenList *getNative(JSObject *obj);

private:
    static JSObject *create(JSContext *cx, JSObject *scope, nsDOMSettableTokenList *list, nsWrapperCache *cache, bool *triedToWrap);
};

class SVGPointList {
public:
    template<typename I>
    static JSObject *create(JSContext *cx, JSObject *scope, I *list, bool *triedToWrap)
    {
        return create(cx, scope, list, list, triedToWrap);
    }

    static bool objIsWrapper(JSObject *obj);
    static mozilla::DOMSVGPointList *getNative(JSObject *obj);

private:
    static JSObject *create(JSContext *cx, JSObject *scope, mozilla::DOMSVGPointList *list, nsWrapperCache *cache, bool *triedToWrap);
};

class SVGLengthList {
public:
    template<typename I>
    static JSObject *create(JSContext *cx, JSObject *scope, I *list, bool *triedToWrap)
    {
        return create(cx, scope, list, list, triedToWrap);
    }

    static bool objIsWrapper(JSObject *obj);
    static mozilla::DOMSVGLengthList *getNative(JSObject *obj);

private:
    static JSObject *create(JSContext *cx, JSObject *scope, mozilla::DOMSVGLengthList *list, nsWrapperCache *cache, bool *triedToWrap);
};

class SVGNumberList {
public:
    template<typename I>
    static JSObject *create(JSContext *cx, JSObject *scope, I *list, bool *triedToWrap)
    {
        return create(cx, scope, list, list, triedToWrap);
    }

    static bool objIsWrapper(JSObject *obj);
    static mozilla::DOMSVGNumberList *getNative(JSObject *obj);

private:
    static JSObject *create(JSContext *cx, JSObject *scope, mozilla::DOMSVGNumberList *list, nsWrapperCache *cache, bool *triedToWrap);
};

class HTMLOptionsCollection {
public:
    template<typename I>
    static JSObject *create(JSContext *cx, JSObject *scope, I *list, bool *triedToWrap)
    {
        return create(cx, scope, list, list, triedToWrap);
    }

    static bool objIsWrapper(JSObject *obj);
    static nsHTMLOptionCollection *getNative(JSObject *obj);

private:
    static JSObject *create(JSContext *cx, JSObject *scope, nsHTMLOptionCollection *list, nsWrapperCache *cache, bool *triedToWrap);
};


}
}
}

#endif
