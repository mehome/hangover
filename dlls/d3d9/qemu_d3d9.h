#ifndef QEMU_D3D9_H
#define QEMU_D3D9_H

#include <stdlib.h>

#include "d3d9_wrapper.h"

enum d3d9_calls
{
    CALL_D3D9_ADDREF = 0,
    CALL_D3D9_CHECKDEPTHSTENCILMATCH,
    CALL_D3D9_CHECKDEVICEFORMAT,
    CALL_D3D9_CHECKDEVICEFORMATCONVERSION,
    CALL_D3D9_CHECKDEVICEMULTISAMPLETYPE,
    CALL_D3D9_CHECKDEVICETYPE,
    CALL_D3D9_CREATEDEVICE,
    CALL_D3D9_CREATEDEVICEEX,
    CALL_D3D9_DEVICE_ADDREF,
    CALL_D3D9_DEVICE_BEGINSCENE,
    CALL_D3D9_DEVICE_BEGINSTATEBLOCK,
    CALL_D3D9_DEVICE_CHECKDEVICESTATE,
    CALL_D3D9_DEVICE_CHECKRESOURCERESIDENCY,
    CALL_D3D9_DEVICE_CLEAR,
    CALL_D3D9_DEVICE_COLORFILL,
    CALL_D3D9_DEVICE_COMPOSERECTS,
    CALL_D3D9_DEVICE_CREATEADDITIONALSWAPCHAIN,
    CALL_D3D9_DEVICE_CREATECUBETEXTURE,
    CALL_D3D9_DEVICE_CREATEDEPTHSTENCILSURFACE,
    CALL_D3D9_DEVICE_CREATEDEPTHSTENCILSURFACEEX,
    CALL_D3D9_DEVICE_CREATEINDEXBUFFER,
    CALL_D3D9_DEVICE_CREATEOFFSCREENPLAINSURFACE,
    CALL_D3D9_DEVICE_CREATEOFFSCREENPLAINSURFACEEX,
    CALL_D3D9_DEVICE_CREATEPIXELSHADER,
    CALL_D3D9_DEVICE_CREATEQUERY,
    CALL_D3D9_DEVICE_CREATERENDERTARGET,
    CALL_D3D9_DEVICE_CREATERENDERTARGETEX,
    CALL_D3D9_DEVICE_CREATESTATEBLOCK,
    CALL_D3D9_DEVICE_CREATETEXTURE,
    CALL_D3D9_DEVICE_CREATEVERTEXBUFFER,
    CALL_D3D9_DEVICE_CREATEVERTEXDECLARATION,
    CALL_D3D9_DEVICE_CREATEVERTEXSHADER,
    CALL_D3D9_DEVICE_CREATEVOLUMETEXTURE,
    CALL_D3D9_DEVICE_DELETEPATCH,
    CALL_D3D9_DEVICE_DRAWINDEXEDPRIMITIVE,
    CALL_D3D9_DEVICE_DRAWINDEXEDPRIMITIVEUP,
    CALL_D3D9_DEVICE_DRAWPRIMITIVE,
    CALL_D3D9_DEVICE_DRAWPRIMITIVEUP,
    CALL_D3D9_DEVICE_DRAWRECTPATCH,
    CALL_D3D9_DEVICE_DRAWTRIPATCH,
    CALL_D3D9_DEVICE_ENDSCENE,
    CALL_D3D9_DEVICE_ENDSTATEBLOCK,
    CALL_D3D9_DEVICE_EVICTMANAGEDRESOURCES,
    CALL_D3D9_DEVICE_GETAVAILABLETEXTUREMEM,
    CALL_D3D9_DEVICE_GETBACKBUFFER,
    CALL_D3D9_DEVICE_GETCLIPPLANE,
    CALL_D3D9_DEVICE_GETCLIPSTATUS,
    CALL_D3D9_DEVICE_GETCREATIONPARAMETERS,
    CALL_D3D9_DEVICE_GETCURRENTTEXTUREPALETTE,
    CALL_D3D9_DEVICE_GETDEPTHSTENCILSURFACE,
    CALL_D3D9_DEVICE_GETDEVICECAPS,
    CALL_D3D9_DEVICE_GETDIRECT3D,
    CALL_D3D9_DEVICE_GETDISPLAYMODE,
    CALL_D3D9_DEVICE_GETDISPLAYMODEEX,
    CALL_D3D9_DEVICE_GETFRONTBUFFERDATA,
    CALL_D3D9_DEVICE_GETFVF,
    CALL_D3D9_DEVICE_GETGAMMARAMP,
    CALL_D3D9_DEVICE_GETGPUTHREADPRIORITY,
    CALL_D3D9_DEVICE_GETINDICES,
    CALL_D3D9_DEVICE_GETLIGHT,
    CALL_D3D9_DEVICE_GETLIGHTENABLE,
    CALL_D3D9_DEVICE_GETMATERIAL,
    CALL_D3D9_DEVICE_GETMAXIMUMFRAMELATENCY,
    CALL_D3D9_DEVICE_GETNPATCHMODE,
    CALL_D3D9_DEVICE_GETNUMBEROFSWAPCHAINS,
    CALL_D3D9_DEVICE_GETPALETTEENTRIES,
    CALL_D3D9_DEVICE_GETPIXELSHADER,
    CALL_D3D9_DEVICE_GETPIXELSHADERCONSTANTB,
    CALL_D3D9_DEVICE_GETPIXELSHADERCONSTANTF,
    CALL_D3D9_DEVICE_GETPIXELSHADERCONSTANTI,
    CALL_D3D9_DEVICE_GETRASTERSTATUS,
    CALL_D3D9_DEVICE_GETRENDERSTATE,
    CALL_D3D9_DEVICE_GETRENDERTARGET,
    CALL_D3D9_DEVICE_GETRENDERTARGETDATA,
    CALL_D3D9_DEVICE_GETSAMPLERSTATE,
    CALL_D3D9_DEVICE_GETSCISSORRECT,
    CALL_D3D9_DEVICE_GETSOFTWAREVERTEXPROCESSING,
    CALL_D3D9_DEVICE_GETSTREAMSOURCE,
    CALL_D3D9_DEVICE_GETSTREAMSOURCEFREQ,
    CALL_D3D9_DEVICE_GETSWAPCHAIN,
    CALL_D3D9_DEVICE_GETTEXTURE,
    CALL_D3D9_DEVICE_GETTEXTURESTAGESTATE,
    CALL_D3D9_DEVICE_GETTRANSFORM,
    CALL_D3D9_DEVICE_GETVERTEXDECLARATION,
    CALL_D3D9_DEVICE_GETVERTEXSHADER,
    CALL_D3D9_DEVICE_GETVERTEXSHADERCONSTANTB,
    CALL_D3D9_DEVICE_GETVERTEXSHADERCONSTANTF,
    CALL_D3D9_DEVICE_GETVERTEXSHADERCONSTANTI,
    CALL_D3D9_DEVICE_GETVIEWPORT,
    CALL_D3D9_DEVICE_LIGHTENABLE,
    CALL_D3D9_DEVICE_MULTIPLYTRANSFORM,
    CALL_D3D9_DEVICE_PRESENT,
    CALL_D3D9_DEVICE_PRESENTEX,
    CALL_D3D9_DEVICE_PROCESSVERTICES,
    CALL_D3D9_DEVICE_QUERYINTERFACE,
    CALL_D3D9_DEVICE_RELEASE,
    CALL_D3D9_DEVICE_RESET,
    CALL_D3D9_DEVICE_RESETEX,
    CALL_D3D9_DEVICE_SETCLIPPLANE,
    CALL_D3D9_DEVICE_SETCLIPSTATUS,
    CALL_D3D9_DEVICE_SETCONVOLUTIONMONOKERNEL,
    CALL_D3D9_DEVICE_SETCURRENTTEXTUREPALETTE,
    CALL_D3D9_DEVICE_SETCURSORPOSITION,
    CALL_D3D9_DEVICE_SETCURSORPROPERTIES,
    CALL_D3D9_DEVICE_SETDEPTHSTENCILSURFACE,
    CALL_D3D9_DEVICE_SETDIALOGBOXMODE,
    CALL_D3D9_DEVICE_SETFVF,
    CALL_D3D9_DEVICE_SETGAMMARAMP,
    CALL_D3D9_DEVICE_SETGPUTHREADPRIORITY,
    CALL_D3D9_DEVICE_SETINDICES,
    CALL_D3D9_DEVICE_SETLIGHT,
    CALL_D3D9_DEVICE_SETMATERIAL,
    CALL_D3D9_DEVICE_SETMAXIMUMFRAMELATENCY,
    CALL_D3D9_DEVICE_SETNPATCHMODE,
    CALL_D3D9_DEVICE_SETPALETTEENTRIES,
    CALL_D3D9_DEVICE_SETPIXELSHADER,
    CALL_D3D9_DEVICE_SETPIXELSHADERCONSTANTB,
    CALL_D3D9_DEVICE_SETPIXELSHADERCONSTANTF,
    CALL_D3D9_DEVICE_SETPIXELSHADERCONSTANTI,
    CALL_D3D9_DEVICE_SETRENDERSTATE,
    CALL_D3D9_DEVICE_SETRENDERTARGET,
    CALL_D3D9_DEVICE_SETSAMPLERSTATE,
    CALL_D3D9_DEVICE_SETSCISSORRECT,
    CALL_D3D9_DEVICE_SETSOFTWAREVERTEXPROCESSING,
    CALL_D3D9_DEVICE_SETSTREAMSOURCE,
    CALL_D3D9_DEVICE_SETSTREAMSOURCEFREQ,
    CALL_D3D9_DEVICE_SETTEXTURE,
    CALL_D3D9_DEVICE_SETTEXTURESTAGESTATE,
    CALL_D3D9_DEVICE_SETTRANSFORM,
    CALL_D3D9_DEVICE_SETVERTEXDECLARATION,
    CALL_D3D9_DEVICE_SETVERTEXSHADER,
    CALL_D3D9_DEVICE_SETVERTEXSHADERCONSTANTB,
    CALL_D3D9_DEVICE_SETVERTEXSHADERCONSTANTF,
    CALL_D3D9_DEVICE_SETVERTEXSHADERCONSTANTI,
    CALL_D3D9_DEVICE_SETVIEWPORT,
    CALL_D3D9_DEVICE_SHOWCURSOR,
    CALL_D3D9_DEVICE_STRETCHRECT,
    CALL_D3D9_DEVICE_TESTCOOPERATIVELEVEL,
    CALL_D3D9_DEVICE_UPDATESURFACE,
    CALL_D3D9_DEVICE_UPDATETEXTURE,
    CALL_D3D9_DEVICE_VALIDATEDEVICE,
    CALL_D3D9_DEVICE_WAITFORVBLANK,
    CALL_D3D9_ENUMADAPTERMODES,
    CALL_D3D9_ENUMADAPTERMODESEX,
    CALL_D3D9_GETADAPTERCOUNT,
    CALL_D3D9_GETADAPTERDISPLAYMODE,
    CALL_D3D9_GETADAPTERDISPLAYMODEEX,
    CALL_D3D9_GETADAPTERIDENTIFIER,
    CALL_D3D9_GETADAPTERLUID,
    CALL_D3D9_GETADAPTERMODECOUNT,
    CALL_D3D9_GETADAPTERMODECOUNTEX,
    CALL_D3D9_GETADAPTERMONITOR,
    CALL_D3D9_GETDEVICECAPS,
    CALL_D3D9_INDEXBUFFER_ADDREF,
    CALL_D3D9_INDEXBUFFER_FREEPRIVATEDATA,
    CALL_D3D9_INDEXBUFFER_GETDESC,
    CALL_D3D9_INDEXBUFFER_GETDEVICE,
    CALL_D3D9_INDEXBUFFER_GETPRIORITY,
    CALL_D3D9_INDEXBUFFER_GETPRIVATEDATA,
    CALL_D3D9_INDEXBUFFER_GETTYPE,
    CALL_D3D9_INDEXBUFFER_LOCK,
    CALL_D3D9_INDEXBUFFER_PRELOAD,
    CALL_D3D9_INDEXBUFFER_QUERYINTERFACE,
    CALL_D3D9_INDEXBUFFER_RELEASE,
    CALL_D3D9_INDEXBUFFER_SETPRIORITY,
    CALL_D3D9_INDEXBUFFER_SETPRIVATEDATA,
    CALL_D3D9_INDEXBUFFER_UNLOCK,
    CALL_D3D9_PIXELSHADER_ADDREF,
    CALL_D3D9_PIXELSHADER_GETDEVICE,
    CALL_D3D9_PIXELSHADER_GETFUNCTION,
    CALL_D3D9_PIXELSHADER_QUERYINTERFACE,
    CALL_D3D9_PIXELSHADER_RELEASE,
    CALL_D3D9_QUERY_ADDREF,
    CALL_D3D9_QUERY_GETDATA,
    CALL_D3D9_QUERY_GETDATASIZE,
    CALL_D3D9_QUERY_GETDEVICE,
    CALL_D3D9_QUERY_GETTYPE,
    CALL_D3D9_QUERY_ISSUE,
    CALL_D3D9_QUERY_QUERYINTERFACE,
    CALL_D3D9_QUERY_RELEASE,
    CALL_D3D9_QUERYINTERFACE,
    CALL_D3D9_REGISTERSOFTWAREDEVICE,
    CALL_D3D9_RELEASE,
    CALL_D3D9_SET_CALLBACKS,
    CALL_D3D9_STATEBLOCK_ADDREF,
    CALL_D3D9_STATEBLOCK_APPLY,
    CALL_D3D9_STATEBLOCK_CAPTURE,
    CALL_D3D9_STATEBLOCK_GETDEVICE,
    CALL_D3D9_STATEBLOCK_QUERYINTERFACE,
    CALL_D3D9_STATEBLOCK_RELEASE,
    CALL_D3D9_SURFACE_ADDREF,
    CALL_D3D9_SURFACE_FREEPRIVATEDATA,
    CALL_D3D9_SURFACE_GETCONTAINER,
    CALL_D3D9_SURFACE_GETDC,
    CALL_D3D9_SURFACE_GETDESC,
    CALL_D3D9_SURFACE_GETDEVICE,
    CALL_D3D9_SURFACE_GETPRIORITY,
    CALL_D3D9_SURFACE_GETPRIVATEDATA,
    CALL_D3D9_SURFACE_GETTYPE,
    CALL_D3D9_SURFACE_LOCKRECT,
    CALL_D3D9_SURFACE_PRELOAD,
    CALL_D3D9_SURFACE_QUERYINTERFACE,
    CALL_D3D9_SURFACE_RELEASE,
    CALL_D3D9_SURFACE_RELEASEDC,
    CALL_D3D9_SURFACE_SETPRIORITY,
    CALL_D3D9_SURFACE_SETPRIVATEDATA,
    CALL_D3D9_SURFACE_UNLOCKRECT,
    CALL_D3D9_SWAPCHAIN_ADDREF,
    CALL_D3D9_SWAPCHAIN_GETBACKBUFFER,
    CALL_D3D9_SWAPCHAIN_GETDEVICE,
    CALL_D3D9_SWAPCHAIN_GETDISPLAYMODE,
    CALL_D3D9_SWAPCHAIN_GETDISPLAYMODEEX,
    CALL_D3D9_SWAPCHAIN_GETFRONTBUFFERDATA,
    CALL_D3D9_SWAPCHAIN_GETLASTPRESENTCOUNT,
    CALL_D3D9_SWAPCHAIN_GETPRESENTPARAMETERS,
    CALL_D3D9_SWAPCHAIN_GETPRESENTSTATISTICS,
    CALL_D3D9_SWAPCHAIN_GETRASTERSTATUS,
    CALL_D3D9_SWAPCHAIN_PRESENT,
    CALL_D3D9_SWAPCHAIN_QUERYINTERFACE,
    CALL_D3D9_SWAPCHAIN_RELEASE,
    CALL_D3D9_TEXTURE_2D_ADDDIRTYRECT,
    CALL_D3D9_TEXTURE_2D_ADDREF,
    CALL_D3D9_TEXTURE_2D_FREEPRIVATEDATA,
    CALL_D3D9_TEXTURE_2D_GENERATEMIPSUBLEVELS,
    CALL_D3D9_TEXTURE_2D_GETAUTOGENFILTERTYPE,
    CALL_D3D9_TEXTURE_2D_GETDEVICE,
    CALL_D3D9_TEXTURE_2D_GETLEVELCOUNT,
    CALL_D3D9_TEXTURE_2D_GETLEVELDESC,
    CALL_D3D9_TEXTURE_2D_GETLOD,
    CALL_D3D9_TEXTURE_2D_GETPRIORITY,
    CALL_D3D9_TEXTURE_2D_GETPRIVATEDATA,
    CALL_D3D9_TEXTURE_2D_GETSURFACELEVEL,
    CALL_D3D9_TEXTURE_2D_GETTYPE,
    CALL_D3D9_TEXTURE_2D_LOCKRECT,
    CALL_D3D9_TEXTURE_2D_PRELOAD,
    CALL_D3D9_TEXTURE_2D_QUERYINTERFACE,
    CALL_D3D9_TEXTURE_2D_RELEASE,
    CALL_D3D9_TEXTURE_2D_SETAUTOGENFILTERTYPE,
    CALL_D3D9_TEXTURE_2D_SETLOD,
    CALL_D3D9_TEXTURE_2D_SETPRIORITY,
    CALL_D3D9_TEXTURE_2D_SETPRIVATEDATA,
    CALL_D3D9_TEXTURE_2D_UNLOCKRECT,
    CALL_D3D9_TEXTURE_3D_ADDDIRTYBOX,
    CALL_D3D9_TEXTURE_3D_ADDREF,
    CALL_D3D9_TEXTURE_3D_FREEPRIVATEDATA,
    CALL_D3D9_TEXTURE_3D_GENERATEMIPSUBLEVELS,
    CALL_D3D9_TEXTURE_3D_GETAUTOGENFILTERTYPE,
    CALL_D3D9_TEXTURE_3D_GETDEVICE,
    CALL_D3D9_TEXTURE_3D_GETLEVELCOUNT,
    CALL_D3D9_TEXTURE_3D_GETLEVELDESC,
    CALL_D3D9_TEXTURE_3D_GETLOD,
    CALL_D3D9_TEXTURE_3D_GETPRIORITY,
    CALL_D3D9_TEXTURE_3D_GETPRIVATEDATA,
    CALL_D3D9_TEXTURE_3D_GETTYPE,
    CALL_D3D9_TEXTURE_3D_GETVOLUMELEVEL,
    CALL_D3D9_TEXTURE_3D_LOCKBOX,
    CALL_D3D9_TEXTURE_3D_PRELOAD,
    CALL_D3D9_TEXTURE_3D_QUERYINTERFACE,
    CALL_D3D9_TEXTURE_3D_RELEASE,
    CALL_D3D9_TEXTURE_3D_SETAUTOGENFILTERTYPE,
    CALL_D3D9_TEXTURE_3D_SETLOD,
    CALL_D3D9_TEXTURE_3D_SETPRIORITY,
    CALL_D3D9_TEXTURE_3D_SETPRIVATEDATA,
    CALL_D3D9_TEXTURE_3D_UNLOCKBOX,
    CALL_D3D9_TEXTURE_CUBE_ADDDIRTYRECT,
    CALL_D3D9_TEXTURE_CUBE_ADDREF,
    CALL_D3D9_TEXTURE_CUBE_FREEPRIVATEDATA,
    CALL_D3D9_TEXTURE_CUBE_GENERATEMIPSUBLEVELS,
    CALL_D3D9_TEXTURE_CUBE_GETAUTOGENFILTERTYPE,
    CALL_D3D9_TEXTURE_CUBE_GETCUBEMAPSURFACE,
    CALL_D3D9_TEXTURE_CUBE_GETDEVICE,
    CALL_D3D9_TEXTURE_CUBE_GETLEVELCOUNT,
    CALL_D3D9_TEXTURE_CUBE_GETLEVELDESC,
    CALL_D3D9_TEXTURE_CUBE_GETLOD,
    CALL_D3D9_TEXTURE_CUBE_GETPRIORITY,
    CALL_D3D9_TEXTURE_CUBE_GETPRIVATEDATA,
    CALL_D3D9_TEXTURE_CUBE_GETTYPE,
    CALL_D3D9_TEXTURE_CUBE_LOCKRECT,
    CALL_D3D9_TEXTURE_CUBE_PRELOAD,
    CALL_D3D9_TEXTURE_CUBE_QUERYINTERFACE,
    CALL_D3D9_TEXTURE_CUBE_RELEASE,
    CALL_D3D9_TEXTURE_CUBE_SETAUTOGENFILTERTYPE,
    CALL_D3D9_TEXTURE_CUBE_SETLOD,
    CALL_D3D9_TEXTURE_CUBE_SETPRIORITY,
    CALL_D3D9_TEXTURE_CUBE_SETPRIVATEDATA,
    CALL_D3D9_TEXTURE_CUBE_UNLOCKRECT,
    CALL_D3D9_VERTEX_DECLARATION_ADDREF,
    CALL_D3D9_VERTEX_DECLARATION_GETDECLARATION,
    CALL_D3D9_VERTEX_DECLARATION_GETDEVICE,
    CALL_D3D9_VERTEX_DECLARATION_QUERYINTERFACE,
    CALL_D3D9_VERTEX_DECLARATION_RELEASE,
    CALL_D3D9_VERTEXBUFFER_ADDREF,
    CALL_D3D9_VERTEXBUFFER_FREEPRIVATEDATA,
    CALL_D3D9_VERTEXBUFFER_GETDESC,
    CALL_D3D9_VERTEXBUFFER_GETDEVICE,
    CALL_D3D9_VERTEXBUFFER_GETPRIORITY,
    CALL_D3D9_VERTEXBUFFER_GETPRIVATEDATA,
    CALL_D3D9_VERTEXBUFFER_GETTYPE,
    CALL_D3D9_VERTEXBUFFER_LOCK,
    CALL_D3D9_VERTEXBUFFER_PRELOAD,
    CALL_D3D9_VERTEXBUFFER_QUERYINTERFACE,
    CALL_D3D9_VERTEXBUFFER_RELEASE,
    CALL_D3D9_VERTEXBUFFER_SETPRIORITY,
    CALL_D3D9_VERTEXBUFFER_SETPRIVATEDATA,
    CALL_D3D9_VERTEXBUFFER_UNLOCK,
    CALL_D3D9_VERTEXSHADER_ADDREF,
    CALL_D3D9_VERTEXSHADER_GETDEVICE,
    CALL_D3D9_VERTEXSHADER_GETFUNCTION,
    CALL_D3D9_VERTEXSHADER_QUERYINTERFACE,
    CALL_D3D9_VERTEXSHADER_RELEASE,
    CALL_D3D9_VOLUME_ADDREF,
    CALL_D3D9_VOLUME_FREEPRIVATEDATA,
    CALL_D3D9_VOLUME_GETCONTAINER,
    CALL_D3D9_VOLUME_GETDESC,
    CALL_D3D9_VOLUME_GETDEVICE,
    CALL_D3D9_VOLUME_GETPRIVATEDATA,
    CALL_D3D9_VOLUME_LOCKBOX,
    CALL_D3D9_VOLUME_QUERYINTERFACE,
    CALL_D3D9_VOLUME_RELEASE,
    CALL_D3D9_VOLUME_SETPRIVATEDATA,
    CALL_D3D9_VOLUME_UNLOCKBOX,
    CALL_D3DPERF_BEGINEVENT,
    CALL_D3DPERF_ENDEVENT,
    CALL_D3DPERF_GETSTATUS,
    CALL_D3DPERF_QUERYREPEATFRAME,
    CALL_D3DPERF_SETMARKER,
    CALL_D3DPERF_SETOPTIONS,
    CALL_D3DPERF_SETREGION,
    CALL_DEBUGSETMUTE,
    CALL_DIRECT3DCREATE9,
    CALL_DIRECT3DCREATE9EX,
    CALL_DIRECT3DSHADERVALIDATORCREATE9,
};

