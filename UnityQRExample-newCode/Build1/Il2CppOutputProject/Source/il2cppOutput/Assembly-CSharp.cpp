#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
// System.Func`1<System.Boolean>
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2CA7720C7ADCCDECD3B02E45878B4478619D5347;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int32>
struct KeyCollection_tCC15D033281A6593E2488FAF5B205812A152AC03;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<Door/DoorGet>
struct List_1_t210E096E8D848E4A6979EFCDCDFF06067983278C;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int32>
struct ValueCollection_tCE6BD704B9571C131E2D8C8CED569DDEC4AE042B;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Int32>[]
struct EntryU5BU5D_tEA0133B78B9FF7045128C508FA50247E525A94D6;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// Door/DoorGet[]
struct DoorGetU5BU5D_t37C05A50C86E05574DCFD2D1AE50BAE376FB3F9C;
// BookMove
struct BookMove_tB09BD4EBFB43F9B825CFC57F443B6FA1846E62B2;
// ChangeColourOnClick
struct ChangeColourOnClick_t14DE3006C20744F7BE38358833506CB50179AD09;
// ChestClose
struct ChestClose_t3A30F76244A94C43B075D7CD4C7DE1BB3C7BBAAE;
// ChestOpen
struct ChestOpen_t5B91EC05FD8CF8A48CF6E79CD556F890849F778F;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.CultureAwareComparer
struct CultureAwareComparer_t5822A6535A6EB4C448D1B7736067D1188BAEE8CD;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Door
struct Door_tE09A4D567B369BBAF1953985B48BCFE5B6ADE8BD;
// DoorAction
struct DoorAction_tEC0D7043DE2006B92FBA439A8619BA64D2134E39;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// Fix_elevator_fall
struct Fix_elevator_fall_t8EFF43E900C7C8D0D3BBC49E23B06E83DF65ADC9;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// GoodChoice
struct GoodChoice_t48F8DFD9F0FA97F54A0F616D7B5E6C6C725871C7;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource
struct IMixedRealityInputSource_t9926A91DEC380AA837347E82976F5A6A9F9226C2;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem
struct IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer
struct IMixedRealityPointer_t6B17FD29F171D88877AB2EF9C59FEBB65ED6E446;
// Microsoft.MixedReality.QR.IQRCode
struct IQRCode_t5C056CCD2858DE2958CC806765605E6CBB243109;
// UnityEngine.LineRenderer
struct LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// MeshCopy
struct MeshCopy_t90A57DE904DA2D87772FE26FB1D9174F6003C544;
// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData
struct MixedRealityPointerEventData_t109EE708B8ACE83EA37188C65C8F120B7418AB7B;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.OrdinalCaseSensitiveComparer
struct OrdinalCaseSensitiveComparer_t581CA7CB51DCF00B6012A697A4B4B3067144521A;
// System.OrdinalIgnoreCaseComparer
struct OrdinalIgnoreCaseComparer_t8BAE11990A4C855D3BCBBFB42F4EF8D45088FBB0;
// PolyWobbler
struct PolyWobbler_tD83B017DD034CC5354496A3633D2F7B564C37977;
// UnityEngine.PolygonCollider2D
struct PolygonCollider2D_t7CEFFFEE6522175436B408712B052D236889C89E;
// Microsoft.MixedReality.QR.QRCode
struct QRCode_tCFF46F069EB07095083E7DA4B0B9C7D2B9647C32;
// Microsoft.MixedReality.SampleQRCodes.QRCode
struct QRCode_t5BE0355FE27BCDB15CE771CA9F867D075C3CCEEE;
// QRCodeObjectSpawner
struct QRCodeObjectSpawner_tE4B2BA69EF57A69EFB342CF1DB43044872261DB8;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// RightChoice
struct RightChoice_tFB70CDABBDB954FF765ABFDFED0AE8AF2B3BD0B2;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Speen
struct Speen_tC23733F35FF5F6654E636D512821E7B9B29D0C21;
// System.String
struct String_t;
// System.StringComparer
struct StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06;
// TapToSetAnchor
struct TapToSetAnchor_t09910132A62807038E275C33C99978EDE23C0D46;
// UnityEngine.TextMesh
struct TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.WaitWhile
struct WaitWhile_t6E10E586970164905286BEAB019D7F73DA661967;
// WrongChoice
struct WrongChoice_t6962D5DC5C511D63CF434C01A31C4FA3805D1E16;
// evelator_controll
struct evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF;
// pass_on_parent
struct pass_on_parent_tB2DA5725BC9B6E1AC13383CC63FD1633538ECAF2;
// Door/<CloseDoor>d__7
struct U3CCloseDoorU3Ed__7_tFBF181E1106BB100A22B136D1665D89E793AF24F;
// Door/<OpenDoor>d__6
struct U3COpenDoorU3Ed__6_t77353CD0707E1BD5A5589C9CA2A8A55E235412C6;
// Door/DoorGet
struct DoorGet_t6ED0C9FAEFC9FE5C872DFA55460B1F0AAEBB62C1;
// evelator_controll/<HandleDoorClose>d__27
struct U3CHandleDoorCloseU3Ed__27_t54856E6D2E0C9531CE3240CAB4539880B27E4A00;
// evelator_controll/<HandleDoorOpen>d__26
struct U3CHandleDoorOpenU3Ed__26_tD44811707BCFEFBA8C59037D418F40F4CA862CE5;
// evelator_controll/<executeTask>d__9
struct U3CexecuteTaskU3Ed__9_tC0D583E9B5EC90D5D6ACFA66853FA5A22E645062;

IL2CPP_EXTERN_C RuntimeClass* ChangeColourOnClick_t14DE3006C20744F7BE38358833506CB50179AD09_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t210E096E8D848E4A6979EFCDCDFF06067983278C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCloseDoorU3Ed__7_tFBF181E1106BB100A22B136D1665D89E793AF24F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CHandleDoorCloseU3Ed__27_t54856E6D2E0C9531CE3240CAB4539880B27E4A00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CHandleDoorOpenU3Ed__26_tD44811707BCFEFBA8C59037D418F40F4CA862CE5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3COpenDoorU3Ed__6_t77353CD0707E1BD5A5589C9CA2A8A55E235412C6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CexecuteTaskU3Ed__9_tC0D583E9B5EC90D5D6ACFA66853FA5A22E645062_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitWhile_t6E10E586970164905286BEAB019D7F73DA661967_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0EBD646B60E1C3FCE0203770591ED3C3D63537DC;
IL2CPP_EXTERN_C String_t* _stringLiteral1F82DB26475AB2E7EDE5F9E65AD34D94DC17B062;
IL2CPP_EXTERN_C String_t* _stringLiteral23D22DD9816CE2A9EBFAA996E424505E94A93E7E;
IL2CPP_EXTERN_C String_t* _stringLiteral2A5FA9819CF05F707F0789B4EB7EFE14E49CC856;
IL2CPP_EXTERN_C String_t* _stringLiteral30766173B4980AA34ED07077EA103DC7100374A3;
IL2CPP_EXTERN_C String_t* _stringLiteral3D714DD3E8E77A697EF557E85ED2B014A96328C5;
IL2CPP_EXTERN_C String_t* _stringLiteral3DCC6243286938BE75C3FA773B9BA71160A2E869;
IL2CPP_EXTERN_C String_t* _stringLiteral4074B8A974A76B5DEF6BA6420E61564EE2A3D5B5;
IL2CPP_EXTERN_C String_t* _stringLiteral410E5346BCA8EE150FFD507311DD85789F2E171E;
IL2CPP_EXTERN_C String_t* _stringLiteral45B2DFB825A17C8536FA89E23E2CA7A5922A08F1;
IL2CPP_EXTERN_C String_t* _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE;
IL2CPP_EXTERN_C String_t* _stringLiteral579A50C67ADB00AC3925859C23590322B2D0BE9D;
IL2CPP_EXTERN_C String_t* _stringLiteral5BDDB0457474B5EE4F7D511E9AF507AFAAC2CF6C;
IL2CPP_EXTERN_C String_t* _stringLiteral6CB05FD18E12F98F81A204339D25DD82BC993FDD;
IL2CPP_EXTERN_C String_t* _stringLiteral707E5C310990A24997793C87AABC8DC272CBFE82;
IL2CPP_EXTERN_C String_t* _stringLiteral7E70AF961A2F88ADB9DB7B9C3B5F25A532C1570A;
IL2CPP_EXTERN_C String_t* _stringLiteral9A6C98E2FC4170BD7938C091520F1C651CA916A9;
IL2CPP_EXTERN_C String_t* _stringLiteralA019FB7F17AA36A9743C530E1F11D5613B8B1158;
IL2CPP_EXTERN_C String_t* _stringLiteralAB69FA1AB6BB831506EFCAD83900FEE751E85F6F;
IL2CPP_EXTERN_C String_t* _stringLiteralB6F273CDE9DBC90FD93614A5ECB2B248E49E29BB;
IL2CPP_EXTERN_C String_t* _stringLiteralBF86C9E9E7FE0EF09A2EAE8066CDC31F859254CC;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralEF420ABFDDBDA7B9EE665D85EF62E4A437554003;
IL2CPP_EXTERN_C String_t* _stringLiteralFD60316EE3ADB7B16A998DF8AE0D68C293F6622E;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisPolygonCollider2D_t7CEFFFEE6522175436B408712B052D236889C89E_m838C3ADF8730E17B91A80DDD18BB0830E513D114_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisQRCode_t5BE0355FE27BCDB15CE771CA9F867D075C3CCEEE_mB0D3F96E96355044122E01BFE67DC3D7C49842C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m9804017B0F6F06DE8C8FAA9292240873CB450B2D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mE01750B88D9A581E9196F3444952F7592E862592_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m02EBD93D3504C0C597AEA9B25414C99A59A24522_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mFCBE8893CB88D5987B54B27820C7E86C08131F92_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mF25995B2E35F86C25B766631763384B6B9D50532_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisDoor_tE09A4D567B369BBAF1953985B48BCFE5B6ADE8BD_m32774E957F047D5E10796D539AF946EDFC3D8AEE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_Tisevelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF_m840CC5E4F3F8A5ACD2BC58857A5E311EDF87841B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_Tispass_on_parent_tB2DA5725BC9B6E1AC13383CC63FD1633538ECAF2_m9D74643FF0B8E1628E7AB369D1B89EEAF8385EA6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IMixedRealityEventSystem_RegisterHandler_TisIMixedRealityPointerHandler_t3FF57994997E4A63F923DB13BB2E304BAD383FFC_m06F808802F0315B6299A129F1DAC4C9B91544D25_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IMixedRealityEventSystem_UnregisterHandler_TisIMixedRealityPointerHandler_t3FF57994997E4A63F923DB13BB2E304BAD383FFC_mE6575C4F606C4A65976900A24B4181957466424A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m6D8717F2D45F9EDC676AD955CF53456C52A8B04A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC02F93F0313336B4B35B23DF0BDBF1D5016923EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCloseDoorU3Ed__7_System_Collections_IEnumerator_Reset_m97E82B889E6311788ED0FE681D0E6644607AB4E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CHandleDoorCloseU3Ed__27_System_Collections_IEnumerator_Reset_mF716454176B8B38F00C3698EA9074183B531DB78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CHandleDoorOpenU3Ed__26_System_Collections_IEnumerator_Reset_m091F6B4726B1F6A7C8C6E3C7D27BA5841D2549B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3COpenDoorU3Ed__6_System_Collections_IEnumerator_Reset_m1EE5E1A4039FDAD116B8F1639D49CAAA05B6FDAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CexecuteTaskU3Ed__9_System_Collections_IEnumerator_Reset_m29CAA2065BDB8858F03CCD9BEB92CFC7EFA264A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* evelator_controll_U3CexecuteTaskU3Eb__9_0_m5312AE161CA7E85B067E12042C8514E773ABEA78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* evelator_controll_U3CexecuteTaskU3Eb__9_1_mD563E75C9DD7677333AD7DB212D4C63D609C77E0_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tEA0133B78B9FF7045128C508FA50247E525A94D6* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tCC15D033281A6593E2488FAF5B205812A152AC03* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tCE6BD704B9571C131E2D8C8CED569DDEC4AE042B* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Door/DoorGet>
struct List_1_t210E096E8D848E4A6979EFCDCDFF06067983278C  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	DoorGetU5BU5D_t37C05A50C86E05574DCFD2D1AE50BAE376FB3F9C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t210E096E8D848E4A6979EFCDCDFF06067983278C_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	DoorGetU5BU5D_t37C05A50C86E05574DCFD2D1AE50BAE376FB3F9C* ___s_emptyArray_5;
};

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
};
struct Il2CppArrayBounds;

// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617  : public RuntimeObject
{
};

// Microsoft.MixedReality.QR.QRCode
struct QRCode_tCFF46F069EB07095083E7DA4B0B9C7D2B9647C32  : public RuntimeObject
{
	// Microsoft.MixedReality.QR.IQRCode Microsoft.MixedReality.QR.QRCode::_interface
	IQRCode_t5C056CCD2858DE2958CC806765605E6CBB243109* ____interface_0;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.StringComparer
struct StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06  : public RuntimeObject
{
};

struct StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_StaticFields
{
	// System.CultureAwareComparer System.StringComparer::s_invariantCulture
	CultureAwareComparer_t5822A6535A6EB4C448D1B7736067D1188BAEE8CD* ___s_invariantCulture_0;
	// System.CultureAwareComparer System.StringComparer::s_invariantCultureIgnoreCase
	CultureAwareComparer_t5822A6535A6EB4C448D1B7736067D1188BAEE8CD* ___s_invariantCultureIgnoreCase_1;
	// System.OrdinalCaseSensitiveComparer System.StringComparer::s_ordinal
	OrdinalCaseSensitiveComparer_t581CA7CB51DCF00B6012A697A4B4B3067144521A* ___s_ordinal_2;
	// System.OrdinalIgnoreCaseComparer System.StringComparer::s_ordinalIgnoreCase
	OrdinalIgnoreCaseComparer_t8BAE11990A4C855D3BCBBFB42F4EF8D45088FBB0* ___s_ordinalIgnoreCase_3;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// Door/<CloseDoor>d__7
struct U3CCloseDoorU3Ed__7_tFBF181E1106BB100A22B136D1665D89E793AF24F  : public RuntimeObject
{
	// System.Int32 Door/<CloseDoor>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Door/<CloseDoor>d__7::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Int32 Door/<CloseDoor>d__7::OpenValue
	int32_t ___OpenValue_2;
	// UnityEngine.GameObject Door/<CloseDoor>d__7::RotationOri
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___RotationOri_3;
	// System.Int32 Door/<CloseDoor>d__7::Angle
	int32_t ___Angle_4;
	// Door Door/<CloseDoor>d__7::<>4__this
	Door_tE09A4D567B369BBAF1953985B48BCFE5B6ADE8BD* ___U3CU3E4__this_5;
};

// Door/<OpenDoor>d__6
struct U3COpenDoorU3Ed__6_t77353CD0707E1BD5A5589C9CA2A8A55E235412C6  : public RuntimeObject
{
	// System.Int32 Door/<OpenDoor>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Door/<OpenDoor>d__6::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Int32 Door/<OpenDoor>d__6::Angle
	int32_t ___Angle_2;
	// UnityEngine.GameObject Door/<OpenDoor>d__6::RotationOri
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___RotationOri_3;
	// Door Door/<OpenDoor>d__6::<>4__this
	Door_tE09A4D567B369BBAF1953985B48BCFE5B6ADE8BD* ___U3CU3E4__this_4;
};

// Door/DoorGet
struct DoorGet_t6ED0C9FAEFC9FE5C872DFA55460B1F0AAEBB62C1  : public RuntimeObject
{
	// UnityEngine.GameObject Door/DoorGet::Door
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Door_0;
	// System.Int32 Door/DoorGet::CloseValue
	int32_t ___CloseValue_1;
	// System.Int32 Door/DoorGet::OpenValue
	int32_t ___OpenValue_2;
	// System.Boolean Door/DoorGet::isDoorOpen
	bool ___isDoorOpen_3;
	// UnityEngine.GameObject Door/DoorGet::RotationOrigin
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___RotationOrigin_4;
};

// evelator_controll/<HandleDoorClose>d__27
struct U3CHandleDoorCloseU3Ed__27_t54856E6D2E0C9531CE3240CAB4539880B27E4A00  : public RuntimeObject
{
	// System.Int32 evelator_controll/<HandleDoorClose>d__27::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object evelator_controll/<HandleDoorClose>d__27::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// evelator_controll evelator_controll/<HandleDoorClose>d__27::<>4__this
	evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* ___U3CU3E4__this_2;
	// System.Int32 evelator_controll/<HandleDoorClose>d__27::WhichFloor
	int32_t ___WhichFloor_3;
};

// evelator_controll/<HandleDoorOpen>d__26
struct U3CHandleDoorOpenU3Ed__26_tD44811707BCFEFBA8C59037D418F40F4CA862CE5  : public RuntimeObject
{
	// System.Int32 evelator_controll/<HandleDoorOpen>d__26::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object evelator_controll/<HandleDoorOpen>d__26::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// evelator_controll evelator_controll/<HandleDoorOpen>d__26::<>4__this
	evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* ___U3CU3E4__this_2;
	// System.Int32 evelator_controll/<HandleDoorOpen>d__26::WhichFloor
	int32_t ___WhichFloor_3;
};

// evelator_controll/<executeTask>d__9
struct U3CexecuteTaskU3Ed__9_tC0D583E9B5EC90D5D6ACFA66853FA5A22E645062  : public RuntimeObject
{
	// System.Int32 evelator_controll/<executeTask>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object evelator_controll/<executeTask>d__9::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// evelator_controll evelator_controll/<executeTask>d__9::<>4__this
	evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* ___U3CU3E4__this_2;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>
struct Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<Door/DoorGet>
struct Enumerator_tCAC05450B686FD5211A8565D4CF78008066A7351 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t210E096E8D848E4A6979EFCDCDFF06067983278C* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	DoorGet_t6ED0C9FAEFC9FE5C872DFA55460B1F0AAEBB62C1* ____current_3;
};

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F  : public AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.CultureAwareComparer
struct CultureAwareComparer_t5822A6535A6EB4C448D1B7736067D1188BAEE8CD  : public StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06
{
	// System.Globalization.CompareInfo System.CultureAwareComparer::_compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ____compareInfo_4;
	// System.Globalization.CompareOptions System.CultureAwareComparer::_options
	int32_t ____options_5;
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 
{
	// System.UInt32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::id
	uint32_t ___id_1;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::description
	String_t* ___description_2;
	// Microsoft.MixedReality.Toolkit.Utilities.AxisType Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::axisConstraint
	int32_t ___axisConstraint_3;
};

struct MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486_StaticFields
{
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::<None>k__BackingField
	MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 ___U3CNoneU3Ek__BackingField_0;
};
// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486_marshaled_pinvoke
{
	uint32_t ___id_1;
	char* ___description_2;
	int32_t ___axisConstraint_3;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486_marshaled_com
{
	uint32_t ___id_1;
	Il2CppChar* ___description_2;
	int32_t ___axisConstraint_3;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.WaitWhile
struct WaitWhile_t6E10E586970164905286BEAB019D7F73DA661967  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
	// System.Func`1<System.Boolean> UnityEngine.WaitWhile::m_Predicate
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___m_Predicate_0;
};

// Microsoft.MixedReality.Toolkit.Input.BaseInputEventData
struct BaseInputEventData_tE30935633FC3413040017EC7BB3F4D54958E5399  : public BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F
{
	// System.DateTime Microsoft.MixedReality.Toolkit.Input.BaseInputEventData::<EventTime>k__BackingField
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___U3CEventTimeU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.BaseInputEventData::<InputSource>k__BackingField
	RuntimeObject* ___U3CInputSourceU3Ek__BackingField_3;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.BaseInputEventData::<MixedRealityInputAction>k__BackingField
	MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 ___U3CMixedRealityInputActionU3Ek__BackingField_4;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D  : public RuntimeObject
{
	// System.IntPtr UnityEngine.MaterialPropertyBlock::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A  : public RuntimeObject
{
	// System.IntPtr UnityEngine.TouchScreenKeyboard::m_Ptr
	intptr_t ___m_Ptr_0;
};

struct TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A_StaticFields
{
	// System.Boolean UnityEngine.TouchScreenKeyboard::<disableInPlaceEditing>k__BackingField
	bool ___U3CdisableInPlaceEditingU3Ek__BackingField_1;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// Microsoft.MixedReality.Toolkit.Input.InputEventData
struct InputEventData_t8A56522163990B29359E0CAA56589AACA2DE2A85  : public BaseInputEventData_tE30935633FC3413040017EC7BB3F4D54958E5399
{
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.InputEventData::<Handedness>k__BackingField
	uint8_t ___U3CHandednessU3Ek__BackingField_5;
};

// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Func`1<System.Boolean>
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData
struct MixedRealityPointerEventData_t109EE708B8ACE83EA37188C65C8F120B7418AB7B  : public InputEventData_t8A56522163990B29359E0CAA56589AACA2DE2A85
{
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData::<Pointer>k__BackingField
	RuntimeObject* ___U3CPointerU3Ek__BackingField_6;
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData::<Count>k__BackingField
	int32_t ___U3CCountU3Ek__BackingField_7;
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.TextMesh
struct TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.LineRenderer
struct LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// BookMove
struct BookMove_tB09BD4EBFB43F9B825CFC57F443B6FA1846E62B2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject BookMove::bookshelve
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___bookshelve_4;
	// UnityEngine.TextMesh BookMove::text1
	TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* ___text1_5;
	// UnityEngine.TextMesh BookMove::text2
	TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* ___text2_6;
};

// ChangeColourOnClick
struct ChangeColourOnClick_t14DE3006C20744F7BE38358833506CB50179AD09  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material ChangeColourOnClick::mat
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___mat_4;
	// UnityEngine.TouchScreenKeyboard ChangeColourOnClick::keyboard
	TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A* ___keyboard_5;
};

struct ChangeColourOnClick_t14DE3006C20744F7BE38358833506CB50179AD09_StaticFields
{
	// System.String ChangeColourOnClick::keyboardText
	String_t* ___keyboardText_6;
};

// ChestClose
struct ChestClose_t3A30F76244A94C43B075D7CD4C7DE1BB3C7BBAAE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.TextMesh ChestClose::initialText
	TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* ___initialText_4;
	// UnityEngine.TextMesh ChestClose::rightText
	TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* ___rightText_5;
	// UnityEngine.TextMesh ChestClose::wrongText
	TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* ___wrongText_6;
	// UnityEngine.GameObject ChestClose::chestOpen
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___chestOpen_7;
	// UnityEngine.GameObject ChestClose::chestClose
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___chestClose_8;
};

// ChestOpen
struct ChestOpen_t5B91EC05FD8CF8A48CF6E79CD556F890849F778F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.TextMesh ChestOpen::initialText
	TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* ___initialText_4;
	// UnityEngine.TextMesh ChestOpen::rightText
	TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* ___rightText_5;
	// UnityEngine.TextMesh ChestOpen::wrongText
	TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* ___wrongText_6;
	// UnityEngine.GameObject ChestOpen::chestOpen
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___chestOpen_7;
	// UnityEngine.GameObject ChestOpen::chestClose
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___chestClose_8;
};

// Door
struct Door_tE09A4D567B369BBAF1953985B48BCFE5B6ADE8BD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<Door/DoorGet> Door::UseDoors
	List_1_t210E096E8D848E4A6979EFCDCDFF06067983278C* ___UseDoors_4;
	// System.Boolean Door::door_in_use
	bool ___door_in_use_5;
	// UnityEngine.Coroutine Door::DoorStartUsing
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___DoorStartUsing_6;
};

// DoorAction
struct DoorAction_tEC0D7043DE2006B92FBA439A8619BA64D2134E39  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Fix_elevator_fall
struct Fix_elevator_fall_t8EFF43E900C7C8D0D3BBC49E23B06E83DF65ADC9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Fix_elevator_fall::PlayerHeightLocal
	float ___PlayerHeightLocal_4;
	// System.Boolean Fix_elevator_fall::inElevator
	bool ___inElevator_5;
	// UnityEngine.GameObject Fix_elevator_fall::Player
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Player_6;
};

// GoodChoice
struct GoodChoice_t48F8DFD9F0FA97F54A0F616D7B5E6C6C725871C7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.TextMesh GoodChoice::text1
	TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* ___text1_4;
	// UnityEngine.TextMesh GoodChoice::text2
	TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* ___text2_5;
	// UnityEngine.TextMesh GoodChoice::text3
	TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* ___text3_6;
};

// MeshCopy
struct MeshCopy_t90A57DE904DA2D87772FE26FB1D9174F6003C544  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.MeshFilter MeshCopy::OriginalMesh
	MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* ___OriginalMesh_4;
	// UnityEngine.Color MeshCopy::Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___Color_5;
	// System.Single MeshCopy::Intensity
	float ___Intensity_6;
	// UnityEngine.MeshFilter MeshCopy::meshFilter
	MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* ___meshFilter_7;
	// UnityEngine.Renderer MeshCopy::rend
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___rend_8;
	// UnityEngine.Color MeshCopy::oldColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___oldColor_9;
	// System.Single MeshCopy::oldIntensity
	float ___oldIntensity_10;
	// UnityEngine.MaterialPropertyBlock MeshCopy::propBlock
	MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* ___propBlock_11;
	// System.String MeshCopy::colorProp
	String_t* ___colorProp_12;
};

// PolyWobbler
struct PolyWobbler_tD83B017DD034CC5354496A3633D2F7B564C37977  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.PolygonCollider2D PolyWobbler::Poly
	PolygonCollider2D_t7CEFFFEE6522175436B408712B052D236889C89E* ___Poly_4;
	// UnityEngine.LineRenderer PolyWobbler::LineRend
	LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* ___LineRend_5;
	// System.Single PolyWobbler::Wobbles
	float ___Wobbles_6;
	// UnityEngine.Vector2[] PolyWobbler::points
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___points_7;
};

// UnityEngine.PolygonCollider2D
struct PolygonCollider2D_t7CEFFFEE6522175436B408712B052D236889C89E  : public Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52
{
};

// Microsoft.MixedReality.SampleQRCodes.QRCode
struct QRCode_t5BE0355FE27BCDB15CE771CA9F867D075C3CCEEE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Microsoft.MixedReality.QR.QRCode Microsoft.MixedReality.SampleQRCodes.QRCode::qrCode
	QRCode_tCFF46F069EB07095083E7DA4B0B9C7D2B9647C32* ___qrCode_4;
	// UnityEngine.GameObject Microsoft.MixedReality.SampleQRCodes.QRCode::qrCodeCube
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___qrCodeCube_5;
	// System.Single Microsoft.MixedReality.SampleQRCodes.QRCode::<PhysicalSize>k__BackingField
	float ___U3CPhysicalSizeU3Ek__BackingField_6;
	// System.String Microsoft.MixedReality.SampleQRCodes.QRCode::<CodeText>k__BackingField
	String_t* ___U3CCodeTextU3Ek__BackingField_7;
	// UnityEngine.TextMesh Microsoft.MixedReality.SampleQRCodes.QRCode::QRID
	TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* ___QRID_8;
	// UnityEngine.TextMesh Microsoft.MixedReality.SampleQRCodes.QRCode::QRNodeID
	TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* ___QRNodeID_9;
	// UnityEngine.TextMesh Microsoft.MixedReality.SampleQRCodes.QRCode::QRText
	TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* ___QRText_10;
	// UnityEngine.TextMesh Microsoft.MixedReality.SampleQRCodes.QRCode::QRVersion
	TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* ___QRVersion_11;
	// UnityEngine.TextMesh Microsoft.MixedReality.SampleQRCodes.QRCode::QRTimeStamp
	TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* ___QRTimeStamp_12;
	// UnityEngine.TextMesh Microsoft.MixedReality.SampleQRCodes.QRCode::QRSize
	TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* ___QRSize_13;
	// UnityEngine.GameObject Microsoft.MixedReality.SampleQRCodes.QRCode::QRInfo
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___QRInfo_14;
	// System.Boolean Microsoft.MixedReality.SampleQRCodes.QRCode::validURI
	bool ___validURI_15;
	// System.Boolean Microsoft.MixedReality.SampleQRCodes.QRCode::launch
	bool ___launch_16;
	// System.Uri Microsoft.MixedReality.SampleQRCodes.QRCode::uriResult
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___uriResult_17;
	// System.Int64 Microsoft.MixedReality.SampleQRCodes.QRCode::lastTimeStamp
	int64_t ___lastTimeStamp_18;
};

