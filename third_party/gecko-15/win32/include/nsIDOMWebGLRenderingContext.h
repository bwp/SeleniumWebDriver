/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/interfaces/canvas/nsIDOMWebGLRenderingContext.idl
 */

#ifndef __gen_nsIDOMWebGLRenderingContext_h__
#define __gen_nsIDOMWebGLRenderingContext_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#ifndef __gen_nsIVariant_h__
#include "nsIVariant.h"
#endif

#include "jspubtd.h"

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIDOMElement; /* forward declaration */

class nsIDOMHTMLCanvasElement; /* forward declaration */

class nsIPropertyBag; /* forward declaration */

typedef PRUint32  WebGLenum;

typedef bool  WebGLboolean;

typedef PRUint32  WebGLbitfield;

typedef PRInt32  WebGLint;

typedef PRInt32  WebGLsizei;

typedef PRInt64  WebGLsizeiptr;

typedef PRInt64  WebGLintptr;

typedef PRUint32  WebGLuint;

typedef float  WebGLfloat;

typedef float  WebGLclampf;

// for jsval
#include "jsapi.h"
namespace mozilla {
namespace dom {
class Element;
} // namespace dom
} // namespace mozilla
/* Avoid conflict with WinAPI */
#undef NO_ERROR

/* starting interface:    nsIWebGLTexture */
#define NS_IWEBGLTEXTURE_IID_STR "0df9f4ed-f5ff-4e51-a6ff-2bd9785a7639"

#define NS_IWEBGLTEXTURE_IID \
  {0x0df9f4ed, 0xf5ff, 0x4e51, \
    { 0xa6, 0xff, 0x2b, 0xd9, 0x78, 0x5a, 0x76, 0x39 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIWebGLTexture : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IWEBGLTEXTURE_IID)

  /* [noscript] attribute WebGLuint name; */
  NS_IMETHOD GetName(WebGLuint *aName) = 0;
  NS_IMETHOD SetName(WebGLuint aName) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIWebGLTexture, NS_IWEBGLTEXTURE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIWEBGLTEXTURE \
  NS_IMETHOD GetName(WebGLuint *aName); \
  NS_IMETHOD SetName(WebGLuint aName); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIWEBGLTEXTURE(_to) \
  NS_IMETHOD GetName(WebGLuint *aName) { return _to GetName(aName); } \
  NS_IMETHOD SetName(WebGLuint aName) { return _to SetName(aName); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIWEBGLTEXTURE(_to) \
  NS_IMETHOD GetName(WebGLuint *aName) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetName(aName); } \
  NS_IMETHOD SetName(WebGLuint aName) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetName(aName); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsWebGLTexture : public nsIWebGLTexture
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIWEBGLTEXTURE

  nsWebGLTexture();

private:
  ~nsWebGLTexture();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsWebGLTexture, nsIWebGLTexture)

nsWebGLTexture::nsWebGLTexture()
{
  /* member initializers and constructor code */
}

nsWebGLTexture::~nsWebGLTexture()
{
  /* destructor code */
}