#ifdef QEMU_DLL_GUEST

extern const struct IDirect3D9ExVtbl d3d9_vtbl;
extern const struct IDirect3DDevice9ExVtbl d3d9_device_vtbl;
extern const struct IDirect3DSwapChain9ExVtbl d3d9_swapchain_vtbl;
extern const struct IDirect3DTexture9Vtbl d3d9_texture_2d_vtbl;
extern const struct IDirect3DCubeTexture9Vtbl d3d9_texture_cube_vtbl;
extern const struct IDirect3DVolumeTexture9Vtbl d3d9_texture_3d_vtbl;
extern const struct IDirect3DVertexDeclaration9Vtbl d3d9_vertex_declaration_vtbl;
extern const struct IDirect3DVertexBuffer9Vtbl d3d9_vertexbuffer_vtbl;
extern const struct IDirect3DIndexBuffer9Vtbl d3d9_indexbuffer_vtbl;
extern const struct IDirect3DQuery9Vtbl d3d9_query_vtbl;
extern const struct IDirect3DVertexShader9Vtbl d3d9_vertexshader_vtbl;
extern const struct IDirect3DPixelShader9Vtbl d3d9_pixelshader_vtbl;
extern const struct IDirect3DStateBlock9Vtbl d3d9_stateblock_vtbl;

