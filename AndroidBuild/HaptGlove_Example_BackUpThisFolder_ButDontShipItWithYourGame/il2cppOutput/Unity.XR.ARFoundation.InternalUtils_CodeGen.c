﻿#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 T UnityEngine.XR.ARFoundation.InternalUtils.FindObjectsUtility::FindAnyObjectByType()
// 0x00000002 UnityEngine.Object UnityEngine.XR.ARFoundation.InternalUtils.FindObjectsUtility::FindAnyObjectByType(System.Type)
extern void FindObjectsUtility_FindAnyObjectByType_m0DB6DB459BF52A74B398EB069D81158DEFD84A89 (void);
// 0x00000003 T[] UnityEngine.XR.ARFoundation.InternalUtils.FindObjectsUtility::FindObjectsByType()
// 0x00000004 UnityEngine.Object[] UnityEngine.XR.ARFoundation.InternalUtils.FindObjectsUtility::FindObjectsByType(System.Type)
extern void FindObjectsUtility_FindObjectsByType_m3319ABCA3B46008448BE671C3E04A4E73BA7BED0 (void);
// 0x00000005 UnityEngine.Pose UnityEngine.XR.ARFoundation.InternalUtils.PoseUtils::CalculateOffset(UnityEngine.Pose,UnityEngine.Pose)
extern void PoseUtils_CalculateOffset_m6879E7AFD770A7788A8229393C573207C757FABF (void);
// 0x00000006 UnityEngine.Pose UnityEngine.XR.ARFoundation.InternalUtils.PoseUtils::WithOffset(UnityEngine.Pose,UnityEngine.Pose)
extern void PoseUtils_WithOffset_mB70A61FE6A3A0379F96848733DF4AFCBA6D6B910 (void);
// 0x00000007 UnityEngine.XR.ARSubsystems.SerializableGuid UnityEngine.XR.ARFoundation.InternalUtils.SerializableGuidUtility::AsSerializedGuid(System.Guid)
extern void SerializableGuidUtility_AsSerializedGuid_m357A4BB3D52EC18EB467A58D9C8357C13767171B (void);
// 0x00000008 System.Boolean UnityEngine.XR.ARFoundation.InternalUtils.SubsystemsUtility::TryGetLoadedSubsystem(TSubsystemConcrete&)
// 0x00000009 System.Boolean UnityEngine.XR.ARFoundation.InternalUtils.XRManagerUtility::IsLoaderActive()
static Il2CppMethodPointer s_methodPointers[9] = 
{
	NULL,
	FindObjectsUtility_FindAnyObjectByType_m0DB6DB459BF52A74B398EB069D81158DEFD84A89,
	NULL,
	FindObjectsUtility_FindObjectsByType_m3319ABCA3B46008448BE671C3E04A4E73BA7BED0,
	PoseUtils_CalculateOffset_m6879E7AFD770A7788A8229393C573207C757FABF,
	PoseUtils_WithOffset_mB70A61FE6A3A0379F96848733DF4AFCBA6D6B910,
	SerializableGuidUtility_AsSerializedGuid_m357A4BB3D52EC18EB467A58D9C8357C13767171B,
	NULL,
	NULL,
};
static const int32_t s_InvokerIndices[9] = 
{
	0,
	13879,
	0,
	13879,
	12221,
	12221,
	13981,
	0,
	0,
};
static const Il2CppTokenRangePair s_rgctxIndices[4] = 
{
	{ 0x06000001, { 0, 1 } },
	{ 0x06000003, { 1, 1 } },
	{ 0x06000008, { 2, 3 } },
	{ 0x06000009, { 5, 2 } },
};
extern const uint32_t g_rgctx_Object_FindObjectOfType_TisT_tEFC74842AD79F696D304635BC0BCF8AEA32E49AD_mDD7E494BBC0E054323353CDDC64A5CC6D194A7EC;
extern const uint32_t g_rgctx_Object_FindObjectsOfType_TisT_tABA244D670AAB6CE1BA83DE404F13DE3F8BE2F7E_m781FF4481CB052B026C33AD72AA3B4CBE8566717;
extern const uint32_t g_rgctx_XRLoader_GetLoadedSubsystem_TisTSubsystemBase_tC4E2E233093789D3B4FB20D6AD6EBCB4D924E3A4_mCFC9C83D0BFD50EC888291AA7F1457D0433E1FAC;
extern const uint32_t g_rgctx_TSubsystemBase_tC4E2E233093789D3B4FB20D6AD6EBCB4D924E3A4;
extern const uint32_t g_rgctx_TSubsystemConcrete_t3B4DDB472672601F08465F39271AAB39834CE9AA;
extern const uint32_t g_rgctx_Enumerable_OfType_TisTLoader_t26003C476ADF8CC1F57374FEB8D0232AC674F370_m3B40B29D492D50ADA99283ED19EAFA3EFBD32557;
extern const uint32_t g_rgctx_Enumerable_Any_TisTLoader_t26003C476ADF8CC1F57374FEB8D0232AC674F370_m2D9269350ED592D8B5D1F21272BB5CB029FD4B8D;
static const Il2CppRGCTXDefinition s_rgctxValues[7] = 
{
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Object_FindObjectOfType_TisT_tEFC74842AD79F696D304635BC0BCF8AEA32E49AD_mDD7E494BBC0E054323353CDDC64A5CC6D194A7EC },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Object_FindObjectsOfType_TisT_tABA244D670AAB6CE1BA83DE404F13DE3F8BE2F7E_m781FF4481CB052B026C33AD72AA3B4CBE8566717 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_XRLoader_GetLoadedSubsystem_TisTSubsystemBase_tC4E2E233093789D3B4FB20D6AD6EBCB4D924E3A4_mCFC9C83D0BFD50EC888291AA7F1457D0433E1FAC },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TSubsystemBase_tC4E2E233093789D3B4FB20D6AD6EBCB4D924E3A4 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TSubsystemConcrete_t3B4DDB472672601F08465F39271AAB39834CE9AA },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerable_OfType_TisTLoader_t26003C476ADF8CC1F57374FEB8D0232AC674F370_m3B40B29D492D50ADA99283ED19EAFA3EFBD32557 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerable_Any_TisTLoader_t26003C476ADF8CC1F57374FEB8D0232AC674F370_m2D9269350ED592D8B5D1F21272BB5CB029FD4B8D },
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_Unity_XR_ARFoundation_InternalUtils_CodeGenModule;
const Il2CppCodeGenModule g_Unity_XR_ARFoundation_InternalUtils_CodeGenModule = 
{
	"Unity.XR.ARFoundation.InternalUtils.dll",
	9,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	4,
	s_rgctxIndices,
	7,
	s_rgctxValues,
	NULL,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