/* [noscript] attribute WebGLuint name; */
NS_IMETHODIMP nsWebGLTexture::GetName(WebGLuint *aName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsWebGLTexture::SetName(WebGLuint aName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIWebGLBuffer */
#define NS_IWEBGLBUFFER_IID_STR "9eca9c32-8305-11de-b89b-000c29206271"

#define NS_IWEBGLBUFFER_IID \
  {0x9eca9c32, 0x8305, 0x11de, \
    { 0xb8, 0x9b, 0x00, 0x0c, 0x29, 0x20, 0x62, 0x71 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIWebGLBuffer : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IWEBGLBUFFER_IID)

  /* [noscript] attribute WebGLuint name; */
  NS_IMETHOD GetName(WebGLuint *aName) = 0;
  NS_IMETHOD SetName(WebGLuint aName) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIWebGLBuffer, NS_IWEBGLBUFFER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIWEBGLBUFFER \
  NS_IMETHOD GetName(WebGLuint *aName); \
  NS_IMETHOD SetName(WebGLuint aName); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIWEBGLBUFFER(_to) \
  NS_IMETHOD GetName(WebGLuint *aName) { return _to GetName(aName); } \
  NS_IMETHOD SetName(WebGLuint aName) { return _to SetName(aName); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIWEBGLBUFFER(_to) \
  NS_IMETHOD GetName(WebGLuint *aName) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetName(aName); } \
  NS_IMETHOD SetName(WebGLuint aName) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetName(aName); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsWebGLBuffer : public nsIWebGLBuffer
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIWEBGLBUFFER

  nsWebGLBuffer();

private:
  ~nsWebGLBuffer();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsWebGLBuffer, nsIWebGLBuffer)

nsWebGLBuffer::nsWebGLBuffer()
{
  /* member initializers and constructor code */
}

nsWebGLBuffer::~nsWebGLBuffer()
{
  /* destructor code */
}

/* [noscript] attribute WebGLuint name; */
NS_IMETHODIMP nsWebGLBuffer::GetName(WebGLuint *aName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsWebGLBuffer::SetName(WebGLuint aName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIWebGLProgram */
#define NS_IWEBGLPROGRAM_IID_STR "a6a19e74-8305-11de-9ce9-000c29206271"

#define NS_IWEBGLPROGRAM_IID \
  {0xa6a19e74, 0x8305, 0x11de, \
    { 0x9c, 0xe9, 0x00, 0x0c, 0x29, 0x20, 0x62, 0x71 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIWebGLProgram : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IWEBGLPROGRAM_IID)

  /* [noscript] attribute WebGLuint name; */
  NS_IMETHOD GetName(WebGLuint *aName) = 0;
  NS_IMETHOD SetName(WebGLuint aName) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIWebGLProgram, NS_IWEBGLPROGRAM_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIWEBGLPROGRAM \
  NS_IMETHOD GetName(WebGLuint *aName); \
  NS_IMETHOD SetName(WebGLuint aName); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIWEBGLPROGRAM(_to) \
  NS_IMETHOD GetName(WebGLuint *aName) { return _to GetName(aName); } \
  NS_IMETHOD SetName(WebGLuint aName) { return _to SetName(aName); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIWEBGLPROGRAM(_to) \
  NS_IMETHOD GetName(WebGLuint *aName) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetName(aName); } \
  NS_IMETHOD SetName(WebGLuint aName) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetName(aName); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsWebGLProgram : public nsIWebGLProgram
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIWEBGLPROGRAM

  nsWebGLProgram();

private:
  ~nsWebGLProgram();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsWebGLProgram, nsIWebGLProgram)

nsWebGLProgram::nsWebGLProgram()
{
  /* member initializers and constructor code */
}

nsWebGLProgram::~nsWebGLProgram()
{
  /* destructor code */
}

/* [noscript] attribute WebGLuint name; */
NS_IMETHODIMP nsWebGLProgram::GetName(WebGLuint *aName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsWebGLProgram::SetName(WebGLuint aName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIWebGLShader */
#define NS_IWEBGLSHADER_IID_STR "ac7440a4-8305-11de-807b-000c29206271"

#define NS_IWEBGLSHADER_IID \
  {0xac7440a4, 0x8305, 0x11de, \
    { 0x80, 0x7b, 0x00, 0x0c, 0x29, 0x20, 0x62, 0x71 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIWebGLShader : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IWEBGLSHADER_IID)

  /* [noscript] attribute WebGLuint name; */
  NS_IMETHOD GetName(WebGLuint *aName) = 0;
  NS_IMETHOD SetName(WebGLuint aName) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIWebGLShader, NS_IWEBGLSHADER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIWEBGLSHADER \
  NS_IMETHOD GetName(WebGLuint *aName); \
  NS_IMETHOD SetName(WebGLuint aName); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIWEBGLSHADER(_to) \
  NS_IMETHOD GetName(WebGLuint *aName) { return _to GetName(aName); } \
  NS_IMETHOD SetName(WebGLuint aName) { return _to SetName(aName); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIWEBGLSHADER(_to) \
  NS_IMETHOD GetName(WebGLuint *aName) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetName(aName); } \
  NS_IMETHOD SetName(WebGLuint aName) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetName(aName); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsWebGLShader : public nsIWebGLShader
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIWEBGLSHADER

  nsWebGLShader();

private:
  ~nsWebGLShader();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsWebGLShader, nsIWebGLShader)

nsWebGLShader::nsWebGLShader()
{
  /* member initializers and constructor code */
}

nsWebGLShader::~nsWebGLShader()
{
  /* destructor code */
}

/* [noscript] attribute WebGLuint name; */
NS_IMETHODIMP nsWebGLShader::GetName(WebGLuint *aName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsWebGLShader::SetName(WebGLuint aName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIWebGLShaderArray */
#define NS_IWEBGLSHADERARRAY_IID_STR "beea4b38-3094-4e8d-b6e6-8b21d07e8994"

#define NS_IWEBGLSHADERARRAY_IID \
  {0xbeea4b38, 0x3094, 0x4e8d, \
    { 0xb6, 0xe6, 0x8b, 0x21, 0xd0, 0x7e, 0x89, 0x94 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIWebGLShaderArray : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IWEBGLSHADERARRAY_IID)

  /* readonly attribute unsigned long length; */
  NS_SCRIPTABLE NS_IMETHOD GetLength(PRUint32 *aLength) = 0;

  /* nsIWebGLShader item (in unsigned long index); */
  NS_SCRIPTABLE NS_IMETHOD Item(PRUint32 index, nsIWebGLShader * *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIWebGLShaderArray, NS_IWEBGLSHADERARRAY_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIWEBGLSHADERARRAY \
  NS_SCRIPTABLE NS_IMETHOD GetLength(PRUint32 *aLength); \
  NS_SCRIPTABLE NS_IMETHOD Item(PRUint32 index, nsIWebGLShader * *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIWEBGLSHADERARRAY(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetLength(PRUint32 *aLength) { return _to GetLength(aLength); } \
  NS_SCRIPTABLE NS_IMETHOD Item(PRUint32 index, nsIWebGLShader * *_retval NS_OUTPARAM) { return _to Item(index, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIWEBGLSHADERARRAY(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetLength(PRUint32 *aLength) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLength(aLength); } \
  NS_SCRIPTABLE NS_IMETHOD Item(PRUint32 index, nsIWebGLShader * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Item(index, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsWebGLShaderArray : public nsIWebGLShaderArray
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIWEBGLSHADERARRAY

  nsWebGLShaderArray();

private:
  ~nsWebGLShaderArray();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsWebGLShaderArray, nsIWebGLShaderArray)

nsWebGLShaderArray::nsWebGLShaderArray()
{
  /* member initializers and constructor code */
}

nsWebGLShaderArray::~nsWebGLShaderArray()
{
  /* destructor code */
}

/* readonly attribute unsigned long length; */
NS_IMETHODIMP nsWebGLShaderArray::GetLength(PRUint32 *aLength)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIWebGLShader item (in unsigned long index); */
NS_IMETHODIMP nsWebGLShaderArray::Item(PRUint32 index, nsIWebGLShader * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIWebGLFramebuffer */
#define NS_IWEBGLFRAMEBUFFER_IID_STR "bce8be60-8305-11de-9f3c-000c29206271"

#define NS_IWEBGLFRAMEBUFFER_IID \
  {0xbce8be60, 0x8305, 0x11de, \
    { 0x9f, 0x3c, 0x00, 0x0c, 0x29, 0x20, 0x62, 0x71 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIWebGLFramebuffer : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IWEBGLFRAMEBUFFER_IID)

  /* [noscript] attribute WebGLuint name; */
  NS_IMETHOD GetName(WebGLuint *aName) = 0;
  NS_IMETHOD SetName(WebGLuint aName) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIWebGLFramebuffer, NS_IWEBGLFRAMEBUFFER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIWEBGLFRAMEBUFFER \
  NS_IMETHOD GetName(WebGLuint *aName); \
  NS_IMETHOD SetName(WebGLuint aName); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIWEBGLFRAMEBUFFER(_to) \
  NS_IMETHOD GetName(WebGLuint *aName) { return _to GetName(aName); } \
  NS_IMETHOD SetName(WebGLuint aName) { return _to SetName(aName); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIWEBGLFRAMEBUFFER(_to) \
  NS_IMETHOD GetName(WebGLuint *aName) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetName(aName); } \
  NS_IMETHOD SetName(WebGLuint aName) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetName(aName); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsWebGLFramebuffer : public nsIWebGLFramebuffer
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIWEBGLFRAMEBUFFER

  nsWebGLFramebuffer();

private:
  ~nsWebGLFramebuffer();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsWebGLFramebuffer, nsIWebGLFramebuffer)

nsWebGLFramebuffer::nsWebGLFramebuffer()
{
  /* member initializers and constructor code */
}

nsWebGLFramebuffer::~nsWebGLFramebuffer()
{
  /* destructor code */
}

/* [noscript] attribute WebGLuint name; */
NS_IMETHODIMP nsWebGLFramebuffer::GetName(WebGLuint *aName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsWebGLFramebuffer::SetName(WebGLuint aName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIWebGLRenderbuffer */
#define NS_IWEBGLRENDERBUFFER_IID_STR "c82eacd0-8305-11de-9de9-000c29206271"

#define NS_IWEBGLRENDERBUFFER_IID \
  {0xc82eacd0, 0x8305, 0x11de, \
    { 0x9d, 0xe9, 0x00, 0x0c, 0x29, 0x20, 0x62, 0x71 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIWebGLRenderbuffer : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IWEBGLRENDERBUFFER_IID)

  /* [noscript] attribute WebGLuint name; */
  NS_IMETHOD GetName(WebGLuint *aName) = 0;
  NS_IMETHOD SetName(WebGLuint aName) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIWebGLRenderbuffer, NS_IWEBGLRENDERBUFFER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIWEBGLRENDERBUFFER \
  NS_IMETHOD GetName(WebGLuint *aName); \
  NS_IMETHOD SetName(WebGLuint aName); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIWEBGLRENDERBUFFER(_to) \
  NS_IMETHOD GetName(WebGLuint *aName) { return _to GetName(aName); } \
  NS_IMETHOD SetName(WebGLuint aName) { return _to SetName(aName); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIWEBGLRENDERBUFFER(_to) \
  NS_IMETHOD GetName(WebGLuint *aName) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetName(aName); } \
  NS_IMETHOD SetName(WebGLuint aName) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetName(aName); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsWebGLRenderbuffer : public nsIWebGLRenderbuffer
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIWEBGLRENDERBUFFER

  nsWebGLRenderbuffer();

private:
  ~nsWebGLRenderbuffer();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsWebGLRenderbuffer, nsIWebGLRenderbuffer)

nsWebGLRenderbuffer::nsWebGLRenderbuffer()
{
  /* member initializers and constructor code */
}

nsWebGLRenderbuffer::~nsWebGLRenderbuffer()
{
  /* destructor code */
}

/* [noscript] attribute WebGLuint name; */
NS_IMETHODIMP nsWebGLRenderbuffer::GetName(WebGLuint *aName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsWebGLRenderbuffer::SetName(WebGLuint aName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIWebGLActiveInfo */
#define NS_IWEBGLACTIVEINFO_IID_STR "a85d4fd0-5b9f-4cb8-aeee-5a2c5c5bad76"

#define NS_IWEBGLACTIVEINFO_IID \
  {0xa85d4fd0, 0x5b9f, 0x4cb8, \
    { 0xae, 0xee, 0x5a, 0x2c, 0x5c, 0x5b, 0xad, 0x76 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIWebGLActiveInfo : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IWEBGLACTIVEINFO_IID)

  /* readonly attribute WebGLint size; */
  NS_SCRIPTABLE NS_IMETHOD GetSize(WebGLint *aSize) = 0;

  /* readonly attribute WebGLenum type; */
  NS_SCRIPTABLE NS_IMETHOD GetType(WebGLenum *aType) = 0;

  /* readonly attribute DOMString name; */
  NS_SCRIPTABLE NS_IMETHOD GetName(nsAString & aName) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIWebGLActiveInfo, NS_IWEBGLACTIVEINFO_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIWEBGLACTIVEINFO \
  NS_SCRIPTABLE NS_IMETHOD GetSize(WebGLint *aSize); \
  NS_SCRIPTABLE NS_IMETHOD GetType(WebGLenum *aType); \
  NS_SCRIPTABLE NS_IMETHOD GetName(nsAString & aName); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIWEBGLACTIVEINFO(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetSize(WebGLint *aSize) { return _to GetSize(aSize); } \
  NS_SCRIPTABLE NS_IMETHOD GetType(WebGLenum *aType) { return _to GetType(aType); } \
  NS_SCRIPTABLE NS_IMETHOD GetName(nsAString & aName) { return _to GetName(aName); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIWEBGLACTIVEINFO(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetSize(WebGLint *aSize) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSize(aSize); } \
  NS_SCRIPTABLE NS_IMETHOD GetType(WebGLenum *aType) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetType(aType); } \
  NS_SCRIPTABLE NS_IMETHOD GetName(nsAString & aName) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetName(aName); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsWebGLActiveInfo : public nsIWebGLActiveInfo
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIWEBGLACTIVEINFO

  nsWebGLActiveInfo();

private:
  ~nsWebGLActiveInfo();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsWebGLActiveInfo, nsIWebGLActiveInfo)

nsWebGLActiveInfo::nsWebGLActiveInfo()
{
  /* member initializers and constructor code */
}

nsWebGLActiveInfo::~nsWebGLActiveInfo()
{
  /* destructor code */
}

/* readonly attribute WebGLint size; */
NS_IMETHODIMP nsWebGLActiveInfo::GetSize(WebGLint *aSize)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute WebGLenum type; */
NS_IMETHODIMP nsWebGLActiveInfo::GetType(WebGLenum *aType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString name; */
NS_IMETHODIMP nsWebGLActiveInfo::GetName(nsAString & aName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIWebGLShaderPrecisionFormat */
#define NS_IWEBGLSHADERPRECISIONFORMAT_IID_STR "76265e93-2e8f-40ca-b25b-eea5995e9641"

#define NS_IWEBGLSHADERPRECISIONFORMAT_IID \
  {0x76265e93, 0x2e8f, 0x40ca, \
    { 0xb2, 0x5b, 0xee, 0xa5, 0x99, 0x5e, 0x96, 0x41 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIWebGLShaderPrecisionFormat : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IWEBGLSHADERPRECISIONFORMAT_IID)

  /* readonly attribute WebGLint rangeMin; */
  NS_SCRIPTABLE NS_IMETHOD GetRangeMin(WebGLint *aRangeMin) = 0;

  /* readonly attribute WebGLint rangeMax; */
  NS_SCRIPTABLE NS_IMETHOD GetRangeMax(WebGLint *aRangeMax) = 0;

  /* readonly attribute WebGLint precision; */
  NS_SCRIPTABLE NS_IMETHOD GetPrecision(WebGLint *aPrecision) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIWebGLShaderPrecisionFormat, NS_IWEBGLSHADERPRECISIONFORMAT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIWEBGLSHADERPRECISIONFORMAT \
  NS_SCRIPTABLE NS_IMETHOD GetRangeMin(WebGLint *aRangeMin); \
  NS_SCRIPTABLE NS_IMETHOD GetRangeMax(WebGLint *aRangeMax); \
  NS_SCRIPTABLE NS_IMETHOD GetPrecision(WebGLint *aPrecision); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIWEBGLSHADERPRECISIONFORMAT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetRangeMin(WebGLint *aRangeMin) { return _to GetRangeMin(aRangeMin); } \
  NS_SCRIPTABLE NS_IMETHOD GetRangeMax(WebGLint *aRangeMax) { return _to GetRangeMax(aRangeMax); } \
  NS_SCRIPTABLE NS_IMETHOD GetPrecision(WebGLint *aPrecision) { return _to GetPrecision(aPrecision); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIWEBGLSHADERPRECISIONFORMAT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetRangeMin(WebGLint *aRangeMin) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRangeMin(aRangeMin); } \
  NS_SCRIPTABLE NS_IMETHOD GetRangeMax(WebGLint *aRangeMax) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRangeMax(aRangeMax); } \
  NS_SCRIPTABLE NS_IMETHOD GetPrecision(WebGLint *aPrecision) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPrecision(aPrecision); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsWebGLShaderPrecisionFormat : public nsIWebGLShaderPrecisionFormat
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIWEBGLSHADERPRECISIONFORMAT

  nsWebGLShaderPrecisionFormat();

private:
  ~nsWebGLShaderPrecisionFormat();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsWebGLShaderPrecisionFormat, nsIWebGLShaderPrecisionFormat)

nsWebGLShaderPrecisionFormat::nsWebGLShaderPrecisionFormat()
{
  /* member initializers and constructor code */
}

nsWebGLShaderPrecisionFormat::~nsWebGLShaderPrecisionFormat()
{
  /* destructor code */
}

/* readonly attribute WebGLint rangeMin; */
NS_IMETHODIMP nsWebGLShaderPrecisionFormat::GetRangeMin(WebGLint *aRangeMin)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute WebGLint rangeMax; */
NS_IMETHODIMP nsWebGLShaderPrecisionFormat::GetRangeMax(WebGLint *aRangeMax)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute WebGLint precision; */
NS_IMETHODIMP nsWebGLShaderPrecisionFormat::GetPrecision(WebGLint *aPrecision)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIWebGLUniformLocation */
#define NS_IWEBGLUNIFORMLOCATION_IID_STR "d38b0467-623e-4c82-9140-5f14a3bd1bad"

#define NS_IWEBGLUNIFORMLOCATION_IID \
  {0xd38b0467, 0x623e, 0x4c82, \
    { 0x91, 0x40, 0x5f, 0x14, 0xa3, 0xbd, 0x1b, 0xad }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIWebGLUniformLocation : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IWEBGLUNIFORMLOCATION_IID)

  /* [noscript] attribute WebGLint location; */
  NS_IMETHOD GetLocation(WebGLint *aLocation) = 0;
  NS_IMETHOD SetLocation(WebGLint aLocation) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIWebGLUniformLocation, NS_IWEBGLUNIFORMLOCATION_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIWEBGLUNIFORMLOCATION \
  NS_IMETHOD GetLocation(WebGLint *aLocation); \
  NS_IMETHOD SetLocation(WebGLint aLocation); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIWEBGLUNIFORMLOCATION(_to) \
  NS_IMETHOD GetLocation(WebGLint *aLocation) { return _to GetLocation(aLocation); } \
  NS_IMETHOD SetLocation(WebGLint aLocation) { return _to SetLocation(aLocation); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIWEBGLUNIFORMLOCATION(_to) \
  NS_IMETHOD GetLocation(WebGLint *aLocation) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLocation(aLocation); } \
  NS_IMETHOD SetLocation(WebGLint aLocation) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetLocation(aLocation); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsWebGLUniformLocation : public nsIWebGLUniformLocation
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIWEBGLUNIFORMLOCATION

  nsWebGLUniformLocation();

private:
  ~nsWebGLUniformLocation();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsWebGLUniformLocation, nsIWebGLUniformLocation)

nsWebGLUniformLocation::nsWebGLUniformLocation()
{
  /* member initializers and constructor code */
}

nsWebGLUniformLocation::~nsWebGLUniformLocation()
{
  /* destructor code */
}

/* [noscript] attribute WebGLint location; */
NS_IMETHODIMP nsWebGLUniformLocation::GetLocation(WebGLint *aLocation)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsWebGLUniformLocation::SetLocation(WebGLint aLocation)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIWebGLExtension */
#define NS_IWEBGLEXTENSION_IID_STR "70814f32-a5c5-4b95-83d5-ac653bac3316"

#define NS_IWEBGLEXTENSION_IID \
  {0x70814f32, 0xa5c5, 0x4b95, \
    { 0x83, 0xd5, 0xac, 0x65, 0x3b, 0xac, 0x33, 0x16 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIWebGLExtension : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IWEBGLEXTENSION_IID)

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIWebGLExtension, NS_IWEBGLEXTENSION_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIWEBGLEXTENSION \
  /* no methods! */

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIWEBGLEXTENSION(_to) \
  /* no methods! */

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIWEBGLEXTENSION(_to) \
  /* no methods! */

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsWebGLExtension : public nsIWebGLExtension
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIWEBGLEXTENSION

  nsWebGLExtension();

private:
  ~nsWebGLExtension();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsWebGLExtension, nsIWebGLExtension)

nsWebGLExtension::nsWebGLExtension()
{
  /* member initializers and constructor code */
}

nsWebGLExtension::~nsWebGLExtension()
{
  /* destructor code */
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIWebGLExtensionStandardDerivatives */
#define NS_IWEBGLEXTENSIONSTANDARDDERIVATIVES_IID_STR "3de3dfd9-864a-4e4c-989b-2977eaa80b7b"

#define NS_IWEBGLEXTENSIONSTANDARDDERIVATIVES_IID \
  {0x3de3dfd9, 0x864a, 0x4e4c, \
    { 0x98, 0x9b, 0x29, 0x77, 0xea, 0xa8, 0x0b, 0x7b }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIWebGLExtensionStandardDerivatives : public nsIWebGLExtension {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IWEBGLEXTENSIONSTANDARDDERIVATIVES_IID)

  enum {
    FRAGMENT_SHADER_DERIVATIVE_HINT_OES = 35723U
  };

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIWebGLExtensionStandardDerivatives, NS_IWEBGLEXTENSIONSTANDARDDERIVATIVES_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIWEBGLEXTENSIONSTANDARDDERIVATIVES \

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIWEBGLEXTENSIONSTANDARDDERIVATIVES(_to) \

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIWEBGLEXTENSIONSTANDARDDERIVATIVES(_to) \

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsWebGLExtensionStandardDerivatives : public nsIWebGLExtensionStandardDerivatives
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIWEBGLEXTENSIONSTANDARDDERIVATIVES

  nsWebGLExtensionStandardDerivatives();

private:
  ~nsWebGLExtensionStandardDerivatives();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsWebGLExtensionStandardDerivatives, nsIWebGLExtensionStandardDerivatives)

nsWebGLExtensionStandardDerivatives::nsWebGLExtensionStandardDerivatives()
{
  /* member initializers and constructor code */
}

nsWebGLExtensionStandardDerivatives::~nsWebGLExtensionStandardDerivatives()
{
  /* destructor code */
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIWebGLExtensionLoseContext */
#define NS_IWEBGLEXTENSIONLOSECONTEXT_IID_STR "b0afc2eb-0895-4509-98de-5c383d160694"

#define NS_IWEBGLEXTENSIONLOSECONTEXT_IID \
  {0xb0afc2eb, 0x0895, 0x4509, \
    { 0x98, 0xde, 0x5c, 0x38, 0x3d, 0x16, 0x06, 0x94 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIWebGLExtensionLoseContext : public nsIWebGLExtension {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IWEBGLEXTENSIONLOSECONTEXT_IID)

  /* void loseContext (); */
  NS_SCRIPTABLE NS_IMETHOD LoseContext(void) = 0;

  /* void restoreContext (); */
  NS_SCRIPTABLE NS_IMETHOD RestoreContext(void) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIWebGLExtensionLoseContext, NS_IWEBGLEXTENSIONLOSECONTEXT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIWEBGLEXTENSIONLOSECONTEXT \
  NS_SCRIPTABLE NS_IMETHOD LoseContext(void); \
  NS_SCRIPTABLE NS_IMETHOD RestoreContext(void); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIWEBGLEXTENSIONLOSECONTEXT(_to) \
  NS_SCRIPTABLE NS_IMETHOD LoseContext(void) { return _to LoseContext(); } \
  NS_SCRIPTABLE NS_IMETHOD RestoreContext(void) { return _to RestoreContext(); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIWEBGLEXTENSIONLOSECONTEXT(_to) \
  NS_SCRIPTABLE NS_IMETHOD LoseContext(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->LoseContext(); } \
  NS_SCRIPTABLE NS_IMETHOD RestoreContext(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->RestoreContext(); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsWebGLExtensionLoseContext : public nsIWebGLExtensionLoseContext
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIWEBGLEXTENSIONLOSECONTEXT

  nsWebGLExtensionLoseContext();

private:
  ~nsWebGLExtensionLoseContext();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsWebGLExtensionLoseContext, nsIWebGLExtensionLoseContext)

nsWebGLExtensionLoseContext::nsWebGLExtensionLoseContext()
{
  /* member initializers and constructor code */
}

nsWebGLExtensionLoseContext::~nsWebGLExtensionLoseContext()
{
  /* destructor code */
}

/* void loseContext (); */
NS_IMETHODIMP nsWebGLExtensionLoseContext::LoseContext()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void restoreContext (); */
NS_IMETHODIMP nsWebGLExtensionLoseContext::RestoreContext()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIWebGLExtensionTextureFilterAnisotropic */
#define NS_IWEBGLEXTENSIONTEXTUREFILTERANISOTROPIC_IID_STR "73bfb64d-94bd-4a7a-9eab-6b6d32e57aa0"

#define NS_IWEBGLEXTENSIONTEXTUREFILTERANISOTROPIC_IID \
  {0x73bfb64d, 0x94bd, 0x4a7a, \
    { 0x9e, 0xab, 0x6b, 0x6d, 0x32, 0xe5, 0x7a, 0xa0 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIWebGLExtensionTextureFilterAnisotropic : public nsIWebGLExtension {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IWEBGLEXTENSIONTEXTUREFILTERANISOTROPIC_IID)

  enum {
    TEXTURE_MAX_ANISOTROPY_EXT = 34046U,
    MAX_TEXTURE_MAX_ANISOTROPY_EXT = 34047U
  };

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIWebGLExtensionTextureFilterAnisotropic, NS_IWEBGLEXTENSIONTEXTUREFILTERANISOTROPIC_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIWEBGLEXTENSIONTEXTUREFILTERANISOTROPIC \

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIWEBGLEXTENSIONTEXTUREFILTERANISOTROPIC(_to) \

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIWEBGLEXTENSIONTEXTUREFILTERANISOTROPIC(_to) \

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsWebGLExtensionTextureFilterAnisotropic : public nsIWebGLExtensionTextureFilterAnisotropic
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIWEBGLEXTENSIONTEXTUREFILTERANISOTROPIC

  nsWebGLExtensionTextureFilterAnisotropic();

private:
  ~nsWebGLExtensionTextureFilterAnisotropic();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsWebGLExtensionTextureFilterAnisotropic, nsIWebGLExtensionTextureFilterAnisotropic)

nsWebGLExtensionTextureFilterAnisotropic::nsWebGLExtensionTextureFilterAnisotropic()
{
  /* member initializers and constructor code */
}

nsWebGLExtensionTextureFilterAnisotropic::~nsWebGLExtensionTextureFilterAnisotropic()
{
  /* destructor code */
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIWebGLExtensionCompressedTextureS3TC */
#define NS_IWEBGLEXTENSIONCOMPRESSEDTEXTURES3TC_IID_STR "a1508b6f-f2ab-44cf-bbb4-3cfb339e1e8a"

#define NS_IWEBGLEXTENSIONCOMPRESSEDTEXTURES3TC_IID \
  {0xa1508b6f, 0xf2ab, 0x44cf, \
    { 0xbb, 0xb4, 0x3c, 0xfb, 0x33, 0x9e, 0x1e, 0x8a }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIWebGLExtensionCompressedTextureS3TC : public nsIWebGLExtension {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IWEBGLEXTENSIONCOMPRESSEDTEXTURES3TC_IID)

  enum {
    COMPRESSED_RGB_S3TC_DXT1_EXT = 33776U,
    COMPRESSED_RGBA_S3TC_DXT1_EXT = 33777U,
    COMPRESSED_RGBA_S3TC_DXT3_EXT = 33778U,
    COMPRESSED_RGBA_S3TC_DXT5_EXT = 33779U
  };

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIWebGLExtensionCompressedTextureS3TC, NS_IWEBGLEXTENSIONCOMPRESSEDTEXTURES3TC_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIWEBGLEXTENSIONCOMPRESSEDTEXTURES3TC \

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIWEBGLEXTENSIONCOMPRESSEDTEXTURES3TC(_to) \

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIWEBGLEXTENSIONCOMPRESSEDTEXTURES3TC(_to) \

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsWebGLExtensionCompressedTextureS3TC : public nsIWebGLExtensionCompressedTextureS3TC
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIWEBGLEXTENSIONCOMPRESSEDTEXTURES3TC

  nsWebGLExtensionCompressedTextureS3TC();

private:
  ~nsWebGLExtensionCompressedTextureS3TC();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsWebGLExtensionCompressedTextureS3TC, nsIWebGLExtensionCompressedTextureS3TC)

nsWebGLExtensionCompressedTextureS3TC::nsWebGLExtensionCompressedTextureS3TC()
{
  /* member initializers and constructor code */
}

nsWebGLExtensionCompressedTextureS3TC::~nsWebGLExtensionCompressedTextureS3TC()
{
  /* destructor code */
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIDOMWebGLRenderingContext */
#define NS_IDOMWEBGLRENDERINGCONTEXT_IID_STR "a1fdfb76-6a08-4a1a-b0c9-d92ef3357cb9"

#define NS_IDOMWEBGLRENDERINGCONTEXT_IID \
  {0xa1fdfb76, 0x6a08, 0x4a1a, \
    { 0xb0, 0xc9, 0xd9, 0x2e, 0xf3, 0x35, 0x7c, 0xb9 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMWebGLRenderingContext : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMWEBGLRENDERINGCONTEXT_IID)

  enum {
    DEPTH_BUFFER_BIT = 256U,
    STENCIL_BUFFER_BIT = 1024U,
    COLOR_BUFFER_BIT = 16384U,
    POINTS = 0U,
    LINES = 1U,
    LINE_LOOP = 2U,
    LINE_STRIP = 3U,
    TRIANGLES = 4U,
    TRIANGLE_STRIP = 5U,
    TRIANGLE_FAN = 6U,
    ZERO = 0U,
    ONE = 1U,
    SRC_COLOR = 768U,
    ONE_MINUS_SRC_COLOR = 769U,
    SRC_ALPHA = 770U,
    ONE_MINUS_SRC_ALPHA = 771U,
    DST_ALPHA = 772U,
    ONE_MINUS_DST_ALPHA = 773U,
    DST_COLOR = 774U,
    ONE_MINUS_DST_COLOR = 775U,
    SRC_ALPHA_SATURATE = 776U,
    FUNC_ADD = 32774U,
    BLEND_EQUATION = 32777U,
    BLEND_EQUATION_RGB = 32777U,
    BLEND_EQUATION_ALPHA = 34877U,
    FUNC_SUBTRACT = 32778U,
    FUNC_REVERSE_SUBTRACT = 32779U,
    BLEND_DST_RGB = 32968U,
    BLEND_SRC_RGB = 32969U,
    BLEND_DST_ALPHA = 32970U,
    BLEND_SRC_ALPHA = 32971U,
    CONSTANT_COLOR = 32769U,
    ONE_MINUS_CONSTANT_COLOR = 32770U,
    CONSTANT_ALPHA = 32771U,
    ONE_MINUS_CONSTANT_ALPHA = 32772U,
    BLEND_COLOR = 32773U,
    ARRAY_BUFFER = 34962U,
    ELEMENT_ARRAY_BUFFER = 34963U,
    ARRAY_BUFFER_BINDING = 34964U,
    ELEMENT_ARRAY_BUFFER_BINDING = 34965U,
    STREAM_DRAW = 35040U,
    STATIC_DRAW = 35044U,
    DYNAMIC_DRAW = 35048U,
    BUFFER_SIZE = 34660U,
    BUFFER_USAGE = 34661U,
    CURRENT_VERTEX_ATTRIB = 34342U,
    FRONT = 1028U,
    BACK = 1029U,
    FRONT_AND_BACK = 1032U,
    TEXTURE_2D = 3553U,
    CULL_FACE = 2884U,
    BLEND = 3042U,
    DITHER = 3024U,
    STENCIL_TEST = 2960U,
    DEPTH_TEST = 2929U,
    SCISSOR_TEST = 3089U,
    POLYGON_OFFSET_FILL = 32823U,
    SAMPLE_ALPHA_TO_COVERAGE = 32926U,
    SAMPLE_COVERAGE = 32928U,
    NO_ERROR = 0U,
    INVALID_ENUM = 1280U,
    INVALID_VALUE = 1281U,
    INVALID_OPERATION = 1282U,
    OUT_OF_MEMORY = 1285U,
    CW = 2304U,
    CCW = 2305U,
    LINE_WIDTH = 2849U,
    ALIASED_POINT_SIZE_RANGE = 33901U,
    ALIASED_LINE_WIDTH_RANGE = 33902U,
    CULL_FACE_MODE = 2885U,
    FRONT_FACE = 2886U,
    DEPTH_RANGE = 2928U,
    DEPTH_WRITEMASK = 2930U,
    DEPTH_CLEAR_VALUE = 2931U,
    DEPTH_FUNC = 2932U,
    STENCIL_CLEAR_VALUE = 2961U,
    STENCIL_FUNC = 2962U,
    STENCIL_FAIL = 2964U,
    STENCIL_PASS_DEPTH_FAIL = 2965U,
    STENCIL_PASS_DEPTH_PASS = 2966U,
    STENCIL_REF = 2967U,
    STENCIL_VALUE_MASK = 2963U,
    STENCIL_WRITEMASK = 2968U,
    STENCIL_BACK_FUNC = 34816U,
    STENCIL_BACK_FAIL = 34817U,
    STENCIL_BACK_PASS_DEPTH_FAIL = 34818U,
    STENCIL_BACK_PASS_DEPTH_PASS = 34819U,
    STENCIL_BACK_REF = 36003U,
    STENCIL_BACK_VALUE_MASK = 36004U,
    STENCIL_BACK_WRITEMASK = 36005U,
    SCISSOR_BOX = 3088U,
    COLOR_CLEAR_VALUE = 3106U,
    COLOR_WRITEMASK = 3107U,
    UNPACK_ALIGNMENT = 3317U,
    PACK_ALIGNMENT = 3333U,
    MAX_TEXTURE_SIZE = 3379U,
    MAX_VIEWPORT_DIMS = 3386U,
    SUBPIXEL_BITS = 3408U,
    RED_BITS = 3410U,
    GREEN_BITS = 3411U,
    BLUE_BITS = 3412U,
    ALPHA_BITS = 3413U,
    DEPTH_BITS = 3414U,
    STENCIL_BITS = 3415U,
    POLYGON_OFFSET_UNITS = 10752U,
    POLYGON_OFFSET_FACTOR = 32824U,
    TEXTURE_BINDING_2D = 32873U,
    SAMPLE_BUFFERS = 32936U,
    SAMPLES = 32937U,
    SAMPLE_COVERAGE_VALUE = 32938U,
    SAMPLE_COVERAGE_INVERT = 32939U,
    NUM_COMPRESSED_TEXTURE_FORMATS = 34466U,
    COMPRESSED_TEXTURE_FORMATS = 34467U,
    DONT_CARE = 4352U,
    FASTEST = 4353U,
    NICEST = 4354U,
    GENERATE_MIPMAP_HINT = 33170U,
    BYTE = 5120U,
    UNSIGNED_BYTE = 5121U,
    SHORT = 5122U,
    UNSIGNED_SHORT = 5123U,
    INT = 5124U,
    UNSIGNED_INT = 5125U,
    FLOAT = 5126U,
    DEPTH_COMPONENT = 6402U,
    ALPHA = 6406U,
    RGB = 6407U,
    RGBA = 6408U,
    LUMINANCE = 6409U,
    LUMINANCE_ALPHA = 6410U,
    UNSIGNED_SHORT_4_4_4_4 = 32819U,
    UNSIGNED_SHORT_5_5_5_1 = 32820U,
    UNSIGNED_SHORT_5_6_5 = 33635U,
    FRAGMENT_SHADER = 35632U,
    VERTEX_SHADER = 35633U,
    MAX_VERTEX_ATTRIBS = 34921U,
    MAX_VERTEX_UNIFORM_VECTORS = 36347U,
    MAX_VARYING_VECTORS = 36348U,
    MAX_COMBINED_TEXTURE_IMAGE_UNITS = 35661U,
    MAX_VERTEX_TEXTURE_IMAGE_UNITS = 35660U,
    MAX_TEXTURE_IMAGE_UNITS = 34930U,
    MAX_FRAGMENT_UNIFORM_VECTORS = 36349U,
    SHADER_TYPE = 35663U,
    DELETE_STATUS = 35712U,
    LINK_STATUS = 35714U,
    VALIDATE_STATUS = 35715U,
    ATTACHED_SHADERS = 35717U,
    ACTIVE_UNIFORMS = 35718U,
    ACTIVE_ATTRIBUTES = 35721U,
    SHADING_LANGUAGE_VERSION = 35724U,
    CURRENT_PROGRAM = 35725U,
    NEVER = 512U,
    LESS = 513U,
    EQUAL = 514U,
    LEQUAL = 515U,
    GREATER = 516U,
    NOTEQUAL = 517U,
    GEQUAL = 518U,
    ALWAYS = 519U,
    KEEP = 7680U,
    REPLACE = 7681U,
    INCR = 7682U,
    DECR = 7683U,
    INVERT = 5386U,
    INCR_WRAP = 34055U,
    DECR_WRAP = 34056U,
    VENDOR = 7936U,
    RENDERER = 7937U,
    VERSION = 7938U,
    EXTENSIONS = 7939U,
    NEAREST = 9728U,
    LINEAR = 9729U,
    NEAREST_MIPMAP_NEAREST = 9984U,
    LINEAR_MIPMAP_NEAREST = 9985U,
    NEAREST_MIPMAP_LINEAR = 9986U,
    LINEAR_MIPMAP_LINEAR = 9987U,
    TEXTURE_MAG_FILTER = 10240U,
    TEXTURE_MIN_FILTER = 10241U,
    TEXTURE_WRAP_S = 10242U,
    TEXTURE_WRAP_T = 10243U,
    TEXTURE = 5890U,
    TEXTURE_CUBE_MAP = 34067U,
    TEXTURE_BINDING_CUBE_MAP = 34068U,
    TEXTURE_CUBE_MAP_POSITIVE_X = 34069U,
    TEXTURE_CUBE_MAP_NEGATIVE_X = 34070U,
    TEXTURE_CUBE_MAP_POSITIVE_Y = 34071U,
    TEXTURE_CUBE_MAP_NEGATIVE_Y = 34072U,
    TEXTURE_CUBE_MAP_POSITIVE_Z = 34073U,
    TEXTURE_CUBE_MAP_NEGATIVE_Z = 34074U,
    MAX_CUBE_MAP_TEXTURE_SIZE = 34076U,
    TEXTURE0 = 33984U,
    TEXTURE1 = 33985U,
    TEXTURE2 = 33986U,
    TEXTURE3 = 33987U,
    TEXTURE4 = 33988U,
    TEXTURE5 = 33989U,
    TEXTURE6 = 33990U,
    TEXTURE7 = 33991U,
    TEXTURE8 = 33992U,
    TEXTURE9 = 33993U,
    TEXTURE10 = 33994U,
    TEXTURE11 = 33995U,
    TEXTURE12 = 33996U,
    TEXTURE13 = 33997U,
    TEXTURE14 = 33998U,
    TEXTURE15 = 33999U,
    TEXTURE16 = 34000U,
    TEXTURE17 = 34001U,
    TEXTURE18 = 34002U,
    TEXTURE19 = 34003U,
    TEXTURE20 = 34004U,
    TEXTURE21 = 34005U,
    TEXTURE22 = 34006U,
    TEXTURE23 = 34007U,
    TEXTURE24 = 34008U,
    TEXTURE25 = 34009U,
    TEXTURE26 = 34010U,
    TEXTURE27 = 34011U,
    TEXTURE28 = 34012U,
    TEXTURE29 = 34013U,
    TEXTURE30 = 34014U,
    TEXTURE31 = 34015U,
    ACTIVE_TEXTURE = 34016U,
    REPEAT = 10497U,
    CLAMP_TO_EDGE = 33071U,
    MIRRORED_REPEAT = 33648U,
    FLOAT_VEC2 = 35664U,
    FLOAT_VEC3 = 35665U,
    FLOAT_VEC4 = 35666U,
    INT_VEC2 = 35667U,
    INT_VEC3 = 35668U,
    INT_VEC4 = 35669U,
    BOOL = 35670U,
    BOOL_VEC2 = 35671U,
    BOOL_VEC3 = 35672U,
    BOOL_VEC4 = 35673U,
    FLOAT_MAT2 = 35674U,
    FLOAT_MAT3 = 35675U,
    FLOAT_MAT4 = 35676U,
    SAMPLER_2D = 35678U,
    SAMPLER_CUBE = 35680U,
    VERTEX_ATTRIB_ARRAY_ENABLED = 34338U,
    VERTEX_ATTRIB_ARRAY_SIZE = 34339U,
    VERTEX_ATTRIB_ARRAY_STRIDE = 34340U,
    VERTEX_ATTRIB_ARRAY_TYPE = 34341U,
    VERTEX_ATTRIB_ARRAY_NORMALIZED = 34922U,
    VERTEX_ATTRIB_ARRAY_POINTER = 34373U,
    VERTEX_ATTRIB_ARRAY_BUFFER_BINDING = 34975U,
    COMPILE_STATUS = 35713U,
    SHADER_COMPILER = 36346U,
    LOW_FLOAT = 36336U,
    MEDIUM_FLOAT = 36337U,
    HIGH_FLOAT = 36338U,
    LOW_INT = 36339U,
    MEDIUM_INT = 36340U,
    HIGH_INT = 36341U,
    FRAMEBUFFER = 36160U,
    RENDERBUFFER = 36161U,
    RGBA4 = 32854U,
    RGB5_A1 = 32855U,
    RGB565 = 36194U,
    DEPTH_COMPONENT16 = 33189U,
    STENCIL_INDEX = 6401U,
    STENCIL_INDEX8 = 36168U,
    DEPTH_STENCIL = 34041U,
    RENDERBUFFER_WIDTH = 36162U,
    RENDERBUFFER_HEIGHT = 36163U,
    RENDERBUFFER_INTERNAL_FORMAT = 36164U,
    RENDERBUFFER_RED_SIZE = 36176U,
    RENDERBUFFER_GREEN_SIZE = 36177U,
    RENDERBUFFER_BLUE_SIZE = 36178U,
    RENDERBUFFER_ALPHA_SIZE = 36179U,
    RENDERBUFFER_DEPTH_SIZE = 36180U,
    RENDERBUFFER_STENCIL_SIZE = 36181U,
    FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE = 36048U,
    FRAMEBUFFER_ATTACHMENT_OBJECT_NAME = 36049U,
    FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL = 36050U,
    FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE = 36051U,
    COLOR_ATTACHMENT0 = 36064U,
    DEPTH_ATTACHMENT = 36096U,
    STENCIL_ATTACHMENT = 36128U,
    DEPTH_STENCIL_ATTACHMENT = 33306U,
    NONE = 0U,
    FRAMEBUFFER_COMPLETE = 36053U,
    FRAMEBUFFER_INCOMPLETE_ATTACHMENT = 36054U,
    FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT = 36055U,
    FRAMEBUFFER_INCOMPLETE_DIMENSIONS = 36057U,
    FRAMEBUFFER_UNSUPPORTED = 36061U,
    FRAMEBUFFER_BINDING = 36006U,
    RENDERBUFFER_BINDING = 36007U,
    MAX_RENDERBUFFER_SIZE = 34024U,
    INVALID_FRAMEBUFFER_OPERATION = 1286U,
    UNPACK_FLIP_Y_WEBGL = 37440U,
    UNPACK_PREMULTIPLY_ALPHA_WEBGL = 37441U,
    CONTEXT_LOST_WEBGL = 37442U,
    UNPACK_COLORSPACE_CONVERSION_WEBGL = 37443U,
    BROWSER_DEFAULT_WEBGL = 37444U
  };

  /* readonly attribute nsIDOMHTMLCanvasElement canvas; */
  NS_SCRIPTABLE NS_IMETHOD GetCanvas(nsIDOMHTMLCanvasElement * *aCanvas) = 0;

  /* jsval getContextAttributes (); */
  NS_SCRIPTABLE NS_IMETHOD GetContextAttributes(JS::Value *_retval NS_OUTPARAM) = 0;

  /* [binaryname(MozActiveTexture)] void activeTexture (in WebGLenum texture); */
  NS_SCRIPTABLE NS_IMETHOD MozActiveTexture(WebGLenum texture) = 0;

  /* void attachShader ([optional] in nsIWebGLProgram program, [optional] in nsIWebGLShader shader); */
  NS_SCRIPTABLE NS_IMETHOD AttachShader(nsIWebGLProgram *program, nsIWebGLShader *shader) = 0;

  /* void bindAttribLocation (in nsIWebGLProgram program, in WebGLuint index, in DOMString name); */
  NS_SCRIPTABLE NS_IMETHOD BindAttribLocation(nsIWebGLProgram *program, WebGLuint index, const nsAString & name) = 0;

  /* void bindBuffer (in WebGLenum target, in nsIWebGLBuffer buffer); */
  NS_SCRIPTABLE NS_IMETHOD BindBuffer(WebGLenum target, nsIWebGLBuffer *buffer) = 0;

  /* void bindFramebuffer (in WebGLenum target, in nsIWebGLFramebuffer framebuffer); */
  NS_SCRIPTABLE NS_IMETHOD BindFramebuffer(WebGLenum target, nsIWebGLFramebuffer *framebuffer) = 0;

  /* void bindRenderbuffer (in WebGLenum target, in nsIWebGLRenderbuffer renderbuffer); */
  NS_SCRIPTABLE NS_IMETHOD BindRenderbuffer(WebGLenum target, nsIWebGLRenderbuffer *renderbuffer) = 0;

  /* void bindTexture (in WebGLenum target, in nsIWebGLTexture texture); */
  NS_SCRIPTABLE NS_IMETHOD BindTexture(WebGLenum target, nsIWebGLTexture *texture) = 0;

  /* [binaryname(MozBlendColor)] void blendColor (in WebGLclampf red, in WebGLclampf green, in WebGLclampf blue, in WebGLclampf alpha); */
  NS_SCRIPTABLE NS_IMETHOD MozBlendColor(WebGLclampf red, WebGLclampf green, WebGLclampf blue, WebGLclampf alpha) = 0;

  /* [binaryname(MozBlendEquation)] void blendEquation (in WebGLenum mode); */
  NS_SCRIPTABLE NS_IMETHOD MozBlendEquation(WebGLenum mode) = 0;

  /* [binaryname(MozBlendEquationSeparate)] void blendEquationSeparate (in WebGLenum modeRGB, in WebGLenum modeAlpha); */
  NS_SCRIPTABLE NS_IMETHOD MozBlendEquationSeparate(WebGLenum modeRGB, WebGLenum modeAlpha) = 0;

  /* [binaryname(MozBlendFunc)] void blendFunc (in WebGLenum sfactor, in WebGLenum dfactor); */
  NS_SCRIPTABLE NS_IMETHOD MozBlendFunc(WebGLenum sfactor, WebGLenum dfactor) = 0;

  /* [binaryname(MozBlendFuncSeparate)] void blendFuncSeparate (in WebGLenum srcRGB, in WebGLenum dstRGB, in WebGLenum srcAlpha, in WebGLenum dstAlpha); */
  NS_SCRIPTABLE NS_IMETHOD MozBlendFuncSeparate(WebGLenum srcRGB, WebGLenum dstRGB, WebGLenum srcAlpha, WebGLenum dstAlpha) = 0;

  /* [implicit_jscontext] void bufferData (in WebGLenum target, in jsval data, in WebGLenum usage); */
  NS_SCRIPTABLE NS_IMETHOD BufferData(WebGLenum target, const JS::Value & data, WebGLenum usage, JSContext* cx) = 0;

  /* [implicit_jscontext] void bufferSubData (in WebGLenum target, in WebGLintptr offset, in jsval data); */
  NS_SCRIPTABLE NS_IMETHOD BufferSubData(WebGLenum target, WebGLintptr offset, const JS::Value & data, JSContext* cx) = 0;

  /* WebGLenum checkFramebufferStatus (in WebGLenum target); */
  NS_SCRIPTABLE NS_IMETHOD CheckFramebufferStatus(WebGLenum target, WebGLenum *_retval NS_OUTPARAM) = 0;

  /* [binaryname(MozClear)] void clear (in WebGLbitfield mask); */
  NS_SCRIPTABLE NS_IMETHOD MozClear(WebGLbitfield mask) = 0;

  /* [binaryname(MozClearColor)] void clearColor (in WebGLclampf red, in WebGLclampf green, in WebGLclampf blue, in WebGLclampf alpha); */
  NS_SCRIPTABLE NS_IMETHOD MozClearColor(WebGLclampf red, WebGLclampf green, WebGLclampf blue, WebGLclampf alpha) = 0;

  /* [binaryname(MozClearDepth)] void clearDepth (in WebGLclampf depth); */
  NS_SCRIPTABLE NS_IMETHOD MozClearDepth(WebGLclampf depth) = 0;

  /* [binaryname(MozClearStencil)] void clearStencil (in WebGLint s); */
  NS_SCRIPTABLE NS_IMETHOD MozClearStencil(WebGLint s) = 0;

  /* [binaryname(MozColorMask)] void colorMask (in WebGLboolean red, in WebGLboolean green, in WebGLboolean blue, in WebGLboolean alpha); */
  NS_SCRIPTABLE NS_IMETHOD MozColorMask(WebGLboolean red, WebGLboolean green, WebGLboolean blue, WebGLboolean alpha) = 0;

  /* void compileShader ([optional] in nsIWebGLShader shader); */
  NS_SCRIPTABLE NS_IMETHOD CompileShader(nsIWebGLShader *shader) = 0;

  /* [implicit_jscontext] void compressedTexImage2D (in WebGLenum target, in WebGLint level, in WebGLenum internalformat, in WebGLsizei width, in WebGLsizei height, in WebGLint border, in jsval pixels); */
  NS_SCRIPTABLE NS_IMETHOD CompressedTexImage2D(WebGLenum target, WebGLint level, WebGLenum internalformat, WebGLsizei width, WebGLsizei height, WebGLint border, const JS::Value & pixels, JSContext* cx) = 0;

  /* [implicit_jscontext] void compressedTexSubImage2D (in WebGLenum target, in WebGLint level, in WebGLint xoffset, in WebGLint yoffset, in WebGLsizei width, in WebGLsizei height, in WebGLenum format, in jsval pixels); */
  NS_SCRIPTABLE NS_IMETHOD CompressedTexSubImage2D(WebGLenum target, WebGLint level, WebGLint xoffset, WebGLint yoffset, WebGLsizei width, WebGLsizei height, WebGLenum format, const JS::Value & pixels, JSContext* cx) = 0;

  /* [binaryname(MozCopyTexImage2D)] void copyTexImage2D (in WebGLenum target, in WebGLint level, in WebGLenum internalformat, in WebGLint x, in WebGLint y, in WebGLsizei width, in WebGLsizei height, in WebGLint border); */
  NS_SCRIPTABLE NS_IMETHOD MozCopyTexImage2D(WebGLenum target, WebGLint level, WebGLenum internalformat, WebGLint x, WebGLint y, WebGLsizei width, WebGLsizei height, WebGLint border) = 0;

  /* [binaryname(MozCopyTexSubImage2D)] void copyTexSubImage2D (in WebGLenum target, in WebGLint level, in WebGLint xoffset, in WebGLint yoffset, in WebGLint x, in WebGLint y, in WebGLsizei width, in WebGLsizei height); */
  NS_SCRIPTABLE NS_IMETHOD MozCopyTexSubImage2D(WebGLenum target, WebGLint level, WebGLint xoffset, WebGLint yoffset, WebGLint x, WebGLint y, WebGLsizei width, WebGLsizei height) = 0;

  /* nsIWebGLBuffer createBuffer (); */
  NS_SCRIPTABLE NS_IMETHOD CreateBuffer(nsIWebGLBuffer * *_retval NS_OUTPARAM) = 0;

  /* nsIWebGLProgram createProgram (); */
  NS_SCRIPTABLE NS_IMETHOD CreateProgram(nsIWebGLProgram * *_retval NS_OUTPARAM) = 0;

  /* nsIWebGLFramebuffer createFramebuffer (); */
  NS_SCRIPTABLE NS_IMETHOD CreateFramebuffer(nsIWebGLFramebuffer * *_retval NS_OUTPARAM) = 0;

  /* nsIWebGLRenderbuffer createRenderbuffer (); */
  NS_SCRIPTABLE NS_IMETHOD CreateRenderbuffer(nsIWebGLRenderbuffer * *_retval NS_OUTPARAM) = 0;

  /* nsIWebGLShader createShader (in WebGLenum type); */
  NS_SCRIPTABLE NS_IMETHOD CreateShader(WebGLenum type, nsIWebGLShader * *_retval NS_OUTPARAM) = 0;

  /* nsIWebGLTexture createTexture (); */
  NS_SCRIPTABLE NS_IMETHOD CreateTexture(nsIWebGLTexture * *_retval NS_OUTPARAM) = 0;

  /* [binaryname(MozCullFace)] void cullFace (in WebGLenum mode); */
  NS_SCRIPTABLE NS_IMETHOD MozCullFace(WebGLenum mode) = 0;

  /* void deleteBuffer (in nsIWebGLBuffer buffer); */
  NS_SCRIPTABLE NS_IMETHOD DeleteBuffer(nsIWebGLBuffer *buffer) = 0;

  /* void deleteProgram (in nsIWebGLProgram program); */
  NS_SCRIPTABLE NS_IMETHOD DeleteProgram(nsIWebGLProgram *program) = 0;

  /* void deleteFramebuffer (in nsIWebGLFramebuffer framebuffer); */
  NS_SCRIPTABLE NS_IMETHOD DeleteFramebuffer(nsIWebGLFramebuffer *framebuffer) = 0;

  /* void deleteRenderbuffer (in nsIWebGLRenderbuffer renderbuffer); */
  NS_SCRIPTABLE NS_IMETHOD DeleteRenderbuffer(nsIWebGLRenderbuffer *renderbuffer) = 0;

  /* void deleteShader (in nsIWebGLShader shader); */
  NS_SCRIPTABLE NS_IMETHOD DeleteShader(nsIWebGLShader *shader) = 0;

  /* void deleteTexture (in nsIWebGLTexture texture); */
  NS_SCRIPTABLE NS_IMETHOD DeleteTexture(nsIWebGLTexture *texture) = 0;

  /* [binaryname(MozDepthFunc)] void depthFunc (in WebGLenum func); */
  NS_SCRIPTABLE NS_IMETHOD MozDepthFunc(WebGLenum func) = 0;

  /* [binaryname(MozDepthMask)] void depthMask (in WebGLboolean flag); */
  NS_SCRIPTABLE NS_IMETHOD MozDepthMask(WebGLboolean flag) = 0;

  /* [binaryname(MozDepthRange)] void depthRange (in WebGLclampf zNear, in WebGLclampf zFar); */
  NS_SCRIPTABLE NS_IMETHOD MozDepthRange(WebGLclampf zNear, WebGLclampf zFar) = 0;

  /* void detachShader (in nsIWebGLProgram program, in nsIWebGLShader shader); */
  NS_SCRIPTABLE NS_IMETHOD DetachShader(nsIWebGLProgram *program, nsIWebGLShader *shader) = 0;

  /* [binaryname(MozDisable)] void disable (in WebGLenum cap); */
  NS_SCRIPTABLE NS_IMETHOD MozDisable(WebGLenum cap) = 0;

  /* [binaryname(MozDisableVertexAttribArray)] void disableVertexAttribArray (in WebGLuint index); */
  NS_SCRIPTABLE NS_IMETHOD MozDisableVertexAttribArray(WebGLuint index) = 0;

  /* [binaryname(MozDrawArrays)] void drawArrays (in WebGLenum mode, in WebGLint first, in WebGLsizei count); */
  NS_SCRIPTABLE NS_IMETHOD MozDrawArrays(WebGLenum mode, WebGLint first, WebGLsizei count) = 0;

  /* [binaryname(MozDrawElements)] void drawElements (in WebGLenum mode, in WebGLsizei count, in WebGLenum type, in WebGLintptr offset); */
  NS_SCRIPTABLE NS_IMETHOD MozDrawElements(WebGLenum mode, WebGLsizei count, WebGLenum type, WebGLintptr offset) = 0;

  /* [binaryname(MozEnable)] void enable (in WebGLenum cap); */
  NS_SCRIPTABLE NS_IMETHOD MozEnable(WebGLenum cap) = 0;

  /* [binaryname(MozEnableVertexAttribArray)] void enableVertexAttribArray (in WebGLuint index); */
  NS_SCRIPTABLE NS_IMETHOD MozEnableVertexAttribArray(WebGLuint index) = 0;

  /* [binaryname(MozFinish)] void finish (); */
  NS_SCRIPTABLE NS_IMETHOD MozFinish(void) = 0;

  /* [binaryname(MozFlush)] void flush (); */
  NS_SCRIPTABLE NS_IMETHOD MozFlush(void) = 0;

  /* void framebufferRenderbuffer (in WebGLenum target, in WebGLenum attachment, in WebGLenum renderbuffertarget, in nsIWebGLRenderbuffer renderbuffer); */
  NS_SCRIPTABLE NS_IMETHOD FramebufferRenderbuffer(WebGLenum target, WebGLenum attachment, WebGLenum renderbuffertarget, nsIWebGLRenderbuffer *renderbuffer) = 0;

  /* void framebufferTexture2D (in WebGLenum target, in WebGLenum attachment, in WebGLenum textarget, in nsIWebGLTexture texture, in WebGLint level); */
  NS_SCRIPTABLE NS_IMETHOD FramebufferTexture2D(WebGLenum target, WebGLenum attachment, WebGLenum textarget, nsIWebGLTexture *texture, WebGLint level) = 0;

  /* [binaryname(MozFrontFace)] void frontFace (in WebGLenum mode); */
  NS_SCRIPTABLE NS_IMETHOD MozFrontFace(WebGLenum mode) = 0;

  /* [binaryname(MozGenerateMipmap)] void generateMipmap (in WebGLenum target); */
  NS_SCRIPTABLE NS_IMETHOD MozGenerateMipmap(WebGLenum target) = 0;

  /* nsIWebGLActiveInfo getActiveAttrib (in nsIWebGLProgram program, in PRUint32 index); */
  NS_SCRIPTABLE NS_IMETHOD GetActiveAttrib(nsIWebGLProgram *program, PRUint32 index, nsIWebGLActiveInfo * *_retval NS_OUTPARAM) = 0;

  /* nsIWebGLActiveInfo getActiveUniform (in nsIWebGLProgram program, in PRUint32 index); */
  NS_SCRIPTABLE NS_IMETHOD GetActiveUniform(nsIWebGLProgram *program, PRUint32 index, nsIWebGLActiveInfo * *_retval NS_OUTPARAM) = 0;

  /* nsIVariant getAttachedShaders (in nsIWebGLProgram program); */
  NS_SCRIPTABLE NS_IMETHOD GetAttachedShaders(nsIWebGLProgram *program, nsIVariant * *_retval NS_OUTPARAM) = 0;

  /* WebGLint getAttribLocation (in nsIWebGLProgram program, in DOMString name); */
  NS_SCRIPTABLE NS_IMETHOD GetAttribLocation(nsIWebGLProgram *program, const nsAString & name, WebGLint *_retval NS_OUTPARAM) = 0;

  /* [implicit_jscontext] jsval getParameter (in WebGLenum pname); */
  NS_SCRIPTABLE NS_IMETHOD GetParameter(WebGLenum pname, JSContext* cx, JS::Value *_retval NS_OUTPARAM) = 0;

  /* jsval getBufferParameter (in WebGLenum target, in WebGLenum pname); */
  NS_SCRIPTABLE NS_IMETHOD GetBufferParameter(WebGLenum target, WebGLenum pname, JS::Value *_retval NS_OUTPARAM) = 0;

  /* [binaryname(MozGetError)] WebGLenum getError (); */
  NS_SCRIPTABLE NS_IMETHOD MozGetError(WebGLenum *_retval NS_OUTPARAM) = 0;

  /* [implicit_jscontext] jsval getFramebufferAttachmentParameter (in WebGLenum target, in WebGLenum attachment, in WebGLenum pname); */
  NS_SCRIPTABLE NS_IMETHOD GetFramebufferAttachmentParameter(WebGLenum target, WebGLenum attachment, WebGLenum pname, JSContext* cx, JS::Value *_retval NS_OUTPARAM) = 0;

  /* jsval getProgramParameter (in nsIWebGLProgram program, in WebGLenum pname); */
  NS_SCRIPTABLE NS_IMETHOD GetProgramParameter(nsIWebGLProgram *program, WebGLenum pname, JS::Value *_retval NS_OUTPARAM) = 0;

  /* DOMString getProgramInfoLog (in nsIWebGLProgram program); */
  NS_SCRIPTABLE NS_IMETHOD GetProgramInfoLog(nsIWebGLProgram *program, nsAString & _retval NS_OUTPARAM) = 0;

  /* jsval getRenderbufferParameter (in WebGLenum target, in WebGLenum pname); */
  NS_SCRIPTABLE NS_IMETHOD GetRenderbufferParameter(WebGLenum target, WebGLenum pname, JS::Value *_retval NS_OUTPARAM) = 0;

  /* jsval getShaderParameter (in nsIWebGLShader shader, in WebGLenum pname); */
  NS_SCRIPTABLE NS_IMETHOD GetShaderParameter(nsIWebGLShader *shader, WebGLenum pname, JS::Value *_retval NS_OUTPARAM) = 0;

  /* DOMString getShaderInfoLog (in nsIWebGLShader shader); */
  NS_SCRIPTABLE NS_IMETHOD GetShaderInfoLog(nsIWebGLShader *shader, nsAString & _retval NS_OUTPARAM) = 0;

  /* nsIWebGLShaderPrecisionFormat getShaderPrecisionFormat (in WebGLenum shadertype, in WebGLenum precisiontype); */
  NS_SCRIPTABLE NS_IMETHOD GetShaderPrecisionFormat(WebGLenum shadertype, WebGLenum precisiontype, nsIWebGLShaderPrecisionFormat * *_retval NS_OUTPARAM) = 0;

  /* DOMString getShaderSource (in nsIWebGLShader shader); */
  NS_SCRIPTABLE NS_IMETHOD GetShaderSource(nsIWebGLShader *shader, nsAString & _retval NS_OUTPARAM) = 0;

  /* jsval getTexParameter (in WebGLenum target, in WebGLenum pname); */
  NS_SCRIPTABLE NS_IMETHOD GetTexParameter(WebGLenum target, WebGLenum pname, JS::Value *_retval NS_OUTPARAM) = 0;

  /* [implicit_jscontext] jsval getUniform (in nsIWebGLProgram program, in nsIWebGLUniformLocation location); */
  NS_SCRIPTABLE NS_IMETHOD GetUniform(nsIWebGLProgram *program, nsIWebGLUniformLocation *location, JSContext* cx, JS::Value *_retval NS_OUTPARAM) = 0;

  /* nsIWebGLUniformLocation getUniformLocation (in nsIWebGLProgram program, in DOMString name); */
  NS_SCRIPTABLE NS_IMETHOD GetUniformLocation(nsIWebGLProgram *program, const nsAString & name, nsIWebGLUniformLocation * *_retval NS_OUTPARAM) = 0;

  /* [implicit_jscontext] jsval getVertexAttrib (in WebGLuint index, in WebGLenum pname); */
  NS_SCRIPTABLE NS_IMETHOD GetVertexAttrib(WebGLuint index, WebGLenum pname, JSContext* cx, JS::Value *_retval NS_OUTPARAM) = 0;

  /* WebGLuint getVertexAttribOffset (in WebGLuint index, in WebGLenum pname); */
  NS_SCRIPTABLE NS_IMETHOD GetVertexAttribOffset(WebGLuint index, WebGLenum pname, WebGLuint *_retval NS_OUTPARAM) = 0;

  /* [binaryname(MozHint)] void hint (in WebGLenum target, in WebGLenum mode); */
  NS_SCRIPTABLE NS_IMETHOD MozHint(WebGLenum target, WebGLenum mode) = 0;

  /* WebGLboolean isBuffer (in nsIWebGLBuffer buffer); */
  NS_SCRIPTABLE NS_IMETHOD IsBuffer(nsIWebGLBuffer *buffer, WebGLboolean *_retval NS_OUTPARAM) = 0;

  /* WebGLboolean isFramebuffer (in nsIWebGLFramebuffer framebuffer); */
  NS_SCRIPTABLE NS_IMETHOD IsFramebuffer(nsIWebGLFramebuffer *framebuffer, WebGLboolean *_retval NS_OUTPARAM) = 0;

  /* WebGLboolean isProgram (in nsIWebGLProgram program); */
  NS_SCRIPTABLE NS_IMETHOD IsProgram(nsIWebGLProgram *program, WebGLboolean *_retval NS_OUTPARAM) = 0;

  /* WebGLboolean isRenderbuffer (in nsIWebGLRenderbuffer renderbuffer); */
  NS_SCRIPTABLE NS_IMETHOD IsRenderbuffer(nsIWebGLRenderbuffer *renderbuffer, WebGLboolean *_retval NS_OUTPARAM) = 0;

  /* WebGLboolean isShader (in nsIWebGLShader shader); */
  NS_SCRIPTABLE NS_IMETHOD IsShader(nsIWebGLShader *shader, WebGLboolean *_retval NS_OUTPARAM) = 0;

  /* WebGLboolean isTexture (in nsIWebGLTexture texture); */
  NS_SCRIPTABLE NS_IMETHOD IsTexture(nsIWebGLTexture *texture, WebGLboolean *_retval NS_OUTPARAM) = 0;

  /* WebGLboolean isEnabled (in WebGLenum cap); */
  NS_SCRIPTABLE NS_IMETHOD IsEnabled(WebGLenum cap, WebGLboolean *_retval NS_OUTPARAM) = 0;

  /* [binaryname(MozLineWidth)] void lineWidth (in WebGLfloat width); */
  NS_SCRIPTABLE NS_IMETHOD MozLineWidth(WebGLfloat width) = 0;

  /* void linkProgram ([optional] in nsIWebGLProgram program); */
  NS_SCRIPTABLE NS_IMETHOD LinkProgram(nsIWebGLProgram *program) = 0;

  /* [binaryname(MozPixelStorei)] void pixelStorei (in WebGLenum pname, in WebGLint param); */
  NS_SCRIPTABLE NS_IMETHOD MozPixelStorei(WebGLenum pname, WebGLint param) = 0;

  /* [binaryname(MozPolygonOffset)] void polygonOffset (in WebGLfloat factor, in WebGLfloat units); */
  NS_SCRIPTABLE NS_IMETHOD MozPolygonOffset(WebGLfloat factor, WebGLfloat units) = 0;

  /* [implicit_jscontext] void readPixels (in WebGLint x, in WebGLint y, in WebGLsizei width, in WebGLsizei height, in WebGLenum format, in WebGLenum type, in jsval pixels); */
  NS_SCRIPTABLE NS_IMETHOD ReadPixels(WebGLint x, WebGLint y, WebGLsizei width, WebGLsizei height, WebGLenum format, WebGLenum type, const JS::Value & pixels, JSContext* cx) = 0;

  /* [binaryname(MozRenderbufferStorage)] void renderbufferStorage (in WebGLenum target, in WebGLenum internalformat, in WebGLsizei width, in WebGLsizei height); */
  NS_SCRIPTABLE NS_IMETHOD MozRenderbufferStorage(WebGLenum target, WebGLenum internalformat, WebGLsizei width, WebGLsizei height) = 0;

  /* [binaryname(MozSampleCoverage)] void sampleCoverage (in WebGLclampf value, in WebGLboolean invert); */
  NS_SCRIPTABLE NS_IMETHOD MozSampleCoverage(WebGLclampf value, WebGLboolean invert) = 0;

  /* [binaryname(MozScissor)] void scissor (in WebGLint x, in WebGLint y, in WebGLsizei width, in WebGLsizei height); */
  NS_SCRIPTABLE NS_IMETHOD MozScissor(WebGLint x, WebGLint y, WebGLsizei width, WebGLsizei height) = 0;

  /* void shaderSource ([optional] in nsIWebGLShader shader, [optional] in DOMString source); */
  NS_SCRIPTABLE NS_IMETHOD ShaderSource(nsIWebGLShader *shader, const nsAString & source) = 0;

  /* [binaryname(MozStencilFunc)] void stencilFunc (in WebGLenum func, in WebGLint ref, in WebGLuint mask); */
  NS_SCRIPTABLE NS_IMETHOD MozStencilFunc(WebGLenum func, WebGLint ref, WebGLuint mask) = 0;

  /* [binaryname(MozStencilFuncSeparate)] void stencilFuncSeparate (in WebGLenum face, in WebGLenum func, in WebGLint ref, in WebGLuint mask); */
  NS_SCRIPTABLE NS_IMETHOD MozStencilFuncSeparate(WebGLenum face, WebGLenum func, WebGLint ref, WebGLuint mask) = 0;

  /* [binaryname(MozStencilMask)] void stencilMask (in WebGLuint mask); */
  NS_SCRIPTABLE NS_IMETHOD MozStencilMask(WebGLuint mask) = 0;

  /* [binaryname(MozStencilMaskSeparate)] void stencilMaskSeparate (in WebGLenum face, in WebGLuint mask); */
  NS_SCRIPTABLE NS_IMETHOD MozStencilMaskSeparate(WebGLenum face, WebGLuint mask) = 0;

  /* [binaryname(MozStencilOp)] void stencilOp (in WebGLenum fail, in WebGLenum zfail, in WebGLenum zpass); */
  NS_SCRIPTABLE NS_IMETHOD MozStencilOp(WebGLenum fail, WebGLenum zfail, WebGLenum zpass) = 0;

  /* [binaryname(MozStencilOpSeparate)] void stencilOpSeparate (in WebGLenum face, in WebGLenum fail, in WebGLenum zfail, in WebGLenum zpass); */
  NS_SCRIPTABLE NS_IMETHOD MozStencilOpSeparate(WebGLenum face, WebGLenum fail, WebGLenum zfail, WebGLenum zpass) = 0;

  /* void texImage2D ([optional] in long dummy); */
  NS_SCRIPTABLE NS_IMETHOD TexImage2D(PRInt32 dummy) = 0;

  /* [implicit_jscontext,noscript] void texImage2D_array (in WebGLenum target, in WebGLint level, in WebGLenum internalformat, in WebGLsizei width, in WebGLsizei height, in WebGLint border, in WebGLenum format, in WebGLenum type, in WebGLJSObjectPtr pixels); */
  NS_IMETHOD TexImage2D_array(WebGLenum target, WebGLint level, WebGLenum internalformat, WebGLsizei width, WebGLsizei height, WebGLint border, WebGLenum format, WebGLenum type, JSObject *pixels, JSContext* cx) = 0;

  /* [implicit_jscontext,noscript] void texImage2D_imageData (in WebGLenum target, in WebGLint level, in WebGLenum internalformat, in WebGLsizei width, in WebGLsizei height, in WebGLint border, in WebGLenum format, in WebGLenum type, in WebGLJSObjectPtr pixels); */
  NS_IMETHOD TexImage2D_imageData(WebGLenum target, WebGLint level, WebGLenum internalformat, WebGLsizei width, WebGLsizei height, WebGLint border, WebGLenum format, WebGLenum type, JSObject *pixels, JSContext* cx) = 0;

  /* [noscript] void texImage2D_dom (in WebGLenum target, in WebGLint level, in WebGLenum internalformat, in WebGLenum format, in WebGLenum type, in Element element); */
  NS_IMETHOD TexImage2D_dom(WebGLenum target, WebGLint level, WebGLenum internalformat, WebGLenum format, WebGLenum type, mozilla::dom::Element *element) = 0;

  /* void texSubImage2D ([optional] in long dummy); */
  NS_SCRIPTABLE NS_IMETHOD TexSubImage2D(PRInt32 dummy) = 0;

  /* [implicit_jscontext,noscript] void texSubImage2D_array (in WebGLenum target, in WebGLint level, in WebGLint xoffset, in WebGLint yoffset, in WebGLsizei width, in WebGLsizei height, in WebGLenum format, in WebGLenum type, in WebGLJSObjectPtr pixels); */
  NS_IMETHOD TexSubImage2D_array(WebGLenum target, WebGLint level, WebGLint xoffset, WebGLint yoffset, WebGLsizei width, WebGLsizei height, WebGLenum format, WebGLenum type, JSObject *pixels, JSContext* cx) = 0;

  /* [implicit_jscontext,noscript] void texSubImage2D_imageData (in WebGLenum target, in WebGLint level, in WebGLint xoffset, in WebGLint yoffset, in WebGLsizei width, in WebGLsizei height, in WebGLenum format, in WebGLenum type, in WebGLJSObjectPtr pixels); */
  NS_IMETHOD TexSubImage2D_imageData(WebGLenum target, WebGLint level, WebGLint xoffset, WebGLint yoffset, WebGLsizei width, WebGLsizei height, WebGLenum format, WebGLenum type, JSObject *pixels, JSContext* cx) = 0;

  /* [noscript] void texSubImage2D_dom (in WebGLenum target, in WebGLint level, in WebGLint xoffset, in WebGLint yoffset, in WebGLenum format, in WebGLenum type, in Element element); */
  NS_IMETHOD TexSubImage2D_dom(WebGLenum target, WebGLint level, WebGLint xoffset, WebGLint yoffset, WebGLenum format, WebGLenum type, mozilla::dom::Element *element) = 0;

  /* [binaryname(MozTexParameterf)] void texParameterf (in WebGLenum target, in WebGLenum pname, in WebGLfloat param); */
  NS_SCRIPTABLE NS_IMETHOD MozTexParameterf(WebGLenum target, WebGLenum pname, WebGLfloat param) = 0;

  /* [binaryname(MozTexParameteri)] void texParameteri (in WebGLenum target, in WebGLenum pname, in WebGLint param); */
  NS_SCRIPTABLE NS_IMETHOD MozTexParameteri(WebGLenum target, WebGLenum pname, WebGLint param) = 0;

  /* void uniform1f (in nsIWebGLUniformLocation location, in WebGLfloat x); */
  NS_SCRIPTABLE NS_IMETHOD Uniform1f(nsIWebGLUniformLocation *location, WebGLfloat x) = 0;

  /* void uniform1i (in nsIWebGLUniformLocation location, in WebGLint x); */
  NS_SCRIPTABLE NS_IMETHOD Uniform1i(nsIWebGLUniformLocation *location, WebGLint x) = 0;

  /* void uniform2f (in nsIWebGLUniformLocation location, in WebGLfloat x, in WebGLfloat y); */
  NS_SCRIPTABLE NS_IMETHOD Uniform2f(nsIWebGLUniformLocation *location, WebGLfloat x, WebGLfloat y) = 0;

  /* void uniform2i (in nsIWebGLUniformLocation location, in WebGLint x, in WebGLint y); */
  NS_SCRIPTABLE NS_IMETHOD Uniform2i(nsIWebGLUniformLocation *location, WebGLint x, WebGLint y) = 0;

  /* void uniform3f (in nsIWebGLUniformLocation location, in WebGLfloat x, in WebGLfloat y, in WebGLfloat z); */
  NS_SCRIPTABLE NS_IMETHOD Uniform3f(nsIWebGLUniformLocation *location, WebGLfloat x, WebGLfloat y, WebGLfloat z) = 0;

  /* void uniform3i (in nsIWebGLUniformLocation location, in WebGLint x, in WebGLint y, in WebGLint z); */
  NS_SCRIPTABLE NS_IMETHOD Uniform3i(nsIWebGLUniformLocation *location, WebGLint x, WebGLint y, WebGLint z) = 0;

  /* void uniform4f (in nsIWebGLUniformLocation location, in WebGLfloat x, in WebGLfloat y, in WebGLfloat z, in WebGLfloat w); */
  NS_SCRIPTABLE NS_IMETHOD Uniform4f(nsIWebGLUniformLocation *location, WebGLfloat x, WebGLfloat y, WebGLfloat z, WebGLfloat w) = 0;

  /* void uniform4i (in nsIWebGLUniformLocation location, in WebGLint x, in WebGLint y, in WebGLint z, in WebGLint w); */
  NS_SCRIPTABLE NS_IMETHOD Uniform4i(nsIWebGLUniformLocation *location, WebGLint x, WebGLint y, WebGLint z, WebGLint w) = 0;

  /* [implicit_jscontext] void uniform1fv (in nsIWebGLUniformLocation location, in jsval v); */
  NS_SCRIPTABLE NS_IMETHOD Uniform1fv(nsIWebGLUniformLocation *location, const JS::Value & v, JSContext* cx) = 0;

  /* [implicit_jscontext] void uniform1iv (in nsIWebGLUniformLocation location, in jsval v); */
  NS_SCRIPTABLE NS_IMETHOD Uniform1iv(nsIWebGLUniformLocation *location, const JS::Value & v, JSContext* cx) = 0;

  /* [implicit_jscontext] void uniform2fv (in nsIWebGLUniformLocation location, in jsval v); */
  NS_SCRIPTABLE NS_IMETHOD Uniform2fv(nsIWebGLUniformLocation *location, const JS::Value & v, JSContext* cx) = 0;

  /* [implicit_jscontext] void uniform2iv (in nsIWebGLUniformLocation location, in jsval v); */
  NS_SCRIPTABLE NS_IMETHOD Uniform2iv(nsIWebGLUniformLocation *location, const JS::Value & v, JSContext* cx) = 0;

  /* [implicit_jscontext] void uniform3fv (in nsIWebGLUniformLocation location, in jsval v); */
  NS_SCRIPTABLE NS_IMETHOD Uniform3fv(nsIWebGLUniformLocation *location, const JS::Value & v, JSContext* cx) = 0;

  /* [implicit_jscontext] void uniform3iv (in nsIWebGLUniformLocation location, in jsval v); */
  NS_SCRIPTABLE NS_IMETHOD Uniform3iv(nsIWebGLUniformLocation *location, const JS::Value & v, JSContext* cx) = 0;

  /* [implicit_jscontext] void uniform4fv (in nsIWebGLUniformLocation location, in jsval v); */
  NS_SCRIPTABLE NS_IMETHOD Uniform4fv(nsIWebGLUniformLocation *location, const JS::Value & v, JSContext* cx) = 0;

  /* [implicit_jscontext] void uniform4iv (in nsIWebGLUniformLocation location, in jsval v); */
  NS_SCRIPTABLE NS_IMETHOD Uniform4iv(nsIWebGLUniformLocation *location, const JS::Value & v, JSContext* cx) = 0;

  /* [implicit_jscontext] void uniformMatrix2fv (in nsIWebGLUniformLocation location, in boolean transpose, in jsval value); */
  NS_SCRIPTABLE NS_IMETHOD UniformMatrix2fv(nsIWebGLUniformLocation *location, bool transpose, const JS::Value & value, JSContext* cx) = 0;

  /* [implicit_jscontext] void uniformMatrix3fv (in nsIWebGLUniformLocation location, in boolean transpose, in jsval value); */
  NS_SCRIPTABLE NS_IMETHOD UniformMatrix3fv(nsIWebGLUniformLocation *location, bool transpose, const JS::Value & value, JSContext* cx) = 0;

  /* [implicit_jscontext] void uniformMatrix4fv (in nsIWebGLUniformLocation location, in boolean transpose, in jsval value); */
  NS_SCRIPTABLE NS_IMETHOD UniformMatrix4fv(nsIWebGLUniformLocation *location, bool transpose, const JS::Value & value, JSContext* cx) = 0;

  /* void useProgram (in nsIWebGLProgram program); */
  NS_SCRIPTABLE NS_IMETHOD UseProgram(nsIWebGLProgram *program) = 0;

  /* void validateProgram (in nsIWebGLProgram program); */
  NS_SCRIPTABLE NS_IMETHOD ValidateProgram(nsIWebGLProgram *program) = 0;

  /* [binaryname(MozVertexAttrib1f)] void vertexAttrib1f (in WebGLuint indx, in WebGLfloat x); */
  NS_SCRIPTABLE NS_IMETHOD MozVertexAttrib1f(WebGLuint indx, WebGLfloat x) = 0;

  /* [binaryname(MozVertexAttrib2f)] void vertexAttrib2f (in WebGLuint indx, in WebGLfloat x, in WebGLfloat y); */
  NS_SCRIPTABLE NS_IMETHOD MozVertexAttrib2f(WebGLuint indx, WebGLfloat x, WebGLfloat y) = 0;

  /* [binaryname(MozVertexAttrib3f)] void vertexAttrib3f (in WebGLuint indx, in WebGLfloat x, in WebGLfloat y, in WebGLfloat z); */
  NS_SCRIPTABLE NS_IMETHOD MozVertexAttrib3f(WebGLuint indx, WebGLfloat x, WebGLfloat y, WebGLfloat z) = 0;

  /* [binaryname(MozVertexAttrib4f)] void vertexAttrib4f (in WebGLuint indx, in WebGLfloat x, in WebGLfloat y, in WebGLfloat z, in WebGLfloat w); */
  NS_SCRIPTABLE NS_IMETHOD MozVertexAttrib4f(WebGLuint indx, WebGLfloat x, WebGLfloat y, WebGLfloat z, WebGLfloat w) = 0;

  /* [implicit_jscontext] void vertexAttrib1fv (in WebGLuint indx, in jsval values); */
  NS_SCRIPTABLE NS_IMETHOD VertexAttrib1fv(WebGLuint indx, const JS::Value & values, JSContext* cx) = 0;

  /* [implicit_jscontext] void vertexAttrib2fv (in WebGLuint indx, in jsval values); */
  NS_SCRIPTABLE NS_IMETHOD VertexAttrib2fv(WebGLuint indx, const JS::Value & values, JSContext* cx) = 0;

  /* [implicit_jscontext] void vertexAttrib3fv (in WebGLuint indx, in jsval values); */
  NS_SCRIPTABLE NS_IMETHOD VertexAttrib3fv(WebGLuint indx, const JS::Value & values, JSContext* cx) = 0;

  /* [implicit_jscontext] void vertexAttrib4fv (in WebGLuint indx, in jsval values); */
  NS_SCRIPTABLE NS_IMETHOD VertexAttrib4fv(WebGLuint indx, const JS::Value & values, JSContext* cx) = 0;

  /* [binaryname(MozVertexAttribPointer)] void vertexAttribPointer (in WebGLuint idx, in WebGLint size, in WebGLenum type, in WebGLboolean normalized, in WebGLsizei stride, in WebGLintptr offset); */
  NS_SCRIPTABLE NS_IMETHOD MozVertexAttribPointer(WebGLuint idx, WebGLint size, WebGLenum type, WebGLboolean normalized, WebGLsizei stride, WebGLintptr offset) = 0;

  /* [binaryname(MozViewport)] void viewport (in WebGLint x, in WebGLint y, in WebGLsizei width, in WebGLsizei height); */
  NS_SCRIPTABLE NS_IMETHOD MozViewport(WebGLint x, WebGLint y, WebGLsizei width, WebGLsizei height) = 0;

  /* [noscript] DOMString mozGetUnderlyingParamString (in WebGLenum pname); */
  NS_IMETHOD MozGetUnderlyingParamString(WebGLenum pname, nsAString & _retval NS_OUTPARAM) = 0;

  /* nsIWebGLExtension getExtension (in DOMString name); */
  NS_SCRIPTABLE NS_IMETHOD GetExtension(const nsAString & name, nsIWebGLExtension * *_retval NS_OUTPARAM) = 0;

  /* nsIVariant getSupportedExtensions (); */
  NS_SCRIPTABLE NS_IMETHOD GetSupportedExtensions(nsIVariant * *_retval NS_OUTPARAM) = 0;

  /* WebGLboolean isContextLost (); */
  NS_SCRIPTABLE NS_IMETHOD IsContextLost(WebGLboolean *_retval NS_OUTPARAM) = 0;

  /* readonly attribute WebGLsizei drawingBufferWidth; */
  NS_SCRIPTABLE NS_IMETHOD GetDrawingBufferWidth(WebGLsizei *aDrawingBufferWidth) = 0;

  /* readonly attribute WebGLsizei drawingBufferHeight; */
  NS_SCRIPTABLE NS_IMETHOD GetDrawingBufferHeight(WebGLsizei *aDrawingBufferHeight) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMWebGLRenderingContext, NS_IDOMWEBGLRENDERINGCONTEXT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMWEBGLRENDERINGCONTEXT \
  NS_SCRIPTABLE NS_IMETHOD GetCanvas(nsIDOMHTMLCanvasElement * *aCanvas); \
  NS_SCRIPTABLE NS_IMETHOD GetContextAttributes(JS::Value *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD MozActiveTexture(WebGLenum texture); \
  NS_SCRIPTABLE NS_IMETHOD AttachShader(nsIWebGLProgram *program, nsIWebGLShader *shader); \
  NS_SCRIPTABLE NS_IMETHOD BindAttribLocation(nsIWebGLProgram *program, WebGLuint index, const nsAString & name); \
  NS_SCRIPTABLE NS_IMETHOD BindBuffer(WebGLenum target, nsIWebGLBuffer *buffer); \
  NS_SCRIPTABLE NS_IMETHOD BindFramebuffer(WebGLenum target, nsIWebGLFramebuffer *framebuffer); \
  NS_SCRIPTABLE NS_IMETHOD BindRenderbuffer(WebGLenum target, nsIWebGLRenderbuffer *renderbuffer); \
  NS_SCRIPTABLE NS_IMETHOD BindTexture(WebGLenum target, nsIWebGLTexture *texture); \
  NS_SCRIPTABLE NS_IMETHOD MozBlendColor(WebGLclampf red, WebGLclampf green, WebGLclampf blue, WebGLclampf alpha); \
  NS_SCRIPTABLE NS_IMETHOD MozBlendEquation(WebGLenum mode); \
  NS_SCRIPTABLE NS_IMETHOD MozBlendEquationSeparate(WebGLenum modeRGB, WebGLenum modeAlpha); \
  NS_SCRIPTABLE NS_IMETHOD MozBlendFunc(WebGLenum sfactor, WebGLenum dfactor); \
  NS_SCRIPTABLE NS_IMETHOD MozBlendFuncSeparate(WebGLenum srcRGB, WebGLenum dstRGB, WebGLenum srcAlpha, WebGLenum dstAlpha); \
  NS_SCRIPTABLE NS_IMETHOD BufferData(WebGLenum target, const JS::Value & data, WebGLenum usage, JSContext* cx); \
  NS_SCRIPTABLE NS_IMETHOD BufferSubData(WebGLenum target, WebGLintptr offset, const JS::Value & data, JSContext* cx); \
  NS_SCRIPTABLE NS_IMETHOD CheckFramebufferStatus(WebGLenum target, WebGLenum *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD MozClear(WebGLbitfield mask); \
  NS_SCRIPTABLE NS_IMETHOD MozClearColor(WebGLclampf red, WebGLclampf green, WebGLclampf blue, WebGLclampf alpha); \
  NS_SCRIPTABLE NS_IMETHOD MozClearDepth(WebGLclampf depth); \
  NS_SCRIPTABLE NS_IMETHOD MozClearStencil(WebGLint s); \
  NS_SCRIPTABLE NS_IMETHOD MozColorMask(WebGLboolean red, WebGLboolean green, WebGLboolean blue, WebGLboolean alpha); \
  NS_SCRIPTABLE NS_IMETHOD CompileShader(nsIWebGLShader *shader); \
  NS_SCRIPTABLE NS_IMETHOD CompressedTexImage2D(WebGLenum target, WebGLint level, WebGLenum internalformat, WebGLsizei width, WebGLsizei height, WebGLint border, const JS::Value & pixels, JSContext* cx); \
  NS_SCRIPTABLE NS_IMETHOD CompressedTexSubImage2D(WebGLenum target, WebGLint level, WebGLint xoffset, WebGLint yoffset, WebGLsizei width, WebGLsizei height, WebGLenum format, const JS::Value & pixels, JSContext* cx); \
  NS_SCRIPTABLE NS_IMETHOD MozCopyTexImage2D(WebGLenum target, WebGLint level, WebGLenum internalformat, WebGLint x, WebGLint y, WebGLsizei width, WebGLsizei height, WebGLint border); \
  NS_SCRIPTABLE NS_IMETHOD MozCopyTexSubImage2D(WebGLenum target, WebGLint level, WebGLint xoffset, WebGLint yoffset, WebGLint x, WebGLint y, WebGLsizei width, WebGLsizei height); \
  NS_SCRIPTABLE NS_IMETHOD CreateBuffer(nsIWebGLBuffer * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD CreateProgram(nsIWebGLProgram * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD CreateFramebuffer(nsIWebGLFramebuffer * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD CreateRenderbuffer(nsIWebGLRenderbuffer * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD CreateShader(WebGLenum type, nsIWebGLShader * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD CreateTexture(nsIWebGLTexture * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD MozCullFace(WebGLenum mode); \
  NS_SCRIPTABLE NS_IMETHOD DeleteBuffer(nsIWebGLBuffer *buffer); \
  NS_SCRIPTABLE NS_IMETHOD DeleteProgram(nsIWebGLProgram *program); \
  NS_SCRIPTABLE NS_IMETHOD DeleteFramebuffer(nsIWebGLFramebuffer *framebuffer); \
  NS_SCRIPTABLE NS_IMETHOD DeleteRenderbuffer(nsIWebGLRenderbuffer *renderbuffer); \
  NS_SCRIPTABLE NS_IMETHOD DeleteShader(nsIWebGLShader *shader); \
  NS_SCRIPTABLE NS_IMETHOD DeleteTexture(nsIWebGLTexture *texture); \
  NS_SCRIPTABLE NS_IMETHOD MozDepthFunc(WebGLenum func); \
  NS_SCRIPTABLE NS_IMETHOD MozDepthMask(WebGLboolean flag); \
  NS_SCRIPTABLE NS_IMETHOD MozDepthRange(WebGLclampf zNear, WebGLclampf zFar); \
  NS_SCRIPTABLE NS_IMETHOD DetachShader(nsIWebGLProgram *program, nsIWebGLShader *shader); \
  NS_SCRIPTABLE NS_IMETHOD MozDisable(WebGLenum cap); \
  NS_SCRIPTABLE NS_IMETHOD MozDisableVertexAttribArray(WebGLuint index); \
  NS_SCRIPTABLE NS_IMETHOD MozDrawArrays(WebGLenum mode, WebGLint first, WebGLsizei count); \
  NS_SCRIPTABLE NS_IMETHOD MozDrawElements(WebGLenum mode, WebGLsizei count, WebGLenum type, WebGLintptr offset); \
  NS_SCRIPTABLE NS_IMETHOD MozEnable(WebGLenum cap); \
  NS_SCRIPTABLE NS_IMETHOD MozEnableVertexAttribArray(WebGLuint index); \
  NS_SCRIPTABLE NS_IMETHOD MozFinish(void); \
  NS_SCRIPTABLE NS_IMETHOD MozFlush(void); \
  NS_SCRIPTABLE NS_IMETHOD FramebufferRenderbuffer(WebGLenum target, WebGLenum attachment, WebGLenum renderbuffertarget, nsIWebGLRenderbuffer *renderbuffer); \
  NS_SCRIPTABLE NS_IMETHOD FramebufferTexture2D(WebGLenum target, WebGLenum attachment, WebGLenum textarget, nsIWebGLTexture *texture, WebGLint level); \
  NS_SCRIPTABLE NS_IMETHOD MozFrontFace(WebGLenum mode); \
  NS_SCRIPTABLE NS_IMETHOD MozGenerateMipmap(WebGLenum target); \
  NS_SCRIPTABLE NS_IMETHOD GetActiveAttrib(nsIWebGLProgram *program, PRUint32 index, nsIWebGLActiveInfo * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetActiveUniform(nsIWebGLProgram *program, PRUint32 index, nsIWebGLActiveInfo * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetAttachedShaders(nsIWebGLProgram *program, nsIVariant * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetAttribLocation(nsIWebGLProgram *program, const nsAString & name, WebGLint *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetParameter(WebGLenum pname, JSContext* cx, JS::Value *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetBufferParameter(WebGLenum target, WebGLenum pname, JS::Value *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD MozGetError(WebGLenum *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetFramebufferAttachmentParameter(WebGLenum target, WebGLenum attachment, WebGLenum pname, JSContext* cx, JS::Value *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetProgramParameter(nsIWebGLProgram *program, WebGLenum pname, JS::Value *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetProgramInfoLog(nsIWebGLProgram *program, nsAString & _retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetRenderbufferParameter(WebGLenum target, WebGLenum pname, JS::Value *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetShaderParameter(nsIWebGLShader *shader, WebGLenum pname, JS::Value *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetShaderInfoLog(nsIWebGLShader *shader, nsAString & _retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetShaderPrecisionFormat(WebGLenum shadertype, WebGLenum precisiontype, nsIWebGLShaderPrecisionFormat * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetShaderSource(nsIWebGLShader *shader, nsAString & _retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetTexParameter(WebGLenum target, WebGLenum pname, JS::Value *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetUniform(nsIWebGLProgram *program, nsIWebGLUniformLocation *location, JSContext* cx, JS::Value *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetUniformLocation(nsIWebGLProgram *program, const nsAString & name, nsIWebGLUniformLocation * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetVertexAttrib(WebGLuint index, WebGLenum pname, JSContext* cx, JS::Value *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetVertexAttribOffset(WebGLuint index, WebGLenum pname, WebGLuint *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD MozHint(WebGLenum target, WebGLenum mode); \
  NS_SCRIPTABLE NS_IMETHOD IsBuffer(nsIWebGLBuffer *buffer, WebGLboolean *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD IsFramebuffer(nsIWebGLFramebuffer *framebuffer, WebGLboolean *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD IsProgram(nsIWebGLProgram *program, WebGLboolean *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD IsRenderbuffer(nsIWebGLRenderbuffer *renderbuffer, WebGLboolean *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD IsShader(nsIWebGLShader *shader, WebGLboolean *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD IsTexture(nsIWebGLTexture *texture, WebGLboolean *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD IsEnabled(WebGLenum cap, WebGLboolean *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD MozLineWidth(WebGLfloat width); \
  NS_SCRIPTABLE NS_IMETHOD LinkProgram(nsIWebGLProgram *program); \
  NS_SCRIPTABLE NS_IMETHOD MozPixelStorei(WebGLenum pname, WebGLint param); \
  NS_SCRIPTABLE NS_IMETHOD MozPolygonOffset(WebGLfloat factor, WebGLfloat units); \
  NS_SCRIPTABLE NS_IMETHOD ReadPixels(WebGLint x, WebGLint y, WebGLsizei width, WebGLsizei height, WebGLenum format, WebGLenum type, const JS::Value & pixels, JSContext* cx); \
  NS_SCRIPTABLE NS_IMETHOD MozRenderbufferStorage(WebGLenum target, WebGLenum internalformat, WebGLsizei width, WebGLsizei height); \
  NS_SCRIPTABLE NS_IMETHOD MozSampleCoverage(WebGLclampf value, WebGLboolean invert); \
  NS_SCRIPTABLE NS_IMETHOD MozScissor(WebGLint x, WebGLint y, WebGLsizei width, WebGLsizei height); \
  NS_SCRIPTABLE NS_IMETHOD ShaderSource(nsIWebGLShader *shader, const nsAString & source); \
  NS_SCRIPTABLE NS_IMETHOD MozStencilFunc(WebGLenum func, WebGLint ref, WebGLuint mask); \
  NS_SCRIPTABLE NS_IMETHOD MozStencilFuncSeparate(WebGLenum face, WebGLenum func, WebGLint ref, WebGLuint mask); \
  NS_SCRIPTABLE NS_IMETHOD MozStencilMask(WebGLuint mask); \
  NS_SCRIPTABLE NS_IMETHOD MozStencilMaskSeparate(WebGLenum face, WebGLuint mask); \
  NS_SCRIPTABLE NS_IMETHOD MozStencilOp(WebGLenum fail, WebGLenum zfail, WebGLenum zpass); \
  NS_SCRIPTABLE NS_IMETHOD MozStencilOpSeparate(WebGLenum face, WebGLenum fail, WebGLenum zfail, WebGLenum zpass); \
  NS_SCRIPTABLE NS_IMETHOD TexImage2D(PRInt32 dummy); \
  NS_IMETHOD TexImage2D_array(WebGLenum target, WebGLint level, WebGLenum internalformat, WebGLsizei width, WebGLsizei height, WebGLint border, WebGLenum format, WebGLenum type, JSObject *pixels, JSContext* cx); \
  NS_IMETHOD TexImage2D_imageData(WebGLenum target, WebGLint level, WebGLenum internalformat, WebGLsizei width, WebGLsizei height, WebGLint border, WebGLenum format, WebGLenum type, JSObject *pixels, JSContext* cx); \
  NS_IMETHOD TexImage2D_dom(WebGLenum target, WebGLint level, WebGLenum internalformat, WebGLenum format, WebGLenum type, mozilla::dom::Element *element); \
  NS_SCRIPTABLE NS_IMETHOD TexSubImage2D(PRInt32 dummy); \
  NS_IMETHOD TexSubImage2D_array(WebGLenum target, WebGLint level, WebGLint xoffset, WebGLint yoffset, WebGLsizei width, WebGLsizei height, WebGLenum format, WebGLenum type, JSObject *pixels, JSContext* cx); \
  NS_IMETHOD TexSubImage2D_imageData(WebGLenum target, WebGLint level, WebGLint xoffset, WebGLint yoffset, WebGLsizei width, WebGLsizei height, WebGLenum format, WebGLenum type, JSObject *pixels, JSContext* cx); \
  NS_IMETHOD TexSubImage2D_dom(WebGLenum target, WebGLint level, WebGLint xoffset, WebGLint yoffset, WebGLenum format, WebGLenum type, mozilla::dom::Element *element); \
  NS_SCRIPTABLE NS_IMETHOD MozTexParameterf(WebGLenum target, WebGLenum pname, WebGLfloat param); \
  NS_SCRIPTABLE NS_IMETHOD MozTexParameteri(WebGLenum target, WebGLenum pname, WebGLint param); \
  NS_SCRIPTABLE NS_IMETHOD Uniform1f(nsIWebGLUniformLocation *location, WebGLfloat x); \
  NS_SCRIPTABLE NS_IMETHOD Uniform1i(nsIWebGLUniformLocation *location, WebGLint x); \
  NS_SCRIPTABLE NS_IMETHOD Uniform2f(nsIWebGLUniformLocation *location, WebGLfloat x, WebGLfloat y); \
  NS_SCRIPTABLE NS_IMETHOD Uniform2i(nsIWebGLUniformLocation *location, WebGLint x, WebGLint y); \
  NS_SCRIPTABLE NS_IMETHOD Uniform3f(nsIWebGLUniformLocation *location, WebGLfloat x, WebGLfloat y, WebGLfloat z); \
  NS_SCRIPTABLE NS_IMETHOD Uniform3i(nsIWebGLUniformLocation *location, WebGLint x, WebGLint y, WebGLint z); \
  NS_SCRIPTABLE NS_IMETHOD Uniform4f(nsIWebGLUniformLocation *location, WebGLfloat x, WebGLfloat y, WebGLfloat z, WebGLfloat w); \
  NS_SCRIPTABLE NS_IMETHOD Uniform4i(nsIWebGLUniformLocation *location, WebGLint x, WebGLint y, WebGLint z, WebGLint w); \
  NS_SCRIPTABLE NS_IMETHOD Uniform1fv(nsIWebGLUniformLocation *location, const JS::Value & v, JSContext* cx); \
  NS_SCRIPTABLE NS_IMETHOD Uniform1iv(nsIWebGLUniformLocation *location, const JS::Value & v, JSContext* cx); \
  NS_SCRIPTABLE NS_IMETHOD Uniform2fv(nsIWebGLUniformLocation *location, const JS::Value & v, JSContext* cx); \
  NS_SCRIPTABLE NS_IMETHOD Uniform2iv(nsIWebGLUniformLocation *location, const JS::Value & v, JSContext* cx); \
  NS_SCRIPTABLE NS_IMETHOD Uniform3fv(nsIWebGLUniformLocation *location, const JS::Value & v, JSContext* cx); \
  NS_SCRIPTABLE NS_IMETHOD Uniform3iv(nsIWebGLUniformLocation *location, const JS::Value & v, JSContext* cx); \
  NS_SCRIPTABLE NS_IMETHOD Uniform4fv(nsIWebGLUniformLocation *location, const JS::Value & v, JSContext* cx); \
  NS_SCRIPTABLE NS_IMETHOD Uniform4iv(nsIWebGLUniformLocation *location, const JS::Value & v, JSContext* cx); \
  NS_SCRIPTABLE NS_IMETHOD UniformMatrix2fv(nsIWebGLUniformLocation *location, bool transpose, const JS::Value & value, JSContext* cx); \
  NS_SCRIPTABLE NS_IMETHOD UniformMatrix3fv(nsIWebGLUniformLocation *location, bool transpose, const JS::Value & value, JSContext* cx); \
  NS_SCRIPTABLE NS_IMETHOD UniformMatrix4fv(nsIWebGLUniformLocation *location, bool transpose, const JS::Value & value, JSContext* cx); \
  NS_SCRIPTABLE NS_IMETHOD UseProgram(nsIWebGLProgram *program); \
  NS_SCRIPTABLE NS_IMETHOD ValidateProgram(nsIWebGLProgram *program); \
  NS_SCRIPTABLE NS_IMETHOD MozVertexAttrib1f(WebGLuint indx, WebGLfloat x); \
  NS_SCRIPTABLE NS_IMETHOD MozVertexAttrib2f(WebGLuint indx, WebGLfloat x, WebGLfloat y); \
  NS_SCRIPTABLE NS_IMETHOD MozVertexAttrib3f(WebGLuint indx, WebGLfloat x, WebGLfloat y, WebGLfloat z); \
  NS_SCRIPTABLE NS_IMETHOD MozVertexAttrib4f(WebGLuint indx, WebGLfloat x, WebGLfloat y, WebGLfloat z, WebGLfloat w); \
  NS_SCRIPTABLE NS_IMETHOD VertexAttrib1fv(WebGLuint indx, const JS::Value & values, JSContext* cx); \
  NS_SCRIPTABLE NS_IMETHOD VertexAttrib2fv(WebGLuint indx, const JS::Value & values, JSContext* cx); \
  NS_SCRIPTABLE NS_IMETHOD VertexAttrib3fv(WebGLuint indx, const JS::Value & values, JSContext* cx); \
  NS_SCRIPTABLE NS_IMETHOD VertexAttrib4fv(WebGLuint indx, const JS::Value & values, JSContext* cx); \
  NS_SCRIPTABLE NS_IMETHOD MozVertexAttribPointer(WebGLuint idx, WebGLint size, WebGLenum type, WebGLboolean normalized, WebGLsizei stride, WebGLintptr offset); \
  NS_SCRIPTABLE NS_IMETHOD MozViewport(WebGLint x, WebGLint y, WebGLsizei width, WebGLsizei height); \
  NS_IMETHOD MozGetUnderlyingParamString(WebGLenum pname, nsAString & _retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetExtension(const nsAString & name, nsIWebGLExtension * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetSupportedExtensions(nsIVariant * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD IsContextLost(WebGLboolean *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetDrawingBufferWidth(WebGLsizei *aDrawingBufferWidth); \
  NS_SCRIPTABLE NS_IMETHOD GetDrawingBufferHeight(WebGLsizei *aDrawingBufferHeight); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMWEBGLRENDERINGCONTEXT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetCanvas(nsIDOMHTMLCanvasElement * *aCanvas) { return _to GetCanvas(aCanvas); } \
  NS_SCRIPTABLE NS_IMETHOD GetContextAttributes(JS::Value *_retval NS_OUTPARAM) { return _to GetContextAttributes(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD MozActiveTexture(WebGLenum texture) { return _to MozActiveTexture(texture); } \
  NS_SCRIPTABLE NS_IMETHOD AttachShader(nsIWebGLProgram *program, nsIWebGLShader *shader) { return _to AttachShader(program, shader); } \
  NS_SCRIPTABLE NS_IMETHOD BindAttribLocation(nsIWebGLProgram *program, WebGLuint index, const nsAString & name) { return _to BindAttribLocation(program, index, name); } \
  NS_SCRIPTABLE NS_IMETHOD BindBuffer(WebGLenum target, nsIWebGLBuffer *buffer) { return _to BindBuffer(target, buffer); } \
  NS_SCRIPTABLE NS_IMETHOD BindFramebuffer(WebGLenum target, nsIWebGLFramebuffer *framebuffer) { return _to BindFramebuffer(target, framebuffer); } \
  NS_SCRIPTABLE NS_IMETHOD BindRenderbuffer(WebGLenum target, nsIWebGLRenderbuffer *renderbuffer) { return _to BindRenderbuffer(target, renderbuffer); } \
  NS_SCRIPTABLE NS_IMETHOD BindTexture(WebGLenum target, nsIWebGLTexture *texture) { return _to BindTexture(target, texture); } \
  NS_SCRIPTABLE NS_IMETHOD MozBlendColor(WebGLclampf red, WebGLclampf green, WebGLclampf blue, WebGLclampf alpha) { return _to MozBlendColor(red, green, blue, alpha); } \
  NS_SCRIPTABLE NS_IMETHOD MozBlendEquation(WebGLenum mode) { return _to MozBlendEquation(mode); } \
  NS_SCRIPTABLE NS_IMETHOD MozBlendEquationSeparate(WebGLenum modeRGB, WebGLenum modeAlpha) { return _to MozBlendEquationSeparate(modeRGB, modeAlpha); } \
  NS_SCRIPTABLE NS_IMETHOD MozBlendFunc(WebGLenum sfactor, WebGLenum dfactor) { return _to MozBlendFunc(sfactor, dfactor); } \
  NS_SCRIPTABLE NS_IMETHOD MozBlendFuncSeparate(WebGLenum srcRGB, WebGLenum dstRGB, WebGLenum srcAlpha, WebGLenum dstAlpha) { return _to MozBlendFuncSeparate(srcRGB, dstRGB, srcAlpha, dstAlpha); } \
  NS_SCRIPTABLE NS_IMETHOD BufferData(WebGLenum target, const JS::Value & data, WebGLenum usage, JSContext* cx) { return _to BufferData(target, data, usage, cx); } \
  NS_SCRIPTABLE NS_IMETHOD BufferSubData(WebGLenum target, WebGLintptr offset, const JS::Value & data, JSContext* cx) { return _to BufferSubData(target, offset, data, cx); } \
  NS_SCRIPTABLE NS_IMETHOD CheckFramebufferStatus(WebGLenum target, WebGLenum *_retval NS_OUTPARAM) { return _to CheckFramebufferStatus(target, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD MozClear(WebGLbitfield mask) { return _to MozClear(mask); } \
  NS_SCRIPTABLE NS_IMETHOD MozClearColor(WebGLclampf red, WebGLclampf green, WebGLclampf blue, WebGLclampf alpha) { return _to MozClearColor(red, green, blue, alpha); } \
  NS_SCRIPTABLE NS_IMETHOD MozClearDepth(WebGLclampf depth) { return _to MozClearDepth(depth); } \
  NS_SCRIPTABLE NS_IMETHOD MozClearStencil(WebGLint s) { return _to MozClearStencil(s); } \
  NS_SCRIPTABLE NS_IMETHOD MozColorMask(WebGLboolean red, WebGLboolean green, WebGLboolean blue, WebGLboolean alpha) { return _to MozColorMask(red, green, blue, alpha); } \
  NS_SCRIPTABLE NS_IMETHOD CompileShader(nsIWebGLShader *shader) { return _to CompileShader(shader); } \
  NS_SCRIPTABLE NS_IMETHOD CompressedTexImage2D(WebGLenum target, WebGLint level, WebGLenum internalformat, WebGLsizei width, WebGLsizei height, WebGLint border, const JS::Value & pixels, JSContext* cx) { return _to CompressedTexImage2D(target, level, internalformat, width, height, border, pixels, cx); } \
  NS_SCRIPTABLE NS_IMETHOD CompressedTexSubImage2D(WebGLenum target, WebGLint level, WebGLint xoffset, WebGLint yoffset, WebGLsizei width, WebGLsizei height, WebGLenum format, const JS::Value & pixels, JSContext* cx) { return _to CompressedTexSubImage2D(target, level, xoffset, yoffset, width, height, format, pixels, cx); } \
  NS_SCRIPTABLE NS_IMETHOD MozCopyTexImage2D(WebGLenum target, WebGLint level, WebGLenum internalformat, WebGLint x, WebGLint y, WebGLsizei width, WebGLsizei height, WebGLint border) { return _to MozCopyTexImage2D(target, level, internalformat, x, y, width, height, border); } \
  NS_SCRIPTABLE NS_IMETHOD MozCopyTexSubImage2D(WebGLenum target, WebGLint level, WebGLint xoffset, WebGLint yoffset, WebGLint x, WebGLint y, WebGLsizei width, WebGLsizei height) { return _to MozCopyTexSubImage2D(target, level, xoffset, yoffset, x, y, width, height); } \
  NS_SCRIPTABLE NS_IMETHOD CreateBuffer(nsIWebGLBuffer * *_retval NS_OUTPARAM) { return _to CreateBuffer(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD CreateProgram(nsIWebGLProgram * *_retval NS_OUTPARAM) { return _to CreateProgram(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD CreateFramebuffer(nsIWebGLFramebuffer * *_retval NS_OUTPARAM) { return _to CreateFramebuffer(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD CreateRenderbuffer(nsIWebGLRenderbuffer * *_retval NS_OUTPARAM) { return _to CreateRenderbuffer(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD CreateShader(WebGLenum type, nsIWebGLShader * *_retval NS_OUTPARAM) { return _to CreateShader(type, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD CreateTexture(nsIWebGLTexture * *_retval NS_OUTPARAM) { return _to CreateTexture(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD MozCullFace(WebGLenum mode) { return _to MozCullFace(mode); } \
  NS_SCRIPTABLE NS_IMETHOD DeleteBuffer(nsIWebGLBuffer *buffer) { return _to DeleteBuffer(buffer); } \
  NS_SCRIPTABLE NS_IMETHOD DeleteProgram(nsIWebGLProgram *program) { return _to DeleteProgram(program); } \
  NS_SCRIPTABLE NS_IMETHOD DeleteFramebuffer(nsIWebGLFramebuffer *framebuffer) { return _to DeleteFramebuffer(framebuffer); } \
  NS_SCRIPTABLE NS_IMETHOD DeleteRenderbuffer(nsIWebGLRenderbuffer *renderbuffer) { return _to DeleteRenderbuffer(renderbuffer); } \
  NS_SCRIPTABLE NS_IMETHOD DeleteShader(nsIWebGLShader *shader) { return _to DeleteShader(shader); } \
  NS_SCRIPTABLE NS_IMETHOD DeleteTexture(nsIWebGLTexture *texture) { return _to DeleteTexture(texture); } \
  NS_SCRIPTABLE NS_IMETHOD MozDepthFunc(WebGLenum func) { return _to MozDepthFunc(func); } \
  NS_SCRIPTABLE NS_IMETHOD MozDepthMask(WebGLboolean flag) { return _to MozDepthMask(flag); } \
  NS_SCRIPTABLE NS_IMETHOD MozDepthRange(WebGLclampf zNear, WebGLclampf zFar) { return _to MozDepthRange(zNear, zFar); } \
  NS_SCRIPTABLE NS_IMETHOD DetachShader(nsIWebGLProgram *program, nsIWebGLShader *shader) { return _to DetachShader(program, shader); } \
  NS_SCRIPTABLE NS_IMETHOD MozDisable(WebGLenum cap) { return _to MozDisable(cap); } \
  NS_SCRIPTABLE NS_IMETHOD MozDisableVertexAttribArray(WebGLuint index) { return _to MozDisableVertexAttribArray(index); } \
  NS_SCRIPTABLE NS_IMETHOD MozDrawArrays(WebGLenum mode, WebGLint first, WebGLsizei count) { return _to MozDrawArrays(mode, first, count); } \
  NS_SCRIPTABLE NS_IMETHOD MozDrawElements(WebGLenum mode, WebGLsizei count, WebGLenum type, WebGLintptr offset) { return _to MozDrawElements(mode, count, type, offset); } \
  NS_SCRIPTABLE NS_IMETHOD MozEnable(WebGLenum cap) { return _to MozEnable(cap); } \
  NS_SCRIPTABLE NS_IMETHOD MozEnableVertexAttribArray(WebGLuint index) { return _to MozEnableVertexAttribArray(index); } \
  NS_SCRIPTABLE NS_IMETHOD MozFinish(void) { return _to MozFinish(); } \
  NS_SCRIPTABLE NS_IMETHOD MozFlush(void) { return _to MozFlush(); } \
  NS_SCRIPTABLE NS_IMETHOD FramebufferRenderbuffer(WebGLenum target, WebGLenum attachment, WebGLenum renderbuffertarget, nsIWebGLRenderbuffer *renderbuffer) { return _to FramebufferRenderbuffer(target, attachment, renderbuffertarget, renderbuffer); } \
  NS_SCRIPTABLE NS_IMETHOD FramebufferTexture2D(WebGLenum target, WebGLenum attachment, WebGLenum textarget, nsIWebGLTexture *texture, WebGLint level) { return _to FramebufferTexture2D(target, attachment, textarget, texture, level); } \
  NS_SCRIPTABLE NS_IMETHOD MozFrontFace(WebGLenum mode) { return _to MozFrontFace(mode); } \
  NS_SCRIPTABLE NS_IMETHOD MozGenerateMipmap(WebGLenum target) { return _to MozGenerateMipmap(target); } \
  NS_SCRIPTABLE NS_IMETHOD GetActiveAttrib(nsIWebGLProgram *program, PRUint32 index, nsIWebGLActiveInfo * *_retval NS_OUTPARAM) { return _to GetActiveAttrib(program, index, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetActiveUniform(nsIWebGLProgram *program, PRUint32 index, nsIWebGLActiveInfo * *_retval NS_OUTPARAM) { return _to GetActiveUniform(program, index, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetAttachedShaders(nsIWebGLProgram *program, nsIVariant * *_retval NS_OUTPARAM) { return _to GetAttachedShaders(program, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetAttribLocation(nsIWebGLProgram *program, const nsAString & name, WebGLint *_retval NS_OUTPARAM) { return _to GetAttribLocation(program, name, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetParameter(WebGLenum pname, JSContext* cx, JS::Value *_retval NS_OUTPARAM) { return _to GetParameter(pname, cx, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetBufferParameter(WebGLenum target, WebGLenum pname, JS::Value *_retval NS_OUTPARAM) { return _to GetBufferParameter(target, pname, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD MozGetError(WebGLenum *_retval NS_OUTPARAM) { return _to MozGetError(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetFramebufferAttachmentParameter(WebGLenum target, WebGLenum attachment, WebGLenum pname, JSContext* cx, JS::Value *_retval NS_OUTPARAM) { return _to GetFramebufferAttachmentParameter(target, attachment, pname, cx, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetProgramParameter(nsIWebGLProgram *program, WebGLenum pname, JS::Value *_retval NS_OUTPARAM) { return _to GetProgramParameter(program, pname, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetProgramInfoLog(nsIWebGLProgram *program, nsAString & _retval NS_OUTPARAM) { return _to GetProgramInfoLog(program, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetRenderbufferParameter(WebGLenum target, WebGLenum pname, JS::Value *_retval NS_OUTPARAM) { return _to GetRenderbufferParameter(target, pname, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetShaderParameter(nsIWebGLShader *shader, WebGLenum pname, JS::Value *_retval NS_OUTPARAM) { return _to GetShaderParameter(shader, pname, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetShaderInfoLog(nsIWebGLShader *shader, nsAString & _retval NS_OUTPARAM) { return _to GetShaderInfoLog(shader, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetShaderPrecisionFormat(WebGLenum shadertype, WebGLenum precisiontype, nsIWebGLShaderPrecisionFormat * *_retval NS_OUTPARAM) { return _to GetShaderPrecisionFormat(shadertype, precisiontype, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetShaderSource(nsIWebGLShader *shader, nsAString & _retval NS_OUTPARAM) { return _to GetShaderSource(shader, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetTexParameter(WebGLenum target, WebGLenum pname, JS::Value *_retval NS_OUTPARAM) { return _to GetTexParameter(target, pname, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetUniform(nsIWebGLProgram *program, nsIWebGLUniformLocation *location, JSContext* cx, JS::Value *_retval NS_OUTPARAM) { return _to GetUniform(program, location, cx, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetUniformLocation(nsIWebGLProgram *program, const nsAString & name, nsIWebGLUniformLocation * *_retval NS_OUTPARAM) { return _to GetUniformLocation(program, name, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetVertexAttrib(WebGLuint index, WebGLenum pname, JSContext* cx, JS::Value *_retval NS_OUTPARAM) { return _to GetVertexAttrib(index, pname, cx, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetVertexAttribOffset(WebGLuint index, WebGLenum pname, WebGLuint *_retval NS_OUTPARAM) { return _to GetVertexAttribOffset(index, pname, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD MozHint(WebGLenum target, WebGLenum mode) { return _to MozHint(target, mode); } \
  NS_SCRIPTABLE NS_IMETHOD IsBuffer(nsIWebGLBuffer *buffer, WebGLboolean *_retval NS_OUTPARAM) { return _to IsBuffer(buffer, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsFramebuffer(nsIWebGLFramebuffer *framebuffer, WebGLboolean *_retval NS_OUTPARAM) { return _to IsFramebuffer(framebuffer, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsProgram(nsIWebGLProgram *program, WebGLboolean *_retval NS_OUTPARAM) { return _to IsProgram(program, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsRenderbuffer(nsIWebGLRenderbuffer *renderbuffer, WebGLboolean *_retval NS_OUTPARAM) { return _to IsRenderbuffer(renderbuffer, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsShader(nsIWebGLShader *shader, WebGLboolean *_retval NS_OUTPARAM) { return _to IsShader(shader, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsTexture(nsIWebGLTexture *texture, WebGLboolean *_retval NS_OUTPARAM) { return _to IsTexture(texture, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsEnabled(WebGLenum cap, WebGLboolean *_retval NS_OUTPARAM) { return _to IsEnabled(cap, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD MozLineWidth(WebGLfloat width) { return _to MozLineWidth(width); } \
  NS_SCRIPTABLE NS_IMETHOD LinkProgram(nsIWebGLProgram *program) { return _to LinkProgram(program); } \
  NS_SCRIPTABLE NS_IMETHOD MozPixelStorei(WebGLenum pname, WebGLint param) { return _to MozPixelStorei(pname, param); } \
  NS_SCRIPTABLE NS_IMETHOD MozPolygonOffset(WebGLfloat factor, WebGLfloat units) { return _to MozPolygonOffset(factor, units); } \
  NS_SCRIPTABLE NS_IMETHOD ReadPixels(WebGLint x, WebGLint y, WebGLsizei width, WebGLsizei height, WebGLenum format, WebGLenum type, const JS::Value & pixels, JSContext* cx) { return _to ReadPixels(x, y, width, height, format, type, pixels, cx); } \
  NS_SCRIPTABLE NS_IMETHOD MozRenderbufferStorage(WebGLenum target, WebGLenum internalformat, WebGLsizei width, WebGLsizei height) { return _to MozRenderbufferStorage(target, internalformat, width, height); } \
  NS_SCRIPTABLE NS_IMETHOD MozSampleCoverage(WebGLclampf value, WebGLboolean invert) { return _to MozSampleCoverage(value, invert); } \
  NS_SCRIPTABLE NS_IMETHOD MozScissor(WebGLint x, WebGLint y, WebGLsizei width, WebGLsizei height) { return _to MozScissor(x, y, width, height); } \
  NS_SCRIPTABLE NS_IMETHOD ShaderSource(nsIWebGLShader *shader, const nsAString & source) { return _to ShaderSource(shader, source); } \
  NS_SCRIPTABLE NS_IMETHOD MozStencilFunc(WebGLenum func, WebGLint ref, WebGLuint mask) { return _to MozStencilFunc(func, ref, mask); } \
  NS_SCRIPTABLE NS_IMETHOD MozStencilFuncSeparate(WebGLenum face, WebGLenum func, WebGLint ref, WebGLuint mask) { return _to MozStencilFuncSeparate(face, func, ref, mask); } \
  NS_SCRIPTABLE NS_IMETHOD MozStencilMask(WebGLuint mask) { return _to MozStencilMask(mask); } \
  NS_SCRIPTABLE NS_IMETHOD MozStencilMaskSeparate(WebGLenum face, WebGLuint mask) { return _to MozStencilMaskSeparate(face, mask); } \
  NS_SCRIPTABLE NS_IMETHOD MozStencilOp(WebGLenum fail, WebGLenum zfail, WebGLenum zpass) { return _to MozStencilOp(fail, zfail, zpass); } \
  NS_SCRIPTABLE NS_IMETHOD MozStencilOpSeparate(WebGLenum face, WebGLenum fail, WebGLenum zfail, WebGLenum zpass) { return _to MozStencilOpSeparate(face, fail, zfail, zpass); } \
  NS_SCRIPTABLE NS_IMETHOD TexImage2D(PRInt32 dummy) { return _to TexImage2D(dummy); } \
  NS_IMETHOD TexImage2D_array(WebGLenum target, WebGLint level, WebGLenum internalformat, WebGLsizei width, WebGLsizei height, WebGLint border, WebGLenum format, WebGLenum type, JSObject *pixels, JSContext* cx) { return _to TexImage2D_array(target, level, internalformat, width, height, border, format, type, pixels, cx); } \
  NS_IMETHOD TexImage2D_imageData(WebGLenum target, WebGLint level, WebGLenum internalformat, WebGLsizei width, WebGLsizei height, WebGLint border, WebGLenum format, WebGLenum type, JSObject *pixels, JSContext* cx) { return _to TexImage2D_imageData(target, level, internalformat, width, height, border, format, type, pixels, cx); } \
  NS_IMETHOD TexImage2D_dom(WebGLenum target, WebGLint level, WebGLenum internalformat, WebGLenum format, WebGLenum type, mozilla::dom::Element *element) { return _to TexImage2D_dom(target, level, internalformat, format, type, element); } \
  NS_SCRIPTABLE NS_IMETHOD TexSubImage2D(PRInt32 dummy) { return _to TexSubImage2D(dummy); } \
  NS_IMETHOD TexSubImage2D_array(WebGLenum target, WebGLint level, WebGLint xoffset, WebGLint yoffset, WebGLsizei width, WebGLsizei height, WebGLenum format, WebGLenum type, JSObject *pixels, JSContext* cx) { return _to TexSubImage2D_array(target, level, xoffset, yoffset, width, height, format, type, pixels, cx); } \
  NS_IMETHOD TexSubImage2D_imageData(WebGLenum target, WebGLint level, WebGLint xoffset, WebGLint yoffset, WebGLsizei width, WebGLsizei height, WebGLenum format, WebGLenum type, JSObject *pixels, JSContext* cx) { return _to TexSubImage2D_imageData(target, level, xoffset, yoffset, width, height, format, type, pixels, cx); } \
  NS_IMETHOD TexSubImage2D_dom(WebGLenum target, WebGLint level, WebGLint xoffset, WebGLint yoffset, WebGLenum format, WebGLenum type, mozilla::dom::Element *element) { return _to TexSubImage2D_dom(target, level, xoffset, yoffset, format, type, element); } \
  NS_SCRIPTABLE NS_IMETHOD MozTexParameterf(WebGLenum target, WebGLenum pname, WebGLfloat param) { return _to MozTexParameterf(target, pname, param); } \
  NS_SCRIPTABLE NS_IMETHOD MozTexParameteri(WebGLenum target, WebGLenum pname, WebGLint param) { return _to MozTexParameteri(target, pname, param); } \
  NS_SCRIPTABLE NS_IMETHOD Uniform1f(nsIWebGLUniformLocation *location, WebGLfloat x) { return _to Uniform1f(location, x); } \
  NS_SCRIPTABLE NS_IMETHOD Uniform1i(nsIWebGLUniformLocation *location, WebGLint x) { return _to Uniform1i(location, x); } \
  NS_SCRIPTABLE NS_IMETHOD Uniform2f(nsIWebGLUniformLocation *location, WebGLfloat x, WebGLfloat y) { return _to Uniform2f(location, x, y); } \
  NS_SCRIPTABLE NS_IMETHOD Uniform2i(nsIWebGLUniformLocation *location, WebGLint x, WebGLint y) { return _to Uniform2i(location, x, y); } \
  NS_SCRIPTABLE NS_IMETHOD Uniform3f(nsIWebGLUniformLocation *location, WebGLfloat x, WebGLfloat y, WebGLfloat z) { return _to Uniform3f(location, x, y, z); } \
  NS_SCRIPTABLE NS_IMETHOD Uniform3i(nsIWebGLUniformLocation *location, WebGLint x, WebGLint y, WebGLint z) { return _to Uniform3i(location, x, y, z); } \
  NS_SCRIPTABLE NS_IMETHOD Uniform4f(nsIWebGLUniformLocation *location, WebGLfloat x, WebGLfloat y, WebGLfloat z, WebGLfloat w) { return _to Uniform4f(location, x, y, z, w); } \
  NS_SCRIPTABLE NS_IMETHOD Uniform4i(nsIWebGLUniformLocation *location, WebGLint x, WebGLint y, WebGLint z, WebGLint w) { return _to Uniform4i(location, x, y, z, w); } \
  NS_SCRIPTABLE NS_IMETHOD Uniform1fv(nsIWebGLUniformLocation *location, const JS::Value & v, JSContext* cx) { return _to Uniform1fv(location, v, cx); } \
  NS_SCRIPTABLE NS_IMETHOD Uniform1iv(nsIWebGLUniformLocation *location, const JS::Value & v, JSContext* cx) { return _to Uniform1iv(location, v, cx); } \
  NS_SCRIPTABLE NS_IMETHOD Uniform2fv(nsIWebGLUniformLocation *location, const JS::Value & v, JSContext* cx) { return _to Uniform2fv(location, v, cx); } \
  NS_SCRIPTABLE NS_IMETHOD Uniform2iv(nsIWebGLUniformLocation *location, const JS::Value & v, JSContext* cx) { return _to Uniform2iv(location, v, cx); } \
  NS_SCRIPTABLE NS_IMETHOD Uniform3fv(nsIWebGLUniformLocation *location, const JS::Value & v, JSContext* cx) { return _to Uniform3fv(location, v, cx); } \
  NS_SCRIPTABLE NS_IMETHOD Uniform3iv(nsIWebGLUniformLocation *location, const JS::Value & v, JSContext* cx) { return _to Uniform3iv(location, v, cx); } \
  NS_SCRIPTABLE NS_IMETHOD Uniform4fv(nsIWebGLUniformLocation *location, const JS::Value & v, JSContext* cx) { return _to Uniform4fv(location, v, cx); } \
  NS_SCRIPTABLE NS_IMETHOD Uniform4iv(nsIWebGLUniformLocation *location, const JS::Value & v, JSContext* cx) { return _to Uniform4iv(location, v, cx); } \
  NS_SCRIPTABLE NS_IMETHOD UniformMatrix2fv(nsIWebGLUniformLocation *location, bool transpose, const JS::Value & value, JSContext* cx) { return _to UniformMatrix2fv(location, transpose, value, cx); } \
  NS_SCRIPTABLE NS_IMETHOD UniformMatrix3fv(nsIWebGLUniformLocation *location, bool transpose, const JS::Value & value, JSContext* cx) { return _to UniformMatrix3fv(location, transpose, value, cx); } \
  NS_SCRIPTABLE NS_IMETHOD UniformMatrix4fv(nsIWebGLUniformLocation *location, bool transpose, const JS::Value & value, JSContext* cx) { return _to UniformMatrix4fv(location, transpose, value, cx); } \
  NS_SCRIPTABLE NS_IMETHOD UseProgram(nsIWebGLProgram *program) { return _to UseProgram(program); } \
  NS_SCRIPTABLE NS_IMETHOD ValidateProgram(nsIWebGLProgram *program) { return _to ValidateProgram(program); } \
  NS_SCRIPTABLE NS_IMETHOD MozVertexAttrib1f(WebGLuint indx, WebGLfloat x) { return _to MozVertexAttrib1f(indx, x); } \
  NS_SCRIPTABLE NS_IMETHOD MozVertexAttrib2f(WebGLuint indx, WebGLfloat x, WebGLfloat y) { return _to MozVertexAttrib2f(indx, x, y); } \
  NS_SCRIPTABLE NS_IMETHOD MozVertexAttrib3f(WebGLuint indx, WebGLfloat x, WebGLfloat y, WebGLfloat z) { return _to MozVertexAttrib3f(indx, x, y, z); } \
  NS_SCRIPTABLE NS_IMETHOD MozVertexAttrib4f(WebGLuint indx, WebGLfloat x, WebGLfloat y, WebGLfloat z, WebGLfloat w) { return _to MozVertexAttrib4f(indx, x, y, z, w); } \
  NS_SCRIPTABLE NS_IMETHOD VertexAttrib1fv(WebGLuint indx, const JS::Value & values, JSContext* cx) { return _to VertexAttrib1fv(indx, values, cx); } \
  NS_SCRIPTABLE NS_IMETHOD VertexAttrib2fv(WebGLuint indx, const JS::Value & values, JSContext* cx) { return _to VertexAttrib2fv(indx, values, cx); } \
  NS_SCRIPTABLE NS_IMETHOD VertexAttrib3fv(WebGLuint indx, const JS::Value & values, JSContext* cx) { return _to VertexAttrib3fv(indx, values, cx); } \
  NS_SCRIPTABLE NS_IMETHOD VertexAttrib4fv(WebGLuint indx, const JS::Value & values, JSContext* cx) { return _to VertexAttrib4fv(indx, values, cx); } \
  NS_SCRIPTABLE NS_IMETHOD MozVertexAttribPointer(WebGLuint idx, WebGLint size, WebGLenum type, WebGLboolean normalized, WebGLsizei stride, WebGLintptr offset) { return _to MozVertexAttribPointer(idx, size, type, normalized, stride, offset); } \
  NS_SCRIPTABLE NS_IMETHOD MozViewport(WebGLint x, WebGLint y, WebGLsizei width, WebGLsizei height) { return _to MozViewport(x, y, width, height); } \
  NS_IMETHOD MozGetUnderlyingParamString(WebGLenum pname, nsAString & _retval NS_OUTPARAM) { return _to MozGetUnderlyingParamString(pname, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetExtension(const nsAString & name, nsIWebGLExtension * *_retval NS_OUTPARAM) { return _to GetExtension(name, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetSupportedExtensions(nsIVariant * *_retval NS_OUTPARAM) { return _to GetSupportedExtensions(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsContextLost(WebGLboolean *_retval NS_OUTPARAM) { return _to IsContextLost(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetDrawingBufferWidth(WebGLsizei *aDrawingBufferWidth) { return _to GetDrawingBufferWidth(aDrawingBufferWidth); } \
  NS_SCRIPTABLE NS_IMETHOD GetDrawingBufferHeight(WebGLsizei *aDrawingBufferHeight) { return _to GetDrawingBufferHeight(aDrawingBufferHeight); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMWEBGLRENDERINGCONTEXT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetCanvas(nsIDOMHTMLCanvasElement * *aCanvas) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCanvas(aCanvas); } \
  NS_SCRIPTABLE NS_IMETHOD GetContextAttributes(JS::Value *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetContextAttributes(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD MozActiveTexture(WebGLenum texture) { return !_to ? NS_ERROR_NULL_POINTER : _to->MozActiveTexture(texture); } \
  NS_SCRIPTABLE NS_IMETHOD AttachShader(nsIWebGLProgram *program, nsIWebGLShader *shader) { return !_to ? NS_ERROR_NULL_POINTER : _to->AttachShader(program, shader); } \
  NS_SCRIPTABLE NS_IMETHOD BindAttribLocation(nsIWebGLProgram *program, WebGLuint index, const nsAString & name) { return !_to ? NS_ERROR_NULL_POINTER : _to->BindAttribLocation(program, index, name); } \
  NS_SCRIPTABLE NS_IMETHOD BindBuffer(WebGLenum target, nsIWebGLBuffer *buffer) { return !_to ? NS_ERROR_NULL_POINTER : _to->BindBuffer(target, buffer); } \
  NS_SCRIPTABLE NS_IMETHOD BindFramebuffer(WebGLenum target, nsIWebGLFramebuffer *framebuffer) { return !_to ? NS_ERROR_NULL_POINTER : _to->BindFramebuffer(target, framebuffer); } \
  NS_SCRIPTABLE NS_IMETHOD BindRenderbuffer(WebGLenum target, nsIWebGLRenderbuffer *renderbuffer) { return !_to ? NS_ERROR_NULL_POINTER : _to->BindRenderbuffer(target, renderbuffer); } \
  NS_SCRIPTABLE NS_IMETHOD BindTexture(WebGLenum target, nsIWebGLTexture *texture) { return !_to ? NS_ERROR_NULL_POINTER : _to->BindTexture(target, texture); } \
  NS_SCRIPTABLE NS_IMETHOD MozBlendColor(WebGLclampf red, WebGLclampf green, WebGLclampf blue, WebGLclampf alpha) { return !_to ? NS_ERROR_NULL_POINTER : _to->MozBlendColor(red, green, blue, alpha); } \
  NS_SCRIPTABLE NS_IMETHOD MozBlendEquation(WebGLenum mode) { return !_to ? NS_ERROR_NULL_POINTER : _to->MozBlendEquation(mode); } \
  NS_SCRIPTABLE NS_IMETHOD MozBlendEquationSeparate(WebGLenum modeRGB, WebGLenum modeAlpha) { return !_to ? NS_ERROR_NULL_POINTER : _to->MozBlendEquationSeparate(modeRGB, modeAlpha); } \
  NS_SCRIPTABLE NS_IMETHOD MozBlendFunc(WebGLenum sfactor, WebGLenum dfactor) { return !_to ? NS_ERROR_NULL_POINTER : _to->MozBlendFunc(sfactor, dfactor); } \
  NS_SCRIPTABLE NS_IMETHOD MozBlendFuncSeparate(WebGLenum srcRGB, WebGLenum dstRGB, WebGLenum srcAlpha, WebGLenum dstAlpha) { return !_to ? NS_ERROR_NULL_POINTER : _to->MozBlendFuncSeparate(srcRGB, dstRGB, srcAlpha, dstAlpha); } \
  NS_SCRIPTABLE NS_IMETHOD BufferData(WebGLenum target, const JS::Value & data, WebGLenum usage, JSContext* cx) { return !_to ? NS_ERROR_NULL_POINTER : _to->BufferData(target, data, usage, cx); } \
  NS_SCRIPTABLE NS_IMETHOD BufferSubData(WebGLenum target, WebGLintptr offset, const JS::Value & data, JSContext* cx) { return !_to ? NS_ERROR_NULL_POINTER : _to->BufferSubData(target, offset, data, cx); } \
  NS_SCRIPTABLE NS_IMETHOD CheckFramebufferStatus(WebGLenum target, WebGLenum *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->CheckFramebufferStatus(target, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD MozClear(WebGLbitfield mask) { return !_to ? NS_ERROR_NULL_POINTER : _to->MozClear(mask); } \
  NS_SCRIPTABLE NS_IMETHOD MozClearColor(WebGLclampf red, WebGLclampf green, WebGLclampf blue, WebGLclampf alpha) { return !_to ? NS_ERROR_NULL_POINTER : _to->MozClearColor(red, green, blue, alpha); } \
  NS_SCRIPTABLE NS_IMETHOD MozClearDepth(WebGLclampf depth) { return !_to ? NS_ERROR_NULL_POINTER : _to->MozClearDepth(depth); } \
  NS_SCRIPTABLE NS_IMETHOD MozClearStencil(WebGLint s) { return !_to ? NS_ERROR_NULL_POINTER : _to->MozClearStencil(s); } \
  NS_SCRIPTABLE NS_IMETHOD MozColorMask(WebGLboolean red, WebGLboolean green, WebGLboolean blue, WebGLboolean alpha) { return !_to ? NS_ERROR_NULL_POINTER : _to->MozColorMask(red, green, blue, alpha); } \
  NS_SCRIPTABLE NS_IMETHOD CompileShader(nsIWebGLShader *shader) { return !_to ? NS_ERROR_NULL_POINTER : _to->CompileShader(shader); } \
  NS_SCRIPTABLE NS_IMETHOD CompressedTexImage2D(WebGLenum target, WebGLint level, WebGLenum internalformat, WebGLsizei width, WebGLsizei height, WebGLint border, const JS::Value & pixels, JSContext* cx) { return !_to ? NS_ERROR_NULL_POINTER : _to->CompressedTexImage2D(target, level, internalformat, width, height, border, pixels, cx); } \
  NS_SCRIPTABLE NS_IMETHOD CompressedTexSubImage2D(WebGLenum target, WebGLint level, WebGLint xoffset, WebGLint yoffset, WebGLsizei width, WebGLsizei height, WebGLenum format, const JS::Value & pixels, JSContext* cx) { return !_to ? NS_ERROR_NULL_POINTER : _to->CompressedTexSubImage2D(target, level, xoffset, yoffset, width, height, format, pixels, cx); } \
  NS_SCRIPTABLE NS_IMETHOD MozCopyTexImage2D(WebGLenum target, WebGLint level, WebGLenum internalformat, WebGLint x, WebGLint y, WebGLsizei width, WebGLsizei height, WebGLint border) { return !_to ? NS_ERROR_NULL_POINTER : _to->MozCopyTexImage2D(target, level, internalformat, x, y, width, height, border); } \
  NS_SCRIPTABLE NS_IMETHOD MozCopyTexSubImage2D(WebGLenum target, WebGLint level, WebGLint xoffset, WebGLint yoffset, WebGLint x, WebGLint y, WebGLsizei width, WebGLsizei height) { return !_to ? NS_ERROR_NULL_POINTER : _to->MozCopyTexSubImage2D(target, level, xoffset, yoffset, x, y, width, height); } \
  NS_SCRIPTABLE NS_IMETHOD CreateBuffer(nsIWebGLBuffer * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->CreateBuffer(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD CreateProgram(nsIWebGLProgram * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->CreateProgram(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD CreateFramebuffer(nsIWebGLFramebuffer * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->CreateFramebuffer(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD CreateRenderbuffer(nsIWebGLRenderbuffer * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->CreateRenderbuffer(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD CreateShader(WebGLenum type, nsIWebGLShader * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->CreateShader(type, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD CreateTexture(nsIWebGLTexture * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->CreateTexture(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD MozCullFace(WebGLenum mode) { return !_to ? NS_ERROR_NULL_POINTER : _to->MozCullFace(mode); } \
  NS_SCRIPTABLE NS_IMETHOD DeleteBuffer(nsIWebGLBuffer *buffer) { return !_to ? NS_ERROR_NULL_POINTER : _to->DeleteBuffer(buffer); } \
  NS_SCRIPTABLE NS_IMETHOD DeleteProgram(nsIWebGLProgram *program) { return !_to ? NS_ERROR_NULL_POINTER : _to->DeleteProgram(program); } \
  NS_SCRIPTABLE NS_IMETHOD DeleteFramebuffer(nsIWebGLFramebuffer *framebuffer) { return !_to ? NS_ERROR_NULL_POINTER : _to->DeleteFramebuffer(framebuffer); } \
  NS_SCRIPTABLE NS_IMETHOD DeleteRenderbuffer(nsIWebGLRenderbuffer *renderbuffer) { return !_to ? NS_ERROR_NULL_POINTER : _to->DeleteRenderbuffer(renderbuffer); } \
  NS_SCRIPTABLE NS_IMETHOD DeleteShader(nsIWebGLShader *shader) { return !_to ? NS_ERROR_NULL_POINTER : _to->DeleteShader(shader); } \
  NS_SCRIPTABLE NS_IMETHOD DeleteTexture(nsIWebGLTexture *texture) { return !_to ? NS_ERROR_NULL_POINTER : _to->DeleteTexture(texture); } \
  NS_SCRIPTABLE NS_IMETHOD MozDepthFunc(WebGLenum func) { return !_to ? NS_ERROR_NULL_POINTER : _to->MozDepthFunc(func); } \
  NS_SCRIPTABLE NS_IMETHOD MozDepthMask(WebGLboolean flag) { return !_to ? NS_ERROR_NULL_POINTER : _to->MozDepthMask(flag); } \
  NS_SCRIPTABLE NS_IMETHOD MozDepthRange(WebGLclampf zNear, WebGLclampf zFar) { return !_to ? NS_ERROR_NULL_POINTER : _to->MozDepthRange(zNear, zFar); } \
  NS_SCRIPTABLE NS_IMETHOD DetachShader(nsIWebGLProgram *program, nsIWebGLShader *shader) { return !_to ? NS_ERROR_NULL_POINTER : _to->DetachShader(program, shader); } \
  NS_SCRIPTABLE NS_IMETHOD MozDisable(WebGLenum cap) { return !_to ? NS_ERROR_NULL_POINTER : _to->MozDisable(cap); } \
  NS_SCRIPTABLE NS_IMETHOD MozDisableVertexAttribArray(WebGLuint index) { return !_to ? NS_ERROR_NULL_POINTER : _to->MozDisableVertexAttribArray(index); } \
  NS_SCRIPTABLE NS_IMETHOD MozDrawArrays(WebGLenum mode, WebGLint first, WebGLsizei count) { return !_to ? NS_ERROR_NULL_POINTER : _to->MozDrawArrays(mode, first, count); } \
  NS_SCRIPTABLE NS_IMETHOD MozDrawElements(WebGLenum mode, WebGLsizei count, WebGLenum type, WebGLintptr offset) { return !_to ? NS_ERROR_NULL_POINTER : _to->MozDrawElements(mode, count, type, offset); } \
  NS_SCRIPTABLE NS_IMETHOD MozEnable(WebGLenum cap) { return !_to ? NS_ERROR_NULL_POINTER : _to->MozEnable(cap); } \
  NS_SCRIPTABLE NS_IMETHOD MozEnableVertexAttribArray(WebGLuint index) { return !_to ? NS_ERROR_NULL_POINTER : _to->MozEnableVertexAttribArray(index); } \
  NS_SCRIPTABLE NS_IMETHOD MozFinish(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->MozFinish(); } \
  NS_SCRIPTABLE NS_IMETHOD MozFlush(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->MozFlush(); } \
  NS_SCRIPTABLE NS_IMETHOD FramebufferRenderbuffer(WebGLenum target, WebGLenum attachment, WebGLenum renderbuffertarget, nsIWebGLRenderbuffer *renderbuffer) { return !_to ? NS_ERROR_NULL_POINTER : _to->FramebufferRenderbuffer(target, attachment, renderbuffertarget, renderbuffer); } \
  NS_SCRIPTABLE NS_IMETHOD FramebufferTexture2D(WebGLenum target, WebGLenum attachment, WebGLenum textarget, nsIWebGLTexture *texture, WebGLint level) { return !_to ? NS_ERROR_NULL_POINTER : _to->FramebufferTexture2D(target, attachment, textarget, texture, level); } \
  NS_SCRIPTABLE NS_IMETHOD MozFrontFace(WebGLenum mode) { return !_to ? NS_ERROR_NULL_POINTER : _to->MozFrontFace(mode); } \
  NS_SCRIPTABLE NS_IMETHOD MozGenerateMipmap(WebGLenum target) { return !_to ? NS_ERROR_NULL_POINTER : _to->MozGenerateMipmap(target); } \
  NS_SCRIPTABLE NS_IMETHOD GetActiveAttrib(nsIWebGLProgram *program, PRUint32 index, nsIWebGLActiveInfo * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetActiveAttrib(program, index, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetActiveUniform(nsIWebGLProgram *program, PRUint32 index, nsIWebGLActiveInfo * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetActiveUniform(program, index, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetAttachedShaders(nsIWebGLProgram *program, nsIVariant * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAttachedShaders(program, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetAttribLocation(nsIWebGLProgram *program, const nsAString & name, WebGLint *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAttribLocation(program, name, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetParameter(WebGLenum pname, JSContext* cx, JS::Value *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetParameter(pname, cx, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetBufferParameter(WebGLenum target, WebGLenum pname, JS::Value *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetBufferParameter(target, pname, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD MozGetError(WebGLenum *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->MozGetError(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetFramebufferAttachmentParameter(WebGLenum target, WebGLenum attachment, WebGLenum pname, JSContext* cx, JS::Value *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFramebufferAttachmentParameter(target, attachment, pname, cx, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetProgramParameter(nsIWebGLProgram *program, WebGLenum pname, JS::Value *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetProgramParameter(program, pname, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetProgramInfoLog(nsIWebGLProgram *program, nsAString & _retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetProgramInfoLog(program, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetRenderbufferParameter(WebGLenum target, WebGLenum pname, JS::Value *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRenderbufferParameter(target, pname, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetShaderParameter(nsIWebGLShader *shader, WebGLenum pname, JS::Value *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetShaderParameter(shader, pname, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetShaderInfoLog(nsIWebGLShader *shader, nsAString & _retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetShaderInfoLog(shader, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetShaderPrecisionFormat(WebGLenum shadertype, WebGLenum precisiontype, nsIWebGLShaderPrecisionFormat * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetShaderPrecisionFormat(shadertype, precisiontype, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetShaderSource(nsIWebGLShader *shader, nsAString & _retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetShaderSource(shader, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetTexParameter(WebGLenum target, WebGLenum pname, JS::Value *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTexParameter(target, pname, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetUniform(nsIWebGLProgram *program, nsIWebGLUniformLocation *location, JSContext* cx, JS::Value *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetUniform(program, location, cx, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetUniformLocation(nsIWebGLProgram *program, const nsAString & name, nsIWebGLUniformLocation * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetUniformLocation(program, name, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetVertexAttrib(WebGLuint index, WebGLenum pname, JSContext* cx, JS::Value *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetVertexAttrib(index, pname, cx, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetVertexAttribOffset(WebGLuint index, WebGLenum pname, WebGLuint *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetVertexAttribOffset(index, pname, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD MozHint(WebGLenum target, WebGLenum mode) { return !_to ? NS_ERROR_NULL_POINTER : _to->MozHint(target, mode); } \
  NS_SCRIPTABLE NS_IMETHOD IsBuffer(nsIWebGLBuffer *buffer, WebGLboolean *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsBuffer(buffer, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsFramebuffer(nsIWebGLFramebuffer *framebuffer, WebGLboolean *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsFramebuffer(framebuffer, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsProgram(nsIWebGLProgram *program, WebGLboolean *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsProgram(program, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsRenderbuffer(nsIWebGLRenderbuffer *renderbuffer, WebGLboolean *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsRenderbuffer(renderbuffer, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsShader(nsIWebGLShader *shader, WebGLboolean *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsShader(shader, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsTexture(nsIWebGLTexture *texture, WebGLboolean *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsTexture(texture, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsEnabled(WebGLenum cap, WebGLboolean *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsEnabled(cap, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD MozLineWidth(WebGLfloat width) { return !_to ? NS_ERROR_NULL_POINTER : _to->MozLineWidth(width); } \
  NS_SCRIPTABLE NS_IMETHOD LinkProgram(nsIWebGLProgram *program) { return !_to ? NS_ERROR_NULL_POINTER : _to->LinkProgram(program); } \
  NS_SCRIPTABLE NS_IMETHOD MozPixelStorei(WebGLenum pname, WebGLint param) { return !_to ? NS_ERROR_NULL_POINTER : _to->MozPixelStorei(pname, param); } \
  NS_SCRIPTABLE NS_IMETHOD MozPolygonOffset(WebGLfloat factor, WebGLfloat units) { return !_to ? NS_ERROR_NULL_POINTER : _to->MozPolygonOffset(factor, units); } \
  NS_SCRIPTABLE NS_IMETHOD ReadPixels(WebGLint x, WebGLint y, WebGLsizei width, WebGLsizei height, WebGLenum format, WebGLenum type, const JS::Value & pixels, JSContext* cx) { return !_to ? NS_ERROR_NULL_POINTER : _to->ReadPixels(x, y, width, height, format, type, pixels, cx); } \
  NS_SCRIPTABLE NS_IMETHOD MozRenderbufferStorage(WebGLenum target, WebGLenum internalformat, WebGLsizei width, WebGLsizei height) { return !_to ? NS_ERROR_NULL_POINTER : _to->MozRenderbufferStorage(target, internalformat, width, height); } \
  NS_SCRIPTABLE NS_IMETHOD MozSampleCoverage(WebGLclampf value, WebGLboolean invert) { return !_to ? NS_ERROR_NULL_POINTER : _to->MozSampleCoverage(value, invert); } \
  NS_SCRIPTABLE NS_IMETHOD MozScissor(WebGLint x, WebGLint y, WebGLsizei width, WebGLsizei height) { return !_to ? NS_ERROR_NULL_POINTER : _to->MozScissor(x, y, width, height); } \
  NS_SCRIPTABLE NS_IMETHOD ShaderSource(nsIWebGLShader *shader, const nsAString & source) { return !_to ? NS_ERROR_NULL_POINTER : _to->ShaderSource(shader, source); } \
  NS_SCRIPTABLE NS_IMETHOD MozStencilFunc(WebGLenum func, WebGLint ref, WebGLuint mask) { return !_to ? NS_ERROR_NULL_POINTER : _to->MozStencilFunc(func, ref, mask); } \
  NS_SCRIPTABLE NS_IMETHOD MozStencilFuncSeparate(WebGLenum face, WebGLenum func, WebGLint ref, WebGLuint mask) { return !_to ? NS_ERROR_NULL_POINTER : _to->MozStencilFuncSeparate(face, func, ref, mask); } \
  NS_SCRIPTABLE NS_IMETHOD MozStencilMask(WebGLuint mask) { return !_to ? NS_ERROR_NULL_POINTER : _to->MozStencilMask(mask); } \
  NS_SCRIPTABLE NS_IMETHOD MozStencilMaskSeparate(WebGLenum face, WebGLuint mask) { return !_to ? NS_ERROR_NULL_POINTER : _to->MozStencilMaskSeparate(face, mask); } \
  NS_SCRIPTABLE NS_IMETHOD MozStencilOp(WebGLenum fail, WebGLenum zfail, WebGLenum zpass) { return !_to ? NS_ERROR_NULL_POINTER : _to->MozStencilOp(fail, zfail, zpass); } \
  NS_SCRIPTABLE NS_IMETHOD MozStencilOpSeparate(WebGLenum face, WebGLenum fail, WebGLenum zfail, WebGLenum zpass) { return !_to ? NS_ERROR_NULL_POINTER : _to->MozStencilOpSeparate(face, fail, zfail, zpass); } \
  NS_SCRIPTABLE NS_IMETHOD TexImage2D(PRInt32 dummy) { return !_to ? NS_ERROR_NULL_POINTER : _to->TexImage2D(dummy); } \
  NS_IMETHOD TexImage2D_array(WebGLenum target, WebGLint level, WebGLenum internalformat, WebGLsizei width, WebGLsizei height, WebGLint border, WebGLenum format, WebGLenum type, JSObject *pixels, JSContext* cx) { return !_to ? NS_ERROR_NULL_POINTER : _to->TexImage2D_array(target, level, internalformat, width, height, border, format, type, pixels, cx); } \
  NS_IMETHOD TexImage2D_imageData(WebGLenum target, WebGLint level, WebGLenum internalformat, WebGLsizei width, WebGLsizei height, WebGLint border, WebGLenum format, WebGLenum type, JSObject *pixels, JSContext* cx) { return !_to ? NS_ERROR_NULL_POINTER : _to->TexImage2D_imageData(target, level, internalformat, width, height, border, format, type, pixels, cx); } \
  NS_IMETHOD TexImage2D_dom(WebGLenum target, WebGLint level, WebGLenum internalformat, WebGLenum format, WebGLenum type, mozilla::dom::Element *element) { return !_to ? NS_ERROR_NULL_POINTER : _to->TexImage2D_dom(target, level, internalformat, format, type, element); } \
  NS_SCRIPTABLE NS_IMETHOD TexSubImage2D(PRInt32 dummy) { return !_to ? NS_ERROR_NULL_POINTER : _to->TexSubImage2D(dummy); } \
  NS_IMETHOD TexSubImage2D_array(WebGLenum target, WebGLint level, WebGLint xoffset, WebGLint yoffset, WebGLsizei width, WebGLsizei height, WebGLenum format, WebGLenum type, JSObject *pixels, JSContext* cx) { return !_to ? NS_ERROR_NULL_POINTER : _to->TexSubImage2D_array(target, level, xoffset, yoffset, width, height, format, type, pixels, cx); } \
  NS_IMETHOD TexSubImage2D_imageData(WebGLenum target, WebGLint level, WebGLint xoffset, WebGLint yoffset, WebGLsizei width, WebGLsizei height, WebGLenum format, WebGLenum type, JSObject *pixels, JSContext* cx) { return !_to ? NS_ERROR_NULL_POINTER : _to->TexSubImage2D_imageData(target, level, xoffset, yoffset, width, height, format, type, pixels, cx); } \
  NS_IMETHOD TexSubImage2D_dom(WebGLenum target, WebGLint level, WebGLint xoffset, WebGLint yoffset, WebGLenum format, WebGLenum type, mozilla::dom::Element *element) { return !_to ? NS_ERROR_NULL_POINTER : _to->TexSubImage2D_dom(target, level, xoffset, yoffset, format, type, element); } \
  NS_SCRIPTABLE NS_IMETHOD MozTexParameterf(WebGLenum target, WebGLenum pname, WebGLfloat param) { return !_to ? NS_ERROR_NULL_POINTER : _to->MozTexParameterf(target, pname, param); } \
  NS_SCRIPTABLE NS_IMETHOD MozTexParameteri(WebGLenum target, WebGLenum pname, WebGLint param) { return !_to ? NS_ERROR_NULL_POINTER : _to->MozTexParameteri(target, pname, param); } \
  NS_SCRIPTABLE NS_IMETHOD Uniform1f(nsIWebGLUniformLocation *location, WebGLfloat x) { return !_to ? NS_ERROR_NULL_POINTER : _to->Uniform1f(location, x); } \
  NS_SCRIPTABLE NS_IMETHOD Uniform1i(nsIWebGLUniformLocation *location, WebGLint x) { return !_to ? NS_ERROR_NULL_POINTER : _to->Uniform1i(location, x); } \
  NS_SCRIPTABLE NS_IMETHOD Uniform2f(nsIWebGLUniformLocation *location, WebGLfloat x, WebGLfloat y) { return !_to ? NS_ERROR_NULL_POINTER : _to->Uniform2f(location, x, y); } \
  NS_SCRIPTABLE NS_IMETHOD Uniform2i(nsIWebGLUniformLocation *location, WebGLint x, WebGLint y) { return !_to ? NS_ERROR_NULL_POINTER : _to->Uniform2i(location, x, y); } \
  NS_SCRIPTABLE NS_IMETHOD Uniform3f(nsIWebGLUniformLocation *location, WebGLfloat x, WebGLfloat y, WebGLfloat z) { return !_to ? NS_ERROR_NULL_POINTER : _to->Uniform3f(location, x, y, z); } \
  NS_SCRIPTABLE NS_IMETHOD Uniform3i(nsIWebGLUniformLocation *location, WebGLint x, WebGLint y, WebGLint z) { return !_to ? NS_ERROR_NULL_POINTER : _to->Uniform3i(location, x, y, z); } \
  NS_SCRIPTABLE NS_IMETHOD Uniform4f(nsIWebGLUniformLocation *location, WebGLfloat x, WebGLfloat y, WebGLfloat z, WebGLfloat w) { return !_to ? NS_ERROR_NULL_POINTER : _to->Uniform4f(location, x, y, z, w); } \
  NS_SCRIPTABLE NS_IMETHOD Uniform4i(nsIWebGLUniformLocation *location, WebGLint x, WebGLint y, WebGLint z, WebGLint w) { return !_to ? NS_ERROR_NULL_POINTER : _to->Uniform4i(location, x, y, z, w); } \
  NS_SCRIPTABLE NS_IMETHOD Uniform1fv(nsIWebGLUniformLocation *location, const JS::Value & v, JSContext* cx) { return !_to ? NS_ERROR_NULL_POINTER : _to->Uniform1fv(location, v, cx); } \
  NS_SCRIPTABLE NS_IMETHOD Uniform1iv(nsIWebGLUniformLocation *location, const JS::Value & v, JSContext* cx) { return !_to ? NS_ERROR_NULL_POINTER : _to->Uniform1iv(location, v, cx); } \
  NS_SCRIPTABLE NS_IMETHOD Uniform2fv(nsIWebGLUniformLocation *location, const JS::Value & v, JSContext* cx) { return !_to ? NS_ERROR_NULL_POINTER : _to->Uniform2fv(location, v, cx); } \
  NS_SCRIPTABLE NS_IMETHOD Uniform2iv(nsIWebGLUniformLocation *location, const JS::Value & v, JSContext* cx) { return !_to ? NS_ERROR_NULL_POINTER : _to->Uniform2iv(location, v, cx); } \
  NS_SCRIPTABLE NS_IMETHOD Uniform3fv(nsIWebGLUniformLocation *location, const JS::Value & v, JSContext* cx) { return !_to ? NS_ERROR_NULL_POINTER : _to->Uniform3fv(location, v, cx); } \
  NS_SCRIPTABLE NS_IMETHOD Uniform3iv(nsIWebGLUniformLocation *location, const JS::Value & v, JSContext* cx) { return !_to ? NS_ERROR_NULL_POINTER : _to->Uniform3iv(location, v, cx); } \
  NS_SCRIPTABLE NS_IMETHOD Uniform4fv(nsIWebGLUniformLocation *location, const JS::Value & v, JSContext* cx) { return !_to ? NS_ERROR_NULL_POINTER : _to->Uniform4fv(location, v, cx); } \
  NS_SCRIPTABLE NS_IMETHOD Uniform4iv(nsIWebGLUniformLocation *location, const JS::Value & v, JSContext* cx) { return !_to ? NS_ERROR_NULL_POINTER : _to->Uniform4iv(location, v, cx); } \
  NS_SCRIPTABLE NS_IMETHOD UniformMatrix2fv(nsIWebGLUniformLocation *location, bool transpose, const JS::Value & value, JSContext* cx) { return !_to ? NS_ERROR_NULL_POINTER : _to->UniformMatrix2fv(location, transpose, value, cx); } \
  NS_SCRIPTABLE NS_IMETHOD UniformMatrix3fv(nsIWebGLUniformLocation *location, bool transpose, const JS::Value & value, JSContext* cx) { return !_to ? NS_ERROR_NULL_POINTER : _to->UniformMatrix3fv(location, transpose, value, cx); } \
  NS_SCRIPTABLE NS_IMETHOD UniformMatrix4fv(nsIWebGLUniformLocation *location, bool transpose, const JS::Value & value, JSContext* cx) { return !_to ? NS_ERROR_NULL_POINTER : _to->UniformMatrix4fv(location, transpose, value, cx); } \
  NS_SCRIPTABLE NS_IMETHOD UseProgram(nsIWebGLProgram *program) { return !_to ? NS_ERROR_NULL_POINTER : _to->UseProgram(program); } \
  NS_SCRIPTABLE NS_IMETHOD ValidateProgram(nsIWebGLProgram *program) { return !_to ? NS_ERROR_NULL_POINTER : _to->ValidateProgram(program); } \
  NS_SCRIPTABLE NS_IMETHOD MozVertexAttrib1f(WebGLuint indx, WebGLfloat x) { return !_to ? NS_ERROR_NULL_POINTER : _to->MozVertexAttrib1f(indx, x); } \
  NS_SCRIPTABLE NS_IMETHOD MozVertexAttrib2f(WebGLuint indx, WebGLfloat x, WebGLfloat y) { return !_to ? NS_ERROR_NULL_POINTER : _to->MozVertexAttrib2f(indx, x, y); } \
  NS_SCRIPTABLE NS_IMETHOD MozVertexAttrib3f(WebGLuint indx, WebGLfloat x, WebGLfloat y, WebGLfloat z) { return !_to ? NS_ERROR_NULL_POINTER : _to->MozVertexAttrib3f(indx, x, y, z); } \
  NS_SCRIPTABLE NS_IMETHOD MozVertexAttrib4f(WebGLuint indx, WebGLfloat x, WebGLfloat y, WebGLfloat z, WebGLfloat w) { return !_to ? NS_ERROR_NULL_POINTER : _to->MozVertexAttrib4f(indx, x, y, z, w); } \
  NS_SCRIPTABLE NS_IMETHOD VertexAttrib1fv(WebGLuint indx, const JS::Value & values, JSContext* cx) { return !_to ? NS_ERROR_NULL_POINTER : _to->VertexAttrib1fv(indx, values, cx); } \
  NS_SCRIPTABLE NS_IMETHOD VertexAttrib2fv(WebGLuint indx, const JS::Value & values, JSContext* cx) { return !_to ? NS_ERROR_NULL_POINTER : _to->VertexAttrib2fv(indx, values, cx); } \
  NS_SCRIPTABLE NS_IMETHOD VertexAttrib3fv(WebGLuint indx, const JS::Value & values, JSContext* cx) { return !_to ? NS_ERROR_NULL_POINTER : _to->VertexAttrib3fv(indx, values, cx); } \
  NS_SCRIPTABLE NS_IMETHOD VertexAttrib4fv(WebGLuint indx, const JS::Value & values, JSContext* cx) { return !_to ? NS_ERROR_NULL_POINTER : _to->VertexAttrib4fv(indx, values, cx); } \
  NS_SCRIPTABLE NS_IMETHOD MozVertexAttribPointer(WebGLuint idx, WebGLint size, WebGLenum type, WebGLboolean normalized, WebGLsizei stride, WebGLintptr offset) { return !_to ? NS_ERROR_NULL_POINTER : _to->MozVertexAttribPointer(idx, size, type, normalized, stride, offset); } \
  NS_SCRIPTABLE NS_IMETHOD MozViewport(WebGLint x, WebGLint y, WebGLsizei width, WebGLsizei height) { return !_to ? NS_ERROR_NULL_POINTER : _to->MozViewport(x, y, width, height); } \
  NS_IMETHOD MozGetUnderlyingParamString(WebGLenum pname, nsAString & _retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->MozGetUnderlyingParamString(pname, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetExtension(const nsAString & name, nsIWebGLExtension * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetExtension(name, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetSupportedExtensions(nsIVariant * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSupportedExtensions(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsContextLost(WebGLboolean *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsContextLost(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetDrawingBufferWidth(WebGLsizei *aDrawingBufferWidth) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDrawingBufferWidth(aDrawingBufferWidth); } \
  NS_SCRIPTABLE NS_IMETHOD GetDrawingBufferHeight(WebGLsizei *aDrawingBufferHeight) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDrawingBufferHeight(aDrawingBufferHeight); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMWebGLRenderingContext : public nsIDOMWebGLRenderingContext
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMWEBGLRENDERINGCONTEXT

  nsDOMWebGLRenderingContext();

private:
  ~nsDOMWebGLRenderingContext();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMWebGLRenderingContext, nsIDOMWebGLRenderingContext)

nsDOMWebGLRenderingContext::nsDOMWebGLRenderingContext()
{
  /* member initializers and constructor code */
}

nsDOMWebGLRenderingContext::~nsDOMWebGLRenderingContext()
{
  /* destructor code */
}

/* readonly attribute nsIDOMHTMLCanvasElement canvas; */
NS_IMETHODIMP nsDOMWebGLRenderingContext::GetCanvas(nsIDOMHTMLCanvasElement * *aCanvas)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* jsval getContextAttributes (); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::GetContextAttributes(JS::Value *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [binaryname(MozActiveTexture)] void activeTexture (in WebGLenum texture); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::MozActiveTexture(WebGLenum texture)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void attachShader ([optional] in nsIWebGLProgram program, [optional] in nsIWebGLShader shader); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::AttachShader(nsIWebGLProgram *program, nsIWebGLShader *shader)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void bindAttribLocation (in nsIWebGLProgram program, in WebGLuint index, in DOMString name); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::BindAttribLocation(nsIWebGLProgram *program, WebGLuint index, const nsAString & name)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void bindBuffer (in WebGLenum target, in nsIWebGLBuffer buffer); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::BindBuffer(WebGLenum target, nsIWebGLBuffer *buffer)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void bindFramebuffer (in WebGLenum target, in nsIWebGLFramebuffer framebuffer); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::BindFramebuffer(WebGLenum target, nsIWebGLFramebuffer *framebuffer)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void bindRenderbuffer (in WebGLenum target, in nsIWebGLRenderbuffer renderbuffer); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::BindRenderbuffer(WebGLenum target, nsIWebGLRenderbuffer *renderbuffer)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void bindTexture (in WebGLenum target, in nsIWebGLTexture texture); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::BindTexture(WebGLenum target, nsIWebGLTexture *texture)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [binaryname(MozBlendColor)] void blendColor (in WebGLclampf red, in WebGLclampf green, in WebGLclampf blue, in WebGLclampf alpha); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::MozBlendColor(WebGLclampf red, WebGLclampf green, WebGLclampf blue, WebGLclampf alpha)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [binaryname(MozBlendEquation)] void blendEquation (in WebGLenum mode); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::MozBlendEquation(WebGLenum mode)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [binaryname(MozBlendEquationSeparate)] void blendEquationSeparate (in WebGLenum modeRGB, in WebGLenum modeAlpha); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::MozBlendEquationSeparate(WebGLenum modeRGB, WebGLenum modeAlpha)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [binaryname(MozBlendFunc)] void blendFunc (in WebGLenum sfactor, in WebGLenum dfactor); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::MozBlendFunc(WebGLenum sfactor, WebGLenum dfactor)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [binaryname(MozBlendFuncSeparate)] void blendFuncSeparate (in WebGLenum srcRGB, in WebGLenum dstRGB, in WebGLenum srcAlpha, in WebGLenum dstAlpha); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::MozBlendFuncSeparate(WebGLenum srcRGB, WebGLenum dstRGB, WebGLenum srcAlpha, WebGLenum dstAlpha)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] void bufferData (in WebGLenum target, in jsval data, in WebGLenum usage); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::BufferData(WebGLenum target, const JS::Value & data, WebGLenum usage, JSContext* cx)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] void bufferSubData (in WebGLenum target, in WebGLintptr offset, in jsval data); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::BufferSubData(WebGLenum target, WebGLintptr offset, const JS::Value & data, JSContext* cx)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* WebGLenum checkFramebufferStatus (in WebGLenum target); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::CheckFramebufferStatus(WebGLenum target, WebGLenum *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [binaryname(MozClear)] void clear (in WebGLbitfield mask); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::MozClear(WebGLbitfield mask)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [binaryname(MozClearColor)] void clearColor (in WebGLclampf red, in WebGLclampf green, in WebGLclampf blue, in WebGLclampf alpha); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::MozClearColor(WebGLclampf red, WebGLclampf green, WebGLclampf blue, WebGLclampf alpha)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [binaryname(MozClearDepth)] void clearDepth (in WebGLclampf depth); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::MozClearDepth(WebGLclampf depth)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [binaryname(MozClearStencil)] void clearStencil (in WebGLint s); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::MozClearStencil(WebGLint s)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [binaryname(MozColorMask)] void colorMask (in WebGLboolean red, in WebGLboolean green, in WebGLboolean blue, in WebGLboolean alpha); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::MozColorMask(WebGLboolean red, WebGLboolean green, WebGLboolean blue, WebGLboolean alpha)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void compileShader ([optional] in nsIWebGLShader shader); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::CompileShader(nsIWebGLShader *shader)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] void compressedTexImage2D (in WebGLenum target, in WebGLint level, in WebGLenum internalformat, in WebGLsizei width, in WebGLsizei height, in WebGLint border, in jsval pixels); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::CompressedTexImage2D(WebGLenum target, WebGLint level, WebGLenum internalformat, WebGLsizei width, WebGLsizei height, WebGLint border, const JS::Value & pixels, JSContext* cx)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] void compressedTexSubImage2D (in WebGLenum target, in WebGLint level, in WebGLint xoffset, in WebGLint yoffset, in WebGLsizei width, in WebGLsizei height, in WebGLenum format, in jsval pixels); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::CompressedTexSubImage2D(WebGLenum target, WebGLint level, WebGLint xoffset, WebGLint yoffset, WebGLsizei width, WebGLsizei height, WebGLenum format, const JS::Value & pixels, JSContext* cx)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [binaryname(MozCopyTexImage2D)] void copyTexImage2D (in WebGLenum target, in WebGLint level, in WebGLenum internalformat, in WebGLint x, in WebGLint y, in WebGLsizei width, in WebGLsizei height, in WebGLint border); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::MozCopyTexImage2D(WebGLenum target, WebGLint level, WebGLenum internalformat, WebGLint x, WebGLint y, WebGLsizei width, WebGLsizei height, WebGLint border)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [binaryname(MozCopyTexSubImage2D)] void copyTexSubImage2D (in WebGLenum target, in WebGLint level, in WebGLint xoffset, in WebGLint yoffset, in WebGLint x, in WebGLint y, in WebGLsizei width, in WebGLsizei height); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::MozCopyTexSubImage2D(WebGLenum target, WebGLint level, WebGLint xoffset, WebGLint yoffset, WebGLint x, WebGLint y, WebGLsizei width, WebGLsizei height)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIWebGLBuffer createBuffer (); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::CreateBuffer(nsIWebGLBuffer * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIWebGLProgram createProgram (); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::CreateProgram(nsIWebGLProgram * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIWebGLFramebuffer createFramebuffer (); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::CreateFramebuffer(nsIWebGLFramebuffer * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIWebGLRenderbuffer createRenderbuffer (); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::CreateRenderbuffer(nsIWebGLRenderbuffer * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIWebGLShader createShader (in WebGLenum type); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::CreateShader(WebGLenum type, nsIWebGLShader * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIWebGLTexture createTexture (); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::CreateTexture(nsIWebGLTexture * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [binaryname(MozCullFace)] void cullFace (in WebGLenum mode); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::MozCullFace(WebGLenum mode)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void deleteBuffer (in nsIWebGLBuffer buffer); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::DeleteBuffer(nsIWebGLBuffer *buffer)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void deleteProgram (in nsIWebGLProgram program); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::DeleteProgram(nsIWebGLProgram *program)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void deleteFramebuffer (in nsIWebGLFramebuffer framebuffer); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::DeleteFramebuffer(nsIWebGLFramebuffer *framebuffer)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void deleteRenderbuffer (in nsIWebGLRenderbuffer renderbuffer); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::DeleteRenderbuffer(nsIWebGLRenderbuffer *renderbuffer)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void deleteShader (in nsIWebGLShader shader); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::DeleteShader(nsIWebGLShader *shader)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void deleteTexture (in nsIWebGLTexture texture); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::DeleteTexture(nsIWebGLTexture *texture)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [binaryname(MozDepthFunc)] void depthFunc (in WebGLenum func); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::MozDepthFunc(WebGLenum func)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [binaryname(MozDepthMask)] void depthMask (in WebGLboolean flag); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::MozDepthMask(WebGLboolean flag)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [binaryname(MozDepthRange)] void depthRange (in WebGLclampf zNear, in WebGLclampf zFar); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::MozDepthRange(WebGLclampf zNear, WebGLclampf zFar)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void detachShader (in nsIWebGLProgram program, in nsIWebGLShader shader); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::DetachShader(nsIWebGLProgram *program, nsIWebGLShader *shader)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [binaryname(MozDisable)] void disable (in WebGLenum cap); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::MozDisable(WebGLenum cap)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [binaryname(MozDisableVertexAttribArray)] void disableVertexAttribArray (in WebGLuint index); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::MozDisableVertexAttribArray(WebGLuint index)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [binaryname(MozDrawArrays)] void drawArrays (in WebGLenum mode, in WebGLint first, in WebGLsizei count); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::MozDrawArrays(WebGLenum mode, WebGLint first, WebGLsizei count)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [binaryname(MozDrawElements)] void drawElements (in WebGLenum mode, in WebGLsizei count, in WebGLenum type, in WebGLintptr offset); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::MozDrawElements(WebGLenum mode, WebGLsizei count, WebGLenum type, WebGLintptr offset)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [binaryname(MozEnable)] void enable (in WebGLenum cap); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::MozEnable(WebGLenum cap)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [binaryname(MozEnableVertexAttribArray)] void enableVertexAttribArray (in WebGLuint index); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::MozEnableVertexAttribArray(WebGLuint index)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [binaryname(MozFinish)] void finish (); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::MozFinish()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [binaryname(MozFlush)] void flush (); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::MozFlush()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void framebufferRenderbuffer (in WebGLenum target, in WebGLenum attachment, in WebGLenum renderbuffertarget, in nsIWebGLRenderbuffer renderbuffer); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::FramebufferRenderbuffer(WebGLenum target, WebGLenum attachment, WebGLenum renderbuffertarget, nsIWebGLRenderbuffer *renderbuffer)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void framebufferTexture2D (in WebGLenum target, in WebGLenum attachment, in WebGLenum textarget, in nsIWebGLTexture texture, in WebGLint level); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::FramebufferTexture2D(WebGLenum target, WebGLenum attachment, WebGLenum textarget, nsIWebGLTexture *texture, WebGLint level)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [binaryname(MozFrontFace)] void frontFace (in WebGLenum mode); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::MozFrontFace(WebGLenum mode)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [binaryname(MozGenerateMipmap)] void generateMipmap (in WebGLenum target); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::MozGenerateMipmap(WebGLenum target)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIWebGLActiveInfo getActiveAttrib (in nsIWebGLProgram program, in PRUint32 index); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::GetActiveAttrib(nsIWebGLProgram *program, PRUint32 index, nsIWebGLActiveInfo * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIWebGLActiveInfo getActiveUniform (in nsIWebGLProgram program, in PRUint32 index); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::GetActiveUniform(nsIWebGLProgram *program, PRUint32 index, nsIWebGLActiveInfo * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIVariant getAttachedShaders (in nsIWebGLProgram program); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::GetAttachedShaders(nsIWebGLProgram *program, nsIVariant * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* WebGLint getAttribLocation (in nsIWebGLProgram program, in DOMString name); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::GetAttribLocation(nsIWebGLProgram *program, const nsAString & name, WebGLint *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] jsval getParameter (in WebGLenum pname); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::GetParameter(WebGLenum pname, JSContext* cx, JS::Value *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* jsval getBufferParameter (in WebGLenum target, in WebGLenum pname); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::GetBufferParameter(WebGLenum target, WebGLenum pname, JS::Value *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [binaryname(MozGetError)] WebGLenum getError (); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::MozGetError(WebGLenum *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] jsval getFramebufferAttachmentParameter (in WebGLenum target, in WebGLenum attachment, in WebGLenum pname); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::GetFramebufferAttachmentParameter(WebGLenum target, WebGLenum attachment, WebGLenum pname, JSContext* cx, JS::Value *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* jsval getProgramParameter (in nsIWebGLProgram program, in WebGLenum pname); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::GetProgramParameter(nsIWebGLProgram *program, WebGLenum pname, JS::Value *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* DOMString getProgramInfoLog (in nsIWebGLProgram program); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::GetProgramInfoLog(nsIWebGLProgram *program, nsAString & _retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* jsval getRenderbufferParameter (in WebGLenum target, in WebGLenum pname); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::GetRenderbufferParameter(WebGLenum target, WebGLenum pname, JS::Value *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* jsval getShaderParameter (in nsIWebGLShader shader, in WebGLenum pname); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::GetShaderParameter(nsIWebGLShader *shader, WebGLenum pname, JS::Value *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* DOMString getShaderInfoLog (in nsIWebGLShader shader); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::GetShaderInfoLog(nsIWebGLShader *shader, nsAString & _retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIWebGLShaderPrecisionFormat getShaderPrecisionFormat (in WebGLenum shadertype, in WebGLenum precisiontype); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::GetShaderPrecisionFormat(WebGLenum shadertype, WebGLenum precisiontype, nsIWebGLShaderPrecisionFormat * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* DOMString getShaderSource (in nsIWebGLShader shader); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::GetShaderSource(nsIWebGLShader *shader, nsAString & _retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* jsval getTexParameter (in WebGLenum target, in WebGLenum pname); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::GetTexParameter(WebGLenum target, WebGLenum pname, JS::Value *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] jsval getUniform (in nsIWebGLProgram program, in nsIWebGLUniformLocation location); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::GetUniform(nsIWebGLProgram *program, nsIWebGLUniformLocation *location, JSContext* cx, JS::Value *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIWebGLUniformLocation getUniformLocation (in nsIWebGLProgram program, in DOMString name); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::GetUniformLocation(nsIWebGLProgram *program, const nsAString & name, nsIWebGLUniformLocation * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] jsval getVertexAttrib (in WebGLuint index, in WebGLenum pname); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::GetVertexAttrib(WebGLuint index, WebGLenum pname, JSContext* cx, JS::Value *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* WebGLuint getVertexAttribOffset (in WebGLuint index, in WebGLenum pname); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::GetVertexAttribOffset(WebGLuint index, WebGLenum pname, WebGLuint *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [binaryname(MozHint)] void hint (in WebGLenum target, in WebGLenum mode); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::MozHint(WebGLenum target, WebGLenum mode)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* WebGLboolean isBuffer (in nsIWebGLBuffer buffer); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::IsBuffer(nsIWebGLBuffer *buffer, WebGLboolean *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* WebGLboolean isFramebuffer (in nsIWebGLFramebuffer framebuffer); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::IsFramebuffer(nsIWebGLFramebuffer *framebuffer, WebGLboolean *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* WebGLboolean isProgram (in nsIWebGLProgram program); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::IsProgram(nsIWebGLProgram *program, WebGLboolean *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* WebGLboolean isRenderbuffer (in nsIWebGLRenderbuffer renderbuffer); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::IsRenderbuffer(nsIWebGLRenderbuffer *renderbuffer, WebGLboolean *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* WebGLboolean isShader (in nsIWebGLShader shader); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::IsShader(nsIWebGLShader *shader, WebGLboolean *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* WebGLboolean isTexture (in nsIWebGLTexture texture); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::IsTexture(nsIWebGLTexture *texture, WebGLboolean *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* WebGLboolean isEnabled (in WebGLenum cap); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::IsEnabled(WebGLenum cap, WebGLboolean *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [binaryname(MozLineWidth)] void lineWidth (in WebGLfloat width); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::MozLineWidth(WebGLfloat width)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void linkProgram ([optional] in nsIWebGLProgram program); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::LinkProgram(nsIWebGLProgram *program)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [binaryname(MozPixelStorei)] void pixelStorei (in WebGLenum pname, in WebGLint param); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::MozPixelStorei(WebGLenum pname, WebGLint param)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [binaryname(MozPolygonOffset)] void polygonOffset (in WebGLfloat factor, in WebGLfloat units); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::MozPolygonOffset(WebGLfloat factor, WebGLfloat units)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] void readPixels (in WebGLint x, in WebGLint y, in WebGLsizei width, in WebGLsizei height, in WebGLenum format, in WebGLenum type, in jsval pixels); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::ReadPixels(WebGLint x, WebGLint y, WebGLsizei width, WebGLsizei height, WebGLenum format, WebGLenum type, const JS::Value & pixels, JSContext* cx)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [binaryname(MozRenderbufferStorage)] void renderbufferStorage (in WebGLenum target, in WebGLenum internalformat, in WebGLsizei width, in WebGLsizei height); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::MozRenderbufferStorage(WebGLenum target, WebGLenum internalformat, WebGLsizei width, WebGLsizei height)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [binaryname(MozSampleCoverage)] void sampleCoverage (in WebGLclampf value, in WebGLboolean invert); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::MozSampleCoverage(WebGLclampf value, WebGLboolean invert)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [binaryname(MozScissor)] void scissor (in WebGLint x, in WebGLint y, in WebGLsizei width, in WebGLsizei height); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::MozScissor(WebGLint x, WebGLint y, WebGLsizei width, WebGLsizei height)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void shaderSource ([optional] in nsIWebGLShader shader, [optional] in DOMString source); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::ShaderSource(nsIWebGLShader *shader, const nsAString & source)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [binaryname(MozStencilFunc)] void stencilFunc (in WebGLenum func, in WebGLint ref, in WebGLuint mask); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::MozStencilFunc(WebGLenum func, WebGLint ref, WebGLuint mask)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [binaryname(MozStencilFuncSeparate)] void stencilFuncSeparate (in WebGLenum face, in WebGLenum func, in WebGLint ref, in WebGLuint mask); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::MozStencilFuncSeparate(WebGLenum face, WebGLenum func, WebGLint ref, WebGLuint mask)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [binaryname(MozStencilMask)] void stencilMask (in WebGLuint mask); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::MozStencilMask(WebGLuint mask)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [binaryname(MozStencilMaskSeparate)] void stencilMaskSeparate (in WebGLenum face, in WebGLuint mask); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::MozStencilMaskSeparate(WebGLenum face, WebGLuint mask)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [binaryname(MozStencilOp)] void stencilOp (in WebGLenum fail, in WebGLenum zfail, in WebGLenum zpass); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::MozStencilOp(WebGLenum fail, WebGLenum zfail, WebGLenum zpass)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [binaryname(MozStencilOpSeparate)] void stencilOpSeparate (in WebGLenum face, in WebGLenum fail, in WebGLenum zfail, in WebGLenum zpass); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::MozStencilOpSeparate(WebGLenum face, WebGLenum fail, WebGLenum zfail, WebGLenum zpass)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void texImage2D ([optional] in long dummy); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::TexImage2D(PRInt32 dummy)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext,noscript] void texImage2D_array (in WebGLenum target, in WebGLint level, in WebGLenum internalformat, in WebGLsizei width, in WebGLsizei height, in WebGLint border, in WebGLenum format, in WebGLenum type, in WebGLJSObjectPtr pixels); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::TexImage2D_array(WebGLenum target, WebGLint level, WebGLenum internalformat, WebGLsizei width, WebGLsizei height, WebGLint border, WebGLenum format, WebGLenum type, JSObject *pixels, JSContext* cx)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext,noscript] void texImage2D_imageData (in WebGLenum target, in WebGLint level, in WebGLenum internalformat, in WebGLsizei width, in WebGLsizei height, in WebGLint border, in WebGLenum format, in WebGLenum type, in WebGLJSObjectPtr pixels); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::TexImage2D_imageData(WebGLenum target, WebGLint level, WebGLenum internalformat, WebGLsizei width, WebGLsizei height, WebGLint border, WebGLenum format, WebGLenum type, JSObject *pixels, JSContext* cx)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void texImage2D_dom (in WebGLenum target, in WebGLint level, in WebGLenum internalformat, in WebGLenum format, in WebGLenum type, in Element element); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::TexImage2D_dom(WebGLenum target, WebGLint level, WebGLenum internalformat, WebGLenum format, WebGLenum type, mozilla::dom::Element *element)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void texSubImage2D ([optional] in long dummy); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::TexSubImage2D(PRInt32 dummy)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext,noscript] void texSubImage2D_array (in WebGLenum target, in WebGLint level, in WebGLint xoffset, in WebGLint yoffset, in WebGLsizei width, in WebGLsizei height, in WebGLenum format, in WebGLenum type, in WebGLJSObjectPtr pixels); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::TexSubImage2D_array(WebGLenum target, WebGLint level, WebGLint xoffset, WebGLint yoffset, WebGLsizei width, WebGLsizei height, WebGLenum format, WebGLenum type, JSObject *pixels, JSContext* cx)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext,noscript] void texSubImage2D_imageData (in WebGLenum target, in WebGLint level, in WebGLint xoffset, in WebGLint yoffset, in WebGLsizei width, in WebGLsizei height, in WebGLenum format, in WebGLenum type, in WebGLJSObjectPtr pixels); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::TexSubImage2D_imageData(WebGLenum target, WebGLint level, WebGLint xoffset, WebGLint yoffset, WebGLsizei width, WebGLsizei height, WebGLenum format, WebGLenum type, JSObject *pixels, JSContext* cx)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void texSubImage2D_dom (in WebGLenum target, in WebGLint level, in WebGLint xoffset, in WebGLint yoffset, in WebGLenum format, in WebGLenum type, in Element element); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::TexSubImage2D_dom(WebGLenum target, WebGLint level, WebGLint xoffset, WebGLint yoffset, WebGLenum format, WebGLenum type, mozilla::dom::Element *element)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [binaryname(MozTexParameterf)] void texParameterf (in WebGLenum target, in WebGLenum pname, in WebGLfloat param); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::MozTexParameterf(WebGLenum target, WebGLenum pname, WebGLfloat param)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [binaryname(MozTexParameteri)] void texParameteri (in WebGLenum target, in WebGLenum pname, in WebGLint param); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::MozTexParameteri(WebGLenum target, WebGLenum pname, WebGLint param)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void uniform1f (in nsIWebGLUniformLocation location, in WebGLfloat x); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::Uniform1f(nsIWebGLUniformLocation *location, WebGLfloat x)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void uniform1i (in nsIWebGLUniformLocation location, in WebGLint x); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::Uniform1i(nsIWebGLUniformLocation *location, WebGLint x)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void uniform2f (in nsIWebGLUniformLocation location, in WebGLfloat x, in WebGLfloat y); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::Uniform2f(nsIWebGLUniformLocation *location, WebGLfloat x, WebGLfloat y)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void uniform2i (in nsIWebGLUniformLocation location, in WebGLint x, in WebGLint y); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::Uniform2i(nsIWebGLUniformLocation *location, WebGLint x, WebGLint y)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void uniform3f (in nsIWebGLUniformLocation location, in WebGLfloat x, in WebGLfloat y, in WebGLfloat z); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::Uniform3f(nsIWebGLUniformLocation *location, WebGLfloat x, WebGLfloat y, WebGLfloat z)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void uniform3i (in nsIWebGLUniformLocation location, in WebGLint x, in WebGLint y, in WebGLint z); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::Uniform3i(nsIWebGLUniformLocation *location, WebGLint x, WebGLint y, WebGLint z)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void uniform4f (in nsIWebGLUniformLocation location, in WebGLfloat x, in WebGLfloat y, in WebGLfloat z, in WebGLfloat w); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::Uniform4f(nsIWebGLUniformLocation *location, WebGLfloat x, WebGLfloat y, WebGLfloat z, WebGLfloat w)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void uniform4i (in nsIWebGLUniformLocation location, in WebGLint x, in WebGLint y, in WebGLint z, in WebGLint w); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::Uniform4i(nsIWebGLUniformLocation *location, WebGLint x, WebGLint y, WebGLint z, WebGLint w)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] void uniform1fv (in nsIWebGLUniformLocation location, in jsval v); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::Uniform1fv(nsIWebGLUniformLocation *location, const JS::Value & v, JSContext* cx)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] void uniform1iv (in nsIWebGLUniformLocation location, in jsval v); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::Uniform1iv(nsIWebGLUniformLocation *location, const JS::Value & v, JSContext* cx)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] void uniform2fv (in nsIWebGLUniformLocation location, in jsval v); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::Uniform2fv(nsIWebGLUniformLocation *location, const JS::Value & v, JSContext* cx)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] void uniform2iv (in nsIWebGLUniformLocation location, in jsval v); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::Uniform2iv(nsIWebGLUniformLocation *location, const JS::Value & v, JSContext* cx)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] void uniform3fv (in nsIWebGLUniformLocation location, in jsval v); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::Uniform3fv(nsIWebGLUniformLocation *location, const JS::Value & v, JSContext* cx)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] void uniform3iv (in nsIWebGLUniformLocation location, in jsval v); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::Uniform3iv(nsIWebGLUniformLocation *location, const JS::Value & v, JSContext* cx)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] void uniform4fv (in nsIWebGLUniformLocation location, in jsval v); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::Uniform4fv(nsIWebGLUniformLocation *location, const JS::Value & v, JSContext* cx)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] void uniform4iv (in nsIWebGLUniformLocation location, in jsval v); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::Uniform4iv(nsIWebGLUniformLocation *location, const JS::Value & v, JSContext* cx)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] void uniformMatrix2fv (in nsIWebGLUniformLocation location, in boolean transpose, in jsval value); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::UniformMatrix2fv(nsIWebGLUniformLocation *location, bool transpose, const JS::Value & value, JSContext* cx)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] void uniformMatrix3fv (in nsIWebGLUniformLocation location, in boolean transpose, in jsval value); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::UniformMatrix3fv(nsIWebGLUniformLocation *location, bool transpose, const JS::Value & value, JSContext* cx)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] void uniformMatrix4fv (in nsIWebGLUniformLocation location, in boolean transpose, in jsval value); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::UniformMatrix4fv(nsIWebGLUniformLocation *location, bool transpose, const JS::Value & value, JSContext* cx)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void useProgram (in nsIWebGLProgram program); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::UseProgram(nsIWebGLProgram *program)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void validateProgram (in nsIWebGLProgram program); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::ValidateProgram(nsIWebGLProgram *program)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [binaryname(MozVertexAttrib1f)] void vertexAttrib1f (in WebGLuint indx, in WebGLfloat x); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::MozVertexAttrib1f(WebGLuint indx, WebGLfloat x)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [binaryname(MozVertexAttrib2f)] void vertexAttrib2f (in WebGLuint indx, in WebGLfloat x, in WebGLfloat y); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::MozVertexAttrib2f(WebGLuint indx, WebGLfloat x, WebGLfloat y)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [binaryname(MozVertexAttrib3f)] void vertexAttrib3f (in WebGLuint indx, in WebGLfloat x, in WebGLfloat y, in WebGLfloat z); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::MozVertexAttrib3f(WebGLuint indx, WebGLfloat x, WebGLfloat y, WebGLfloat z)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [binaryname(MozVertexAttrib4f)] void vertexAttrib4f (in WebGLuint indx, in WebGLfloat x, in WebGLfloat y, in WebGLfloat z, in WebGLfloat w); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::MozVertexAttrib4f(WebGLuint indx, WebGLfloat x, WebGLfloat y, WebGLfloat z, WebGLfloat w)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] void vertexAttrib1fv (in WebGLuint indx, in jsval values); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::VertexAttrib1fv(WebGLuint indx, const JS::Value & values, JSContext* cx)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] void vertexAttrib2fv (in WebGLuint indx, in jsval values); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::VertexAttrib2fv(WebGLuint indx, const JS::Value & values, JSContext* cx)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] void vertexAttrib3fv (in WebGLuint indx, in jsval values); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::VertexAttrib3fv(WebGLuint indx, const JS::Value & values, JSContext* cx)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] void vertexAttrib4fv (in WebGLuint indx, in jsval values); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::VertexAttrib4fv(WebGLuint indx, const JS::Value & values, JSContext* cx)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [binaryname(MozVertexAttribPointer)] void vertexAttribPointer (in WebGLuint idx, in WebGLint size, in WebGLenum type, in WebGLboolean normalized, in WebGLsizei stride, in WebGLintptr offset); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::MozVertexAttribPointer(WebGLuint idx, WebGLint size, WebGLenum type, WebGLboolean normalized, WebGLsizei stride, WebGLintptr offset)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [binaryname(MozViewport)] void viewport (in WebGLint x, in WebGLint y, in WebGLsizei width, in WebGLsizei height); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::MozViewport(WebGLint x, WebGLint y, WebGLsizei width, WebGLsizei height)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] DOMString mozGetUnderlyingParamString (in WebGLenum pname); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::MozGetUnderlyingParamString(WebGLenum pname, nsAString & _retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIWebGLExtension getExtension (in DOMString name); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::GetExtension(const nsAString & name, nsIWebGLExtension * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIVariant getSupportedExtensions (); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::GetSupportedExtensions(nsIVariant * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* WebGLboolean isContextLost (); */
NS_IMETHODIMP nsDOMWebGLRenderingContext::IsContextLost(WebGLboolean *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute WebGLsizei drawingBufferWidth; */
NS_IMETHODIMP nsDOMWebGLRenderingContext::GetDrawingBufferWidth(WebGLsizei *aDrawingBufferWidth)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute WebGLsizei drawingBufferHeight; */
NS_IMETHODIMP nsDOMWebGLRenderingContext::GetDrawingBufferHeight(WebGLsizei *aDrawingBufferHeight)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMWebGLRenderingContext_h__ */