void qemu_d3d9_device_setup_guest(struct qemu_d3d9_device_impl *device, BOOL init);
void d3d9_swapchain_set_surfaces_ifaces(IDirect3DSwapChain9Ex *swapchain);
void d3d9_texture_set_surfaces_ifaces(struct qemu_d3d9_texture_impl *texture);
void qemu_d3d9_surface_init_guest(IDirect3DSurface9 *surface);
void qemu_d3d9_volume_init_guest(IDirect3DVolume9 *volume);

void __fastcall qemu_d3d9_buffer_destroyed(struct qemu_d3d9_buffer_impl *buffer);
void __fastcall qemu_d3d9_texture_destroyed(struct qemu_d3d9_texture_impl *texture);
void __fastcall qemu_d3d9_subresource_destroyed(struct qemu_d3d9_subresource_impl *texture);

HRESULT qemu_d3d9_free_private_data(struct wined3d_private_store *store, const GUID *guid);
HRESULT qemu_d3d9_get_private_data(struct wined3d_private_store *store, const GUID *guid,
        void *data, DWORD *data_size);
HRESULT qemu_d3d9_set_private_data(struct wined3d_private_store *store, const GUID *guid,
        const void *data, DWORD data_size, DWORD flags);

#else

extern const struct qemu_ops *qemu_ops;