// QRCodeObjectSpawner
struct QRCodeObjectSpawner_tE4B2BA69EF57A69EFB342CF1DB43044872261DB8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<UnityEngine.GameObject> QRCodeObjectSpawner::ARTargets
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___ARTargets_4;
	// System.Int32 QRCodeObjectSpawner::qrRemovalTimeInSeconds
	int32_t ___qrRemovalTimeInSeconds_5;
	// Microsoft.MixedReality.SampleQRCodes.QRCode QRCodeObjectSpawner::qrCode
	QRCode_t5BE0355FE27BCDB15CE771CA9F867D075C3CCEEE* ___qrCode_6;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> QRCodeObjectSpawner::nameToIndexMap
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___nameToIndexMap_7;
	// System.Boolean QRCodeObjectSpawner::haveInstantiatedContent
	bool ___haveInstantiatedContent_8;
	// UnityEngine.GameObject QRCodeObjectSpawner::coffeeMug1
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___coffeeMug1_9;
	// UnityEngine.GameObject QRCodeObjectSpawner::coffeeMug2
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___coffeeMug2_10;
	// UnityEngine.GameObject QRCodeObjectSpawner::coffeeMug3
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___coffeeMug3_11;
	// UnityEngine.GameObject QRCodeObjectSpawner::coffeeMug4
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___coffeeMug4_12;
	// UnityEngine.GameObject QRCodeObjectSpawner::bookShelve
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___bookShelve_13;
	// UnityEngine.GameObject QRCodeObjectSpawner::chest
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___chest_14;
	// UnityEngine.GameObject QRCodeObjectSpawner::clifford
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___clifford_15;
	// UnityEngine.GameObject QRCodeObjectSpawner::crawley
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___crawley_16;
	// UnityEngine.GameObject QRCodeObjectSpawner::curtains
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___curtains_17;
	// UnityEngine.GameObject QRCodeObjectSpawner::door
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___door_18;
	// UnityEngine.GameObject QRCodeObjectSpawner::qrCodeObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___qrCodeObject_19;
	// UnityEngine.GameObject QRCodeObjectSpawner::redBear
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___redBear_20;
	// UnityEngine.GameObject QRCodeObjectSpawner::bubbleGum
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___bubbleGum_21;
};

// RightChoice
struct RightChoice_tFB70CDABBDB954FF765ABFDFED0AE8AF2B3BD0B2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.TextMesh RightChoice::text1
	TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* ___text1_4;
	// UnityEngine.TextMesh RightChoice::text2
	TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* ___text2_5;
	// UnityEngine.TextMesh RightChoice::text3
	TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* ___text3_6;
};

// Speen
struct Speen_tC23733F35FF5F6654E636D512821E7B9B29D0C21  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Speen::speed
	float ___speed_4;
};

// TapToSetAnchor
struct TapToSetAnchor_t09910132A62807038E275C33C99978EDE23C0D46  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject TapToSetAnchor::ParentAnchor
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___ParentAnchor_4;
};

// WrongChoice
struct WrongChoice_t6962D5DC5C511D63CF434C01A31C4FA3805D1E16  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.TextMesh WrongChoice::text1
	TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* ___text1_4;
	// UnityEngine.TextMesh WrongChoice::text2
	TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* ___text2_5;
	// UnityEngine.TextMesh WrongChoice::text3
	TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* ___text3_6;
};

// evelator_controll
struct evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<System.Int32> evelator_controll::sequenceElevator
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___sequenceElevator_4;
	// System.Boolean evelator_controll::Elevator_in_run
	bool ___Elevator_in_run_5;
	// System.Single[] evelator_controll::FloorHighs
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___FloorHighs_6;
	// UnityEngine.GameObject evelator_controll::ElevatorCabin
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___ElevatorCabin_7;
	// UnityEngine.Coroutine evelator_controll::EvelatorDo
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___EvelatorDo_8;
	// UnityEngine.Coroutine evelator_controll::DoorOpening
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___DoorOpening_9;
	// UnityEngine.Coroutine evelator_controll::DoorClose
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___DoorClose_10;
	// System.Boolean evelator_controll::Doors_finished
	bool ___Doors_finished_11;
	// UnityEngine.GameObject[] evelator_controll::FloorNumbers
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___FloorNumbers_12;
	// System.Int32 evelator_controll::CurrentFloorNumber
	int32_t ___CurrentFloorNumber_13;
	// System.Single evelator_controll::DoorOpenTime
	float ___DoorOpenTime_14;
	// UnityEngine.GameObject[] evelator_controll::Door_outside_left
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___Door_outside_left_15;
	// System.Single[] evelator_controll::Door_outside_left_close_value
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___Door_outside_left_close_value_16;
	// System.Single[] evelator_controll::Door_outside_left_open_value
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___Door_outside_left_open_value_17;
	// UnityEngine.GameObject[] evelator_controll::Door_outside_right
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___Door_outside_right_18;
	// System.Single[] evelator_controll::Door_outside_right_close_value
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___Door_outside_right_close_value_19;
	// System.Single[] evelator_controll::Door_outside_right_open_value
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___Door_outside_right_open_value_20;
	// UnityEngine.GameObject evelator_controll::Door_inside_right
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Door_inside_right_21;
	// System.Single evelator_controll::Door_inside_right_close_value
	float ___Door_inside_right_close_value_22;
	// System.Single evelator_controll::Door_inside_right_open_value
	float ___Door_inside_right_open_value_23;
	// UnityEngine.GameObject evelator_controll::Door_inside_left
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Door_inside_left_24;
	// System.Single evelator_controll::Door_inside_left_close_value
	float ___Door_inside_left_close_value_25;
	// System.Single evelator_controll::Door_inside_left_open_value
	float ___Door_inside_left_open_value_26;
};

// pass_on_parent
struct pass_on_parent_tB2DA5725BC9B6E1AC13383CC63FD1633538ECAF2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject pass_on_parent::MyParent
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___MyParent_4;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 m_Items[1];

	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22_gshared (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Item_mA019F7A495B48EF2A6E5D36977DB3EA09A47ECDB_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m89AC42CD88BC0ED965D36B7028EF3DE23D290E1D_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___comparer0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m63897227AFA7035F1772315ABBBE7FD0A250E10C_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___key0, int32_t ___value1, const RuntimeMethod* method) ;