void qemu_d3d9_AddRef(struct qemu_syscall *call);
void qemu_d3d9_CheckDepthStencilMatch(struct qemu_syscall *call);
void qemu_d3d9_CheckDeviceFormat(struct qemu_syscall *call);
void qemu_d3d9_CheckDeviceFormatConversion(struct qemu_syscall *call);
void qemu_d3d9_CheckDeviceMultiSampleType(struct qemu_syscall *call);
void qemu_d3d9_CheckDeviceType(struct qemu_syscall *call);
void qemu_d3d9_CreateDevice(struct qemu_syscall *call);
void qemu_d3d9_CreateDeviceEx(struct qemu_syscall *call);
void qemu_d3d9_device_AddRef(struct qemu_syscall *call);
void qemu_d3d9_device_BeginScene(struct qemu_syscall *call);
void qemu_d3d9_device_BeginStateBlock(struct qemu_syscall *call);
void qemu_d3d9_device_CheckDeviceState(struct qemu_syscall *call);
void qemu_d3d9_device_CheckResourceResidency(struct qemu_syscall *call);
void qemu_d3d9_device_Clear(struct qemu_syscall *call);
void qemu_d3d9_device_ColorFill(struct qemu_syscall *call);
void qemu_d3d9_device_ComposeRects(struct qemu_syscall *call);
void qemu_d3d9_device_CreateAdditionalSwapChain(struct qemu_syscall *call);
void qemu_d3d9_device_CreateCubeTexture(struct qemu_syscall *call);
void qemu_d3d9_device_CreateDepthStencilSurface(struct qemu_syscall *call);
void qemu_d3d9_device_CreateDepthStencilSurfaceEx(struct qemu_syscall *call);
void qemu_d3d9_device_CreateIndexBuffer(struct qemu_syscall *call);
void qemu_d3d9_device_CreateOffscreenPlainSurface(struct qemu_syscall *call);
void qemu_d3d9_device_CreateOffscreenPlainSurfaceEx(struct qemu_syscall *call);
void qemu_d3d9_device_CreatePixelShader(struct qemu_syscall *call);
void qemu_d3d9_device_CreateQuery(struct qemu_syscall *call);
void qemu_d3d9_device_CreateRenderTarget(struct qemu_syscall *call);
void qemu_d3d9_device_CreateRenderTargetEx(struct qemu_syscall *call);
void qemu_d3d9_device_CreateStateBlock(struct qemu_syscall *call);
void qemu_d3d9_device_CreateTexture(struct qemu_syscall *call);
void qemu_d3d9_device_CreateVertexBuffer(struct qemu_syscall *call);
void qemu_d3d9_device_CreateVertexDeclaration(struct qemu_syscall *call);
void qemu_d3d9_device_CreateVertexShader(struct qemu_syscall *call);
void qemu_d3d9_device_CreateVolumeTexture(struct qemu_syscall *call);
void qemu_d3d9_device_DeletePatch(struct qemu_syscall *call);
void qemu_d3d9_device_DrawIndexedPrimitive(struct qemu_syscall *call);
void qemu_d3d9_device_DrawIndexedPrimitiveUP(struct qemu_syscall *call);
void qemu_d3d9_device_DrawPrimitive(struct qemu_syscall *call);
void qemu_d3d9_device_DrawPrimitiveUP(struct qemu_syscall *call);
void qemu_d3d9_device_DrawRectPatch(struct qemu_syscall *call);
void qemu_d3d9_device_DrawTriPatch(struct qemu_syscall *call);
void qemu_d3d9_device_EndScene(struct qemu_syscall *call);
void qemu_d3d9_device_EndStateBlock(struct qemu_syscall *call);
void qemu_d3d9_device_EvictManagedResources(struct qemu_syscall *call);
void qemu_d3d9_device_GetAvailableTextureMem(struct qemu_syscall *call);
void qemu_d3d9_device_GetBackBuffer(struct qemu_syscall *call);
void qemu_d3d9_device_GetClipPlane(struct qemu_syscall *call);
void qemu_d3d9_device_GetClipStatus(struct qemu_syscall *call);
void qemu_d3d9_device_GetCreationParameters(struct qemu_syscall *call);
void qemu_d3d9_device_GetCurrentTexturePalette(struct qemu_syscall *call);
void qemu_d3d9_device_GetDepthStencilSurface(struct qemu_syscall *call);
void qemu_d3d9_device_GetDeviceCaps(struct qemu_syscall *call);
void qemu_d3d9_device_GetDirect3D(struct qemu_syscall *call);
void qemu_d3d9_device_GetDisplayMode(struct qemu_syscall *call);
void qemu_d3d9_device_GetDisplayModeEx(struct qemu_syscall *call);
void qemu_d3d9_device_GetFrontBufferData(struct qemu_syscall *call);
void qemu_d3d9_device_GetFVF(struct qemu_syscall *call);
void qemu_d3d9_device_GetGammaRamp(struct qemu_syscall *call);
void qemu_d3d9_device_GetGPUThreadPriority(struct qemu_syscall *call);
void qemu_d3d9_device_GetIndices(struct qemu_syscall *call);
void qemu_d3d9_device_GetLight(struct qemu_syscall *call);
void qemu_d3d9_device_GetLightEnable(struct qemu_syscall *call);
void qemu_d3d9_device_GetMaterial(struct qemu_syscall *call);
void qemu_d3d9_device_GetMaximumFrameLatency(struct qemu_syscall *call);
void qemu_d3d9_device_GetNPatchMode(struct qemu_syscall *call);
void qemu_d3d9_device_GetNumberOfSwapChains(struct qemu_syscall *call);
void qemu_d3d9_device_GetPaletteEntries(struct qemu_syscall *call);
void qemu_d3d9_device_GetPixelShader(struct qemu_syscall *call);
void qemu_d3d9_device_GetPixelShaderConstantB(struct qemu_syscall *call);
void qemu_d3d9_device_GetPixelShaderConstantF(struct qemu_syscall *call);
void qemu_d3d9_device_GetPixelShaderConstantI(struct qemu_syscall *call);
void qemu_d3d9_device_GetRasterStatus(struct qemu_syscall *call);
void qemu_d3d9_device_GetRenderState(struct qemu_syscall *call);
void qemu_d3d9_device_GetRenderTarget(struct qemu_syscall *call);
void qemu_d3d9_device_GetRenderTargetData(struct qemu_syscall *call);
void qemu_d3d9_device_GetSamplerState(struct qemu_syscall *call);
void qemu_d3d9_device_GetScissorRect(struct qemu_syscall *call);
void qemu_d3d9_device_GetSoftwareVertexProcessing(struct qemu_syscall *call);
void qemu_d3d9_device_GetStreamSource(struct qemu_syscall *call);
void qemu_d3d9_device_GetStreamSourceFreq(struct qemu_syscall *call);
void qemu_d3d9_device_GetSwapChain(struct qemu_syscall *call);
void qemu_d3d9_device_GetTexture(struct qemu_syscall *call);
void qemu_d3d9_device_GetTextureStageState(struct qemu_syscall *call);
void qemu_d3d9_device_GetTransform(struct qemu_syscall *call);
void qemu_d3d9_device_GetVertexDeclaration(struct qemu_syscall *call);
void qemu_d3d9_device_GetVertexShader(struct qemu_syscall *call);
void qemu_d3d9_device_GetVertexShaderConstantB(struct qemu_syscall *call);
void qemu_d3d9_device_GetVertexShaderConstantF(struct qemu_syscall *call);
void qemu_d3d9_device_GetVertexShaderConstantI(struct qemu_syscall *call);
void qemu_d3d9_device_GetViewport(struct qemu_syscall *call);
void qemu_d3d9_device_LightEnable(struct qemu_syscall *call);
void qemu_d3d9_device_MultiplyTransform(struct qemu_syscall *call);
void qemu_d3d9_device_Present(struct qemu_syscall *call);
void qemu_d3d9_device_PresentEx(struct qemu_syscall *call);
void qemu_d3d9_device_ProcessVertices(struct qemu_syscall *call);
void qemu_d3d9_device_QueryInterface(struct qemu_syscall *call);
void qemu_d3d9_device_Release(struct qemu_syscall *call);
void qemu_d3d9_device_Reset(struct qemu_syscall *call);
void qemu_d3d9_device_ResetEx(struct qemu_syscall *call);
void qemu_d3d9_device_SetClipPlane(struct qemu_syscall *call);
void qemu_d3d9_device_SetClipStatus(struct qemu_syscall *call);
void qemu_d3d9_device_SetConvolutionMonoKernel(struct qemu_syscall *call);
void qemu_d3d9_device_SetCurrentTexturePalette(struct qemu_syscall *call);
void qemu_d3d9_device_SetCursorPosition(struct qemu_syscall *call);
void qemu_d3d9_device_SetCursorProperties(struct qemu_syscall *call);
void qemu_d3d9_device_SetDepthStencilSurface(struct qemu_syscall *call);
void qemu_d3d9_device_SetDialogBoxMode(struct qemu_syscall *call);
void qemu_d3d9_device_SetFVF(struct qemu_syscall *call);
void qemu_d3d9_device_SetGammaRamp(struct qemu_syscall *call);
void qemu_d3d9_device_SetGPUThreadPriority(struct qemu_syscall *call);
void qemu_d3d9_device_SetIndices(struct qemu_syscall *call);
void qemu_d3d9_device_SetLight(struct qemu_syscall *call);
void qemu_d3d9_device_SetMaterial(struct qemu_syscall *call);
void qemu_d3d9_device_SetMaximumFrameLatency(struct qemu_syscall *call);
void qemu_d3d9_device_SetNPatchMode(struct qemu_syscall *call);
void qemu_d3d9_device_SetPaletteEntries(struct qemu_syscall *call);
void qemu_d3d9_device_SetPixelShader(struct qemu_syscall *call);
void qemu_d3d9_device_SetPixelShaderConstantB(struct qemu_syscall *call);
void qemu_d3d9_device_SetPixelShaderConstantF(struct qemu_syscall *call);
void qemu_d3d9_device_SetPixelShaderConstantI(struct qemu_syscall *call);
void qemu_d3d9_device_SetRenderState(struct qemu_syscall *call);
void qemu_d3d9_device_SetRenderTarget(struct qemu_syscall *call);
void qemu_d3d9_device_SetSamplerState(struct qemu_syscall *call);
void qemu_d3d9_device_SetScissorRect(struct qemu_syscall *call);
void qemu_d3d9_device_SetSoftwareVertexProcessing(struct qemu_syscall *call);
void qemu_d3d9_device_SetStreamSource(struct qemu_syscall *call);
void qemu_d3d9_device_SetStreamSourceFreq(struct qemu_syscall *call);
void qemu_d3d9_device_SetTexture(struct qemu_syscall *call);
void qemu_d3d9_device_SetTextureStageState(struct qemu_syscall *call);
void qemu_d3d9_device_SetTransform(struct qemu_syscall *call);
void qemu_d3d9_device_SetVertexDeclaration(struct qemu_syscall *call);
void qemu_d3d9_device_SetVertexShader(struct qemu_syscall *call);
void qemu_d3d9_device_SetVertexShaderConstantB(struct qemu_syscall *call);
void qemu_d3d9_device_SetVertexShaderConstantF(struct qemu_syscall *call);
void qemu_d3d9_device_SetVertexShaderConstantI(struct qemu_syscall *call);
void qemu_d3d9_device_SetViewport(struct qemu_syscall *call);
void qemu_d3d9_device_ShowCursor(struct qemu_syscall *call);
void qemu_d3d9_device_StretchRect(struct qemu_syscall *call);
void qemu_d3d9_device_TestCooperativeLevel(struct qemu_syscall *call);
void qemu_d3d9_device_UpdateSurface(struct qemu_syscall *call);
void qemu_d3d9_device_UpdateTexture(struct qemu_syscall *call);
void qemu_d3d9_device_ValidateDevice(struct qemu_syscall *call);
void qemu_d3d9_device_WaitForVBlank(struct qemu_syscall *call);
void qemu_d3d9_EnumAdapterModes(struct qemu_syscall *call);
void qemu_d3d9_EnumAdapterModesEx(struct qemu_syscall *call);
void qemu_d3d9_GetAdapterCount(struct qemu_syscall *call);
void qemu_d3d9_GetAdapterDisplayMode(struct qemu_syscall *call);
void qemu_d3d9_GetAdapterDisplayModeEx(struct qemu_syscall *call);
void qemu_d3d9_GetAdapterIdentifier(struct qemu_syscall *call);
void qemu_d3d9_GetAdapterLUID(struct qemu_syscall *call);
void qemu_d3d9_GetAdapterModeCount(struct qemu_syscall *call);
void qemu_d3d9_GetAdapterModeCountEx(struct qemu_syscall *call);
void qemu_d3d9_GetAdapterMonitor(struct qemu_syscall *call);
void qemu_d3d9_GetDeviceCaps(struct qemu_syscall *call);
void qemu_d3d9_indexbuffer_AddRef(struct qemu_syscall *call);
void qemu_d3d9_indexbuffer_FreePrivateData(struct qemu_syscall *call);
void qemu_d3d9_indexbuffer_GetDesc(struct qemu_syscall *call);
void qemu_d3d9_indexbuffer_GetDevice(struct qemu_syscall *call);
void qemu_d3d9_indexbuffer_GetPriority(struct qemu_syscall *call);
void qemu_d3d9_indexbuffer_GetPrivateData(struct qemu_syscall *call);
void qemu_d3d9_indexbuffer_GetType(struct qemu_syscall *call);
void qemu_d3d9_indexbuffer_Lock(struct qemu_syscall *call);
void qemu_d3d9_indexbuffer_PreLoad(struct qemu_syscall *call);
void qemu_d3d9_indexbuffer_QueryInterface(struct qemu_syscall *call);
void qemu_d3d9_indexbuffer_Release(struct qemu_syscall *call);
void qemu_d3d9_indexbuffer_SetPriority(struct qemu_syscall *call);
void qemu_d3d9_indexbuffer_SetPrivateData(struct qemu_syscall *call);
void qemu_d3d9_indexbuffer_Unlock(struct qemu_syscall *call);
void qemu_d3d9_pixelshader_AddRef(struct qemu_syscall *call);
void qemu_d3d9_pixelshader_GetDevice(struct qemu_syscall *call);
void qemu_d3d9_pixelshader_GetFunction(struct qemu_syscall *call);
void qemu_d3d9_pixelshader_QueryInterface(struct qemu_syscall *call);
void qemu_d3d9_pixelshader_Release(struct qemu_syscall *call);
void qemu_d3d9_query_AddRef(struct qemu_syscall *call);
void qemu_d3d9_query_GetData(struct qemu_syscall *call);
void qemu_d3d9_query_GetDataSize(struct qemu_syscall *call);
void qemu_d3d9_query_GetDevice(struct qemu_syscall *call);
void qemu_d3d9_query_GetType(struct qemu_syscall *call);
void qemu_d3d9_query_Issue(struct qemu_syscall *call);
void qemu_d3d9_query_QueryInterface(struct qemu_syscall *call);
void qemu_d3d9_query_Release(struct qemu_syscall *call);
void qemu_d3d9_QueryInterface(struct qemu_syscall *call);
void qemu_d3d9_RegisterSoftwareDevice(struct qemu_syscall *call);
void qemu_d3d9_Release(struct qemu_syscall *call);
void qemu_d3d9_stateblock_AddRef(struct qemu_syscall *call);
void qemu_d3d9_stateblock_Apply(struct qemu_syscall *call);
void qemu_d3d9_stateblock_Capture(struct qemu_syscall *call);
void qemu_d3d9_stateblock_GetDevice(struct qemu_syscall *call);
void qemu_d3d9_stateblock_QueryInterface(struct qemu_syscall *call);
void qemu_d3d9_stateblock_Release(struct qemu_syscall *call);
void qemu_d3d9_surface_AddRef(struct qemu_syscall *call);
void qemu_d3d9_surface_FreePrivateData(struct qemu_syscall *call);
void qemu_d3d9_surface_GetContainer(struct qemu_syscall *call);
void qemu_d3d9_surface_GetDC(struct qemu_syscall *call);
void qemu_d3d9_surface_GetDesc(struct qemu_syscall *call);
void qemu_d3d9_surface_GetDevice(struct qemu_syscall *call);
void qemu_d3d9_surface_GetPriority(struct qemu_syscall *call);
void qemu_d3d9_surface_GetPrivateData(struct qemu_syscall *call);
void qemu_d3d9_surface_GetType(struct qemu_syscall *call);
void qemu_d3d9_surface_LockRect(struct qemu_syscall *call);
void qemu_d3d9_surface_PreLoad(struct qemu_syscall *call);
void qemu_d3d9_surface_QueryInterface(struct qemu_syscall *call);
void qemu_d3d9_surface_Release(struct qemu_syscall *call);
void qemu_d3d9_surface_ReleaseDC(struct qemu_syscall *call);
void qemu_d3d9_surface_SetPriority(struct qemu_syscall *call);
void qemu_d3d9_surface_SetPrivateData(struct qemu_syscall *call);
void qemu_d3d9_surface_UnlockRect(struct qemu_syscall *call);
void qemu_d3d9_swapchain_AddRef(struct qemu_syscall *call);
void qemu_d3d9_swapchain_GetBackBuffer(struct qemu_syscall *call);
void qemu_d3d9_swapchain_GetDevice(struct qemu_syscall *call);
void qemu_d3d9_swapchain_GetDisplayMode(struct qemu_syscall *call);
void qemu_d3d9_swapchain_GetDisplayModeEx(struct qemu_syscall *call);
void qemu_d3d9_swapchain_GetFrontBufferData(struct qemu_syscall *call);
void qemu_d3d9_swapchain_GetLastPresentCount(struct qemu_syscall *call);
void qemu_d3d9_swapchain_GetPresentParameters(struct qemu_syscall *call);
void qemu_d3d9_swapchain_GetPresentStatistics(struct qemu_syscall *call);
void qemu_d3d9_swapchain_GetRasterStatus(struct qemu_syscall *call);
void qemu_d3d9_swapchain_Present(struct qemu_syscall *call);
void qemu_d3d9_swapchain_QueryInterface(struct qemu_syscall *call);
void qemu_d3d9_swapchain_Release(struct qemu_syscall *call);
void qemu_d3d9_texture_2d_AddDirtyRect(struct qemu_syscall *call);
void qemu_d3d9_texture_2d_AddRef(struct qemu_syscall *call);
void qemu_d3d9_texture_2d_FreePrivateData(struct qemu_syscall *call);
void qemu_d3d9_texture_2d_GenerateMipSubLevels(struct qemu_syscall *call);
void qemu_d3d9_texture_2d_GetAutoGenFilterType(struct qemu_syscall *call);
void qemu_d3d9_texture_2d_GetDevice(struct qemu_syscall *call);
void qemu_d3d9_texture_2d_GetLevelCount(struct qemu_syscall *call);
void qemu_d3d9_texture_2d_GetLevelDesc(struct qemu_syscall *call);
void qemu_d3d9_texture_2d_GetLOD(struct qemu_syscall *call);
void qemu_d3d9_texture_2d_GetPriority(struct qemu_syscall *call);
void qemu_d3d9_texture_2d_GetPrivateData(struct qemu_syscall *call);
void qemu_d3d9_texture_2d_GetSurfaceLevel(struct qemu_syscall *call);
void qemu_d3d9_texture_2d_GetType(struct qemu_syscall *call);
void qemu_d3d9_texture_2d_LockRect(struct qemu_syscall *call);
void qemu_d3d9_texture_2d_PreLoad(struct qemu_syscall *call);
void qemu_d3d9_texture_2d_QueryInterface(struct qemu_syscall *call);
void qemu_d3d9_texture_2d_Release(struct qemu_syscall *call);
void qemu_d3d9_texture_2d_SetAutoGenFilterType(struct qemu_syscall *call);
void qemu_d3d9_texture_2d_SetLOD(struct qemu_syscall *call);
void qemu_d3d9_texture_2d_SetPriority(struct qemu_syscall *call);
void qemu_d3d9_texture_2d_SetPrivateData(struct qemu_syscall *call);
void qemu_d3d9_texture_2d_UnlockRect(struct qemu_syscall *call);
void qemu_d3d9_texture_3d_AddDirtyBox(struct qemu_syscall *call);
void qemu_d3d9_texture_3d_AddRef(struct qemu_syscall *call);
void qemu_d3d9_texture_3d_FreePrivateData(struct qemu_syscall *call);
void qemu_d3d9_texture_3d_GenerateMipSubLevels(struct qemu_syscall *call);
void qemu_d3d9_texture_3d_GetAutoGenFilterType(struct qemu_syscall *call);
void qemu_d3d9_texture_3d_GetDevice(struct qemu_syscall *call);
void qemu_d3d9_texture_3d_GetLevelCount(struct qemu_syscall *call);
void qemu_d3d9_texture_3d_GetLevelDesc(struct qemu_syscall *call);
void qemu_d3d9_texture_3d_GetLOD(struct qemu_syscall *call);
void qemu_d3d9_texture_3d_GetPriority(struct qemu_syscall *call);
void qemu_d3d9_texture_3d_GetPrivateData(struct qemu_syscall *call);
void qemu_d3d9_texture_3d_GetType(struct qemu_syscall *call);
void qemu_d3d9_texture_3d_GetVolumeLevel(struct qemu_syscall *call);
void qemu_d3d9_texture_3d_LockBox(struct qemu_syscall *call);
void qemu_d3d9_texture_3d_PreLoad(struct qemu_syscall *call);
void qemu_d3d9_texture_3d_QueryInterface(struct qemu_syscall *call);
void qemu_d3d9_texture_3d_Release(struct qemu_syscall *call);
void qemu_d3d9_texture_3d_SetAutoGenFilterType(struct qemu_syscall *call);
void qemu_d3d9_texture_3d_SetLOD(struct qemu_syscall *call);
void qemu_d3d9_texture_3d_SetPriority(struct qemu_syscall *call);
void qemu_d3d9_texture_3d_SetPrivateData(struct qemu_syscall *call);
void qemu_d3d9_texture_3d_UnlockBox(struct qemu_syscall *call);
void qemu_d3d9_texture_cube_AddDirtyRect(struct qemu_syscall *call);
void qemu_d3d9_texture_cube_AddRef(struct qemu_syscall *call);
void qemu_d3d9_texture_cube_FreePrivateData(struct qemu_syscall *call);
void qemu_d3d9_texture_cube_GenerateMipSubLevels(struct qemu_syscall *call);
void qemu_d3d9_texture_cube_GetAutoGenFilterType(struct qemu_syscall *call);
void qemu_d3d9_texture_cube_GetCubeMapSurface(struct qemu_syscall *call);
void qemu_d3d9_texture_cube_GetDevice(struct qemu_syscall *call);
void qemu_d3d9_texture_cube_GetLevelCount(struct qemu_syscall *call);
void qemu_d3d9_texture_cube_GetLevelDesc(struct qemu_syscall *call);
void qemu_d3d9_texture_cube_GetLOD(struct qemu_syscall *call);
void qemu_d3d9_texture_cube_GetPriority(struct qemu_syscall *call);
void qemu_d3d9_texture_cube_GetPrivateData(struct qemu_syscall *call);
void qemu_d3d9_texture_cube_GetType(struct qemu_syscall *call);
void qemu_d3d9_texture_cube_LockRect(struct qemu_syscall *call);
void qemu_d3d9_texture_cube_PreLoad(struct qemu_syscall *call);
void qemu_d3d9_texture_cube_QueryInterface(struct qemu_syscall *call);
void qemu_d3d9_texture_cube_Release(struct qemu_syscall *call);
void qemu_d3d9_texture_cube_SetAutoGenFilterType(struct qemu_syscall *call);
void qemu_d3d9_texture_cube_SetLOD(struct qemu_syscall *call);
void qemu_d3d9_texture_cube_SetPriority(struct qemu_syscall *call);
void qemu_d3d9_texture_cube_SetPrivateData(struct qemu_syscall *call);
void qemu_d3d9_texture_cube_UnlockRect(struct qemu_syscall *call);
void qemu_d3d9_vertex_declaration_AddRef(struct qemu_syscall *call);
void qemu_d3d9_vertex_declaration_GetDeclaration(struct qemu_syscall *call);
void qemu_d3d9_vertex_declaration_GetDevice(struct qemu_syscall *call);
void qemu_d3d9_vertex_declaration_QueryInterface(struct qemu_syscall *call);
void qemu_d3d9_vertex_declaration_Release(struct qemu_syscall *call);
void qemu_d3d9_vertexbuffer_AddRef(struct qemu_syscall *call);
void qemu_d3d9_vertexbuffer_FreePrivateData(struct qemu_syscall *call);
void qemu_d3d9_vertexbuffer_GetDesc(struct qemu_syscall *call);
void qemu_d3d9_vertexbuffer_GetDevice(struct qemu_syscall *call);
void qemu_d3d9_vertexbuffer_GetPriority(struct qemu_syscall *call);
void qemu_d3d9_vertexbuffer_GetPrivateData(struct qemu_syscall *call);
void qemu_d3d9_vertexbuffer_GetType(struct qemu_syscall *call);
void qemu_d3d9_vertexbuffer_Lock(struct qemu_syscall *call);
void qemu_d3d9_vertexbuffer_PreLoad(struct qemu_syscall *call);
void qemu_d3d9_vertexbuffer_QueryInterface(struct qemu_syscall *call);
void qemu_d3d9_vertexbuffer_Release(struct qemu_syscall *call);
void qemu_d3d9_vertexbuffer_SetPriority(struct qemu_syscall *call);
void qemu_d3d9_vertexbuffer_SetPrivateData(struct qemu_syscall *call);
void qemu_d3d9_vertexbuffer_Unlock(struct qemu_syscall *call);
void qemu_d3d9_vertexshader_AddRef(struct qemu_syscall *call);
void qemu_d3d9_vertexshader_GetDevice(struct qemu_syscall *call);
void qemu_d3d9_vertexshader_GetFunction(struct qemu_syscall *call);
void qemu_d3d9_vertexshader_QueryInterface(struct qemu_syscall *call);
void qemu_d3d9_vertexshader_Release(struct qemu_syscall *call);
void qemu_d3d9_volume_AddRef(struct qemu_syscall *call);
void qemu_d3d9_volume_FreePrivateData(struct qemu_syscall *call);
void qemu_d3d9_volume_GetContainer(struct qemu_syscall *call);
void qemu_d3d9_volume_GetDesc(struct qemu_syscall *call);
void qemu_d3d9_volume_GetDevice(struct qemu_syscall *call);
void qemu_d3d9_volume_GetPrivateData(struct qemu_syscall *call);
void qemu_d3d9_volume_LockBox(struct qemu_syscall *call);
void qemu_d3d9_volume_QueryInterface(struct qemu_syscall *call);
void qemu_d3d9_volume_Release(struct qemu_syscall *call);
void qemu_d3d9_volume_SetPrivateData(struct qemu_syscall *call);
void qemu_d3d9_volume_UnlockBox(struct qemu_syscall *call);
void qemu_D3DPERF_BeginEvent(struct qemu_syscall *call);
void qemu_D3DPERF_EndEvent(struct qemu_syscall *call);
void qemu_D3DPERF_GetStatus(struct qemu_syscall *call);
void qemu_D3DPERF_QueryRepeatFrame(struct qemu_syscall *call);
void qemu_D3DPERF_SetMarker(struct qemu_syscall *call);
void qemu_D3DPERF_SetOptions(struct qemu_syscall *call);
void qemu_D3DPERF_SetRegion(struct qemu_syscall *call);
void qemu_DebugSetMute(struct qemu_syscall *call);
void qemu_Direct3DCreate9(struct qemu_syscall *call);
void qemu_Direct3DCreate9Ex(struct qemu_syscall *call);
void qemu_Direct3DShaderValidatorCreate9(struct qemu_syscall *call);

/* Called internally to make sure our wrapper does the final release. */
ULONG d3d9_wrapper_addref(struct qemu_d3d9_impl *d3d9);
ULONG d3d9_wrapper_release(struct qemu_d3d9_impl *d3d9);

BOOL d3d9_device_wrap_implicit_resources(struct qemu_d3d9_device_impl *device);
ULONG d3d9_device_wrapper_addref(struct qemu_d3d9_device_impl *device);
ULONG d3d9_device_wrapper_release(struct qemu_d3d9_device_impl *device);

struct qemu_d3d9_swapchain_impl *swapchain_impl_from_IUnknown(IUnknown *iface);
void d3d9_swapchain_init(struct qemu_d3d9_swapchain_impl *swapchain, IDirect3DSwapChain9Ex *host_swapchain,
        struct qemu_d3d9_device_impl *device);

void d3d9_surface_init(struct qemu_d3d9_subresource_impl *surface, IDirect3DSurface9 *host,
        struct qemu_d3d9_device_impl *device);
void qemu_d3d9_volume_init(struct qemu_d3d9_subresource_impl *volume, IDirect3DVolume9 *host,
        struct qemu_d3d9_device_impl *device);

struct qemu_d3d9_surface_impl
{
    struct qemu_d3d9_subresource_impl sub_resource;
    IUnknown private_data;
    LONG private_data_ref; /* NOT the externally visible ref! */
};