// UnityEngine.TouchScreenKeyboard UnityEngine.TouchScreenKeyboard::Open(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A* TouchScreenKeyboard_Open_m72992A73197C360A65B194A61C920DF296102275 (String_t* ___text0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Door/DoorGet>::GetEnumerator()
inline Enumerator_tCAC05450B686FD5211A8565D4CF78008066A7351 List_1_GetEnumerator_m6D8717F2D45F9EDC676AD955CF53456C52A8B04A (List_1_t210E096E8D848E4A6979EFCDCDFF06067983278C* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tCAC05450B686FD5211A8565D4CF78008066A7351 (*) (List_1_t210E096E8D848E4A6979EFCDCDFF06067983278C*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Door/DoorGet>::Dispose()
inline void Enumerator_Dispose_m02EBD93D3504C0C597AEA9B25414C99A59A24522 (Enumerator_tCAC05450B686FD5211A8565D4CF78008066A7351* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tCAC05450B686FD5211A8565D4CF78008066A7351*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Door/DoorGet>::get_Current()
inline DoorGet_t6ED0C9FAEFC9FE5C872DFA55460B1F0AAEBB62C1* Enumerator_get_Current_mF25995B2E35F86C25B766631763384B6B9D50532_inline (Enumerator_tCAC05450B686FD5211A8565D4CF78008066A7351* __this, const RuntimeMethod* method)
{
	return ((  DoorGet_t6ED0C9FAEFC9FE5C872DFA55460B1F0AAEBB62C1* (*) (Enumerator_tCAC05450B686FD5211A8565D4CF78008066A7351*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Door::OpenDoor(System.Int32,UnityEngine.GameObject,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Door_OpenDoor_m6C2FD94B8ACBA2B83ED36CB0A369A3267FCF3534 (Door_tE09A4D567B369BBAF1953985B48BCFE5B6ADE8BD* __this, int32_t ___Angle0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___currentDoor1, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___RotationOri2, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Door::CloseDoor(System.Int32,UnityEngine.GameObject,System.Int32,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Door_CloseDoor_m354FEBECA34552B69163ABE587DD97676C9BB5DA (Door_tE09A4D567B369BBAF1953985B48BCFE5B6ADE8BD* __this, int32_t ___Angle0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___currentDoor1, int32_t ___OpenValue2, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___RotationOri3, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Door/DoorGet>::MoveNext()
inline bool Enumerator_MoveNext_mFCBE8893CB88D5987B54B27820C7E86C08131F92 (Enumerator_tCAC05450B686FD5211A8565D4CF78008066A7351* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tCAC05450B686FD5211A8565D4CF78008066A7351*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<Door>()
inline Door_tE09A4D567B369BBAF1953985B48BCFE5B6ADE8BD* GameObject_GetComponent_TisDoor_tE09A4D567B369BBAF1953985B48BCFE5B6ADE8BD_m32774E957F047D5E10796D539AF946EDFC3D8AEE (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Door_tE09A4D567B369BBAF1953985B48BCFE5B6ADE8BD* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void Door::MoveMyDoor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Door_MoveMyDoor_mB9F437363DB157ADB8A5607F5D59FF648DC273B5 (Door_tE09A4D567B369BBAF1953985B48BCFE5B6ADE8BD* __this, const RuntimeMethod* method) ;
// System.Void Door/<OpenDoor>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COpenDoorU3Ed__6__ctor_mC4CD4F43303019E32999663F3D308D6ADCEE4A10 (U3COpenDoorU3Ed__6_t77353CD0707E1BD5A5589C9CA2A8A55E235412C6* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void Door/<CloseDoor>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCloseDoorU3Ed__7__ctor_m20D3746260FDC4D1F71520012D62F5BEA342A629 (U3CCloseDoorU3Ed__7_tFBF181E1106BB100A22B136D1665D89E793AF24F* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Door/DoorGet>::.ctor()
inline void List_1__ctor_mC02F93F0313336B4B35B23DF0BDBF1D5016923EF (List_1_t210E096E8D848E4A6979EFCDCDFF06067983278C* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t210E096E8D848E4A6979EFCDCDFF06067983278C*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___eulers0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localEulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(UnityEngine.Coroutine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_mB0FC91BE84203BD8E360B3FBAE5B958B4C5ED22A (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___routine0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localEulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2 (int32_t ___key0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::TransformDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_TransformDirection_m9BE1261DF2D48B7A4A27D31EE24D2D97F89E7757 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m1B27F500505FFB57D78548B9F5A540A2AD092903 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___origin0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction1, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo2, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.RaycastHit::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Component::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void Door::ActionDoor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Door_ActionDoor_mE43518F82CA2F0AEC532DBAF25886E068E8F6525 (Door_tE09A4D567B369BBAF1953985B48BCFE5B6ADE8BD* __this, const RuntimeMethod* method) ;
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<pass_on_parent>()
inline pass_on_parent_tB2DA5725BC9B6E1AC13383CC63FD1633538ECAF2* GameObject_GetComponent_Tispass_on_parent_tB2DA5725BC9B6E1AC13383CC63FD1633538ECAF2_m9D74643FF0B8E1628E7AB369D1B89EEAF8385EA6 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  pass_on_parent_tB2DA5725BC9B6E1AC13383CC63FD1633538ECAF2* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<evelator_controll>()
inline evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* GameObject_GetComponent_Tisevelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF_m840CC5E4F3F8A5ACD2BC58857A5E311EDF87841B (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void evelator_controll::AddTaskEve(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void evelator_controll_AddTaskEve_mE6176416DC75459431BD32CFD5AB3F7F9C2DF5F3 (evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
inline void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline)(__this, ___item0, method);
}
// System.Collections.IEnumerator evelator_controll::executeTask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* evelator_controll_executeTask_m68A271C45D19B71C565AA6718B9248AA364CCF0C (evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* __this, const RuntimeMethod* method) ;
// System.Void evelator_controll/<executeTask>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CexecuteTaskU3Ed__9__ctor_m67FC7024C8B36377BE1E8B8F04A35ED7AE0FCE82 (U3CexecuteTaskU3Ed__9_tC0D583E9B5EC90D5D6ACFA66853FA5A22E645062* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(T)
inline void List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.GameObject>::GetEnumerator()
inline Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::Dispose()
inline void Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::get_Current()
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::MoveNext()
inline bool Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27 (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void evelator_controll/<HandleDoorOpen>d__26::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHandleDoorOpenU3Ed__26__ctor_mD6D4C7F074A8F1C0DCBB95332B0C6BE2B7FDE03F (U3CHandleDoorOpenU3Ed__26_tD44811707BCFEFBA8C59037D418F40F4CA862CE5* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void evelator_controll/<HandleDoorClose>d__27::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHandleDoorCloseU3Ed__27__ctor_mE5C20F5EB41D9F9F39D93DF14B547523B7564BA9 (U3CHandleDoorCloseU3Ed__27_t54856E6D2E0C9531CE3240CAB4539880B27E4A00* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
inline void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared)(__this, method);
}
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
inline int32_t List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_gshared)(__this, ___index0, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
inline int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___translation0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator evelator_controll::HandleDoorOpen(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* evelator_controll_HandleDoorOpen_mA3D82AC8F11F77FA54D8229B0A4737BA443A0FBC (evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* __this, int32_t ___WhichFloor0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004_gshared)(__this, ___index0, method);
}
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22 (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.WaitWhile::.ctor(System.Func`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitWhile__ctor_mF803B2F3BC88135FEA9024F6C51E7267A7E7B82C (WaitWhile_t6E10E586970164905286BEAB019D7F73DA661967* __this, Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___predicate0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// System.Void evelator_controll::ChangeFloorNumbers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void evelator_controll_ChangeFloorNumbers_m0548BCC2B3D885E64730AC274A8367853C6A126C (evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator evelator_controll::HandleDoorClose(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* evelator_controll_HandleDoorClose_m4ED163069A06E0824B34B3E172944484C6D20852 (evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* __this, int32_t ___WhichFloor0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void QRCodeObjectSpawner::DisableAllGameObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QRCodeObjectSpawner_DisableAllGameObjects_m9E63CE5ED46D44FD3FD8CE787029C92E0058E712 (QRCodeObjectSpawner_tE4B2BA69EF57A69EFB342CF1DB43044872261DB8* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Microsoft.MixedReality.SampleQRCodes.QRCode>()
inline QRCode_t5BE0355FE27BCDB15CE771CA9F867D075C3CCEEE* Component_GetComponent_TisQRCode_t5BE0355FE27BCDB15CE771CA9F867D075C3CCEEE_mB0D3F96E96355044122E01BFE67DC3D7C49842C4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  QRCode_t5BE0355FE27BCDB15CE771CA9F867D075C3CCEEE* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.String Microsoft.MixedReality.QR.QRCode::get_Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* QRCode_get_Data_m1E9F8E43A89CAC755421CB70AA8F6D659CA40246 (QRCode_tCFF46F069EB07095083E7DA4B0B9C7D2B9647C32* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Int32>::get_Item(TKey)
inline int32_t Dictionary_2_get_Item_mE01750B88D9A581E9196F3444952F7592E862592 (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_mA019F7A495B48EF2A6E5D36977DB3EA09A47ECDB_gshared)(__this, ___key0, method);
}
// System.StringComparer System.StringComparer::get_InvariantCultureIgnoreCase()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* StringComparer_get_InvariantCultureIgnoreCase_m736E26B9A455C50799BF69D87F2E076C272337B1_inline (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
inline void Dictionary_2__ctor_m9804017B0F6F06DE8C8FAA9292240873CB450B2D (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m89AC42CD88BC0ED965D36B7028EF3DE23D290E1D_gshared)(__this, ___comparer0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue)
inline void Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883 (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* __this, String_t* ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588*, String_t*, int32_t, const RuntimeMethod*))Dictionary_2_Add_m63897227AFA7035F1772315ABBBE7FD0A250E10C_gshared)(__this, ___key0, ___value1, method);
}
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem Microsoft.MixedReality.Toolkit.CoreServices::get_InputSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CoreServices_get_InputSystem_m09CC5207090321051B3C092D5BA21F2858DCD607 (const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_FindGameObjectWithTag_mF0229BC2074CE9EEA72FAB1E5A4BC2AEC3D2CDBE (String_t* ___tag0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void MeshCopy::CheckReferences()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshCopy_CheckReferences_m246AD294F51225DBDE46C32943A2417AEBEB80DC (MeshCopy_t90A57DE904DA2D87772FE26FB1D9174F6003C544* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// UnityEngine.Mesh UnityEngine.MeshFilter::get_sharedMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* MeshFilter_get_sharedMesh_mE4ED3E7E31C1DE5097E4980DA996E620F7D7CB8C (MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MeshFilter::set_sharedMesh(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshFilter_set_sharedMesh_m946F7E3F583761982642BDA4753784AF1DF6E16F (MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___value0, const RuntimeMethod* method) ;
// System.Void MeshCopy::UpdateColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshCopy_UpdateColor_m14EBE561EA691C816A7987CC23916C6898650DD9 (MeshCopy_t90A57DE904DA2D87772FE26FB1D9174F6003C544* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.MeshFilter>()
inline MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.MaterialPropertyBlock::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialPropertyBlock__ctor_m14C3432585F7BB65028BCD64A0FD6607A1B490FB (MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Color::op_Inequality(UnityEngine.Color,UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Color_op_Inequality_mF1C733BA10E60B086AB950A71143678AE76C4D92_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___lhs0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___rhs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::GetPropertyBlock(UnityEngine.MaterialPropertyBlock)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_GetPropertyBlock_mD062F90343D70151CA060AE7EBEF2E85146A9FBA (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* ___properties0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::op_Multiply(UnityEngine.Color,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_op_Multiply_m379B20A820266ACF82A21425B9CAE8DCD773CFBB_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.MaterialPropertyBlock::SetColor(System.String,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialPropertyBlock_SetColor_m5B4E910B5E42518BBD0088055EB68E4A3A609DDE (MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* __this, String_t* ___name0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::SetPropertyBlock(UnityEngine.MaterialPropertyBlock)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_SetPropertyBlock_mF565698782FE54580B17CC0BFF9B0C4F0D68DF50 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* ___properties0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_black()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline (const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.PolygonCollider2D>()
inline PolygonCollider2D_t7CEFFFEE6522175436B408712B052D236889C89E* Component_GetComponent_TisPolygonCollider2D_t7CEFFFEE6522175436B408712B052D236889C89E_m838C3ADF8730E17B91A80DDD18BB0830E513D114 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  PolygonCollider2D_t7CEFFFEE6522175436B408712B052D236889C89E* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.LineRenderer>()
inline LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Vector2[] UnityEngine.PolygonCollider2D::GetPath(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* PolygonCollider2D_GetPath_mE9D53D83FBB110EAC748BA535A1659C262B50F50 (PolygonCollider2D_t7CEFFFEE6522175436B408712B052D236889C89E* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void UnityEngine.LineRenderer::set_positionCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_positionCount_m2001FB4044053895ECBE897AB833284F3300B205 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, int32_t ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Random::get_insideUnitCircle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Random_get_insideUnitCircle_mB2FE9BAA7DDF7FED2AA53EA4667F864747E20DA2 (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// System.Void UnityEngine.LineRenderer::SetPosition(System.Int32,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_SetPosition_m84C4AD9ADC6AC62B33DB4D7E4C9F066DFF8440C1 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, int32_t ___index0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, const RuntimeMethod* method) ;
// System.Void UnityEngine.PolygonCollider2D::SetPath(System.Int32,UnityEngine.Vector2[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PolygonCollider2D_SetPath_mDF03B6FDAE81E25C985F9BA6D372D949A6D9A1C1 (PolygonCollider2D_t7CEFFFEE6522175436B408712B052D236889C89E* __this, int32_t ___index0, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___points1, const RuntimeMethod* method) ;
// System.Void HardLight2DManager::RefreshColliderReference(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HardLight2DManager_RefreshColliderReference_m43FFBAFE6BA4180726713E536DE9EF791DEE39A0 (Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collider0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m35B44707FE16FF8015D519D8C162C0B4A85D6D1F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis0, float ___angle1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_ToEulerRad(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_ToEulerRad_m5BD0EEC543120C320DC77FCCDFD2CE2E6BD3F1A8 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_MakePositive(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_MakePositive_m73E2D01920CB0DFE661A55022C129E8617F0C9A8 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Color::op_Equality(UnityEngine.Color,UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Color_op_Equality_mB2BDC39B0B367BA15AA8DF22F8CB0D02D20BDC71_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___lhs0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___rhs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Color::op_Implicit(UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Color_op_Implicit_m9B3228DAFA8DC57A75DE00CBBF13ED4F1E7B01FF_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___c0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector4::op_Equality(UnityEngine.Vector4,UnityEngine.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_op_Equality_mCEA0E5F229F4AE8C55152F7A8F84345F24F52DC6_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___lhs0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___rhs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ChangeColourOnClick::changeToRed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeColourOnClick_changeToRed_mFB82A877708609C7AD5607AA59BF6EA3C8F25DE7 (ChangeColourOnClick_t14DE3006C20744F7BE38358833506CB50179AD09* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6F273CDE9DBC90FD93614A5ECB2B248E49E29BB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// keyboard = TouchScreenKeyboard.Open("text to edit");
		TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A* L_0;
		L_0 = TouchScreenKeyboard_Open_m72992A73197C360A65B194A61C920DF296102275(_stringLiteralB6F273CDE9DBC90FD93614A5ECB2B248E49E29BB, NULL);
		__this->___keyboard_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___keyboard_5), (void*)L_0);
		// }
		return;
	}
}
// System.Void ChangeColourOnClick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeColourOnClick__ctor_mF2444402B56DC7344C944C950D621914CA36CC85 (ChangeColourOnClick_t14DE3006C20744F7BE38358833506CB50179AD09* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void ChangeColourOnClick::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeColourOnClick__cctor_mEA005A56F674EFC4E8EA1FCCC872A6065BCE4C34 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChangeColourOnClick_t14DE3006C20744F7BE38358833506CB50179AD09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static string keyboardText = "";
		((ChangeColourOnClick_t14DE3006C20744F7BE38358833506CB50179AD09_StaticFields*)il2cpp_codegen_static_fields_for(ChangeColourOnClick_t14DE3006C20744F7BE38358833506CB50179AD09_il2cpp_TypeInfo_var))->___keyboardText_6 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&((ChangeColourOnClick_t14DE3006C20744F7BE38358833506CB50179AD09_StaticFields*)il2cpp_codegen_static_fields_for(ChangeColourOnClick_t14DE3006C20744F7BE38358833506CB50179AD09_il2cpp_TypeInfo_var))->___keyboardText_6), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Door::MoveMyDoor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Door_MoveMyDoor_mB9F437363DB157ADB8A5607F5D59FF648DC273B5 (Door_tE09A4D567B369BBAF1953985B48BCFE5B6ADE8BD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m02EBD93D3504C0C597AEA9B25414C99A59A24522_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mFCBE8893CB88D5987B54B27820C7E86C08131F92_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mF25995B2E35F86C25B766631763384B6B9D50532_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m6D8717F2D45F9EDC676AD955CF53456C52A8B04A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tCAC05450B686FD5211A8565D4CF78008066A7351 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DoorGet_t6ED0C9FAEFC9FE5C872DFA55460B1F0AAEBB62C1* V_1 = NULL;
	{
		// foreach (var door in UseDoors)
		List_1_t210E096E8D848E4A6979EFCDCDFF06067983278C* L_0 = __this->___UseDoors_4;
		NullCheck(L_0);
		Enumerator_tCAC05450B686FD5211A8565D4CF78008066A7351 L_1;
		L_1 = List_1_GetEnumerator_m6D8717F2D45F9EDC676AD955CF53456C52A8B04A(L_0, List_1_GetEnumerator_m6D8717F2D45F9EDC676AD955CF53456C52A8B04A_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00c7:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m02EBD93D3504C0C597AEA9B25414C99A59A24522((&V_0), Enumerator_Dispose_m02EBD93D3504C0C597AEA9B25414C99A59A24522_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00b9_1;
			}

IL_0011_1:
			{
				// foreach (var door in UseDoors)
				DoorGet_t6ED0C9FAEFC9FE5C872DFA55460B1F0AAEBB62C1* L_2;
				L_2 = Enumerator_get_Current_mF25995B2E35F86C25B766631763384B6B9D50532_inline((&V_0), Enumerator_get_Current_mF25995B2E35F86C25B766631763384B6B9D50532_RuntimeMethod_var);
				V_1 = L_2;
				// if (door.Door == gameObject)
				DoorGet_t6ED0C9FAEFC9FE5C872DFA55460B1F0AAEBB62C1* L_3 = V_1;
				NullCheck(L_3);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = L_3->___Door_0;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
				L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_6;
				L_6 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_4, L_5, NULL);
				if (!L_6)
				{
					goto IL_00b9_1;
				}
			}
			{
				// if (door.isDoorOpen == false && !door_in_use)
				DoorGet_t6ED0C9FAEFC9FE5C872DFA55460B1F0AAEBB62C1* L_7 = V_1;
				NullCheck(L_7);
				bool L_8 = L_7->___isDoorOpen_3;
				if (L_8)
				{
					goto IL_0071_1;
				}
			}
			{
				bool L_9 = __this->___door_in_use_5;
				if (L_9)
				{
					goto IL_0071_1;
				}
			}
			{
				// door_in_use = true;
				__this->___door_in_use_5 = (bool)1;
				// door.isDoorOpen = true;
				DoorGet_t6ED0C9FAEFC9FE5C872DFA55460B1F0AAEBB62C1* L_10 = V_1;
				NullCheck(L_10);
				L_10->___isDoorOpen_3 = (bool)1;
				// DoorStartUsing = StartCoroutine(OpenDoor(door.OpenValue, door.Door,door.RotationOrigin));
				DoorGet_t6ED0C9FAEFC9FE5C872DFA55460B1F0AAEBB62C1* L_11 = V_1;
				NullCheck(L_11);
				int32_t L_12 = L_11->___OpenValue_2;
				DoorGet_t6ED0C9FAEFC9FE5C872DFA55460B1F0AAEBB62C1* L_13 = V_1;
				NullCheck(L_13);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = L_13->___Door_0;
				DoorGet_t6ED0C9FAEFC9FE5C872DFA55460B1F0AAEBB62C1* L_15 = V_1;
				NullCheck(L_15);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = L_15->___RotationOrigin_4;
				RuntimeObject* L_17;
				L_17 = Door_OpenDoor_m6C2FD94B8ACBA2B83ED36CB0A369A3267FCF3534(__this, L_12, L_14, L_16, NULL);
				Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_18;
				L_18 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_17, NULL);
				__this->___DoorStartUsing_6 = L_18;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___DoorStartUsing_6), (void*)L_18);
			}

IL_0071_1:
			{
				// if (door.isDoorOpen == true && !door_in_use)
				DoorGet_t6ED0C9FAEFC9FE5C872DFA55460B1F0AAEBB62C1* L_19 = V_1;
				NullCheck(L_19);
				bool L_20 = L_19->___isDoorOpen_3;
				if (!L_20)
				{
					goto IL_00b9_1;
				}
			}
			{
				bool L_21 = __this->___door_in_use_5;
				if (L_21)
				{
					goto IL_00b9_1;
				}
			}
			{
				// door_in_use = true;
				__this->___door_in_use_5 = (bool)1;
				// door.isDoorOpen = false;
				DoorGet_t6ED0C9FAEFC9FE5C872DFA55460B1F0AAEBB62C1* L_22 = V_1;
				NullCheck(L_22);
				L_22->___isDoorOpen_3 = (bool)0;
				// DoorStartUsing = StartCoroutine(CloseDoor(door.CloseValue, door.Door,door.OpenValue,door.RotationOrigin));
				DoorGet_t6ED0C9FAEFC9FE5C872DFA55460B1F0AAEBB62C1* L_23 = V_1;
				NullCheck(L_23);
				int32_t L_24 = L_23->___CloseValue_1;
				DoorGet_t6ED0C9FAEFC9FE5C872DFA55460B1F0AAEBB62C1* L_25 = V_1;
				NullCheck(L_25);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = L_25->___Door_0;
				DoorGet_t6ED0C9FAEFC9FE5C872DFA55460B1F0AAEBB62C1* L_27 = V_1;
				NullCheck(L_27);
				int32_t L_28 = L_27->___OpenValue_2;
				DoorGet_t6ED0C9FAEFC9FE5C872DFA55460B1F0AAEBB62C1* L_29 = V_1;
				NullCheck(L_29);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = L_29->___RotationOrigin_4;
				RuntimeObject* L_31;
				L_31 = Door_CloseDoor_m354FEBECA34552B69163ABE587DD97676C9BB5DA(__this, L_24, L_26, L_28, L_30, NULL);
				Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_32;
				L_32 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_31, NULL);
				__this->___DoorStartUsing_6 = L_32;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___DoorStartUsing_6), (void*)L_32);
			}

IL_00b9_1:
			{
				// foreach (var door in UseDoors)
				bool L_33;
				L_33 = Enumerator_MoveNext_mFCBE8893CB88D5987B54B27820C7E86C08131F92((&V_0), Enumerator_MoveNext_mFCBE8893CB88D5987B54B27820C7E86C08131F92_RuntimeMethod_var);
				if (L_33)
				{
					goto IL_0011_1;
				}
			}
			{
				goto IL_00d5;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00d5:
	{
		// }
		return;
	}
}
// System.Void Door::ActionDoor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Door_ActionDoor_mE43518F82CA2F0AEC532DBAF25886E068E8F6525 (Door_tE09A4D567B369BBAF1953985B48BCFE5B6ADE8BD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m02EBD93D3504C0C597AEA9B25414C99A59A24522_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mFCBE8893CB88D5987B54B27820C7E86C08131F92_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mF25995B2E35F86C25B766631763384B6B9D50532_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisDoor_tE09A4D567B369BBAF1953985B48BCFE5B6ADE8BD_m32774E957F047D5E10796D539AF946EDFC3D8AEE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m6D8717F2D45F9EDC676AD955CF53456C52A8B04A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tCAC05450B686FD5211A8565D4CF78008066A7351 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// foreach (var door in UseDoors)
		List_1_t210E096E8D848E4A6979EFCDCDFF06067983278C* L_0 = __this->___UseDoors_4;
		NullCheck(L_0);
		Enumerator_tCAC05450B686FD5211A8565D4CF78008066A7351 L_1;
		L_1 = List_1_GetEnumerator_m6D8717F2D45F9EDC676AD955CF53456C52A8B04A(L_0, List_1_GetEnumerator_m6D8717F2D45F9EDC676AD955CF53456C52A8B04A_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002f:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m02EBD93D3504C0C597AEA9B25414C99A59A24522((&V_0), Enumerator_Dispose_m02EBD93D3504C0C597AEA9B25414C99A59A24522_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0024_1;
			}

IL_000e_1:
			{
				// foreach (var door in UseDoors)
				DoorGet_t6ED0C9FAEFC9FE5C872DFA55460B1F0AAEBB62C1* L_2;
				L_2 = Enumerator_get_Current_mF25995B2E35F86C25B766631763384B6B9D50532_inline((&V_0), Enumerator_get_Current_mF25995B2E35F86C25B766631763384B6B9D50532_RuntimeMethod_var);
				// door.Door.GetComponent<Door>().MoveMyDoor();
				NullCheck(L_2);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = L_2->___Door_0;
				NullCheck(L_3);
				Door_tE09A4D567B369BBAF1953985B48BCFE5B6ADE8BD* L_4;
				L_4 = GameObject_GetComponent_TisDoor_tE09A4D567B369BBAF1953985B48BCFE5B6ADE8BD_m32774E957F047D5E10796D539AF946EDFC3D8AEE(L_3, GameObject_GetComponent_TisDoor_tE09A4D567B369BBAF1953985B48BCFE5B6ADE8BD_m32774E957F047D5E10796D539AF946EDFC3D8AEE_RuntimeMethod_var);
				NullCheck(L_4);
				Door_MoveMyDoor_mB9F437363DB157ADB8A5607F5D59FF648DC273B5(L_4, NULL);
			}

IL_0024_1:
			{
				// foreach (var door in UseDoors)
				bool L_5;
				L_5 = Enumerator_MoveNext_mFCBE8893CB88D5987B54B27820C7E86C08131F92((&V_0), Enumerator_MoveNext_mFCBE8893CB88D5987B54B27820C7E86C08131F92_RuntimeMethod_var);
				if (L_5)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_003d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003d:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator Door::OpenDoor(System.Int32,UnityEngine.GameObject,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Door_OpenDoor_m6C2FD94B8ACBA2B83ED36CB0A369A3267FCF3534 (Door_tE09A4D567B369BBAF1953985B48BCFE5B6ADE8BD* __this, int32_t ___Angle0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___currentDoor1, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___RotationOri2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3COpenDoorU3Ed__6_t77353CD0707E1BD5A5589C9CA2A8A55E235412C6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3COpenDoorU3Ed__6_t77353CD0707E1BD5A5589C9CA2A8A55E235412C6* L_0 = (U3COpenDoorU3Ed__6_t77353CD0707E1BD5A5589C9CA2A8A55E235412C6*)il2cpp_codegen_object_new(U3COpenDoorU3Ed__6_t77353CD0707E1BD5A5589C9CA2A8A55E235412C6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3COpenDoorU3Ed__6__ctor_mC4CD4F43303019E32999663F3D308D6ADCEE4A10(L_0, 0, NULL);
		U3COpenDoorU3Ed__6_t77353CD0707E1BD5A5589C9CA2A8A55E235412C6* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_4), (void*)__this);
		U3COpenDoorU3Ed__6_t77353CD0707E1BD5A5589C9CA2A8A55E235412C6* L_2 = L_1;
		int32_t L_3 = ___Angle0;
		NullCheck(L_2);
		L_2->___Angle_2 = L_3;
		U3COpenDoorU3Ed__6_t77353CD0707E1BD5A5589C9CA2A8A55E235412C6* L_4 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = ___RotationOri2;
		NullCheck(L_4);
		L_4->___RotationOri_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___RotationOri_3), (void*)L_5);
		return L_4;
	}
}
// System.Collections.IEnumerator Door::CloseDoor(System.Int32,UnityEngine.GameObject,System.Int32,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Door_CloseDoor_m354FEBECA34552B69163ABE587DD97676C9BB5DA (Door_tE09A4D567B369BBAF1953985B48BCFE5B6ADE8BD* __this, int32_t ___Angle0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___currentDoor1, int32_t ___OpenValue2, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___RotationOri3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCloseDoorU3Ed__7_tFBF181E1106BB100A22B136D1665D89E793AF24F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCloseDoorU3Ed__7_tFBF181E1106BB100A22B136D1665D89E793AF24F* L_0 = (U3CCloseDoorU3Ed__7_tFBF181E1106BB100A22B136D1665D89E793AF24F*)il2cpp_codegen_object_new(U3CCloseDoorU3Ed__7_tFBF181E1106BB100A22B136D1665D89E793AF24F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CCloseDoorU3Ed__7__ctor_m20D3746260FDC4D1F71520012D62F5BEA342A629(L_0, 0, NULL);
		U3CCloseDoorU3Ed__7_tFBF181E1106BB100A22B136D1665D89E793AF24F* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_5 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_5), (void*)__this);
		U3CCloseDoorU3Ed__7_tFBF181E1106BB100A22B136D1665D89E793AF24F* L_2 = L_1;
		int32_t L_3 = ___Angle0;
		NullCheck(L_2);
		L_2->___Angle_4 = L_3;
		U3CCloseDoorU3Ed__7_tFBF181E1106BB100A22B136D1665D89E793AF24F* L_4 = L_2;
		int32_t L_5 = ___OpenValue2;
		NullCheck(L_4);
		L_4->___OpenValue_2 = L_5;
		U3CCloseDoorU3Ed__7_tFBF181E1106BB100A22B136D1665D89E793AF24F* L_6 = L_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = ___RotationOri3;
		NullCheck(L_6);
		L_6->___RotationOri_3 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___RotationOri_3), (void*)L_7);
		return L_6;
	}
}
// System.Void Door::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Door__ctor_m3D2DF383E9B8EE863AD8F8421F0DF83F5B35EAB1 (Door_tE09A4D567B369BBAF1953985B48BCFE5B6ADE8BD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC02F93F0313336B4B35B23DF0BDBF1D5016923EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t210E096E8D848E4A6979EFCDCDFF06067983278C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<DoorGet> UseDoors = new List<DoorGet>();
		List_1_t210E096E8D848E4A6979EFCDCDFF06067983278C* L_0 = (List_1_t210E096E8D848E4A6979EFCDCDFF06067983278C*)il2cpp_codegen_object_new(List_1_t210E096E8D848E4A6979EFCDCDFF06067983278C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mC02F93F0313336B4B35B23DF0BDBF1D5016923EF(L_0, List_1__ctor_mC02F93F0313336B4B35B23DF0BDBF1D5016923EF_RuntimeMethod_var);
		__this->___UseDoors_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___UseDoors_4), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Door/DoorGet::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoorGet__ctor_mF10D4DEFA7797E14487A418C4B51DFA9CF43C885 (DoorGet_t6ED0C9FAEFC9FE5C872DFA55460B1F0AAEBB62C1* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Door/<OpenDoor>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COpenDoorU3Ed__6__ctor_mC4CD4F43303019E32999663F3D308D6ADCEE4A10 (U3COpenDoorU3Ed__6_t77353CD0707E1BD5A5589C9CA2A8A55E235412C6* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Door/<OpenDoor>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COpenDoorU3Ed__6_System_IDisposable_Dispose_mF6F61F36E5BE1C715700600F653C222D5410E277 (U3COpenDoorU3Ed__6_t77353CD0707E1BD5A5589C9CA2A8A55E235412C6* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Door/<OpenDoor>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3COpenDoorU3Ed__6_MoveNext_m73FCC5ADA5591D94F587C96140E66A4E026864CD (U3COpenDoorU3Ed__6_t77353CD0707E1BD5A5589C9CA2A8A55E235412C6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Door_tE09A4D567B369BBAF1953985B48BCFE5B6ADE8BD* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Door_tE09A4D567B369BBAF1953985B48BCFE5B6ADE8BD* L_1 = __this->___U3CU3E4__this_4;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_001e:
	{
		// yield return new WaitForSeconds(0.01f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, (0.00999999978f), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0037:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (Angle > 0)
		int32_t L_5 = __this->___Angle_2;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_00c3;
		}
	}
	{
		// RotationOri.transform.Rotate(new Vector3(0, 0, 95 * Time.deltaTime));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___RotationOri_3;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		float L_8;
		L_8 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), (0.0f), (0.0f), ((float)il2cpp_codegen_multiply((95.0f), L_8)), /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE(L_7, L_9, NULL);
		// if (Angle < RotationOri.transform.localEulerAngles.z)
		int32_t L_10 = __this->___Angle_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___RotationOri_3;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_11, NULL);
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6(L_12, NULL);
		float L_14 = L_13.___z_4;
		if ((!(((float)((float)L_10)) < ((float)L_14))))
		{
			goto IL_00a2;
		}
	}
	{
		// door_in_use = false;
		Door_tE09A4D567B369BBAF1953985B48BCFE5B6ADE8BD* L_15 = V_1;
		NullCheck(L_15);
		L_15->___door_in_use_5 = (bool)0;
		// StopCoroutine(DoorStartUsing);
		Door_tE09A4D567B369BBAF1953985B48BCFE5B6ADE8BD* L_16 = V_1;
		Door_tE09A4D567B369BBAF1953985B48BCFE5B6ADE8BD* L_17 = V_1;
		NullCheck(L_17);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_18 = L_17->___DoorStartUsing_6;
		NullCheck(L_16);
		MonoBehaviour_StopCoroutine_mB0FC91BE84203BD8E360B3FBAE5B958B4C5ED22A(L_16, L_18, NULL);
	}

IL_00a2:
	{
		// if (Angle != RotationOri.transform.localEulerAngles.y)
		int32_t L_19 = __this->___Angle_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = __this->___RotationOri_3;
		NullCheck(L_20);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_20, NULL);
		NullCheck(L_21);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6(L_21, NULL);
		float L_23 = L_22.___y_3;
		if ((!(((float)((float)L_19)) == ((float)L_23))))
		{
			goto IL_001e;
		}
	}

IL_00c3:
	{
		// if (Angle < 0)
		int32_t L_24 = __this->___Angle_2;
		if ((((int32_t)L_24) >= ((int32_t)0)))
		{
			goto IL_0151;
		}
	}
	{
		// RotationOri.transform.Rotate(new Vector3(0, 0, -95 * Time.deltaTime));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = __this->___RotationOri_3;
		NullCheck(L_25);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_25, NULL);
		float L_27;
		L_27 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		memset((&L_28), 0, sizeof(L_28));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_28), (0.0f), (0.0f), ((float)il2cpp_codegen_multiply((-95.0f), L_27)), /*hidden argument*/NULL);
		NullCheck(L_26);
		Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE(L_26, L_28, NULL);
		// if ((360+Angle) > RotationOri.transform.localEulerAngles.z)
		int32_t L_29 = __this->___Angle_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = __this->___RotationOri_3;
		NullCheck(L_30);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_30, NULL);
		NullCheck(L_31);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6(L_31, NULL);
		float L_33 = L_32.___z_4;
		if ((!(((float)((float)((int32_t)il2cpp_codegen_add(((int32_t)360), L_29)))) > ((float)L_33))))
		{
			goto IL_0130;
		}
	}
	{
		// door_in_use = false;
		Door_tE09A4D567B369BBAF1953985B48BCFE5B6ADE8BD* L_34 = V_1;
		NullCheck(L_34);
		L_34->___door_in_use_5 = (bool)0;
		// StopCoroutine(DoorStartUsing);
		Door_tE09A4D567B369BBAF1953985B48BCFE5B6ADE8BD* L_35 = V_1;
		Door_tE09A4D567B369BBAF1953985B48BCFE5B6ADE8BD* L_36 = V_1;
		NullCheck(L_36);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_37 = L_36->___DoorStartUsing_6;
		NullCheck(L_35);
		MonoBehaviour_StopCoroutine_mB0FC91BE84203BD8E360B3FBAE5B958B4C5ED22A(L_35, L_37, NULL);
	}

IL_0130:
	{
		// if (Angle != RotationOri.transform.localEulerAngles.y)
		int32_t L_38 = __this->___Angle_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_39 = __this->___RotationOri_3;
		NullCheck(L_39);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40;
		L_40 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_39, NULL);
		NullCheck(L_40);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6(L_40, NULL);
		float L_42 = L_41.___y_3;
		if ((!(((float)((float)L_38)) == ((float)L_42))))
		{
			goto IL_001e;
		}
	}

IL_0151:
	{
		// }
		return (bool)0;
	}
}
// System.Object Door/<OpenDoor>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3COpenDoorU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mA96811C5C81CF86E659AE7D28ED621F5A51F5416 (U3COpenDoorU3Ed__6_t77353CD0707E1BD5A5589C9CA2A8A55E235412C6* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Door/<OpenDoor>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COpenDoorU3Ed__6_System_Collections_IEnumerator_Reset_m1EE5E1A4039FDAD116B8F1639D49CAAA05B6FDAB (U3COpenDoorU3Ed__6_t77353CD0707E1BD5A5589C9CA2A8A55E235412C6* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3COpenDoorU3Ed__6_System_Collections_IEnumerator_Reset_m1EE5E1A4039FDAD116B8F1639D49CAAA05B6FDAB_RuntimeMethod_var)));
	}
}
// System.Object Door/<OpenDoor>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3COpenDoorU3Ed__6_System_Collections_IEnumerator_get_Current_m53780293F8797B37DABA282034406EF053446780 (U3COpenDoorU3Ed__6_t77353CD0707E1BD5A5589C9CA2A8A55E235412C6* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Door/<CloseDoor>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCloseDoorU3Ed__7__ctor_m20D3746260FDC4D1F71520012D62F5BEA342A629 (U3CCloseDoorU3Ed__7_tFBF181E1106BB100A22B136D1665D89E793AF24F* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Door/<CloseDoor>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCloseDoorU3Ed__7_System_IDisposable_Dispose_m98EB47FA15A8CE22F78DDC23F3F5CE11897028CD (U3CCloseDoorU3Ed__7_tFBF181E1106BB100A22B136D1665D89E793AF24F* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Door/<CloseDoor>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCloseDoorU3Ed__7_MoveNext_m8E49BB19B55BD92A5E86D39026871D78A1403F55 (U3CCloseDoorU3Ed__7_tFBF181E1106BB100A22B136D1665D89E793AF24F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Door_tE09A4D567B369BBAF1953985B48BCFE5B6ADE8BD* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Door_tE09A4D567B369BBAF1953985B48BCFE5B6ADE8BD* L_1 = __this->___U3CU3E4__this_5;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_001e:
	{
		// yield return new WaitForSeconds(0.008f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, (0.00800000038f), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0037:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (OpenValue == 88)
		int32_t L_5 = __this->___OpenValue_2;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)88)))))
		{
			goto IL_010f;
		}
	}
	{
		// RotationOri.transform.Rotate(new Vector3(0, 0, -95 * Time.deltaTime));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___RotationOri_3;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		float L_8;
		L_8 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), (0.0f), (0.0f), ((float)il2cpp_codegen_multiply((-95.0f), L_8)), /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE(L_7, L_9, NULL);
		// if ((Angle+2) > RotationOri.transform.localEulerAngles.z)
		int32_t L_10 = __this->___Angle_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___RotationOri_3;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_11, NULL);
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6(L_12, NULL);
		float L_14 = L_13.___z_4;
		if ((!(((float)((float)((int32_t)il2cpp_codegen_add(L_10, 2)))) > ((float)L_14))))
		{
			goto IL_00ee;
		}
	}
	{
		// door_in_use = false;
		Door_tE09A4D567B369BBAF1953985B48BCFE5B6ADE8BD* L_15 = V_1;
		NullCheck(L_15);
		L_15->___door_in_use_5 = (bool)0;
		// RotationOri.transform.localEulerAngles = new Vector3(RotationOri.transform.localEulerAngles.x, RotationOri.transform.localEulerAngles.y, Angle);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = __this->___RotationOri_3;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_16, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = __this->___RotationOri_3;
		NullCheck(L_18);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_18, NULL);
		NullCheck(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6(L_19, NULL);
		float L_21 = L_20.___x_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = __this->___RotationOri_3;
		NullCheck(L_22);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_22, NULL);
		NullCheck(L_23);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6(L_23, NULL);
		float L_25 = L_24.___y_3;
		int32_t L_26 = __this->___Angle_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		memset((&L_27), 0, sizeof(L_27));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_27), L_21, L_25, ((float)L_26), /*hidden argument*/NULL);
		NullCheck(L_17);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_17, L_27, NULL);
		// StopCoroutine(DoorStartUsing);
		Door_tE09A4D567B369BBAF1953985B48BCFE5B6ADE8BD* L_28 = V_1;
		Door_tE09A4D567B369BBAF1953985B48BCFE5B6ADE8BD* L_29 = V_1;
		NullCheck(L_29);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_30 = L_29->___DoorStartUsing_6;
		NullCheck(L_28);
		MonoBehaviour_StopCoroutine_mB0FC91BE84203BD8E360B3FBAE5B958B4C5ED22A(L_28, L_30, NULL);
	}

IL_00ee:
	{
		// if (Angle != RotationOri.transform.localEulerAngles.z)
		int32_t L_31 = __this->___Angle_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32 = __this->___RotationOri_3;
		NullCheck(L_32);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33;
		L_33 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_32, NULL);
		NullCheck(L_33);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6(L_33, NULL);
		float L_35 = L_34.___z_4;
		if ((!(((float)((float)L_31)) == ((float)L_35))))
		{
			goto IL_001e;
		}
	}

IL_010f:
	{
		// if (OpenValue == -88)
		int32_t L_36 = __this->___OpenValue_2;
		if ((!(((uint32_t)L_36) == ((uint32_t)((int32_t)-88)))))
		{
			goto IL_01dc;
		}
	}
	{
		// RotationOri.transform.Rotate(new Vector3(0, 0, 95 * Time.deltaTime));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37 = __this->___RotationOri_3;
		NullCheck(L_37);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_38;
		L_38 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_37, NULL);
		float L_39;
		L_39 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		memset((&L_40), 0, sizeof(L_40));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_40), (0.0f), (0.0f), ((float)il2cpp_codegen_multiply((95.0f), L_39)), /*hidden argument*/NULL);
		NullCheck(L_38);
		Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE(L_38, L_40, NULL);
		// if (RotationOri.transform.localEulerAngles.z > 358)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_41 = __this->___RotationOri_3;
		NullCheck(L_41);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42;
		L_42 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_41, NULL);
		NullCheck(L_42);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6(L_42, NULL);
		float L_44 = L_43.___z_4;
		if ((!(((float)L_44) > ((float)(358.0f)))))
		{
			goto IL_01bb;
		}
	}
	{
		// door_in_use = false;
		Door_tE09A4D567B369BBAF1953985B48BCFE5B6ADE8BD* L_45 = V_1;
		NullCheck(L_45);
		L_45->___door_in_use_5 = (bool)0;
		// RotationOri.transform.localEulerAngles = new Vector3(RotationOri.transform.localEulerAngles.x, RotationOri.transform.localEulerAngles.y, Angle);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_46 = __this->___RotationOri_3;
		NullCheck(L_46);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_47;
		L_47 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_46, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_48 = __this->___RotationOri_3;
		NullCheck(L_48);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_49;
		L_49 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_48, NULL);
		NullCheck(L_49);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50;
		L_50 = Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6(L_49, NULL);
		float L_51 = L_50.___x_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_52 = __this->___RotationOri_3;
		NullCheck(L_52);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_53;
		L_53 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_52, NULL);
		NullCheck(L_53);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54;
		L_54 = Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6(L_53, NULL);
		float L_55 = L_54.___y_3;
		int32_t L_56 = __this->___Angle_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57;
		memset((&L_57), 0, sizeof(L_57));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_57), L_51, L_55, ((float)L_56), /*hidden argument*/NULL);
		NullCheck(L_47);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_47, L_57, NULL);
		// StopCoroutine(DoorStartUsing);
		Door_tE09A4D567B369BBAF1953985B48BCFE5B6ADE8BD* L_58 = V_1;
		Door_tE09A4D567B369BBAF1953985B48BCFE5B6ADE8BD* L_59 = V_1;
		NullCheck(L_59);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_60 = L_59->___DoorStartUsing_6;
		NullCheck(L_58);
		MonoBehaviour_StopCoroutine_mB0FC91BE84203BD8E360B3FBAE5B958B4C5ED22A(L_58, L_60, NULL);
	}

IL_01bb:
	{
		// if (Angle != RotationOri.transform.localEulerAngles.z)
		int32_t L_61 = __this->___Angle_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_62 = __this->___RotationOri_3;
		NullCheck(L_62);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_63;
		L_63 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_62, NULL);
		NullCheck(L_63);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64;
		L_64 = Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6(L_63, NULL);
		float L_65 = L_64.___z_4;
		if ((!(((float)((float)L_61)) == ((float)L_65))))
		{
			goto IL_001e;
		}
	}

IL_01dc:
	{
		// if (Angle != RotationOri.transform.localEulerAngles.z)
		int32_t L_66 = __this->___Angle_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_67 = __this->___RotationOri_3;
		NullCheck(L_67);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_68;
		L_68 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_67, NULL);
		NullCheck(L_68);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69;
		L_69 = Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6(L_68, NULL);
		float L_70 = L_69.___z_4;
		if ((!(((float)((float)L_66)) == ((float)L_70))))
		{
			goto IL_001e;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object Door/<CloseDoor>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCloseDoorU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m0FA4F3987005502EACF6E31B4C71FBB3B6A39548 (U3CCloseDoorU3Ed__7_tFBF181E1106BB100A22B136D1665D89E793AF24F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Door/<CloseDoor>d__7::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCloseDoorU3Ed__7_System_Collections_IEnumerator_Reset_m97E82B889E6311788ED0FE681D0E6644607AB4E3 (U3CCloseDoorU3Ed__7_tFBF181E1106BB100A22B136D1665D89E793AF24F* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCloseDoorU3Ed__7_System_Collections_IEnumerator_Reset_m97E82B889E6311788ED0FE681D0E6644607AB4E3_RuntimeMethod_var)));
	}
}
// System.Object Door/<CloseDoor>d__7::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCloseDoorU3Ed__7_System_Collections_IEnumerator_get_Current_mD762A3105C8416DA10002F3C67C1D236C9BA13EA (U3CCloseDoorU3Ed__7_tFBF181E1106BB100A22B136D1665D89E793AF24F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DoorAction::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoorAction_Update_mEAB30527CF173A485CF07E7A77AE1518C7C33231 (DoorAction_tEC0D7043DE2006B92FBA439A8619BA64D2134E39* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisDoor_tE09A4D567B369BBAF1953985B48BCFE5B6ADE8BD_m32774E957F047D5E10796D539AF946EDFC3D8AEE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_Tisevelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF_m840CC5E4F3F8A5ACD2BC58857A5E311EDF87841B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_Tispass_on_parent_tB2DA5725BC9B6E1AC13383CC63FD1633538ECAF2_m9D74643FF0B8E1628E7AB369D1B89EEAF8385EA6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1F82DB26475AB2E7EDE5F9E65AD34D94DC17B062);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23D22DD9816CE2A9EBFAA996E424505E94A93E7E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A5FA9819CF05F707F0789B4EB7EFE14E49CC856);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4074B8A974A76B5DEF6BA6420E61564EE2A3D5B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral45B2DFB825A17C8536FA89E23E2CA7A5922A08F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BDDB0457474B5EE4F7D511E9AF507AFAAC2CF6C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9A6C98E2FC4170BD7938C091520F1C651CA916A9);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (Input.GetKeyDown(KeyCode.E))
		bool L_0;
		L_0 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)101), NULL);
		if (!L_0)
		{
			goto IL_01e9;
		}
	}
	{
		// Physics.Raycast(transform.position,transform.TransformDirection(Vector3.forward), out hit);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_TransformDirection_m9BE1261DF2D48B7A4A27D31EE24D2D97F89E7757(L_3, L_4, NULL);
		bool L_6;
		L_6 = Physics_Raycast_m1B27F500505FFB57D78548B9F5A540A2AD092903(L_2, L_5, (&V_0), NULL);
		// if (hit.transform.tag == "door")
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155((&V_0), NULL);
		NullCheck(L_7);
		String_t* L_8;
		L_8 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_7, NULL);
		bool L_9;
		L_9 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_8, _stringLiteral45B2DFB825A17C8536FA89E23E2CA7A5922A08F1, NULL);
		if (!L_9)
		{
			goto IL_005d;
		}
	}
	{
		// hit.transform.gameObject.GetComponent<Door>().ActionDoor();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155((&V_0), NULL);
		NullCheck(L_10);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_10, NULL);
		NullCheck(L_11);
		Door_tE09A4D567B369BBAF1953985B48BCFE5B6ADE8BD* L_12;
		L_12 = GameObject_GetComponent_TisDoor_tE09A4D567B369BBAF1953985B48BCFE5B6ADE8BD_m32774E957F047D5E10796D539AF946EDFC3D8AEE(L_11, GameObject_GetComponent_TisDoor_tE09A4D567B369BBAF1953985B48BCFE5B6ADE8BD_m32774E957F047D5E10796D539AF946EDFC3D8AEE_RuntimeMethod_var);
		NullCheck(L_12);
		Door_ActionDoor_mE43518F82CA2F0AEC532DBAF25886E068E8F6525(L_12, NULL);
	}

IL_005d:
	{
		// if(hit.collider.gameObject.name == "Button floor 1")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_13;
		L_13 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_0), NULL);
		NullCheck(L_13);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_13, NULL);
		NullCheck(L_14);
		String_t* L_15;
		L_15 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_14, NULL);
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral4074B8A974A76B5DEF6BA6420E61564EE2A3D5B5, NULL);
		if (!L_16)
		{
			goto IL_009f;
		}
	}
	{
		// hit.transform.gameObject.GetComponent<pass_on_parent>().MyParent.GetComponent<evelator_controll>().AddTaskEve("Button floor 1");
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155((&V_0), NULL);
		NullCheck(L_17);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18;
		L_18 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_17, NULL);
		NullCheck(L_18);
		pass_on_parent_tB2DA5725BC9B6E1AC13383CC63FD1633538ECAF2* L_19;
		L_19 = GameObject_GetComponent_Tispass_on_parent_tB2DA5725BC9B6E1AC13383CC63FD1633538ECAF2_m9D74643FF0B8E1628E7AB369D1B89EEAF8385EA6(L_18, GameObject_GetComponent_Tispass_on_parent_tB2DA5725BC9B6E1AC13383CC63FD1633538ECAF2_m9D74643FF0B8E1628E7AB369D1B89EEAF8385EA6_RuntimeMethod_var);
		NullCheck(L_19);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = L_19->___MyParent_4;
		NullCheck(L_20);
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_21;
		L_21 = GameObject_GetComponent_Tisevelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF_m840CC5E4F3F8A5ACD2BC58857A5E311EDF87841B(L_20, GameObject_GetComponent_Tisevelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF_m840CC5E4F3F8A5ACD2BC58857A5E311EDF87841B_RuntimeMethod_var);
		NullCheck(L_21);
		evelator_controll_AddTaskEve_mE6176416DC75459431BD32CFD5AB3F7F9C2DF5F3(L_21, _stringLiteral4074B8A974A76B5DEF6BA6420E61564EE2A3D5B5, NULL);
	}

IL_009f:
	{
		// if (hit.collider.gameObject.name == "Button floor 2")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_22;
		L_22 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_0), NULL);
		NullCheck(L_22);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23;
		L_23 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_22, NULL);
		NullCheck(L_23);
		String_t* L_24;
		L_24 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_23, NULL);
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral2A5FA9819CF05F707F0789B4EB7EFE14E49CC856, NULL);
		if (!L_25)
		{
			goto IL_00e1;
		}
	}
	{
		// hit.transform.gameObject.GetComponent<pass_on_parent>().MyParent.GetComponent<evelator_controll>().AddTaskEve("Button floor 2");
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155((&V_0), NULL);
		NullCheck(L_26);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27;
		L_27 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_26, NULL);
		NullCheck(L_27);
		pass_on_parent_tB2DA5725BC9B6E1AC13383CC63FD1633538ECAF2* L_28;
		L_28 = GameObject_GetComponent_Tispass_on_parent_tB2DA5725BC9B6E1AC13383CC63FD1633538ECAF2_m9D74643FF0B8E1628E7AB369D1B89EEAF8385EA6(L_27, GameObject_GetComponent_Tispass_on_parent_tB2DA5725BC9B6E1AC13383CC63FD1633538ECAF2_m9D74643FF0B8E1628E7AB369D1B89EEAF8385EA6_RuntimeMethod_var);
		NullCheck(L_28);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29 = L_28->___MyParent_4;
		NullCheck(L_29);
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_30;
		L_30 = GameObject_GetComponent_Tisevelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF_m840CC5E4F3F8A5ACD2BC58857A5E311EDF87841B(L_29, GameObject_GetComponent_Tisevelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF_m840CC5E4F3F8A5ACD2BC58857A5E311EDF87841B_RuntimeMethod_var);
		NullCheck(L_30);
		evelator_controll_AddTaskEve_mE6176416DC75459431BD32CFD5AB3F7F9C2DF5F3(L_30, _stringLiteral2A5FA9819CF05F707F0789B4EB7EFE14E49CC856, NULL);
	}

IL_00e1:
	{
		// if (hit.collider.gameObject.name == "Button floor 3")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_31;
		L_31 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_0), NULL);
		NullCheck(L_31);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32;
		L_32 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_31, NULL);
		NullCheck(L_32);
		String_t* L_33;
		L_33 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_32, NULL);
		bool L_34;
		L_34 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_33, _stringLiteral9A6C98E2FC4170BD7938C091520F1C651CA916A9, NULL);
		if (!L_34)
		{
			goto IL_0123;
		}
	}
	{
		// hit.transform.gameObject.GetComponent<pass_on_parent>().MyParent.GetComponent<evelator_controll>().AddTaskEve("Button floor 3");
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35;
		L_35 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155((&V_0), NULL);
		NullCheck(L_35);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36;
		L_36 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_35, NULL);
		NullCheck(L_36);
		pass_on_parent_tB2DA5725BC9B6E1AC13383CC63FD1633538ECAF2* L_37;
		L_37 = GameObject_GetComponent_Tispass_on_parent_tB2DA5725BC9B6E1AC13383CC63FD1633538ECAF2_m9D74643FF0B8E1628E7AB369D1B89EEAF8385EA6(L_36, GameObject_GetComponent_Tispass_on_parent_tB2DA5725BC9B6E1AC13383CC63FD1633538ECAF2_m9D74643FF0B8E1628E7AB369D1B89EEAF8385EA6_RuntimeMethod_var);
		NullCheck(L_37);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_38 = L_37->___MyParent_4;
		NullCheck(L_38);
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_39;
		L_39 = GameObject_GetComponent_Tisevelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF_m840CC5E4F3F8A5ACD2BC58857A5E311EDF87841B(L_38, GameObject_GetComponent_Tisevelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF_m840CC5E4F3F8A5ACD2BC58857A5E311EDF87841B_RuntimeMethod_var);
		NullCheck(L_39);
		evelator_controll_AddTaskEve_mE6176416DC75459431BD32CFD5AB3F7F9C2DF5F3(L_39, _stringLiteral9A6C98E2FC4170BD7938C091520F1C651CA916A9, NULL);
	}

IL_0123:
	{
		// if (hit.collider.gameObject.name == "Button floor 4")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_40;
		L_40 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_0), NULL);
		NullCheck(L_40);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_41;
		L_41 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_40, NULL);
		NullCheck(L_41);
		String_t* L_42;
		L_42 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_41, NULL);
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteral23D22DD9816CE2A9EBFAA996E424505E94A93E7E, NULL);
		if (!L_43)
		{
			goto IL_0165;
		}
	}
	{
		// hit.transform.gameObject.GetComponent<pass_on_parent>().MyParent.GetComponent<evelator_controll>().AddTaskEve("Button floor 4");
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_44;
		L_44 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155((&V_0), NULL);
		NullCheck(L_44);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_45;
		L_45 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_44, NULL);
		NullCheck(L_45);
		pass_on_parent_tB2DA5725BC9B6E1AC13383CC63FD1633538ECAF2* L_46;
		L_46 = GameObject_GetComponent_Tispass_on_parent_tB2DA5725BC9B6E1AC13383CC63FD1633538ECAF2_m9D74643FF0B8E1628E7AB369D1B89EEAF8385EA6(L_45, GameObject_GetComponent_Tispass_on_parent_tB2DA5725BC9B6E1AC13383CC63FD1633538ECAF2_m9D74643FF0B8E1628E7AB369D1B89EEAF8385EA6_RuntimeMethod_var);
		NullCheck(L_46);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_47 = L_46->___MyParent_4;
		NullCheck(L_47);
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_48;
		L_48 = GameObject_GetComponent_Tisevelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF_m840CC5E4F3F8A5ACD2BC58857A5E311EDF87841B(L_47, GameObject_GetComponent_Tisevelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF_m840CC5E4F3F8A5ACD2BC58857A5E311EDF87841B_RuntimeMethod_var);
		NullCheck(L_48);
		evelator_controll_AddTaskEve_mE6176416DC75459431BD32CFD5AB3F7F9C2DF5F3(L_48, _stringLiteral23D22DD9816CE2A9EBFAA996E424505E94A93E7E, NULL);
	}

IL_0165:
	{
		// if (hit.collider.gameObject.name == "Button floor 5")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_49;
		L_49 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_0), NULL);
		NullCheck(L_49);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_50;
		L_50 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_49, NULL);
		NullCheck(L_50);
		String_t* L_51;
		L_51 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_50, NULL);
		bool L_52;
		L_52 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_51, _stringLiteral5BDDB0457474B5EE4F7D511E9AF507AFAAC2CF6C, NULL);
		if (!L_52)
		{
			goto IL_01a7;
		}
	}
	{
		// hit.transform.gameObject.GetComponent<pass_on_parent>().MyParent.GetComponent<evelator_controll>().AddTaskEve("Button floor 5");
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_53;
		L_53 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155((&V_0), NULL);
		NullCheck(L_53);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_54;
		L_54 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_53, NULL);
		NullCheck(L_54);
		pass_on_parent_tB2DA5725BC9B6E1AC13383CC63FD1633538ECAF2* L_55;
		L_55 = GameObject_GetComponent_Tispass_on_parent_tB2DA5725BC9B6E1AC13383CC63FD1633538ECAF2_m9D74643FF0B8E1628E7AB369D1B89EEAF8385EA6(L_54, GameObject_GetComponent_Tispass_on_parent_tB2DA5725BC9B6E1AC13383CC63FD1633538ECAF2_m9D74643FF0B8E1628E7AB369D1B89EEAF8385EA6_RuntimeMethod_var);
		NullCheck(L_55);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_56 = L_55->___MyParent_4;
		NullCheck(L_56);
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_57;
		L_57 = GameObject_GetComponent_Tisevelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF_m840CC5E4F3F8A5ACD2BC58857A5E311EDF87841B(L_56, GameObject_GetComponent_Tisevelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF_m840CC5E4F3F8A5ACD2BC58857A5E311EDF87841B_RuntimeMethod_var);
		NullCheck(L_57);
		evelator_controll_AddTaskEve_mE6176416DC75459431BD32CFD5AB3F7F9C2DF5F3(L_57, _stringLiteral5BDDB0457474B5EE4F7D511E9AF507AFAAC2CF6C, NULL);
	}

IL_01a7:
	{
		// if (hit.collider.gameObject.name == "Button floor 6")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_58;
		L_58 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_0), NULL);
		NullCheck(L_58);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_59;
		L_59 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_58, NULL);
		NullCheck(L_59);
		String_t* L_60;
		L_60 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_59, NULL);
		bool L_61;
		L_61 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_60, _stringLiteral1F82DB26475AB2E7EDE5F9E65AD34D94DC17B062, NULL);
		if (!L_61)
		{
			goto IL_01e9;
		}
	}
	{
		// hit.transform.gameObject.GetComponent<pass_on_parent>().MyParent.GetComponent<evelator_controll>().AddTaskEve("Button floor 6");
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_62;
		L_62 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155((&V_0), NULL);
		NullCheck(L_62);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_63;
		L_63 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_62, NULL);
		NullCheck(L_63);
		pass_on_parent_tB2DA5725BC9B6E1AC13383CC63FD1633538ECAF2* L_64;
		L_64 = GameObject_GetComponent_Tispass_on_parent_tB2DA5725BC9B6E1AC13383CC63FD1633538ECAF2_m9D74643FF0B8E1628E7AB369D1B89EEAF8385EA6(L_63, GameObject_GetComponent_Tispass_on_parent_tB2DA5725BC9B6E1AC13383CC63FD1633538ECAF2_m9D74643FF0B8E1628E7AB369D1B89EEAF8385EA6_RuntimeMethod_var);
		NullCheck(L_64);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_65 = L_64->___MyParent_4;
		NullCheck(L_65);
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_66;
		L_66 = GameObject_GetComponent_Tisevelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF_m840CC5E4F3F8A5ACD2BC58857A5E311EDF87841B(L_65, GameObject_GetComponent_Tisevelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF_m840CC5E4F3F8A5ACD2BC58857A5E311EDF87841B_RuntimeMethod_var);
		NullCheck(L_66);
		evelator_controll_AddTaskEve_mE6176416DC75459431BD32CFD5AB3F7F9C2DF5F3(L_66, _stringLiteral1F82DB26475AB2E7EDE5F9E65AD34D94DC17B062, NULL);
	}

IL_01e9:
	{
		// }
		return;
	}
}
// System.Void DoorAction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoorAction__ctor_mAF79804052D581DE1BF4F3665E6A9C6153E2C95E (DoorAction_tEC0D7043DE2006B92FBA439A8619BA64D2134E39* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void evelator_controll::AddTaskEve(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void evelator_controll_AddTaskEve_mE6176416DC75459431BD32CFD5AB3F7F9C2DF5F3 (evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1F82DB26475AB2E7EDE5F9E65AD34D94DC17B062);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23D22DD9816CE2A9EBFAA996E424505E94A93E7E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A5FA9819CF05F707F0789B4EB7EFE14E49CC856);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4074B8A974A76B5DEF6BA6420E61564EE2A3D5B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BDDB0457474B5EE4F7D511E9AF507AFAAC2CF6C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9A6C98E2FC4170BD7938C091520F1C651CA916A9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (name == "Button floor 1")
		String_t* L_0 = ___name0;
		bool L_1;
		L_1 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, _stringLiteral4074B8A974A76B5DEF6BA6420E61564EE2A3D5B5, NULL);
		if (!L_1)
		{
			goto IL_003a;
		}
	}
	{
		// sequenceElevator.Add(0);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_2 = __this->___sequenceElevator_4;
		NullCheck(L_2);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_2, 0, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// if (!Elevator_in_run)
		bool L_3 = __this->___Elevator_in_run_5;
		if (L_3)
		{
			goto IL_003a;
		}
	}
	{
		// Elevator_in_run = true;
		__this->___Elevator_in_run_5 = (bool)1;
		// EvelatorDo = StartCoroutine(executeTask());
		RuntimeObject* L_4;
		L_4 = evelator_controll_executeTask_m68A271C45D19B71C565AA6718B9248AA364CCF0C(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_5;
		L_5 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_4, NULL);
		__this->___EvelatorDo_8 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___EvelatorDo_8), (void*)L_5);
	}

IL_003a:
	{
		// if (name == "Button floor 2")
		String_t* L_6 = ___name0;
		bool L_7;
		L_7 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_6, _stringLiteral2A5FA9819CF05F707F0789B4EB7EFE14E49CC856, NULL);
		if (!L_7)
		{
			goto IL_0074;
		}
	}
	{
		// sequenceElevator.Add(1);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_8 = __this->___sequenceElevator_4;
		NullCheck(L_8);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_8, 1, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// if (!Elevator_in_run)
		bool L_9 = __this->___Elevator_in_run_5;
		if (L_9)
		{
			goto IL_0074;
		}
	}
	{
		// Elevator_in_run = true;
		__this->___Elevator_in_run_5 = (bool)1;
		// EvelatorDo = StartCoroutine(executeTask());
		RuntimeObject* L_10;
		L_10 = evelator_controll_executeTask_m68A271C45D19B71C565AA6718B9248AA364CCF0C(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_11;
		L_11 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_10, NULL);
		__this->___EvelatorDo_8 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___EvelatorDo_8), (void*)L_11);
	}

IL_0074:
	{
		// if (name == "Button floor 3")
		String_t* L_12 = ___name0;
		bool L_13;
		L_13 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_12, _stringLiteral9A6C98E2FC4170BD7938C091520F1C651CA916A9, NULL);
		if (!L_13)
		{
			goto IL_00ae;
		}
	}
	{
		// sequenceElevator.Add(2);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_14 = __this->___sequenceElevator_4;
		NullCheck(L_14);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_14, 2, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// if (!Elevator_in_run)
		bool L_15 = __this->___Elevator_in_run_5;
		if (L_15)
		{
			goto IL_00ae;
		}
	}
	{
		// Elevator_in_run = true;
		__this->___Elevator_in_run_5 = (bool)1;
		// EvelatorDo = StartCoroutine(executeTask());
		RuntimeObject* L_16;
		L_16 = evelator_controll_executeTask_m68A271C45D19B71C565AA6718B9248AA364CCF0C(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_17;
		L_17 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_16, NULL);
		__this->___EvelatorDo_8 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___EvelatorDo_8), (void*)L_17);
	}

IL_00ae:
	{
		// if (name == "Button floor 4")
		String_t* L_18 = ___name0;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral23D22DD9816CE2A9EBFAA996E424505E94A93E7E, NULL);
		if (!L_19)
		{
			goto IL_00e8;
		}
	}
	{
		// sequenceElevator.Add(3);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_20 = __this->___sequenceElevator_4;
		NullCheck(L_20);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_20, 3, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// if (!Elevator_in_run)
		bool L_21 = __this->___Elevator_in_run_5;
		if (L_21)
		{
			goto IL_00e8;
		}
	}
	{
		// Elevator_in_run = true;
		__this->___Elevator_in_run_5 = (bool)1;
		// EvelatorDo = StartCoroutine(executeTask());
		RuntimeObject* L_22;
		L_22 = evelator_controll_executeTask_m68A271C45D19B71C565AA6718B9248AA364CCF0C(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_23;
		L_23 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_22, NULL);
		__this->___EvelatorDo_8 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___EvelatorDo_8), (void*)L_23);
	}

IL_00e8:
	{
		// if (name == "Button floor 5")
		String_t* L_24 = ___name0;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral5BDDB0457474B5EE4F7D511E9AF507AFAAC2CF6C, NULL);
		if (!L_25)
		{
			goto IL_0122;
		}
	}
	{
		// sequenceElevator.Add(4);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_26 = __this->___sequenceElevator_4;
		NullCheck(L_26);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_26, 4, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// if (!Elevator_in_run)
		bool L_27 = __this->___Elevator_in_run_5;
		if (L_27)
		{
			goto IL_0122;
		}
	}
	{
		// Elevator_in_run = true;
		__this->___Elevator_in_run_5 = (bool)1;
		// EvelatorDo = StartCoroutine(executeTask());
		RuntimeObject* L_28;
		L_28 = evelator_controll_executeTask_m68A271C45D19B71C565AA6718B9248AA364CCF0C(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_29;
		L_29 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_28, NULL);
		__this->___EvelatorDo_8 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___EvelatorDo_8), (void*)L_29);
	}

IL_0122:
	{
		// if (name == "Button floor 6")
		String_t* L_30 = ___name0;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral1F82DB26475AB2E7EDE5F9E65AD34D94DC17B062, NULL);
		if (!L_31)
		{
			goto IL_015c;
		}
	}
	{
		// sequenceElevator.Add(5);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_32 = __this->___sequenceElevator_4;
		NullCheck(L_32);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_32, 5, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// if (!Elevator_in_run)
		bool L_33 = __this->___Elevator_in_run_5;
		if (L_33)
		{
			goto IL_015c;
		}
	}
	{
		// Elevator_in_run = true;
		__this->___Elevator_in_run_5 = (bool)1;
		// EvelatorDo = StartCoroutine(executeTask());
		RuntimeObject* L_34;
		L_34 = evelator_controll_executeTask_m68A271C45D19B71C565AA6718B9248AA364CCF0C(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_35;
		L_35 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_34, NULL);
		__this->___EvelatorDo_8 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___EvelatorDo_8), (void*)L_35);
	}

IL_015c:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator evelator_controll::executeTask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* evelator_controll_executeTask_m68A271C45D19B71C565AA6718B9248AA364CCF0C (evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CexecuteTaskU3Ed__9_tC0D583E9B5EC90D5D6ACFA66853FA5A22E645062_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CexecuteTaskU3Ed__9_tC0D583E9B5EC90D5D6ACFA66853FA5A22E645062* L_0 = (U3CexecuteTaskU3Ed__9_tC0D583E9B5EC90D5D6ACFA66853FA5A22E645062*)il2cpp_codegen_object_new(U3CexecuteTaskU3Ed__9_tC0D583E9B5EC90D5D6ACFA66853FA5A22E645062_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CexecuteTaskU3Ed__9__ctor_m67FC7024C8B36377BE1E8B8F04A35ED7AE0FCE82(L_0, 0, NULL);
		U3CexecuteTaskU3Ed__9_tC0D583E9B5EC90D5D6ACFA66853FA5A22E645062* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void evelator_controll::ChangeFloorNumbers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void evelator_controll_ChangeFloorNumbers_m0548BCC2B3D885E64730AC274A8367853C6A126C (evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_0 = NULL;
	int32_t V_1 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* V_3 = NULL;
	int32_t V_4 = 0;
	Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// if ((ElevatorCabin.transform.localPosition.y) < FloorHighs[0] + 0.1f && (ElevatorCabin.transform.localPosition.y) > FloorHighs[0] - 0.1f)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___ElevatorCabin_7;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_1, NULL);
		float L_3 = L_2.___y_3;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = __this->___FloorHighs_6;
		NullCheck(L_4);
		int32_t L_5 = 0;
		float L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		if ((!(((float)L_3) < ((float)((float)il2cpp_codegen_add(L_6, (0.100000001f)))))))
		{
			goto IL_0051;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___ElevatorCabin_7;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_7, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_8, NULL);
		float L_10 = L_9.___y_3;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_11 = __this->___FloorHighs_6;
		NullCheck(L_11);
		int32_t L_12 = 0;
		float L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		if ((!(((float)L_10) > ((float)((float)il2cpp_codegen_subtract(L_13, (0.100000001f)))))))
		{
			goto IL_0051;
		}
	}
	{
		// CurrentFloorNumber = 1;
		__this->___CurrentFloorNumber_13 = 1;
	}

IL_0051:
	{
		// if ((ElevatorCabin.transform.localPosition.y) < FloorHighs[1] + 0.1f && (ElevatorCabin.transform.localPosition.y) > FloorHighs[1] - 0.1f)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___ElevatorCabin_7;
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_14, NULL);
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_15, NULL);
		float L_17 = L_16.___y_3;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_18 = __this->___FloorHighs_6;
		NullCheck(L_18);
		int32_t L_19 = 1;
		float L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		if ((!(((float)L_17) < ((float)((float)il2cpp_codegen_add(L_20, (0.100000001f)))))))
		{
			goto IL_00a2;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = __this->___ElevatorCabin_7;
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_21, NULL);
		NullCheck(L_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_22, NULL);
		float L_24 = L_23.___y_3;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_25 = __this->___FloorHighs_6;
		NullCheck(L_25);
		int32_t L_26 = 1;
		float L_27 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		if ((!(((float)L_24) > ((float)((float)il2cpp_codegen_subtract(L_27, (0.100000001f)))))))
		{
			goto IL_00a2;
		}
	}
	{
		// CurrentFloorNumber = 2;
		__this->___CurrentFloorNumber_13 = 2;
	}

IL_00a2:
	{
		// if ((ElevatorCabin.transform.localPosition.y) < FloorHighs[2] + 0.1f && (ElevatorCabin.transform.localPosition.y) > FloorHighs[2] - 0.1f)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = __this->___ElevatorCabin_7;
		NullCheck(L_28);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_28, NULL);
		NullCheck(L_29);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_29, NULL);
		float L_31 = L_30.___y_3;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_32 = __this->___FloorHighs_6;
		NullCheck(L_32);
		int32_t L_33 = 2;
		float L_34 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		if ((!(((float)L_31) < ((float)((float)il2cpp_codegen_add(L_34, (0.100000001f)))))))
		{
			goto IL_00f3;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35 = __this->___ElevatorCabin_7;
		NullCheck(L_35);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36;
		L_36 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_35, NULL);
		NullCheck(L_36);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_36, NULL);
		float L_38 = L_37.___y_3;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_39 = __this->___FloorHighs_6;
		NullCheck(L_39);
		int32_t L_40 = 2;
		float L_41 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		if ((!(((float)L_38) > ((float)((float)il2cpp_codegen_subtract(L_41, (0.100000001f)))))))
		{
			goto IL_00f3;
		}
	}
	{
		// CurrentFloorNumber = 3;
		__this->___CurrentFloorNumber_13 = 3;
	}

IL_00f3:
	{
		// if ((ElevatorCabin.transform.localPosition.y) < FloorHighs[3] + 0.1f && (ElevatorCabin.transform.localPosition.y) > FloorHighs[3] - 0.1f)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_42 = __this->___ElevatorCabin_7;
		NullCheck(L_42);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_43;
		L_43 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_42, NULL);
		NullCheck(L_43);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_43, NULL);
		float L_45 = L_44.___y_3;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_46 = __this->___FloorHighs_6;
		NullCheck(L_46);
		int32_t L_47 = 3;
		float L_48 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		if ((!(((float)L_45) < ((float)((float)il2cpp_codegen_add(L_48, (0.100000001f)))))))
		{
			goto IL_0144;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_49 = __this->___ElevatorCabin_7;
		NullCheck(L_49);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_50;
		L_50 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_49, NULL);
		NullCheck(L_50);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51;
		L_51 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_50, NULL);
		float L_52 = L_51.___y_3;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_53 = __this->___FloorHighs_6;
		NullCheck(L_53);
		int32_t L_54 = 3;
		float L_55 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		if ((!(((float)L_52) > ((float)((float)il2cpp_codegen_subtract(L_55, (0.100000001f)))))))
		{
			goto IL_0144;
		}
	}
	{
		// CurrentFloorNumber = 4;
		__this->___CurrentFloorNumber_13 = 4;
	}

IL_0144:
	{
		// if ((ElevatorCabin.transform.localPosition.y) < FloorHighs[4] + 0.1f && (ElevatorCabin.transform.localPosition.y) > FloorHighs[4] - 0.1f)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_56 = __this->___ElevatorCabin_7;
		NullCheck(L_56);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_57;
		L_57 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_56, NULL);
		NullCheck(L_57);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		L_58 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_57, NULL);
		float L_59 = L_58.___y_3;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_60 = __this->___FloorHighs_6;
		NullCheck(L_60);
		int32_t L_61 = 4;
		float L_62 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		if ((!(((float)L_59) < ((float)((float)il2cpp_codegen_add(L_62, (0.100000001f)))))))
		{
			goto IL_0195;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_63 = __this->___ElevatorCabin_7;
		NullCheck(L_63);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_64;
		L_64 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_63, NULL);
		NullCheck(L_64);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65;
		L_65 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_64, NULL);
		float L_66 = L_65.___y_3;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_67 = __this->___FloorHighs_6;
		NullCheck(L_67);
		int32_t L_68 = 4;
		float L_69 = (L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		if ((!(((float)L_66) > ((float)((float)il2cpp_codegen_subtract(L_69, (0.100000001f)))))))
		{
			goto IL_0195;
		}
	}
	{
		// CurrentFloorNumber = 5;
		__this->___CurrentFloorNumber_13 = 5;
	}

IL_0195:
	{
		// if ((ElevatorCabin.transform.localPosition.y) < FloorHighs[5] + 0.1f && (ElevatorCabin.transform.localPosition.y) > FloorHighs[5] - 0.1f)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_70 = __this->___ElevatorCabin_7;
		NullCheck(L_70);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_71;
		L_71 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_70, NULL);
		NullCheck(L_71);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_72;
		L_72 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_71, NULL);
		float L_73 = L_72.___y_3;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_74 = __this->___FloorHighs_6;
		NullCheck(L_74);
		int32_t L_75 = 5;
		float L_76 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_75));
		if ((!(((float)L_73) < ((float)((float)il2cpp_codegen_add(L_76, (0.100000001f)))))))
		{
			goto IL_01e6;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_77 = __this->___ElevatorCabin_7;
		NullCheck(L_77);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_78;
		L_78 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_77, NULL);
		NullCheck(L_78);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_79;
		L_79 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_78, NULL);
		float L_80 = L_79.___y_3;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_81 = __this->___FloorHighs_6;
		NullCheck(L_81);
		int32_t L_82 = 5;
		float L_83 = (L_81)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		if ((!(((float)L_80) > ((float)((float)il2cpp_codegen_subtract(L_83, (0.100000001f)))))))
		{
			goto IL_01e6;
		}
	}
	{
		// CurrentFloorNumber = 6;
		__this->___CurrentFloorNumber_13 = 6;
	}

IL_01e6:
	{
		// foreach (GameObject Numberassemble in FloorNumbers)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_84 = __this->___FloorNumbers_12;
		V_0 = L_84;
		V_1 = 0;
		goto IL_0278;
	}

IL_01f4:
	{
		// foreach (GameObject Numberassemble in FloorNumbers)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_85 = V_0;
		int32_t L_86 = V_1;
		NullCheck(L_85);
		int32_t L_87 = L_86;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_88 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_87));
		V_2 = L_88;
		// List<GameObject> Numbers_in_holder = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_89 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_89);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_89, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		V_3 = L_89;
		// for (int i = 0; i < Numberassemble.transform.childCount; i++)
		V_4 = 0;
		goto IL_0221;
	}

IL_0203:
	{
		// Numbers_in_holder.Add(Numberassemble.transform.GetChild(i).gameObject);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_90 = V_3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_91 = V_2;
		NullCheck(L_91);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_92;
		L_92 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_91, NULL);
		int32_t L_93 = V_4;
		NullCheck(L_92);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_94;
		L_94 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_92, L_93, NULL);
		NullCheck(L_94);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_95;
		L_95 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_94, NULL);
		NullCheck(L_90);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_90, L_95, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// for (int i = 0; i < Numberassemble.transform.childCount; i++)
		int32_t L_96 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_96, 1));
	}

IL_0221:
	{
		// for (int i = 0; i < Numberassemble.transform.childCount; i++)
		int32_t L_97 = V_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_98 = V_2;
		NullCheck(L_98);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_99;
		L_99 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_98, NULL);
		NullCheck(L_99);
		int32_t L_100;
		L_100 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_99, NULL);
		if ((((int32_t)L_97) < ((int32_t)L_100)))
		{
			goto IL_0203;
		}
	}
	{
		// foreach (GameObject numberA in Numbers_in_holder)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_101 = V_3;
		NullCheck(L_101);
		Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 L_102;
		L_102 = List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8(L_101, List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		V_5 = L_102;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0266:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D((&V_5), Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_025b_1;
			}

IL_023a_1:
			{
				// foreach (GameObject numberA in Numbers_in_holder)
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_103;
				L_103 = Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline((&V_5), Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
				// numberA.SetActive(false);
				NullCheck(L_103);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_103, (bool)0, NULL);
				// Numbers_in_holder[CurrentFloorNumber - 1].SetActive(true);
				List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_104 = V_3;
				int32_t L_105 = __this->___CurrentFloorNumber_13;
				NullCheck(L_104);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_106;
				L_106 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_104, ((int32_t)il2cpp_codegen_subtract(L_105, 1)), List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
				NullCheck(L_106);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_106, (bool)1, NULL);
			}

IL_025b_1:
			{
				// foreach (GameObject numberA in Numbers_in_holder)
				bool L_107;
				L_107 = Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27((&V_5), Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
				if (L_107)
				{
					goto IL_023a_1;
				}
			}
			{
				goto IL_0274;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0274:
	{
		int32_t L_108 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_108, 1));
	}

IL_0278:
	{
		// foreach (GameObject Numberassemble in FloorNumbers)
		int32_t L_109 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_110 = V_0;
		NullCheck(L_110);
		if ((((int32_t)L_109) < ((int32_t)((int32_t)(((RuntimeArray*)L_110)->max_length)))))
		{
			goto IL_01f4;
		}
	}
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator evelator_controll::HandleDoorOpen(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* evelator_controll_HandleDoorOpen_mA3D82AC8F11F77FA54D8229B0A4737BA443A0FBC (evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* __this, int32_t ___WhichFloor0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CHandleDoorOpenU3Ed__26_tD44811707BCFEFBA8C59037D418F40F4CA862CE5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CHandleDoorOpenU3Ed__26_tD44811707BCFEFBA8C59037D418F40F4CA862CE5* L_0 = (U3CHandleDoorOpenU3Ed__26_tD44811707BCFEFBA8C59037D418F40F4CA862CE5*)il2cpp_codegen_object_new(U3CHandleDoorOpenU3Ed__26_tD44811707BCFEFBA8C59037D418F40F4CA862CE5_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CHandleDoorOpenU3Ed__26__ctor_mD6D4C7F074A8F1C0DCBB95332B0C6BE2B7FDE03F(L_0, 0, NULL);
		U3CHandleDoorOpenU3Ed__26_tD44811707BCFEFBA8C59037D418F40F4CA862CE5* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CHandleDoorOpenU3Ed__26_tD44811707BCFEFBA8C59037D418F40F4CA862CE5* L_2 = L_1;
		int32_t L_3 = ___WhichFloor0;
		NullCheck(L_2);
		L_2->___WhichFloor_3 = L_3;
		return L_2;
	}
}
// System.Collections.IEnumerator evelator_controll::HandleDoorClose(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* evelator_controll_HandleDoorClose_m4ED163069A06E0824B34B3E172944484C6D20852 (evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* __this, int32_t ___WhichFloor0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CHandleDoorCloseU3Ed__27_t54856E6D2E0C9531CE3240CAB4539880B27E4A00_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CHandleDoorCloseU3Ed__27_t54856E6D2E0C9531CE3240CAB4539880B27E4A00* L_0 = (U3CHandleDoorCloseU3Ed__27_t54856E6D2E0C9531CE3240CAB4539880B27E4A00*)il2cpp_codegen_object_new(U3CHandleDoorCloseU3Ed__27_t54856E6D2E0C9531CE3240CAB4539880B27E4A00_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CHandleDoorCloseU3Ed__27__ctor_mE5C20F5EB41D9F9F39D93DF14B547523B7564BA9(L_0, 0, NULL);
		U3CHandleDoorCloseU3Ed__27_t54856E6D2E0C9531CE3240CAB4539880B27E4A00* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CHandleDoorCloseU3Ed__27_t54856E6D2E0C9531CE3240CAB4539880B27E4A00* L_2 = L_1;
		int32_t L_3 = ___WhichFloor0;
		NullCheck(L_2);
		L_2->___WhichFloor_3 = L_3;
		return L_2;
	}
}
// System.Void evelator_controll::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void evelator_controll__ctor_m423A73471A5080CE6169B7629332FD7C831D73A9 (evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<int> sequenceElevator = new List<int>();
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8(L_0, List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		__this->___sequenceElevator_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sequenceElevator_4), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Boolean evelator_controll::<executeTask>b__9_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool evelator_controll_U3CexecuteTaskU3Eb__9_0_m5312AE161CA7E85B067E12042C8514E773ABEA78 (evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* __this, const RuntimeMethod* method) 
{
	{
		// yield return new WaitWhile(() => !Doors_finished);
		bool L_0 = __this->___Doors_finished_11;
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean evelator_controll::<executeTask>b__9_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool evelator_controll_U3CexecuteTaskU3Eb__9_1_mD563E75C9DD7677333AD7DB212D4C63D609C77E0 (evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* __this, const RuntimeMethod* method) 
{
	{
		// yield return new WaitWhile(() => !Doors_finished);
		bool L_0 = __this->___Doors_finished_11;
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void evelator_controll/<executeTask>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CexecuteTaskU3Ed__9__ctor_m67FC7024C8B36377BE1E8B8F04A35ED7AE0FCE82 (U3CexecuteTaskU3Ed__9_tC0D583E9B5EC90D5D6ACFA66853FA5A22E645062* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void evelator_controll/<executeTask>d__9::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CexecuteTaskU3Ed__9_System_IDisposable_Dispose_mB31CB3BE8BC02CA9D71A65E87E5DBFAE80474C44 (U3CexecuteTaskU3Ed__9_tC0D583E9B5EC90D5D6ACFA66853FA5A22E645062* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean evelator_controll/<executeTask>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CexecuteTaskU3Ed__9_MoveNext_mFE41AD877E856443F8DC27953FBFBBBE4DE7DAB7 (U3CexecuteTaskU3Ed__9_tC0D583E9B5EC90D5D6ACFA66853FA5A22E645062* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitWhile_t6E10E586970164905286BEAB019D7F73DA661967_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&evelator_controll_U3CexecuteTaskU3Eb__9_0_m5312AE161CA7E85B067E12042C8514E773ABEA78_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&evelator_controll_U3CexecuteTaskU3Eb__9_1_mD563E75C9DD7677333AD7DB212D4C63D609C77E0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0026;
			}
			case 1:
			{
				goto IL_0046;
			}
			case 2:
			{
				goto IL_0168;
			}
			case 3:
			{
				goto IL_027d;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0026:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_002d:
	{
		// yield return new WaitForSeconds(0.005f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_3 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_3, (0.00499999989f), NULL);
		__this->___U3CU3E2__current_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_3);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0046:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// int toReach = sequenceElevator[0];
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_4 = V_1;
		NullCheck(L_4);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_5 = L_4->___sequenceElevator_4;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_5, 0, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		// if (sequenceElevator.Count > 0)
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_7 = V_1;
		NullCheck(L_7);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_8 = L_7->___sequenceElevator_4;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_8, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_016f;
		}
	}
	{
		// if (ElevatorCabin.transform.localPosition.y > FloorHighs[sequenceElevator[sequenceElevator.Count - 1]])
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_10 = V_1;
		NullCheck(L_10);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = L_10->___ElevatorCabin_7;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_11, NULL);
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_12, NULL);
		float L_14 = L_13.___y_3;
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_15 = V_1;
		NullCheck(L_15);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_16 = L_15->___FloorHighs_6;
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_17 = V_1;
		NullCheck(L_17);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_18 = L_17->___sequenceElevator_4;
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_19 = V_1;
		NullCheck(L_19);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_20 = L_19->___sequenceElevator_4;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_20, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		NullCheck(L_18);
		int32_t L_22;
		L_22 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_18, ((int32_t)il2cpp_codegen_subtract(L_21, 1)), List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		NullCheck(L_16);
		int32_t L_23 = L_22;
		float L_24 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		if ((!(((float)L_14) > ((float)L_24))))
		{
			goto IL_016f;
		}
	}
	{
		// ElevatorCabin.transform.Translate(Vector3.down * Time.deltaTime);
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_25 = V_1;
		NullCheck(L_25);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = L_25->___ElevatorCabin_7;
		NullCheck(L_26);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_26, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline(NULL);
		float L_29;
		L_29 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_28, L_29, NULL);
		NullCheck(L_27);
		Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A(L_27, L_30, NULL);
		// if (ElevatorCabin.transform.localPosition.y < (FloorHighs[sequenceElevator[sequenceElevator.Count - 1]] + 0.01f))
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_31 = V_1;
		NullCheck(L_31);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32 = L_31->___ElevatorCabin_7;
		NullCheck(L_32);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33;
		L_33 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_32, NULL);
		NullCheck(L_33);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_33, NULL);
		float L_35 = L_34.___y_3;
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_36 = V_1;
		NullCheck(L_36);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_37 = L_36->___FloorHighs_6;
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_38 = V_1;
		NullCheck(L_38);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_39 = L_38->___sequenceElevator_4;
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_40 = V_1;
		NullCheck(L_40);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_41 = L_40->___sequenceElevator_4;
		NullCheck(L_41);
		int32_t L_42;
		L_42 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_41, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		NullCheck(L_39);
		int32_t L_43;
		L_43 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_39, ((int32_t)il2cpp_codegen_subtract(L_42, 1)), List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		NullCheck(L_37);
		int32_t L_44 = L_43;
		float L_45 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		if ((!(((float)L_35) < ((float)((float)il2cpp_codegen_add(L_45, (0.00999999978f)))))))
		{
			goto IL_016f;
		}
	}
	{
		// DoorOpening = StartCoroutine(HandleDoorOpen(sequenceElevator[sequenceElevator.Count - 1]));
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_46 = V_1;
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_47 = V_1;
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_48 = V_1;
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_49 = V_1;
		NullCheck(L_49);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_50 = L_49->___sequenceElevator_4;
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_51 = V_1;
		NullCheck(L_51);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_52 = L_51->___sequenceElevator_4;
		NullCheck(L_52);
		int32_t L_53;
		L_53 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_52, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		NullCheck(L_50);
		int32_t L_54;
		L_54 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_50, ((int32_t)il2cpp_codegen_subtract(L_53, 1)), List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		NullCheck(L_48);
		RuntimeObject* L_55;
		L_55 = evelator_controll_HandleDoorOpen_mA3D82AC8F11F77FA54D8229B0A4737BA443A0FBC(L_48, L_54, NULL);
		NullCheck(L_47);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_56;
		L_56 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_47, L_55, NULL);
		NullCheck(L_46);
		L_46->___DoorOpening_9 = L_56;
		Il2CppCodeGenWriteBarrier((void**)(&L_46->___DoorOpening_9), (void*)L_56);
		// Doors_finished = false;
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_57 = V_1;
		NullCheck(L_57);
		L_57->___Doors_finished_11 = (bool)0;
		// sequenceElevator.RemoveAt(sequenceElevator.Count - 1);
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_58 = V_1;
		NullCheck(L_58);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_59 = L_58->___sequenceElevator_4;
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_60 = V_1;
		NullCheck(L_60);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_61 = L_60->___sequenceElevator_4;
		NullCheck(L_61);
		int32_t L_62;
		L_62 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_61, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		NullCheck(L_59);
		List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004(L_59, ((int32_t)il2cpp_codegen_subtract(L_62, 1)), List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004_RuntimeMethod_var);
		// yield return new WaitWhile(() => !Doors_finished);
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_63 = V_1;
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_64 = (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*)il2cpp_codegen_object_new(Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		NullCheck(L_64);
		Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22(L_64, L_63, (intptr_t)((void*)evelator_controll_U3CexecuteTaskU3Eb__9_0_m5312AE161CA7E85B067E12042C8514E773ABEA78_RuntimeMethod_var), NULL);
		WaitWhile_t6E10E586970164905286BEAB019D7F73DA661967* L_65 = (WaitWhile_t6E10E586970164905286BEAB019D7F73DA661967*)il2cpp_codegen_object_new(WaitWhile_t6E10E586970164905286BEAB019D7F73DA661967_il2cpp_TypeInfo_var);
		NullCheck(L_65);
		WaitWhile__ctor_mF803B2F3BC88135FEA9024F6C51E7267A7E7B82C(L_65, L_64, NULL);
		__this->___U3CU3E2__current_1 = L_65;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_65);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_0168:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_016f:
	{
		// if (sequenceElevator.Count > 0)
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_66 = V_1;
		NullCheck(L_66);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_67 = L_66->___sequenceElevator_4;
		NullCheck(L_67);
		int32_t L_68;
		L_68 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_67, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		if ((((int32_t)L_68) <= ((int32_t)0)))
		{
			goto IL_0284;
		}
	}
	{
		// if (ElevatorCabin.transform.localPosition.y < FloorHighs[sequenceElevator[sequenceElevator.Count - 1]])
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_69 = V_1;
		NullCheck(L_69);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_70 = L_69->___ElevatorCabin_7;
		NullCheck(L_70);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_71;
		L_71 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_70, NULL);
		NullCheck(L_71);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_72;
		L_72 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_71, NULL);
		float L_73 = L_72.___y_3;
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_74 = V_1;
		NullCheck(L_74);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_75 = L_74->___FloorHighs_6;
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_76 = V_1;
		NullCheck(L_76);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_77 = L_76->___sequenceElevator_4;
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_78 = V_1;
		NullCheck(L_78);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_79 = L_78->___sequenceElevator_4;
		NullCheck(L_79);
		int32_t L_80;
		L_80 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_79, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		NullCheck(L_77);
		int32_t L_81;
		L_81 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_77, ((int32_t)il2cpp_codegen_subtract(L_80, 1)), List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		NullCheck(L_75);
		int32_t L_82 = L_81;
		float L_83 = (L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		if ((!(((float)L_73) < ((float)L_83))))
		{
			goto IL_0284;
		}
	}
	{
		// ElevatorCabin.transform.Translate(Vector3.up * Time.deltaTime);
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_84 = V_1;
		NullCheck(L_84);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_85 = L_84->___ElevatorCabin_7;
		NullCheck(L_85);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_86;
		L_86 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_85, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_87;
		L_87 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		float L_88;
		L_88 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89;
		L_89 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_87, L_88, NULL);
		NullCheck(L_86);
		Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A(L_86, L_89, NULL);
		// if (ElevatorCabin.transform.localPosition.y > (FloorHighs[sequenceElevator[sequenceElevator.Count - 1]] - 0.01f))
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_90 = V_1;
		NullCheck(L_90);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_91 = L_90->___ElevatorCabin_7;
		NullCheck(L_91);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_92;
		L_92 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_91, NULL);
		NullCheck(L_92);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_93;
		L_93 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_92, NULL);
		float L_94 = L_93.___y_3;
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_95 = V_1;
		NullCheck(L_95);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_96 = L_95->___FloorHighs_6;
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_97 = V_1;
		NullCheck(L_97);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_98 = L_97->___sequenceElevator_4;
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_99 = V_1;
		NullCheck(L_99);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_100 = L_99->___sequenceElevator_4;
		NullCheck(L_100);
		int32_t L_101;
		L_101 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_100, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		NullCheck(L_98);
		int32_t L_102;
		L_102 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_98, ((int32_t)il2cpp_codegen_subtract(L_101, 1)), List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		NullCheck(L_96);
		int32_t L_103 = L_102;
		float L_104 = (L_96)->GetAt(static_cast<il2cpp_array_size_t>(L_103));
		if ((!(((float)L_94) > ((float)((float)il2cpp_codegen_subtract(L_104, (0.00999999978f)))))))
		{
			goto IL_0284;
		}
	}
	{
		// DoorOpening = StartCoroutine(HandleDoorOpen(sequenceElevator[sequenceElevator.Count - 1]));
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_105 = V_1;
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_106 = V_1;
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_107 = V_1;
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_108 = V_1;
		NullCheck(L_108);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_109 = L_108->___sequenceElevator_4;
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_110 = V_1;
		NullCheck(L_110);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_111 = L_110->___sequenceElevator_4;
		NullCheck(L_111);
		int32_t L_112;
		L_112 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_111, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		NullCheck(L_109);
		int32_t L_113;
		L_113 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_109, ((int32_t)il2cpp_codegen_subtract(L_112, 1)), List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		NullCheck(L_107);
		RuntimeObject* L_114;
		L_114 = evelator_controll_HandleDoorOpen_mA3D82AC8F11F77FA54D8229B0A4737BA443A0FBC(L_107, L_113, NULL);
		NullCheck(L_106);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_115;
		L_115 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_106, L_114, NULL);
		NullCheck(L_105);
		L_105->___DoorOpening_9 = L_115;
		Il2CppCodeGenWriteBarrier((void**)(&L_105->___DoorOpening_9), (void*)L_115);
		// Doors_finished = false;
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_116 = V_1;
		NullCheck(L_116);
		L_116->___Doors_finished_11 = (bool)0;
		// sequenceElevator.RemoveAt(sequenceElevator.Count - 1);
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_117 = V_1;
		NullCheck(L_117);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_118 = L_117->___sequenceElevator_4;
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_119 = V_1;
		NullCheck(L_119);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_120 = L_119->___sequenceElevator_4;
		NullCheck(L_120);
		int32_t L_121;
		L_121 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_120, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		NullCheck(L_118);
		List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004(L_118, ((int32_t)il2cpp_codegen_subtract(L_121, 1)), List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004_RuntimeMethod_var);
		// yield return new WaitWhile(() => !Doors_finished);
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_122 = V_1;
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_123 = (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*)il2cpp_codegen_object_new(Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		NullCheck(L_123);
		Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22(L_123, L_122, (intptr_t)((void*)evelator_controll_U3CexecuteTaskU3Eb__9_1_mD563E75C9DD7677333AD7DB212D4C63D609C77E0_RuntimeMethod_var), NULL);
		WaitWhile_t6E10E586970164905286BEAB019D7F73DA661967* L_124 = (WaitWhile_t6E10E586970164905286BEAB019D7F73DA661967*)il2cpp_codegen_object_new(WaitWhile_t6E10E586970164905286BEAB019D7F73DA661967_il2cpp_TypeInfo_var);
		NullCheck(L_124);
		WaitWhile__ctor_mF803B2F3BC88135FEA9024F6C51E7267A7E7B82C(L_124, L_123, NULL);
		__this->___U3CU3E2__current_1 = L_124;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_124);
		__this->___U3CU3E1__state_0 = 3;
		return (bool)1;
	}

IL_027d:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0284:
	{
		// ChangeFloorNumbers();
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_125 = V_1;
		NullCheck(L_125);
		evelator_controll_ChangeFloorNumbers_m0548BCC2B3D885E64730AC274A8367853C6A126C(L_125, NULL);
		// if (sequenceElevator.Count == 0)
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_126 = V_1;
		NullCheck(L_126);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_127 = L_126->___sequenceElevator_4;
		NullCheck(L_127);
		int32_t L_128;
		L_128 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_127, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		if (L_128)
		{
			goto IL_02aa;
		}
	}
	{
		// Elevator_in_run = false;
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_129 = V_1;
		NullCheck(L_129);
		L_129->___Elevator_in_run_5 = (bool)0;
		// StopCoroutine(EvelatorDo);
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_130 = V_1;
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_131 = V_1;
		NullCheck(L_131);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_132 = L_131->___EvelatorDo_8;
		NullCheck(L_130);
		MonoBehaviour_StopCoroutine_mB0FC91BE84203BD8E360B3FBAE5B958B4C5ED22A(L_130, L_132, NULL);
	}

IL_02aa:
	{
		// if (sequenceElevator.Count > 0)
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_133 = V_1;
		NullCheck(L_133);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_134 = L_133->___sequenceElevator_4;
		NullCheck(L_134);
		int32_t L_135;
		L_135 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_134, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		if ((((int32_t)L_135) > ((int32_t)0)))
		{
			goto IL_002d;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object evelator_controll/<executeTask>d__9::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CexecuteTaskU3Ed__9_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m7E4BB7AB0F8306F694A568A8786509E04FFC4ED6 (U3CexecuteTaskU3Ed__9_tC0D583E9B5EC90D5D6ACFA66853FA5A22E645062* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void evelator_controll/<executeTask>d__9::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CexecuteTaskU3Ed__9_System_Collections_IEnumerator_Reset_m29CAA2065BDB8858F03CCD9BEB92CFC7EFA264A8 (U3CexecuteTaskU3Ed__9_tC0D583E9B5EC90D5D6ACFA66853FA5A22E645062* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CexecuteTaskU3Ed__9_System_Collections_IEnumerator_Reset_m29CAA2065BDB8858F03CCD9BEB92CFC7EFA264A8_RuntimeMethod_var)));
	}
}
// System.Object evelator_controll/<executeTask>d__9::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CexecuteTaskU3Ed__9_System_Collections_IEnumerator_get_Current_mAFD20C0150CE695F40A35CC26AF4911AAB4B4B92 (U3CexecuteTaskU3Ed__9_tC0D583E9B5EC90D5D6ACFA66853FA5A22E645062* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void evelator_controll/<HandleDoorOpen>d__26::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHandleDoorOpenU3Ed__26__ctor_mD6D4C7F074A8F1C0DCBB95332B0C6BE2B7FDE03F (U3CHandleDoorOpenU3Ed__26_tD44811707BCFEFBA8C59037D418F40F4CA862CE5* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void evelator_controll/<HandleDoorOpen>d__26::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHandleDoorOpenU3Ed__26_System_IDisposable_Dispose_m65DE6DC56F31112030862CB50AAF5DBE19F7DA62 (U3CHandleDoorOpenU3Ed__26_tD44811707BCFEFBA8C59037D418F40F4CA862CE5* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean evelator_controll/<HandleDoorOpen>d__26::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CHandleDoorOpenU3Ed__26_MoveNext_m4B5EF31927FCA664C4EC3942FD5E7CAAF111BF62 (U3CHandleDoorOpenU3Ed__26_tD44811707BCFEFBA8C59037D418F40F4CA862CE5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0042;
			}
			case 2:
			{
				goto IL_0352;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0029:
	{
		// yield return new WaitForSeconds(0.005f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_3 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_3, (0.00499999989f), NULL);
		__this->___U3CU3E2__current_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_3);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0042:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Door_inside_left.transform.localPosition = Vector3.Lerp(new Vector3(Door_inside_left.transform.localPosition.x, Door_inside_left.transform.localPosition.y, Door_inside_left.transform.localPosition.z), new Vector3(Door_inside_left_open_value, Door_inside_left.transform.localPosition.y, Door_inside_left.transform.localPosition.z), DoorOpenTime * Time.deltaTime);
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_4 = V_1;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = L_4->___Door_inside_left_24;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_7 = V_1;
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = L_7->___Door_inside_left_24;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_8, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_9, NULL);
		float L_11 = L_10.___x_2;
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_12 = V_1;
		NullCheck(L_12);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = L_12->___Door_inside_left_24;
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_13, NULL);
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_14, NULL);
		float L_16 = L_15.___y_3;
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_17 = V_1;
		NullCheck(L_17);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = L_17->___Door_inside_left_24;
		NullCheck(L_18);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_18, NULL);
		NullCheck(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_19, NULL);
		float L_21 = L_20.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_22), L_11, L_16, L_21, /*hidden argument*/NULL);
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_23 = V_1;
		NullCheck(L_23);
		float L_24 = L_23->___Door_inside_left_open_value_26;
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_25 = V_1;
		NullCheck(L_25);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = L_25->___Door_inside_left_24;
		NullCheck(L_26);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_26, NULL);
		NullCheck(L_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_27, NULL);
		float L_29 = L_28.___y_3;
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_30 = V_1;
		NullCheck(L_30);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31 = L_30->___Door_inside_left_24;
		NullCheck(L_31);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32;
		L_32 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_31, NULL);
		NullCheck(L_32);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_32, NULL);
		float L_34 = L_33.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		memset((&L_35), 0, sizeof(L_35));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_35), L_24, L_29, L_34, /*hidden argument*/NULL);
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_36 = V_1;
		NullCheck(L_36);
		float L_37 = L_36->___DoorOpenTime_14;
		float L_38;
		L_38 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_22, L_35, ((float)il2cpp_codegen_multiply(L_37, L_38)), NULL);
		NullCheck(L_6);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_6, L_39, NULL);
		// Door_inside_right.transform.localPosition = Vector3.Lerp(new Vector3(Door_inside_right.transform.localPosition.x, Door_inside_right.transform.localPosition.y, Door_inside_right.transform.localPosition.z), new Vector3(Door_inside_right_open_value, Door_inside_right.transform.localPosition.y, Door_inside_right.transform.localPosition.z), DoorOpenTime * Time.deltaTime);
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_40 = V_1;
		NullCheck(L_40);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_41 = L_40->___Door_inside_right_21;
		NullCheck(L_41);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42;
		L_42 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_41, NULL);
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_43 = V_1;
		NullCheck(L_43);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_44 = L_43->___Door_inside_right_21;
		NullCheck(L_44);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_45;
		L_45 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_44, NULL);
		NullCheck(L_45);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_45, NULL);
		float L_47 = L_46.___x_2;
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_48 = V_1;
		NullCheck(L_48);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_49 = L_48->___Door_inside_right_21;
		NullCheck(L_49);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_50;
		L_50 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_49, NULL);
		NullCheck(L_50);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51;
		L_51 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_50, NULL);
		float L_52 = L_51.___y_3;
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_53 = V_1;
		NullCheck(L_53);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_54 = L_53->___Door_inside_right_21;
		NullCheck(L_54);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_55;
		L_55 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_54, NULL);
		NullCheck(L_55);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56;
		L_56 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_55, NULL);
		float L_57 = L_56.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		memset((&L_58), 0, sizeof(L_58));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_58), L_47, L_52, L_57, /*hidden argument*/NULL);
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_59 = V_1;
		NullCheck(L_59);
		float L_60 = L_59->___Door_inside_right_open_value_23;
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_61 = V_1;
		NullCheck(L_61);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_62 = L_61->___Door_inside_right_21;
		NullCheck(L_62);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_63;
		L_63 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_62, NULL);
		NullCheck(L_63);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64;
		L_64 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_63, NULL);
		float L_65 = L_64.___y_3;
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_66 = V_1;
		NullCheck(L_66);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_67 = L_66->___Door_inside_right_21;
		NullCheck(L_67);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_68;
		L_68 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_67, NULL);
		NullCheck(L_68);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69;
		L_69 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_68, NULL);
		float L_70 = L_69.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_71;
		memset((&L_71), 0, sizeof(L_71));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_71), L_60, L_65, L_70, /*hidden argument*/NULL);
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_72 = V_1;
		NullCheck(L_72);
		float L_73 = L_72->___DoorOpenTime_14;
		float L_74;
		L_74 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_75;
		L_75 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_58, L_71, ((float)il2cpp_codegen_multiply(L_73, L_74)), NULL);
		NullCheck(L_42);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_42, L_75, NULL);
		// Door_outside_left[WhichFloor].transform.localPosition = Vector3.Lerp(new Vector3(Door_outside_left[WhichFloor].transform.localPosition.x, Door_outside_left[WhichFloor].transform.localPosition.y, Door_outside_left[WhichFloor].transform.localPosition.z), new Vector3(Door_outside_left_open_value[WhichFloor], Door_outside_left[WhichFloor].transform.localPosition.y, Door_outside_left[WhichFloor].transform.localPosition.z), DoorOpenTime * Time.deltaTime);
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_76 = V_1;
		NullCheck(L_76);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_77 = L_76->___Door_outside_left_15;
		int32_t L_78 = __this->___WhichFloor_3;
		NullCheck(L_77);
		int32_t L_79 = L_78;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_80 = (L_77)->GetAt(static_cast<il2cpp_array_size_t>(L_79));
		NullCheck(L_80);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_81;
		L_81 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_80, NULL);
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_82 = V_1;
		NullCheck(L_82);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_83 = L_82->___Door_outside_left_15;
		int32_t L_84 = __this->___WhichFloor_3;
		NullCheck(L_83);
		int32_t L_85 = L_84;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_86 = (L_83)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		NullCheck(L_86);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_87;
		L_87 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_86, NULL);
		NullCheck(L_87);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88;
		L_88 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_87, NULL);
		float L_89 = L_88.___x_2;
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_90 = V_1;
		NullCheck(L_90);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_91 = L_90->___Door_outside_left_15;
		int32_t L_92 = __this->___WhichFloor_3;
		NullCheck(L_91);
		int32_t L_93 = L_92;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_94 = (L_91)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
		NullCheck(L_94);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_95;
		L_95 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_94, NULL);
		NullCheck(L_95);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96;
		L_96 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_95, NULL);
		float L_97 = L_96.___y_3;
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_98 = V_1;
		NullCheck(L_98);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_99 = L_98->___Door_outside_left_15;
		int32_t L_100 = __this->___WhichFloor_3;
		NullCheck(L_99);
		int32_t L_101 = L_100;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_102 = (L_99)->GetAt(static_cast<il2cpp_array_size_t>(L_101));
		NullCheck(L_102);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_103;
		L_103 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_102, NULL);
		NullCheck(L_103);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_104;
		L_104 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_103, NULL);
		float L_105 = L_104.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106;
		memset((&L_106), 0, sizeof(L_106));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_106), L_89, L_97, L_105, /*hidden argument*/NULL);
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_107 = V_1;
		NullCheck(L_107);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_108 = L_107->___Door_outside_left_open_value_17;
		int32_t L_109 = __this->___WhichFloor_3;
		NullCheck(L_108);
		int32_t L_110 = L_109;
		float L_111 = (L_108)->GetAt(static_cast<il2cpp_array_size_t>(L_110));
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_112 = V_1;
		NullCheck(L_112);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_113 = L_112->___Door_outside_left_15;
		int32_t L_114 = __this->___WhichFloor_3;
		NullCheck(L_113);
		int32_t L_115 = L_114;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_116 = (L_113)->GetAt(static_cast<il2cpp_array_size_t>(L_115));
		NullCheck(L_116);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_117;
		L_117 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_116, NULL);
		NullCheck(L_117);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_118;
		L_118 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_117, NULL);
		float L_119 = L_118.___y_3;
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_120 = V_1;
		NullCheck(L_120);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_121 = L_120->___Door_outside_left_15;
		int32_t L_122 = __this->___WhichFloor_3;
		NullCheck(L_121);
		int32_t L_123 = L_122;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_124 = (L_121)->GetAt(static_cast<il2cpp_array_size_t>(L_123));
		NullCheck(L_124);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_125;
		L_125 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_124, NULL);
		NullCheck(L_125);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_126;
		L_126 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_125, NULL);
		float L_127 = L_126.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_128;
		memset((&L_128), 0, sizeof(L_128));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_128), L_111, L_119, L_127, /*hidden argument*/NULL);
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_129 = V_1;
		NullCheck(L_129);
		float L_130 = L_129->___DoorOpenTime_14;
		float L_131;
		L_131 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_132;
		L_132 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_106, L_128, ((float)il2cpp_codegen_multiply(L_130, L_131)), NULL);
		NullCheck(L_81);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_81, L_132, NULL);
		// Door_outside_right[WhichFloor].transform.localPosition = Vector3.Lerp(new Vector3(Door_outside_right[WhichFloor].transform.localPosition.x, Door_outside_right[WhichFloor].transform.localPosition.y, Door_outside_right[WhichFloor].transform.localPosition.z), new Vector3(Door_outside_right_open_value[WhichFloor], Door_outside_right[WhichFloor].transform.localPosition.y, Door_outside_right[WhichFloor].transform.localPosition.z), DoorOpenTime * Time.deltaTime);
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_133 = V_1;
		NullCheck(L_133);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_134 = L_133->___Door_outside_right_18;
		int32_t L_135 = __this->___WhichFloor_3;
		NullCheck(L_134);
		int32_t L_136 = L_135;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_137 = (L_134)->GetAt(static_cast<il2cpp_array_size_t>(L_136));
		NullCheck(L_137);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_138;
		L_138 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_137, NULL);
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_139 = V_1;
		NullCheck(L_139);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_140 = L_139->___Door_outside_right_18;
		int32_t L_141 = __this->___WhichFloor_3;
		NullCheck(L_140);
		int32_t L_142 = L_141;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_143 = (L_140)->GetAt(static_cast<il2cpp_array_size_t>(L_142));
		NullCheck(L_143);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_144;
		L_144 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_143, NULL);
		NullCheck(L_144);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_145;
		L_145 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_144, NULL);
		float L_146 = L_145.___x_2;
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_147 = V_1;
		NullCheck(L_147);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_148 = L_147->___Door_outside_right_18;
		int32_t L_149 = __this->___WhichFloor_3;
		NullCheck(L_148);
		int32_t L_150 = L_149;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_151 = (L_148)->GetAt(static_cast<il2cpp_array_size_t>(L_150));
		NullCheck(L_151);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_152;
		L_152 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_151, NULL);
		NullCheck(L_152);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_153;
		L_153 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_152, NULL);
		float L_154 = L_153.___y_3;
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_155 = V_1;
		NullCheck(L_155);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_156 = L_155->___Door_outside_right_18;
		int32_t L_157 = __this->___WhichFloor_3;
		NullCheck(L_156);
		int32_t L_158 = L_157;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_159 = (L_156)->GetAt(static_cast<il2cpp_array_size_t>(L_158));
		NullCheck(L_159);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_160;
		L_160 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_159, NULL);
		NullCheck(L_160);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_161;
		L_161 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_160, NULL);
		float L_162 = L_161.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_163;
		memset((&L_163), 0, sizeof(L_163));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_163), L_146, L_154, L_162, /*hidden argument*/NULL);
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_164 = V_1;
		NullCheck(L_164);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_165 = L_164->___Door_outside_right_open_value_20;
		int32_t L_166 = __this->___WhichFloor_3;
		NullCheck(L_165);
		int32_t L_167 = L_166;
		float L_168 = (L_165)->GetAt(static_cast<il2cpp_array_size_t>(L_167));
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_169 = V_1;
		NullCheck(L_169);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_170 = L_169->___Door_outside_right_18;
		int32_t L_171 = __this->___WhichFloor_3;
		NullCheck(L_170);
		int32_t L_172 = L_171;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_173 = (L_170)->GetAt(static_cast<il2cpp_array_size_t>(L_172));
		NullCheck(L_173);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_174;
		L_174 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_173, NULL);
		NullCheck(L_174);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_175;
		L_175 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_174, NULL);
		float L_176 = L_175.___y_3;
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_177 = V_1;
		NullCheck(L_177);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_178 = L_177->___Door_outside_right_18;
		int32_t L_179 = __this->___WhichFloor_3;
		NullCheck(L_178);
		int32_t L_180 = L_179;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_181 = (L_178)->GetAt(static_cast<il2cpp_array_size_t>(L_180));
		NullCheck(L_181);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_182;
		L_182 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_181, NULL);
		NullCheck(L_182);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_183;
		L_183 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_182, NULL);
		float L_184 = L_183.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_185;
		memset((&L_185), 0, sizeof(L_185));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_185), L_168, L_176, L_184, /*hidden argument*/NULL);
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_186 = V_1;
		NullCheck(L_186);
		float L_187 = L_186->___DoorOpenTime_14;
		float L_188;
		L_188 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_189;
		L_189 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_163, L_185, ((float)il2cpp_codegen_multiply(L_187, L_188)), NULL);
		NullCheck(L_138);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_138, L_189, NULL);
		// if ((Door_inside_left.transform.localPosition.x - 0.001f) > Door_inside_left_open_value)
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_190 = V_1;
		NullCheck(L_190);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_191 = L_190->___Door_inside_left_24;
		NullCheck(L_191);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_192;
		L_192 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_191, NULL);
		NullCheck(L_192);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_193;
		L_193 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_192, NULL);
		float L_194 = L_193.___x_2;
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_195 = V_1;
		NullCheck(L_195);
		float L_196 = L_195->___Door_inside_left_open_value_26;
		if ((((float)((float)il2cpp_codegen_subtract(L_194, (0.00100000005f)))) > ((float)L_196)))
		{
			goto IL_0029;
		}
	}
	{
		// yield return new WaitForSeconds(5);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_197 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_197);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_197, (5.0f), NULL);
		__this->___U3CU3E2__current_1 = L_197;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_197);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_0352:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// DoorClose = StartCoroutine(HandleDoorClose(WhichFloor));
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_198 = V_1;
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_199 = V_1;
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_200 = V_1;
		int32_t L_201 = __this->___WhichFloor_3;
		NullCheck(L_200);
		RuntimeObject* L_202;
		L_202 = evelator_controll_HandleDoorClose_m4ED163069A06E0824B34B3E172944484C6D20852(L_200, L_201, NULL);
		NullCheck(L_199);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_203;
		L_203 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_199, L_202, NULL);
		NullCheck(L_198);
		L_198->___DoorClose_10 = L_203;
		Il2CppCodeGenWriteBarrier((void**)(&L_198->___DoorClose_10), (void*)L_203);
		// StopCoroutine(DoorOpening);
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_204 = V_1;
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_205 = V_1;
		NullCheck(L_205);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_206 = L_205->___DoorOpening_9;
		NullCheck(L_204);
		MonoBehaviour_StopCoroutine_mB0FC91BE84203BD8E360B3FBAE5B958B4C5ED22A(L_204, L_206, NULL);
		// }
		return (bool)0;
	}
}
// System.Object evelator_controll/<HandleDoorOpen>d__26::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CHandleDoorOpenU3Ed__26_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m276C6953BB9CF87B3AE569F03D1B5DB260081535 (U3CHandleDoorOpenU3Ed__26_tD44811707BCFEFBA8C59037D418F40F4CA862CE5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void evelator_controll/<HandleDoorOpen>d__26::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHandleDoorOpenU3Ed__26_System_Collections_IEnumerator_Reset_m091F6B4726B1F6A7C8C6E3C7D27BA5841D2549B3 (U3CHandleDoorOpenU3Ed__26_tD44811707BCFEFBA8C59037D418F40F4CA862CE5* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CHandleDoorOpenU3Ed__26_System_Collections_IEnumerator_Reset_m091F6B4726B1F6A7C8C6E3C7D27BA5841D2549B3_RuntimeMethod_var)));
	}
}
// System.Object evelator_controll/<HandleDoorOpen>d__26::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CHandleDoorOpenU3Ed__26_System_Collections_IEnumerator_get_Current_mCAA0B2BDC03EDFAA9FF7286AB769E2887110378B (U3CHandleDoorOpenU3Ed__26_tD44811707BCFEFBA8C59037D418F40F4CA862CE5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void evelator_controll/<HandleDoorClose>d__27::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHandleDoorCloseU3Ed__27__ctor_mE5C20F5EB41D9F9F39D93DF14B547523B7564BA9 (U3CHandleDoorCloseU3Ed__27_t54856E6D2E0C9531CE3240CAB4539880B27E4A00* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void evelator_controll/<HandleDoorClose>d__27::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHandleDoorCloseU3Ed__27_System_IDisposable_Dispose_m1611607CA8AF69B2F3A3437C235B2ED8431AEB36 (U3CHandleDoorCloseU3Ed__27_t54856E6D2E0C9531CE3240CAB4539880B27E4A00* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean evelator_controll/<HandleDoorClose>d__27::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CHandleDoorCloseU3Ed__27_MoveNext_m17606997F4FDB222B20EE398789048A98FB27666 (U3CHandleDoorCloseU3Ed__27_t54856E6D2E0C9531CE3240CAB4539880B27E4A00* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_001e:
	{
		// yield return new WaitForSeconds(0.005f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, (0.00499999989f), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0037:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Door_inside_left.transform.localPosition = Vector3.Lerp(new Vector3(Door_inside_left.transform.localPosition.x, Door_inside_left.transform.localPosition.y, Door_inside_left.transform.localPosition.z), new Vector3(Door_inside_left_close_value, Door_inside_left.transform.localPosition.y, Door_inside_left.transform.localPosition.z), DoorOpenTime * Time.deltaTime);
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_5 = V_1;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = L_5->___Door_inside_left_24;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_8 = V_1;
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = L_8->___Door_inside_left_24;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_9, NULL);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_10, NULL);
		float L_12 = L_11.___x_2;
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_13 = V_1;
		NullCheck(L_13);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = L_13->___Door_inside_left_24;
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_14, NULL);
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_15, NULL);
		float L_17 = L_16.___y_3;
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_18 = V_1;
		NullCheck(L_18);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = L_18->___Door_inside_left_24;
		NullCheck(L_19);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_19, NULL);
		NullCheck(L_20);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_20, NULL);
		float L_22 = L_21.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), L_12, L_17, L_22, /*hidden argument*/NULL);
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_24 = V_1;
		NullCheck(L_24);
		float L_25 = L_24->___Door_inside_left_close_value_25;
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_26 = V_1;
		NullCheck(L_26);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = L_26->___Door_inside_left_24;
		NullCheck(L_27);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
		L_28 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_27, NULL);
		NullCheck(L_28);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_28, NULL);
		float L_30 = L_29.___y_3;
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_31 = V_1;
		NullCheck(L_31);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32 = L_31->___Door_inside_left_24;
		NullCheck(L_32);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33;
		L_33 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_32, NULL);
		NullCheck(L_33);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_33, NULL);
		float L_35 = L_34.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		memset((&L_36), 0, sizeof(L_36));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_36), L_25, L_30, L_35, /*hidden argument*/NULL);
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_37 = V_1;
		NullCheck(L_37);
		float L_38 = L_37->___DoorOpenTime_14;
		float L_39;
		L_39 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_23, L_36, ((float)il2cpp_codegen_multiply(L_38, L_39)), NULL);
		NullCheck(L_7);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_7, L_40, NULL);
		// Door_inside_right.transform.localPosition = Vector3.Lerp(new Vector3(Door_inside_right.transform.localPosition.x, Door_inside_right.transform.localPosition.y, Door_inside_right.transform.localPosition.z), new Vector3(Door_inside_right_close_value, Door_inside_right.transform.localPosition.y, Door_inside_right.transform.localPosition.z), DoorOpenTime * Time.deltaTime);
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_41 = V_1;
		NullCheck(L_41);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_42 = L_41->___Door_inside_right_21;
		NullCheck(L_42);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_43;
		L_43 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_42, NULL);
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_44 = V_1;
		NullCheck(L_44);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_45 = L_44->___Door_inside_right_21;
		NullCheck(L_45);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_46;
		L_46 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_45, NULL);
		NullCheck(L_46);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_46, NULL);
		float L_48 = L_47.___x_2;
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_49 = V_1;
		NullCheck(L_49);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_50 = L_49->___Door_inside_right_21;
		NullCheck(L_50);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_51;
		L_51 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_50, NULL);
		NullCheck(L_51);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52;
		L_52 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_51, NULL);
		float L_53 = L_52.___y_3;
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_54 = V_1;
		NullCheck(L_54);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_55 = L_54->___Door_inside_right_21;
		NullCheck(L_55);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_56;
		L_56 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_55, NULL);
		NullCheck(L_56);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57;
		L_57 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_56, NULL);
		float L_58 = L_57.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59;
		memset((&L_59), 0, sizeof(L_59));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_59), L_48, L_53, L_58, /*hidden argument*/NULL);
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_60 = V_1;
		NullCheck(L_60);
		float L_61 = L_60->___Door_inside_right_close_value_22;
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_62 = V_1;
		NullCheck(L_62);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_63 = L_62->___Door_inside_right_21;
		NullCheck(L_63);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_64;
		L_64 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_63, NULL);
		NullCheck(L_64);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65;
		L_65 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_64, NULL);
		float L_66 = L_65.___y_3;
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_67 = V_1;
		NullCheck(L_67);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_68 = L_67->___Door_inside_right_21;
		NullCheck(L_68);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_69;
		L_69 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_68, NULL);
		NullCheck(L_69);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_70;
		L_70 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_69, NULL);
		float L_71 = L_70.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_72;
		memset((&L_72), 0, sizeof(L_72));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_72), L_61, L_66, L_71, /*hidden argument*/NULL);
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_73 = V_1;
		NullCheck(L_73);
		float L_74 = L_73->___DoorOpenTime_14;
		float L_75;
		L_75 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76;
		L_76 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_59, L_72, ((float)il2cpp_codegen_multiply(L_74, L_75)), NULL);
		NullCheck(L_43);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_43, L_76, NULL);
		// Door_outside_left[WhichFloor].transform.localPosition = Vector3.Lerp(new Vector3(Door_outside_left[WhichFloor].transform.localPosition.x, Door_outside_left[WhichFloor].transform.localPosition.y, Door_outside_left[WhichFloor].transform.localPosition.z), new Vector3(Door_outside_left_close_value[WhichFloor], Door_outside_left[WhichFloor].transform.localPosition.y, Door_outside_left[WhichFloor].transform.localPosition.z), DoorOpenTime * Time.deltaTime);
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_77 = V_1;
		NullCheck(L_77);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_78 = L_77->___Door_outside_left_15;
		int32_t L_79 = __this->___WhichFloor_3;
		NullCheck(L_78);
		int32_t L_80 = L_79;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_81 = (L_78)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		NullCheck(L_81);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_82;
		L_82 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_81, NULL);
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_83 = V_1;
		NullCheck(L_83);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_84 = L_83->___Door_outside_left_15;
		int32_t L_85 = __this->___WhichFloor_3;
		NullCheck(L_84);
		int32_t L_86 = L_85;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_87 = (L_84)->GetAt(static_cast<il2cpp_array_size_t>(L_86));
		NullCheck(L_87);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_88;
		L_88 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_87, NULL);
		NullCheck(L_88);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89;
		L_89 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_88, NULL);
		float L_90 = L_89.___x_2;
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_91 = V_1;
		NullCheck(L_91);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_92 = L_91->___Door_outside_left_15;
		int32_t L_93 = __this->___WhichFloor_3;
		NullCheck(L_92);
		int32_t L_94 = L_93;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_95 = (L_92)->GetAt(static_cast<il2cpp_array_size_t>(L_94));
		NullCheck(L_95);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_96;
		L_96 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_95, NULL);
		NullCheck(L_96);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_97;
		L_97 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_96, NULL);
		float L_98 = L_97.___y_3;
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_99 = V_1;
		NullCheck(L_99);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_100 = L_99->___Door_outside_left_15;
		int32_t L_101 = __this->___WhichFloor_3;
		NullCheck(L_100);
		int32_t L_102 = L_101;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_103 = (L_100)->GetAt(static_cast<il2cpp_array_size_t>(L_102));
		NullCheck(L_103);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_104;
		L_104 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_103, NULL);
		NullCheck(L_104);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_105;
		L_105 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_104, NULL);
		float L_106 = L_105.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_107;
		memset((&L_107), 0, sizeof(L_107));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_107), L_90, L_98, L_106, /*hidden argument*/NULL);
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_108 = V_1;
		NullCheck(L_108);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_109 = L_108->___Door_outside_left_close_value_16;
		int32_t L_110 = __this->___WhichFloor_3;
		NullCheck(L_109);
		int32_t L_111 = L_110;
		float L_112 = (L_109)->GetAt(static_cast<il2cpp_array_size_t>(L_111));
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_113 = V_1;
		NullCheck(L_113);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_114 = L_113->___Door_outside_left_15;
		int32_t L_115 = __this->___WhichFloor_3;
		NullCheck(L_114);
		int32_t L_116 = L_115;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_117 = (L_114)->GetAt(static_cast<il2cpp_array_size_t>(L_116));
		NullCheck(L_117);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_118;
		L_118 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_117, NULL);
		NullCheck(L_118);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_119;
		L_119 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_118, NULL);
		float L_120 = L_119.___y_3;
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_121 = V_1;
		NullCheck(L_121);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_122 = L_121->___Door_outside_left_15;
		int32_t L_123 = __this->___WhichFloor_3;
		NullCheck(L_122);
		int32_t L_124 = L_123;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_125 = (L_122)->GetAt(static_cast<il2cpp_array_size_t>(L_124));
		NullCheck(L_125);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_126;
		L_126 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_125, NULL);
		NullCheck(L_126);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_127;
		L_127 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_126, NULL);
		float L_128 = L_127.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_129;
		memset((&L_129), 0, sizeof(L_129));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_129), L_112, L_120, L_128, /*hidden argument*/NULL);
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_130 = V_1;
		NullCheck(L_130);
		float L_131 = L_130->___DoorOpenTime_14;
		float L_132;
		L_132 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_133;
		L_133 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_107, L_129, ((float)il2cpp_codegen_multiply(L_131, L_132)), NULL);
		NullCheck(L_82);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_82, L_133, NULL);
		// Door_outside_right[WhichFloor].transform.localPosition = Vector3.Lerp(new Vector3(Door_outside_right[WhichFloor].transform.localPosition.x, Door_outside_right[WhichFloor].transform.localPosition.y, Door_outside_right[WhichFloor].transform.localPosition.z), new Vector3(Door_outside_right_close_value[WhichFloor], Door_outside_right[WhichFloor].transform.localPosition.y, Door_outside_right[WhichFloor].transform.localPosition.z), DoorOpenTime * Time.deltaTime);
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_134 = V_1;
		NullCheck(L_134);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_135 = L_134->___Door_outside_right_18;
		int32_t L_136 = __this->___WhichFloor_3;
		NullCheck(L_135);
		int32_t L_137 = L_136;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_138 = (L_135)->GetAt(static_cast<il2cpp_array_size_t>(L_137));
		NullCheck(L_138);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_139;
		L_139 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_138, NULL);
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_140 = V_1;
		NullCheck(L_140);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_141 = L_140->___Door_outside_right_18;
		int32_t L_142 = __this->___WhichFloor_3;
		NullCheck(L_141);
		int32_t L_143 = L_142;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_144 = (L_141)->GetAt(static_cast<il2cpp_array_size_t>(L_143));
		NullCheck(L_144);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_145;
		L_145 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_144, NULL);
		NullCheck(L_145);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_146;
		L_146 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_145, NULL);
		float L_147 = L_146.___x_2;
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_148 = V_1;
		NullCheck(L_148);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_149 = L_148->___Door_outside_right_18;
		int32_t L_150 = __this->___WhichFloor_3;
		NullCheck(L_149);
		int32_t L_151 = L_150;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_152 = (L_149)->GetAt(static_cast<il2cpp_array_size_t>(L_151));
		NullCheck(L_152);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_153;
		L_153 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_152, NULL);
		NullCheck(L_153);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_154;
		L_154 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_153, NULL);
		float L_155 = L_154.___y_3;
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_156 = V_1;
		NullCheck(L_156);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_157 = L_156->___Door_outside_right_18;
		int32_t L_158 = __this->___WhichFloor_3;
		NullCheck(L_157);
		int32_t L_159 = L_158;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_160 = (L_157)->GetAt(static_cast<il2cpp_array_size_t>(L_159));
		NullCheck(L_160);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_161;
		L_161 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_160, NULL);
		NullCheck(L_161);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_162;
		L_162 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_161, NULL);
		float L_163 = L_162.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_164;
		memset((&L_164), 0, sizeof(L_164));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_164), L_147, L_155, L_163, /*hidden argument*/NULL);
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_165 = V_1;
		NullCheck(L_165);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_166 = L_165->___Door_outside_right_close_value_19;
		int32_t L_167 = __this->___WhichFloor_3;
		NullCheck(L_166);
		int32_t L_168 = L_167;
		float L_169 = (L_166)->GetAt(static_cast<il2cpp_array_size_t>(L_168));
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_170 = V_1;
		NullCheck(L_170);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_171 = L_170->___Door_outside_right_18;
		int32_t L_172 = __this->___WhichFloor_3;
		NullCheck(L_171);
		int32_t L_173 = L_172;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_174 = (L_171)->GetAt(static_cast<il2cpp_array_size_t>(L_173));
		NullCheck(L_174);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_175;
		L_175 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_174, NULL);
		NullCheck(L_175);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_176;
		L_176 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_175, NULL);
		float L_177 = L_176.___y_3;
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_178 = V_1;
		NullCheck(L_178);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_179 = L_178->___Door_outside_right_18;
		int32_t L_180 = __this->___WhichFloor_3;
		NullCheck(L_179);
		int32_t L_181 = L_180;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_182 = (L_179)->GetAt(static_cast<il2cpp_array_size_t>(L_181));
		NullCheck(L_182);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_183;
		L_183 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_182, NULL);
		NullCheck(L_183);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_184;
		L_184 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_183, NULL);
		float L_185 = L_184.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_186;
		memset((&L_186), 0, sizeof(L_186));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_186), L_169, L_177, L_185, /*hidden argument*/NULL);
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_187 = V_1;
		NullCheck(L_187);
		float L_188 = L_187->___DoorOpenTime_14;
		float L_189;
		L_189 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_190;
		L_190 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_164, L_186, ((float)il2cpp_codegen_multiply(L_188, L_189)), NULL);
		NullCheck(L_139);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_139, L_190, NULL);
		// if ((Door_inside_left.transform.localPosition.x + 0.00001f) > Door_inside_left_close_value)
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_191 = V_1;
		NullCheck(L_191);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_192 = L_191->___Door_inside_left_24;
		NullCheck(L_192);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_193;
		L_193 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_192, NULL);
		NullCheck(L_193);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_194;
		L_194 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_193, NULL);
		float L_195 = L_194.___x_2;
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_196 = V_1;
		NullCheck(L_196);
		float L_197 = L_196->___Door_inside_left_close_value_25;
		if ((!(((float)((float)il2cpp_codegen_add(L_195, (9.99999975E-06f)))) > ((float)L_197))))
		{
			goto IL_001e;
		}
	}
	{
		// Doors_finished = true;
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_198 = V_1;
		NullCheck(L_198);
		L_198->___Doors_finished_11 = (bool)1;
		// StopCoroutine(DoorClose);
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_199 = V_1;
		evelator_controll_t80FE264138F0CAA5E69E119A28504C6DBD3B04EF* L_200 = V_1;
		NullCheck(L_200);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_201 = L_200->___DoorClose_10;
		NullCheck(L_199);
		MonoBehaviour_StopCoroutine_mB0FC91BE84203BD8E360B3FBAE5B958B4C5ED22A(L_199, L_201, NULL);
		// goto Repeating;
		goto IL_001e;
	}
}
// System.Object evelator_controll/<HandleDoorClose>d__27::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CHandleDoorCloseU3Ed__27_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mA81B2F7CA8F298D57907DBB83C7DCF40AD5CB1A9 (U3CHandleDoorCloseU3Ed__27_t54856E6D2E0C9531CE3240CAB4539880B27E4A00* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void evelator_controll/<HandleDoorClose>d__27::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHandleDoorCloseU3Ed__27_System_Collections_IEnumerator_Reset_mF716454176B8B38F00C3698EA9074183B531DB78 (U3CHandleDoorCloseU3Ed__27_t54856E6D2E0C9531CE3240CAB4539880B27E4A00* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CHandleDoorCloseU3Ed__27_System_Collections_IEnumerator_Reset_mF716454176B8B38F00C3698EA9074183B531DB78_RuntimeMethod_var)));
	}
}
// System.Object evelator_controll/<HandleDoorClose>d__27::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CHandleDoorCloseU3Ed__27_System_Collections_IEnumerator_get_Current_mC27F3A854417357079B556CDC83EB82A42A90F4C (U3CHandleDoorCloseU3Ed__27_t54856E6D2E0C9531CE3240CAB4539880B27E4A00* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Fix_elevator_fall::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fix_elevator_fall_OnTriggerEnter_mA7F7567B14DA3C0A1FB1D513A1C7CC216186F100 (Fix_elevator_fall_t8EFF43E900C7C8D0D3BBC49E23B06E83DF65ADC9* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(other.tag == "Player")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_0, NULL);
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_2)
		{
			goto IL_003b;
		}
	}
	{
		// inElevator = true;
		__this->___inElevator_5 = (bool)1;
		// Player = other.gameObject;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_3 = ___other0;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		__this->___Player_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Player_6), (void*)L_4);
		// Player.transform.parent = transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___Player_6;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_6);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_6, L_7, NULL);
	}

IL_003b:
	{
		// }
		return;
	}
}
// System.Void Fix_elevator_fall::OnTriggerExit(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fix_elevator_fall_OnTriggerExit_mDF432E91812DD5C0B78F9322229CAE5A1BACE8CC (Fix_elevator_fall_t8EFF43E900C7C8D0D3BBC49E23B06E83DF65ADC9* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.tag == "Player")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_0, NULL);
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		// inElevator = false;
		__this->___inElevator_5 = (bool)0;
		// Player = null;
		__this->___Player_6 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Player_6), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		// other.transform.parent = null;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_3 = ___other0;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		NullCheck(L_4);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_4, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, NULL);
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Void Fix_elevator_fall::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fix_elevator_fall__ctor_mECE2B5BE61EDDA82C695EB15A48F04F4CF9CA9A3 (Fix_elevator_fall_t8EFF43E900C7C8D0D3BBC49E23B06E83DF65ADC9* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void pass_on_parent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void pass_on_parent__ctor_m9D30082264FDBBC55F237E4870AB624164782447 (pass_on_parent_tB2DA5725BC9B6E1AC13383CC63FD1633538ECAF2* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BookMove::Movement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BookMove_Movement_mDFEC50826B4B3CB8684F7484687DA801C50F3AE0 (BookMove_tB09BD4EBFB43F9B825CFC57F443B6FA1846E62B2* __this, const RuntimeMethod* method) 
{
	{
		// bookshelve.transform.position = new Vector3(10, 0, 5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___bookshelve_4;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_2), (10.0f), (0.0f), (5.0f), /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_2, NULL);
		// text1.gameObject.SetActive(false);
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_3 = __this->___text1_5;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		// text2.gameObject.SetActive(true);
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_5 = __this->___text2_6;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void BookMove::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BookMove__ctor_m6B4149516B0CFF8B3F243C0A20D1A5BAD9393FBE (BookMove_tB09BD4EBFB43F9B825CFC57F443B6FA1846E62B2* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ChestClose::onClickButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChestClose_onClickButton_m8DC5D665EEFA6E53EA63C88120818EF8D9574758 (ChestClose_t3A30F76244A94C43B075D7CD4C7DE1BB3C7BBAAE* __this, const RuntimeMethod* method) 
{
	{
		// initialText.gameObject.SetActive(false);
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_0 = __this->___initialText_4;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// rightText.gameObject.SetActive(false);
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_2 = __this->___rightText_5;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// wrongText.gameObject.SetActive(true);
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_4 = __this->___wrongText_6;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
		// chestOpen.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___chestOpen_7;
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)0, NULL);
		// chestClose.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___chestClose_8;
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void ChestClose::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChestClose__ctor_m3ECEC3EC0FAD4B7EE9DFF3B9A0E8D2213D83C685 (ChestClose_t3A30F76244A94C43B075D7CD4C7DE1BB3C7BBAAE* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ChestOpen::onClickButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChestOpen_onClickButton_mEFBAB1C94DAC054CDDB03976D700F0785D2E3F64 (ChestOpen_t5B91EC05FD8CF8A48CF6E79CD556F890849F778F* __this, const RuntimeMethod* method) 
{
	{
		// initialText.gameObject.SetActive(false);
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_0 = __this->___initialText_4;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// rightText.gameObject.SetActive(true);
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_2 = __this->___rightText_5;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		// wrongText.gameObject.SetActive(false);
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_4 = __this->___wrongText_6;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		// chestOpen.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___chestOpen_7;
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)1, NULL);
		// chestClose.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___chestClose_8;
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void ChestOpen::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChestOpen__ctor_mA963EF6FA585BF9C06A48034E328D9A6992A25DE (ChestOpen_t5B91EC05FD8CF8A48CF6E79CD556F890849F778F* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RightChoice::buttonClickEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RightChoice_buttonClickEvent_mAAEF4698A87922EF2B0E1F8A9E24E2F8BABFC0DD (RightChoice_tFB70CDABBDB954FF765ABFDFED0AE8AF2B3BD0B2* __this, const RuntimeMethod* method) 
{
	{
		// text1.gameObject.SetActive(false);
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_0 = __this->___text1_4;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// text2.gameObject.SetActive(true);
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_2 = __this->___text2_5;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		// text3.gameObject.SetActive(false);
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_4 = __this->___text3_6;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void RightChoice::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RightChoice__ctor_mFD9A1C3B8F02188D8BBCB359E17E2954623D07F2 (RightChoice_tFB70CDABBDB954FF765ABFDFED0AE8AF2B3BD0B2* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GoodChoice::OnbuttonClickEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoodChoice_OnbuttonClickEvent_m5DFB691D1319F96FD74F91A4F3F62C88C2BA1E88 (GoodChoice_t48F8DFD9F0FA97F54A0F616D7B5E6C6C725871C7* __this, const RuntimeMethod* method) 
{
	{
		// text1.gameObject.SetActive(false);
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_0 = __this->___text1_4;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// text2.gameObject.SetActive(false);
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_2 = __this->___text2_5;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// text3.gameObject.SetActive(true);
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_4 = __this->___text3_6;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void GoodChoice::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoodChoice__ctor_m51FE815B470E02A109C50540B4A2000E5DF462C9 (GoodChoice_t48F8DFD9F0FA97F54A0F616D7B5E6C6C725871C7* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void QRCodeObjectSpawner::DisableAllGameObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QRCodeObjectSpawner_DisableAllGameObjects_m9E63CE5ED46D44FD3FD8CE787029C92E0058E712 (QRCodeObjectSpawner_tE4B2BA69EF57A69EFB342CF1DB43044872261DB8* __this, const RuntimeMethod* method) 
{
	{
		// coffeeMug1.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___coffeeMug1_9;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// coffeeMug2.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___coffeeMug2_10;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// coffeeMug3.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___coffeeMug3_11;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// coffeeMug4.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___coffeeMug4_12;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// bookShelve.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___bookShelve_13;
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		// chest.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___chest_14;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		// clifford.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___clifford_15;
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)0, NULL);
		// crawley.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___crawley_16;
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)0, NULL);
		// curtains.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___curtains_17;
		NullCheck(L_8);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)0, NULL);
		// door.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___door_18;
		NullCheck(L_9);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)0, NULL);
		// qrCodeObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___qrCodeObject_19;
		NullCheck(L_10);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)0, NULL);
		// redBear.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___redBear_20;
		NullCheck(L_11);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_11, (bool)0, NULL);
		// bubbleGum.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___bubbleGum_21;
		NullCheck(L_12);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void QRCodeObjectSpawner::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QRCodeObjectSpawner_Start_m5816DA3C7BFC3351E769003022DDBEBBA81ECA56 (QRCodeObjectSpawner_tE4B2BA69EF57A69EFB342CF1DB43044872261DB8* __this, const RuntimeMethod* method) 
{
	{
		// DisableAllGameObjects();
		QRCodeObjectSpawner_DisableAllGameObjects_m9E63CE5ED46D44FD3FD8CE787029C92E0058E712(__this, NULL);
		// }
		return;
	}
}
// System.Void QRCodeObjectSpawner::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QRCodeObjectSpawner_Update_m3AAC289D4A0821546A24622275B14D0B1E5100DD (QRCodeObjectSpawner_tE4B2BA69EF57A69EFB342CF1DB43044872261DB8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisQRCode_t5BE0355FE27BCDB15CE771CA9F867D075C3CCEEE_mB0D3F96E96355044122E01BFE67DC3D7C49842C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE01750B88D9A581E9196F3444952F7592E862592_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!haveInstantiatedContent)
		bool L_0 = __this->___haveInstantiatedContent_8;
		if (L_0)
		{
			goto IL_02a0;
		}
	}
	{
		// qrCode = GetComponent<Microsoft.MixedReality.SampleQRCodes.QRCode>();
		QRCode_t5BE0355FE27BCDB15CE771CA9F867D075C3CCEEE* L_1;
		L_1 = Component_GetComponent_TisQRCode_t5BE0355FE27BCDB15CE771CA9F867D075C3CCEEE_mB0D3F96E96355044122E01BFE67DC3D7C49842C4(__this, Component_GetComponent_TisQRCode_t5BE0355FE27BCDB15CE771CA9F867D075C3CCEEE_mB0D3F96E96355044122E01BFE67DC3D7C49842C4_RuntimeMethod_var);
		__this->___qrCode_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___qrCode_6), (void*)L_1);
		// if (qrCode.qrCode != null)
		QRCode_t5BE0355FE27BCDB15CE771CA9F867D075C3CCEEE* L_2 = __this->___qrCode_6;
		NullCheck(L_2);
		QRCode_tCFF46F069EB07095083E7DA4B0B9C7D2B9647C32* L_3 = L_2->___qrCode_4;
		if (!L_3)
		{
			goto IL_02a0;
		}
	}
	{
		// if (nameToIndexMap[qrCode.qrCode.Data] == 0)
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_4 = __this->___nameToIndexMap_7;
		QRCode_t5BE0355FE27BCDB15CE771CA9F867D075C3CCEEE* L_5 = __this->___qrCode_6;
		NullCheck(L_5);
		QRCode_tCFF46F069EB07095083E7DA4B0B9C7D2B9647C32* L_6 = L_5->___qrCode_4;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = QRCode_get_Data_m1E9F8E43A89CAC755421CB70AA8F6D659CA40246(L_6, NULL);
		NullCheck(L_4);
		int32_t L_8;
		L_8 = Dictionary_2_get_Item_mE01750B88D9A581E9196F3444952F7592E862592(L_4, L_7, Dictionary_2_get_Item_mE01750B88D9A581E9196F3444952F7592E862592_RuntimeMethod_var);
		if (L_8)
		{
			goto IL_0051;
		}
	}
	{
		// coffeeMug1.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___coffeeMug1_9;
		NullCheck(L_9);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)1, NULL);
		return;
	}

IL_0051:
	{
		// else if (nameToIndexMap[qrCode.qrCode.Data] == 1)
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_10 = __this->___nameToIndexMap_7;
		QRCode_t5BE0355FE27BCDB15CE771CA9F867D075C3CCEEE* L_11 = __this->___qrCode_6;
		NullCheck(L_11);
		QRCode_tCFF46F069EB07095083E7DA4B0B9C7D2B9647C32* L_12 = L_11->___qrCode_4;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = QRCode_get_Data_m1E9F8E43A89CAC755421CB70AA8F6D659CA40246(L_12, NULL);
		NullCheck(L_10);
		int32_t L_14;
		L_14 = Dictionary_2_get_Item_mE01750B88D9A581E9196F3444952F7592E862592(L_10, L_13, Dictionary_2_get_Item_mE01750B88D9A581E9196F3444952F7592E862592_RuntimeMethod_var);
		if ((!(((uint32_t)L_14) == ((uint32_t)1))))
		{
			goto IL_0082;
		}
	}
	{
		// DisableAllGameObjects();
		QRCodeObjectSpawner_DisableAllGameObjects_m9E63CE5ED46D44FD3FD8CE787029C92E0058E712(__this, NULL);
		// bookShelve.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = __this->___bookShelve_13;
		NullCheck(L_15);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_15, (bool)1, NULL);
		return;
	}

IL_0082:
	{
		// else if (nameToIndexMap[qrCode.qrCode.Data] == 2)
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_16 = __this->___nameToIndexMap_7;
		QRCode_t5BE0355FE27BCDB15CE771CA9F867D075C3CCEEE* L_17 = __this->___qrCode_6;
		NullCheck(L_17);
		QRCode_tCFF46F069EB07095083E7DA4B0B9C7D2B9647C32* L_18 = L_17->___qrCode_4;
		NullCheck(L_18);
		String_t* L_19;
		L_19 = QRCode_get_Data_m1E9F8E43A89CAC755421CB70AA8F6D659CA40246(L_18, NULL);
		NullCheck(L_16);
		int32_t L_20;
		L_20 = Dictionary_2_get_Item_mE01750B88D9A581E9196F3444952F7592E862592(L_16, L_19, Dictionary_2_get_Item_mE01750B88D9A581E9196F3444952F7592E862592_RuntimeMethod_var);
		if ((!(((uint32_t)L_20) == ((uint32_t)2))))
		{
			goto IL_00b3;
		}
	}
	{
		// DisableAllGameObjects();
		QRCodeObjectSpawner_DisableAllGameObjects_m9E63CE5ED46D44FD3FD8CE787029C92E0058E712(__this, NULL);
		// coffeeMug2.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = __this->___coffeeMug2_10;
		NullCheck(L_21);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_21, (bool)1, NULL);
		return;
	}

IL_00b3:
	{
		// else if (nameToIndexMap[qrCode.qrCode.Data] == 3)
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_22 = __this->___nameToIndexMap_7;
		QRCode_t5BE0355FE27BCDB15CE771CA9F867D075C3CCEEE* L_23 = __this->___qrCode_6;
		NullCheck(L_23);
		QRCode_tCFF46F069EB07095083E7DA4B0B9C7D2B9647C32* L_24 = L_23->___qrCode_4;
		NullCheck(L_24);
		String_t* L_25;
		L_25 = QRCode_get_Data_m1E9F8E43A89CAC755421CB70AA8F6D659CA40246(L_24, NULL);
		NullCheck(L_22);
		int32_t L_26;
		L_26 = Dictionary_2_get_Item_mE01750B88D9A581E9196F3444952F7592E862592(L_22, L_25, Dictionary_2_get_Item_mE01750B88D9A581E9196F3444952F7592E862592_RuntimeMethod_var);
		if ((!(((uint32_t)L_26) == ((uint32_t)3))))
		{
			goto IL_00e4;
		}
	}
	{
		// DisableAllGameObjects();
		QRCodeObjectSpawner_DisableAllGameObjects_m9E63CE5ED46D44FD3FD8CE787029C92E0058E712(__this, NULL);
		// coffeeMug3.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = __this->___coffeeMug3_11;
		NullCheck(L_27);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_27, (bool)1, NULL);
		return;
	}

IL_00e4:
	{
		// else if (nameToIndexMap[qrCode.qrCode.Data] == 4)
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_28 = __this->___nameToIndexMap_7;
		QRCode_t5BE0355FE27BCDB15CE771CA9F867D075C3CCEEE* L_29 = __this->___qrCode_6;
		NullCheck(L_29);
		QRCode_tCFF46F069EB07095083E7DA4B0B9C7D2B9647C32* L_30 = L_29->___qrCode_4;
		NullCheck(L_30);
		String_t* L_31;
		L_31 = QRCode_get_Data_m1E9F8E43A89CAC755421CB70AA8F6D659CA40246(L_30, NULL);
		NullCheck(L_28);
		int32_t L_32;
		L_32 = Dictionary_2_get_Item_mE01750B88D9A581E9196F3444952F7592E862592(L_28, L_31, Dictionary_2_get_Item_mE01750B88D9A581E9196F3444952F7592E862592_RuntimeMethod_var);
		if ((!(((uint32_t)L_32) == ((uint32_t)4))))
		{
			goto IL_0115;
		}
	}
	{
		// DisableAllGameObjects();
		QRCodeObjectSpawner_DisableAllGameObjects_m9E63CE5ED46D44FD3FD8CE787029C92E0058E712(__this, NULL);
		// curtains.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33 = __this->___curtains_17;
		NullCheck(L_33);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_33, (bool)1, NULL);
		return;
	}

IL_0115:
	{
		// else if (nameToIndexMap[qrCode.qrCode.Data] == 5)
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_34 = __this->___nameToIndexMap_7;
		QRCode_t5BE0355FE27BCDB15CE771CA9F867D075C3CCEEE* L_35 = __this->___qrCode_6;
		NullCheck(L_35);
		QRCode_tCFF46F069EB07095083E7DA4B0B9C7D2B9647C32* L_36 = L_35->___qrCode_4;
		NullCheck(L_36);
		String_t* L_37;
		L_37 = QRCode_get_Data_m1E9F8E43A89CAC755421CB70AA8F6D659CA40246(L_36, NULL);
		NullCheck(L_34);
		int32_t L_38;
		L_38 = Dictionary_2_get_Item_mE01750B88D9A581E9196F3444952F7592E862592(L_34, L_37, Dictionary_2_get_Item_mE01750B88D9A581E9196F3444952F7592E862592_RuntimeMethod_var);
		if ((!(((uint32_t)L_38) == ((uint32_t)5))))
		{
			goto IL_0146;
		}
	}
	{
		// DisableAllGameObjects();
		QRCodeObjectSpawner_DisableAllGameObjects_m9E63CE5ED46D44FD3FD8CE787029C92E0058E712(__this, NULL);
		// redBear.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_39 = __this->___redBear_20;
		NullCheck(L_39);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_39, (bool)1, NULL);
		return;
	}

IL_0146:
	{
		// else if (nameToIndexMap[qrCode.qrCode.Data] == 6)
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_40 = __this->___nameToIndexMap_7;
		QRCode_t5BE0355FE27BCDB15CE771CA9F867D075C3CCEEE* L_41 = __this->___qrCode_6;
		NullCheck(L_41);
		QRCode_tCFF46F069EB07095083E7DA4B0B9C7D2B9647C32* L_42 = L_41->___qrCode_4;
		NullCheck(L_42);
		String_t* L_43;
		L_43 = QRCode_get_Data_m1E9F8E43A89CAC755421CB70AA8F6D659CA40246(L_42, NULL);
		NullCheck(L_40);
		int32_t L_44;
		L_44 = Dictionary_2_get_Item_mE01750B88D9A581E9196F3444952F7592E862592(L_40, L_43, Dictionary_2_get_Item_mE01750B88D9A581E9196F3444952F7592E862592_RuntimeMethod_var);
		if ((!(((uint32_t)L_44) == ((uint32_t)6))))
		{
			goto IL_0177;
		}
	}
	{
		// DisableAllGameObjects();
		QRCodeObjectSpawner_DisableAllGameObjects_m9E63CE5ED46D44FD3FD8CE787029C92E0058E712(__this, NULL);
		// bubbleGum.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_45 = __this->___bubbleGum_21;
		NullCheck(L_45);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_45, (bool)1, NULL);
		return;
	}

IL_0177:
	{
		// else if (nameToIndexMap[qrCode.qrCode.Data] == 7)
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_46 = __this->___nameToIndexMap_7;
		QRCode_t5BE0355FE27BCDB15CE771CA9F867D075C3CCEEE* L_47 = __this->___qrCode_6;
		NullCheck(L_47);
		QRCode_tCFF46F069EB07095083E7DA4B0B9C7D2B9647C32* L_48 = L_47->___qrCode_4;
		NullCheck(L_48);
		String_t* L_49;
		L_49 = QRCode_get_Data_m1E9F8E43A89CAC755421CB70AA8F6D659CA40246(L_48, NULL);
		NullCheck(L_46);
		int32_t L_50;
		L_50 = Dictionary_2_get_Item_mE01750B88D9A581E9196F3444952F7592E862592(L_46, L_49, Dictionary_2_get_Item_mE01750B88D9A581E9196F3444952F7592E862592_RuntimeMethod_var);
		if ((!(((uint32_t)L_50) == ((uint32_t)7))))
		{
			goto IL_01a8;
		}
	}
	{
		// DisableAllGameObjects();
		QRCodeObjectSpawner_DisableAllGameObjects_m9E63CE5ED46D44FD3FD8CE787029C92E0058E712(__this, NULL);
		// crawley.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_51 = __this->___crawley_16;
		NullCheck(L_51);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_51, (bool)1, NULL);
		return;
	}

IL_01a8:
	{
		// else if (nameToIndexMap[qrCode.qrCode.Data] == 8)
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_52 = __this->___nameToIndexMap_7;
		QRCode_t5BE0355FE27BCDB15CE771CA9F867D075C3CCEEE* L_53 = __this->___qrCode_6;
		NullCheck(L_53);
		QRCode_tCFF46F069EB07095083E7DA4B0B9C7D2B9647C32* L_54 = L_53->___qrCode_4;
		NullCheck(L_54);
		String_t* L_55;
		L_55 = QRCode_get_Data_m1E9F8E43A89CAC755421CB70AA8F6D659CA40246(L_54, NULL);
		NullCheck(L_52);
		int32_t L_56;
		L_56 = Dictionary_2_get_Item_mE01750B88D9A581E9196F3444952F7592E862592(L_52, L_55, Dictionary_2_get_Item_mE01750B88D9A581E9196F3444952F7592E862592_RuntimeMethod_var);
		if ((!(((uint32_t)L_56) == ((uint32_t)8))))
		{
			goto IL_01d9;
		}
	}
	{
		// DisableAllGameObjects();
		QRCodeObjectSpawner_DisableAllGameObjects_m9E63CE5ED46D44FD3FD8CE787029C92E0058E712(__this, NULL);
		// coffeeMug4.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_57 = __this->___coffeeMug4_12;
		NullCheck(L_57);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_57, (bool)1, NULL);
		return;
	}

IL_01d9:
	{
		// else if (nameToIndexMap[qrCode.qrCode.Data] == 9)
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_58 = __this->___nameToIndexMap_7;
		QRCode_t5BE0355FE27BCDB15CE771CA9F867D075C3CCEEE* L_59 = __this->___qrCode_6;
		NullCheck(L_59);
		QRCode_tCFF46F069EB07095083E7DA4B0B9C7D2B9647C32* L_60 = L_59->___qrCode_4;
		NullCheck(L_60);
		String_t* L_61;
		L_61 = QRCode_get_Data_m1E9F8E43A89CAC755421CB70AA8F6D659CA40246(L_60, NULL);
		NullCheck(L_58);
		int32_t L_62;
		L_62 = Dictionary_2_get_Item_mE01750B88D9A581E9196F3444952F7592E862592(L_58, L_61, Dictionary_2_get_Item_mE01750B88D9A581E9196F3444952F7592E862592_RuntimeMethod_var);
		if ((!(((uint32_t)L_62) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_020b;
		}
	}
	{
		// DisableAllGameObjects();
		QRCodeObjectSpawner_DisableAllGameObjects_m9E63CE5ED46D44FD3FD8CE787029C92E0058E712(__this, NULL);
		// clifford.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_63 = __this->___clifford_15;
		NullCheck(L_63);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_63, (bool)1, NULL);
		return;
	}

IL_020b:
	{
		// else if (nameToIndexMap[qrCode.qrCode.Data] == 10)
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_64 = __this->___nameToIndexMap_7;
		QRCode_t5BE0355FE27BCDB15CE771CA9F867D075C3CCEEE* L_65 = __this->___qrCode_6;
		NullCheck(L_65);
		QRCode_tCFF46F069EB07095083E7DA4B0B9C7D2B9647C32* L_66 = L_65->___qrCode_4;
		NullCheck(L_66);
		String_t* L_67;
		L_67 = QRCode_get_Data_m1E9F8E43A89CAC755421CB70AA8F6D659CA40246(L_66, NULL);
		NullCheck(L_64);
		int32_t L_68;
		L_68 = Dictionary_2_get_Item_mE01750B88D9A581E9196F3444952F7592E862592(L_64, L_67, Dictionary_2_get_Item_mE01750B88D9A581E9196F3444952F7592E862592_RuntimeMethod_var);
		if ((!(((uint32_t)L_68) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_023d;
		}
	}
	{
		// DisableAllGameObjects();
		QRCodeObjectSpawner_DisableAllGameObjects_m9E63CE5ED46D44FD3FD8CE787029C92E0058E712(__this, NULL);
		// door.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_69 = __this->___door_18;
		NullCheck(L_69);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_69, (bool)1, NULL);
		return;
	}

IL_023d:
	{
		// else if (nameToIndexMap[qrCode.qrCode.Data] == 11)
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_70 = __this->___nameToIndexMap_7;
		QRCode_t5BE0355FE27BCDB15CE771CA9F867D075C3CCEEE* L_71 = __this->___qrCode_6;
		NullCheck(L_71);
		QRCode_tCFF46F069EB07095083E7DA4B0B9C7D2B9647C32* L_72 = L_71->___qrCode_4;
		NullCheck(L_72);
		String_t* L_73;
		L_73 = QRCode_get_Data_m1E9F8E43A89CAC755421CB70AA8F6D659CA40246(L_72, NULL);
		NullCheck(L_70);
		int32_t L_74;
		L_74 = Dictionary_2_get_Item_mE01750B88D9A581E9196F3444952F7592E862592(L_70, L_73, Dictionary_2_get_Item_mE01750B88D9A581E9196F3444952F7592E862592_RuntimeMethod_var);
		if ((!(((uint32_t)L_74) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_026f;
		}
	}
	{
		// DisableAllGameObjects();
		QRCodeObjectSpawner_DisableAllGameObjects_m9E63CE5ED46D44FD3FD8CE787029C92E0058E712(__this, NULL);
		// chest.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_75 = __this->___chest_14;
		NullCheck(L_75);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_75, (bool)1, NULL);
		return;
	}

IL_026f:
	{
		// else if (nameToIndexMap[qrCode.qrCode.Data] == 12)
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_76 = __this->___nameToIndexMap_7;
		QRCode_t5BE0355FE27BCDB15CE771CA9F867D075C3CCEEE* L_77 = __this->___qrCode_6;
		NullCheck(L_77);
		QRCode_tCFF46F069EB07095083E7DA4B0B9C7D2B9647C32* L_78 = L_77->___qrCode_4;
		NullCheck(L_78);
		String_t* L_79;
		L_79 = QRCode_get_Data_m1E9F8E43A89CAC755421CB70AA8F6D659CA40246(L_78, NULL);
		NullCheck(L_76);
		int32_t L_80;
		L_80 = Dictionary_2_get_Item_mE01750B88D9A581E9196F3444952F7592E862592(L_76, L_79, Dictionary_2_get_Item_mE01750B88D9A581E9196F3444952F7592E862592_RuntimeMethod_var);
		if ((!(((uint32_t)L_80) == ((uint32_t)((int32_t)12)))))
		{
			goto IL_02a0;
		}
	}
	{
		// DisableAllGameObjects();
		QRCodeObjectSpawner_DisableAllGameObjects_m9E63CE5ED46D44FD3FD8CE787029C92E0058E712(__this, NULL);
		// qrCodeObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_81 = __this->___qrCodeObject_19;
		NullCheck(L_81);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_81, (bool)1, NULL);
	}

IL_02a0:
	{
		// }
		return;
	}
}
// System.Void QRCodeObjectSpawner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QRCodeObjectSpawner__ctor_m9BC1277E3AA8E4CAD2922028C82ABC3AD700AF43 (QRCodeObjectSpawner_tE4B2BA69EF57A69EFB342CF1DB43044872261DB8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m9804017B0F6F06DE8C8FAA9292240873CB450B2D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EBD646B60E1C3FCE0203770591ED3C3D63537DC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D714DD3E8E77A697EF557E85ED2B014A96328C5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3DCC6243286938BE75C3FA773B9BA71160A2E869);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral410E5346BCA8EE150FFD507311DD85789F2E171E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral579A50C67ADB00AC3925859C23590322B2D0BE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6CB05FD18E12F98F81A204339D25DD82BC993FDD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral707E5C310990A24997793C87AABC8DC272CBFE82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E70AF961A2F88ADB9DB7B9C3B5F25A532C1570A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA019FB7F17AA36A9743C530E1F11D5613B8B1158);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB69FA1AB6BB831506EFCAD83900FEE751E85F6F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF86C9E9E7FE0EF09A2EAE8066CDC31F859254CC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF420ABFDDBDA7B9EE665D85EF62E4A437554003);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFD60316EE3ADB7B16A998DF8AE0D68C293F6622E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Dictionary<string, int> nameToIndexMap = new Dictionary<string, int>(StringComparer.InvariantCultureIgnoreCase)
		// {
		//     {"A",0},
		//     {"B",1},
		//     {"C",2},
		//     {"D",3},
		//     {"E",4},
		//     {"F",5},
		//     {"G",6},
		//     {"H",7},
		//     {"I",8},
		//     {"J",9},
		//     {"K",10},
		//     {"L",11},
		//     {"Maze",12}
		// };
		il2cpp_codegen_runtime_class_init_inline(StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* L_0;
		L_0 = StringComparer_get_InvariantCultureIgnoreCase_m736E26B9A455C50799BF69D87F2E076C272337B1_inline(NULL);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_1 = (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588*)il2cpp_codegen_object_new(Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_m9804017B0F6F06DE8C8FAA9292240873CB450B2D(L_1, L_0, Dictionary_2__ctor_m9804017B0F6F06DE8C8FAA9292240873CB450B2D_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_2 = L_1;
		NullCheck(L_2);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_2, _stringLiteralEF420ABFDDBDA7B9EE665D85EF62E4A437554003, 0, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_3 = L_2;
		NullCheck(L_3);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_3, _stringLiteralAB69FA1AB6BB831506EFCAD83900FEE751E85F6F, 1, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_4 = L_3;
		NullCheck(L_4);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_4, _stringLiteralBF86C9E9E7FE0EF09A2EAE8066CDC31F859254CC, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_5 = L_4;
		NullCheck(L_5);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_5, _stringLiteralA019FB7F17AA36A9743C530E1F11D5613B8B1158, 3, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_6 = L_5;
		NullCheck(L_6);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_6, _stringLiteral579A50C67ADB00AC3925859C23590322B2D0BE9D, 4, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_7 = L_6;
		NullCheck(L_7);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_7, _stringLiteralFD60316EE3ADB7B16A998DF8AE0D68C293F6622E, 5, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_8 = L_7;
		NullCheck(L_8);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_8, _stringLiteral3DCC6243286938BE75C3FA773B9BA71160A2E869, 6, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_9 = L_8;
		NullCheck(L_9);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_9, _stringLiteral410E5346BCA8EE150FFD507311DD85789F2E171E, 7, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_10 = L_9;
		NullCheck(L_10);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_10, _stringLiteral6CB05FD18E12F98F81A204339D25DD82BC993FDD, 8, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_11 = L_10;
		NullCheck(L_11);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_11, _stringLiteral0EBD646B60E1C3FCE0203770591ED3C3D63537DC, ((int32_t)9), Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_12 = L_11;
		NullCheck(L_12);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_12, _stringLiteral3D714DD3E8E77A697EF557E85ED2B014A96328C5, ((int32_t)10), Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_13 = L_12;
		NullCheck(L_13);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_13, _stringLiteral7E70AF961A2F88ADB9DB7B9C3B5F25A532C1570A, ((int32_t)11), Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_14 = L_13;
		NullCheck(L_14);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_14, _stringLiteral707E5C310990A24997793C87AABC8DC272CBFE82, ((int32_t)12), Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		__this->___nameToIndexMap_7 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___nameToIndexMap_7), (void*)L_14);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TapToSetAnchor::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToSetAnchor_Start_m9352E13A7B2AAC6C8837600D9EBE49734C126283 (TapToSetAnchor_t09910132A62807038E275C33C99978EDE23C0D46* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityEventSystem_RegisterHandler_TisIMixedRealityPointerHandler_t3FF57994997E4A63F923DB13BB2E304BAD383FFC_m06F808802F0315B6299A129F1DAC4C9B91544D25_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// CoreServices.InputSystem?.RegisterHandler<IMixedRealityPointerHandler>(this);
		il2cpp_codegen_runtime_class_init_inline(CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = CoreServices_get_InputSystem_m09CC5207090321051B3C092D5BA21F2858DCD607(NULL);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		NullCheck(G_B2_0);
		GenericInterfaceActionInvoker1< RuntimeObject* >::Invoke(IMixedRealityEventSystem_RegisterHandler_TisIMixedRealityPointerHandler_t3FF57994997E4A63F923DB13BB2E304BAD383FFC_m06F808802F0315B6299A129F1DAC4C9B91544D25_RuntimeMethod_var, G_B2_0, __this);
		// }
		return;
	}
}
// System.Void TapToSetAnchor::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToSetAnchor_OnEnable_mF910471E8425C0ACE1EA5E778886E7F837882CE8 (TapToSetAnchor_t09910132A62807038E275C33C99978EDE23C0D46* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityEventSystem_RegisterHandler_TisIMixedRealityPointerHandler_t3FF57994997E4A63F923DB13BB2E304BAD383FFC_m06F808802F0315B6299A129F1DAC4C9B91544D25_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// CoreServices.InputSystem?.RegisterHandler<IMixedRealityPointerHandler>(this);
		il2cpp_codegen_runtime_class_init_inline(CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = CoreServices_get_InputSystem_m09CC5207090321051B3C092D5BA21F2858DCD607(NULL);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		NullCheck(G_B2_0);
		GenericInterfaceActionInvoker1< RuntimeObject* >::Invoke(IMixedRealityEventSystem_RegisterHandler_TisIMixedRealityPointerHandler_t3FF57994997E4A63F923DB13BB2E304BAD383FFC_m06F808802F0315B6299A129F1DAC4C9B91544D25_RuntimeMethod_var, G_B2_0, __this);
		// }
		return;
	}
}
// System.Void TapToSetAnchor::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToSetAnchor_OnDisable_mF7AF69F088A036DB44725F8BFAB66653101C4F40 (TapToSetAnchor_t09910132A62807038E275C33C99978EDE23C0D46* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityEventSystem_UnregisterHandler_TisIMixedRealityPointerHandler_t3FF57994997E4A63F923DB13BB2E304BAD383FFC_mE6575C4F606C4A65976900A24B4181957466424A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// CoreServices.InputSystem?.UnregisterHandler<IMixedRealityPointerHandler>(this);
		il2cpp_codegen_runtime_class_init_inline(CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = CoreServices_get_InputSystem_m09CC5207090321051B3C092D5BA21F2858DCD607(NULL);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		NullCheck(G_B2_0);
		GenericInterfaceActionInvoker1< RuntimeObject* >::Invoke(IMixedRealityEventSystem_UnregisterHandler_TisIMixedRealityPointerHandler_t3FF57994997E4A63F923DB13BB2E304BAD383FFC_mE6575C4F606C4A65976900A24B4181957466424A_RuntimeMethod_var, G_B2_0, __this);
		// }
		return;
	}
}
// System.Void TapToSetAnchor::OnPointerDown(Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToSetAnchor_OnPointerDown_m872E02AE6428C6BF1876F990E44E8C0B7582C197 (TapToSetAnchor_t09910132A62807038E275C33C99978EDE23C0D46* __this, MixedRealityPointerEventData_t109EE708B8ACE83EA37188C65C8F120B7418AB7B* ___eventData0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void TapToSetAnchor::OnPointerDragged(Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToSetAnchor_OnPointerDragged_mD2E16ECB6CA8744E4C6B8C9199065E0B445C3252 (TapToSetAnchor_t09910132A62807038E275C33C99978EDE23C0D46* __this, MixedRealityPointerEventData_t109EE708B8ACE83EA37188C65C8F120B7418AB7B* ___eventData0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void TapToSetAnchor::OnPointerUp(Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToSetAnchor_OnPointerUp_m94100F624204FF58F0E0E8CC10D8A68CCB332E83 (TapToSetAnchor_t09910132A62807038E275C33C99978EDE23C0D46* __this, MixedRealityPointerEventData_t109EE708B8ACE83EA37188C65C8F120B7418AB7B* ___eventData0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void TapToSetAnchor::OnPointerClicked(Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToSetAnchor_OnPointerClicked_m31B3C2546143E26C2FBE89255FB4D1659427B048 (TapToSetAnchor_t09910132A62807038E275C33C99978EDE23C0D46* __this, MixedRealityPointerEventData_t109EE708B8ACE83EA37188C65C8F120B7418AB7B* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral30766173B4980AA34ED07077EA103DC7100374A3);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var QRCode = GameObject.FindGameObjectWithTag("QRTag");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_FindGameObjectWithTag_mF0229BC2074CE9EEA72FAB1E5A4BC2AEC3D2CDBE(_stringLiteral30766173B4980AA34ED07077EA103DC7100374A3, NULL);
		V_0 = L_0;
		// if (QRCode == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		// return;
		return;
	}

IL_0015:
	{
		// ParentAnchor.transform.position = QRCode.transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___ParentAnchor_4;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = V_0;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		NullCheck(L_4);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_4, L_7, NULL);
		// ParentAnchor.transform.rotation = Quaternion.Euler(0, QRCode.transform.rotation.eulerAngles.y-270, 0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___ParentAnchor_4;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_8, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = V_0;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_10, NULL);
		NullCheck(L_11);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		L_12 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_11, NULL);
		V_1 = L_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_1), NULL);
		float L_14 = L_13.___y_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15;
		L_15 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), ((float)il2cpp_codegen_subtract(L_14, (270.0f))), (0.0f), NULL);
		NullCheck(L_9);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_9, L_15, NULL);
		// gameObject.transform.GetChild(0).transform.parent = null;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
		L_16 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_16, NULL);
		NullCheck(L_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_17, 0, NULL);
		NullCheck(L_18);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_18, NULL);
		NullCheck(L_19);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_19, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, NULL);
		// Destroy(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20;
		L_20 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_20, NULL);
		// }
		return;
	}
}
// System.Void TapToSetAnchor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToSetAnchor__ctor_m04AD754A93577FC5CD39F4125E2F62EC063B8834 (TapToSetAnchor_t09910132A62807038E275C33C99978EDE23C0D46* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WrongChoice::buttonClickEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrongChoice_buttonClickEvent_mEEA7382318387A4B94566FD1B1A8D8AC352E8048 (WrongChoice_t6962D5DC5C511D63CF434C01A31C4FA3805D1E16* __this, const RuntimeMethod* method) 
{
	{
		// text1.gameObject.SetActive(false);
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_0 = __this->___text1_4;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// text2.gameObject.SetActive(true);
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_2 = __this->___text2_5;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		// text3.gameObject.SetActive(false);
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_4 = __this->___text3_6;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void WrongChoice::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrongChoice__ctor_mAC3C6C42F8C1BCE474489D3221B99D1629CD71C6 (WrongChoice_t6962D5DC5C511D63CF434C01A31C4FA3805D1E16* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MeshCopy::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshCopy_Update_mF597D4A6B70E8580F1ECE387D9BC84F3803C7BBF (MeshCopy_t90A57DE904DA2D87772FE26FB1D9174F6003C544* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckReferences ();
		MeshCopy_CheckReferences_m246AD294F51225DBDE46C32943A2417AEBEB80DC(__this, NULL);
		// if (OriginalMesh && OriginalMesh.sharedMesh)
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_0 = __this->___OriginalMesh_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_003d;
		}
	}
	{
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_2 = __this->___OriginalMesh_4;
		NullCheck(L_2);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_3;
		L_3 = MeshFilter_get_sharedMesh_mE4ED3E7E31C1DE5097E4980DA996E620F7D7CB8C(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_3, NULL);
		if (!L_4)
		{
			goto IL_003d;
		}
	}
	{
		// meshFilter.sharedMesh = OriginalMesh.sharedMesh;
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_5 = __this->___meshFilter_7;
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_6 = __this->___OriginalMesh_4;
		NullCheck(L_6);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_7;
		L_7 = MeshFilter_get_sharedMesh_mE4ED3E7E31C1DE5097E4980DA996E620F7D7CB8C(L_6, NULL);
		NullCheck(L_5);
		MeshFilter_set_sharedMesh_m946F7E3F583761982642BDA4753784AF1DF6E16F(L_5, L_7, NULL);
		goto IL_0049;
	}

IL_003d:
	{
		// else meshFilter.sharedMesh = null;
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_8 = __this->___meshFilter_7;
		NullCheck(L_8);
		MeshFilter_set_sharedMesh_m946F7E3F583761982642BDA4753784AF1DF6E16F(L_8, (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*)NULL, NULL);
	}

IL_0049:
	{
		// UpdateColor ();
		MeshCopy_UpdateColor_m14EBE561EA691C816A7987CC23916C6898650DD9(__this, NULL);
		// }
		return;
	}
}
// System.Void MeshCopy::CheckReferences()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshCopy_CheckReferences_m246AD294F51225DBDE46C32943A2417AEBEB80DC (MeshCopy_t90A57DE904DA2D87772FE26FB1D9174F6003C544* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!meshFilter) meshFilter = GetComponent<MeshFilter> ();
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_0 = __this->___meshFilter_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		// if (!meshFilter) meshFilter = GetComponent<MeshFilter> ();
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_2;
		L_2 = Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623(__this, Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623_RuntimeMethod_var);
		__this->___meshFilter_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___meshFilter_7), (void*)L_2);
	}

IL_0019:
	{
		// if (!rend) rend = GetComponent<Renderer> ();
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_3 = __this->___rend_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_3, NULL);
		if (L_4)
		{
			goto IL_0032;
		}
	}
	{
		// if (!rend) rend = GetComponent<Renderer> ();
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_5;
		L_5 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		__this->___rend_8 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rend_8), (void*)L_5);
	}

IL_0032:
	{
		// if (propBlock == null) propBlock = new MaterialPropertyBlock ();
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_6 = __this->___propBlock_11;
		if (L_6)
		{
			goto IL_0045;
		}
	}
	{
		// if (propBlock == null) propBlock = new MaterialPropertyBlock ();
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_7 = (MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D*)il2cpp_codegen_object_new(MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		MaterialPropertyBlock__ctor_m14C3432585F7BB65028BCD64A0FD6607A1B490FB(L_7, NULL);
		__this->___propBlock_11 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___propBlock_11), (void*)L_7);
	}

IL_0045:
	{
		// }
		return;
	}
}
// System.Void MeshCopy::UpdateColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshCopy_UpdateColor_m14EBE561EA691C816A7987CC23916C6898650DD9 (MeshCopy_t90A57DE904DA2D87772FE26FB1D9174F6003C544* __this, const RuntimeMethod* method) 
{
	{
		// if (oldColor != Color || oldIntensity != Intensity)
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___oldColor_9;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = __this->___Color_5;
		bool L_2;
		L_2 = Color_op_Inequality_mF1C733BA10E60B086AB950A71143678AE76C4D92_inline(L_0, L_1, NULL);
		if (L_2)
		{
			goto IL_0021;
		}
	}
	{
		float L_3 = __this->___oldIntensity_10;
		float L_4 = __this->___Intensity_6;
		if ((((float)L_3) == ((float)L_4)))
		{
			goto IL_007d;
		}
	}

IL_0021:
	{
		// oldColor = Color;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = __this->___Color_5;
		__this->___oldColor_9 = L_5;
		// oldIntensity = Intensity;
		float L_6 = __this->___Intensity_6;
		__this->___oldIntensity_10 = L_6;
		// rend.GetPropertyBlock (propBlock);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_7 = __this->___rend_8;
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_8 = __this->___propBlock_11;
		NullCheck(L_7);
		Renderer_GetPropertyBlock_mD062F90343D70151CA060AE7EBEF2E85146A9FBA(L_7, L_8, NULL);
		// propBlock.SetColor (colorProp, Color * Intensity);
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_9 = __this->___propBlock_11;
		String_t* L_10 = __this->___colorProp_12;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11 = __this->___Color_5;
		float L_12 = __this->___Intensity_6;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13;
		L_13 = Color_op_Multiply_m379B20A820266ACF82A21425B9CAE8DCD773CFBB_inline(L_11, L_12, NULL);
		NullCheck(L_9);
		MaterialPropertyBlock_SetColor_m5B4E910B5E42518BBD0088055EB68E4A3A609DDE(L_9, L_10, L_13, NULL);
		// rend.SetPropertyBlock (propBlock);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_14 = __this->___rend_8;
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_15 = __this->___propBlock_11;
		NullCheck(L_14);
		Renderer_SetPropertyBlock_mF565698782FE54580B17CC0BFF9B0C4F0D68DF50(L_14, L_15, NULL);
	}

IL_007d:
	{
		// }
		return;
	}
}
// System.Void MeshCopy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshCopy__ctor_m424964FFEC7B2AF1064A61CA05A09766322B70A5 (MeshCopy_t90A57DE904DA2D87772FE26FB1D9174F6003C544* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [ColorUsage (false)] public Color Color = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		__this->___Color_5 = L_0;
		// public float Intensity = 1;
		__this->___Intensity_6 = (1.0f);
		// Color oldColor = Color.black;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline(NULL);
		__this->___oldColor_9 = L_1;
		// float oldIntensity = -1;
		__this->___oldIntensity_10 = (-1.0f);
		// string colorProp = "_Color";
		__this->___colorProp_12 = _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___colorProp_12), (void*)_stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PolyWobbler::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PolyWobbler_Start_m29C4ACB3FE72971E7C2902AB40A7756C5006A941 (PolyWobbler_tD83B017DD034CC5354496A3633D2F7B564C37977* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPolygonCollider2D_t7CEFFFEE6522175436B408712B052D236889C89E_m838C3ADF8730E17B91A80DDD18BB0830E513D114_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Poly = GetComponent<PolygonCollider2D> ();
		PolygonCollider2D_t7CEFFFEE6522175436B408712B052D236889C89E* L_0;
		L_0 = Component_GetComponent_TisPolygonCollider2D_t7CEFFFEE6522175436B408712B052D236889C89E_m838C3ADF8730E17B91A80DDD18BB0830E513D114(__this, Component_GetComponent_TisPolygonCollider2D_t7CEFFFEE6522175436B408712B052D236889C89E_m838C3ADF8730E17B91A80DDD18BB0830E513D114_RuntimeMethod_var);
		__this->___Poly_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Poly_4), (void*)L_0);
		// LineRend = GetComponent<LineRenderer> ();
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_1;
		L_1 = Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49(__this, Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49_RuntimeMethod_var);
		__this->___LineRend_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LineRend_5), (void*)L_1);
		// }
		return;
	}
}
// System.Void PolyWobbler::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PolyWobbler_Update_m37575C0351AA60B1D3116E5A9F245113A6171021 (PolyWobbler_tD83B017DD034CC5354496A3633D2F7B564C37977* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// points = Poly.GetPath (0);
		PolygonCollider2D_t7CEFFFEE6522175436B408712B052D236889C89E* L_0 = __this->___Poly_4;
		NullCheck(L_0);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_1;
		L_1 = PolygonCollider2D_GetPath_mE9D53D83FBB110EAC748BA535A1659C262B50F50(L_0, 0, NULL);
		__this->___points_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___points_7), (void*)L_1);
		// LineRend.positionCount = points.Length;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_2 = __this->___LineRend_5;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_3 = __this->___points_7;
		NullCheck(L_3);
		NullCheck(L_2);
		LineRenderer_set_positionCount_m2001FB4044053895ECBE897AB833284F3300B205(L_2, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		// for (int i = 0; i < points.Length; i++)
		V_0 = 0;
		goto IL_0080;
	}

IL_0029:
	{
		// points[i] += Random.insideUnitCircle * Time.deltaTime * Wobbles;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_4 = __this->___points_7;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_6);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = Random_get_insideUnitCircle_mB2FE9BAA7DDF7FED2AA53EA4667F864747E20DA2(NULL);
		float L_9;
		L_9 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_8, L_9, NULL);
		float L_11 = __this->___Wobbles_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_10, L_11, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_7, L_12, NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_6 = L_13;
		// LineRend.SetPosition (i, points[i]);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_14 = __this->___LineRend_5;
		int32_t L_15 = V_0;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_16 = __this->___points_7;
		int32_t L_17 = V_0;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_19, NULL);
		NullCheck(L_14);
		LineRenderer_SetPosition_m84C4AD9ADC6AC62B33DB4D7E4C9F066DFF8440C1(L_14, L_15, L_20, NULL);
		// for (int i = 0; i < points.Length; i++)
		int32_t L_21 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0080:
	{
		// for (int i = 0; i < points.Length; i++)
		int32_t L_22 = V_0;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_23 = __this->___points_7;
		NullCheck(L_23);
		if ((((int32_t)L_22) < ((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length)))))
		{
			goto IL_0029;
		}
	}
	{
		// Poly.SetPath (0, points);
		PolygonCollider2D_t7CEFFFEE6522175436B408712B052D236889C89E* L_24 = __this->___Poly_4;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_25 = __this->___points_7;
		NullCheck(L_24);
		PolygonCollider2D_SetPath_mDF03B6FDAE81E25C985F9BA6D372D949A6D9A1C1(L_24, 0, L_25, NULL);
		// HardLight2DManager.RefreshColliderReference (Poly);
		PolygonCollider2D_t7CEFFFEE6522175436B408712B052D236889C89E* L_26 = __this->___Poly_4;
		HardLight2DManager_RefreshColliderReference_m43FFBAFE6BA4180726713E536DE9EF791DEE39A0(L_26, NULL);
		// }
		return;
	}
}
// System.Void PolyWobbler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PolyWobbler__ctor_mEEC499192C8EA48997C3B68A0973B4BA2863AA02 (PolyWobbler_tD83B017DD034CC5354496A3633D2F7B564C37977* __this, const RuntimeMethod* method) 
{
	{
		// public float Wobbles = 1;
		__this->___Wobbles_6 = (1.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Speen::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Speen_Update_mACDC7A20B9DD243648EE402BB838CF22A8005737 (Speen_tC23733F35FF5F6654E636D512821E7B9B29D0C21* __this, const RuntimeMethod* method) 
{
	{
		// transform.Rotate (Vector3.forward, speed * Time.deltaTime * 100f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		float L_2 = __this->___speed_4;
		float L_3;
		L_3 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		NullCheck(L_0);
		Transform_Rotate_m35B44707FE16FF8015D519D8C162C0B4A85D6D1F(L_0, L_1, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_2, L_3)), (100.0f))), NULL);
		// }
		return;
	}
}
// System.Void Speen::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Speen__ctor_mD99F803D0F3701B7E802CFBD0488B59CD73814E6 (Speen_tC23733F35FF5F6654E636D512821E7B9B29D0C21* __this, const RuntimeMethod* method) 
{
	{
		// public float speed = 1f;
		__this->___speed_4 = (1.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___downVector_8;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___t2 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___b1;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___x_2;
		float L_8 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___a0;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___b1;
		float L_12 = L_11.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___a0;
		float L_14 = L_13.___y_3;
		float L_15 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___a0;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___b1;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___a0;
		float L_21 = L_20.___z_4;
		float L_22 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* StringComparer_get_InvariantCultureIgnoreCase_m736E26B9A455C50799BF69D87F2E076C272337B1_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		CultureAwareComparer_t5822A6535A6EB4C448D1B7736067D1188BAEE8CD* L_0 = ((StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_StaticFields*)il2cpp_codegen_static_fields_for(StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var))->___s_invariantCultureIgnoreCase_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = (*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Quaternion_Internal_ToEulerRad_m5BD0EEC543120C320DC77FCCDFD2CE2E6BD3F1A8(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, (57.2957802f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Quaternion_Internal_MakePositive_m73E2D01920CB0DFE661A55022C129E8617F0C9A8(L_2, NULL);
		V_0 = L_3;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Color_op_Inequality_mF1C733BA10E60B086AB950A71143678AE76C4D92_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___lhs0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___lhs0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___rhs1;
		bool L_2;
		L_2 = Color_op_Equality_mB2BDC39B0B367BA15AA8DF22F8CB0D02D20BDC71_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_op_Multiply_m379B20A820266ACF82A21425B9CAE8DCD773CFBB_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a0, float ___b1, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___a0;
		float L_1 = L_0.___r_0;
		float L_2 = ___b1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___a0;
		float L_4 = L_3.___g_1;
		float L_5 = ___b1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___a0;
		float L_7 = L_6.___b_2;
		float L_8 = ___b1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = ___a0;
		float L_10 = L_9.___a_3;
		float L_11 = ___b1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_12), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), ((float)il2cpp_codegen_multiply(L_10, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0029;
	}

IL_0029:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		float L_2 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a0;
		float L_4 = L_3.___y_1;
		float L_5 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___item0, const RuntimeMethod* method) 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (int32_t)L_8);
		return;
	}

IL_0034:
	{
		int32_t L_9 = ___item0;
		((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Color_op_Equality_mB2BDC39B0B367BA15AA8DF22F8CB0D02D20BDC71_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___lhs0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___lhs0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1;
		L_1 = Color_op_Implicit_m9B3228DAFA8DC57A75DE00CBBF13ED4F1E7B01FF_inline(L_0, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___rhs1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3;
		L_3 = Color_op_Implicit_m9B3228DAFA8DC57A75DE00CBBF13ED4F1E7B01FF_inline(L_2, NULL);
		bool L_4;
		L_4 = Vector4_op_Equality_mCEA0E5F229F4AE8C55152F7A8F84345F24F52DC6_inline(L_1, L_3, NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Color_op_Implicit_m9B3228DAFA8DC57A75DE00CBBF13ED4F1E7B01FF_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___c0, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___c0;
		float L_1 = L_0.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___c0;
		float L_3 = L_2.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___c0;
		float L_5 = L_4.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___c0;
		float L_7 = L_6.___a_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_8), L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0021;
	}

IL_0021:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_op_Equality_mCEA0E5F229F4AE8C55152F7A8F84345F24F52DC6_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___lhs0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	bool V_5 = false;
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___lhs0;
		float L_1 = L_0.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = ___rhs1;
		float L_3 = L_2.___x_1;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = ___lhs0;
		float L_5 = L_4.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = ___rhs1;
		float L_7 = L_6.___y_2;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8 = ___lhs0;
		float L_9 = L_8.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_10 = ___rhs1;
		float L_11 = L_10.___z_3;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_12 = ___lhs0;
		float L_13 = L_12.___w_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_14 = ___rhs1;
		float L_15 = L_14.___w_4;
		V_3 = ((float)il2cpp_codegen_subtract(L_13, L_15));
		float L_16 = V_0;
		float L_17 = V_0;
		float L_18 = V_1;
		float L_19 = V_1;
		float L_20 = V_2;
		float L_21 = V_2;
		float L_22 = V_3;
		float L_23 = V_3;
		V_4 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_16, L_17)), ((float)il2cpp_codegen_multiply(L_18, L_19)))), ((float)il2cpp_codegen_multiply(L_20, L_21)))), ((float)il2cpp_codegen_multiply(L_22, L_23))));
		float L_24 = V_4;
		V_5 = (bool)((((float)L_24) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0057;
	}

IL_0057:
	{
		bool L_25 = V_5;
		return L_25;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_1 = L_0;
		float L_1 = ___y1;
		__this->___y_2 = L_1;
		float L_2 = ___z2;
		__this->___z_3 = L_2;
		float L_3 = ___w3;
		__this->___w_4 = L_3;
		return;
	}
}