void d3d9_standalone_surface_init(struct qemu_d3d9_surface_impl *surface, IDirect3DSurface9 *host,
        struct qemu_d3d9_device_impl *device);

struct qemu_d3d9_texture_impl *texture_impl_from_IUnknown(IUnknown *iface);
void d3d9_texture_init(struct qemu_d3d9_texture_impl *texture, IDirect3DBaseTexture9 *host, struct qemu_d3d9_device_impl *device);

struct qemu_d3d9_buffer_impl *buffer_impl_from_IUnknown(IUnknown *iface);
void d3d9_buffer_init(struct qemu_d3d9_buffer_impl *buffer, IDirect3DResource9 *host, struct qemu_d3d9_device_impl *device);

ULONG d3d9_vdecl_internal_addref(struct qemu_d3d9_vertex_declaration_impl *decl);
ULONG d3d9_vdecl_internal_release(struct qemu_d3d9_vertex_declaration_impl *decl);

ULONG d3d9_shader_internal_addref(struct qemu_d3d9_shader_impl *decl);
ULONG d3d9_shader_internal_release(struct qemu_d3d9_shader_impl *decl);

void qemu_d3d9_stateblock_destroy(struct qemu_d3d9_stateblock_impl *stateblock);

extern const GUID qemu_d3d9_swapchain_guid;
extern const GUID qemu_d3d9_surface_guid;
extern const GUID qemu_d3d9_texture_guid;
extern const GUID qemu_d3d9_buffer_guid;
extern const GUID qemu_d3d9_standalone_surface_guid;
extern const GUID qemu_d3d9_volume_guid;

const GUID *pIID_IDirect3DDevice9;
const GUID *pIID_IDirect3DDevice9Ex;

extern uint64_t qemu_d3d9_buffer_destroyed;
extern uint64_t qemu_d3d9_texture_destroyed;
extern uint64_t qemu_d3d9_subresource_destroyed;

#endif

#endif
