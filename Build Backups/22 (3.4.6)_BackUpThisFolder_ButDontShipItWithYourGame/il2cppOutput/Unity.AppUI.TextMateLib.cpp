#include "pch-cpp.hpp"





template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*,T1,T2,const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj,p1,p2,invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*,T1,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj,p1,invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtualFuncInvoker5
{
	typedef R (*Func)(void*,T1,T2,T3,T4,T5,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj,p1,p2,p3,p4,p5,invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj,invokeData.method);
	}
};

struct ArrayPool_1_tEE934B4A44CDA39BED8CBAF50F7C0E2E9E1ACC01;
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
struct IReadOnlyList_1_tA4C9F1E668ECD5CE0D873E2E1DF34A95D6DC55C3;
struct IReadOnlyList_1_t7BB300FE9C8B0D3BCB34B752D2516BD12EB5E8CF;
struct IReadOnlyList_1_t79E01AAC7D6A9CCA5CB89AB5BF7061F6CD10091B;
struct List_1_t59DF515164DE8F9BF5F013AAA45FE579F632B927;
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
struct List_1_t05B5A9347A4FF3A8F7702945CD8D4F9B6D1B1990;
struct List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E;
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
struct ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct EncodedTokenU5BU5D_t4F48C85A75390F71C854D63DAECF0535C4B0217A;
struct GCHandleU5BU5D_t7EA6F2FA83CDF86871001174CF7D30033AC4A785;
struct GrammarU5BU5D_t0D0AA092036FCD2020B2D8218AB6787916B3C2F1;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TokenU5BU5D_tD9FF189D421BA9F6A1647CAD813B8C1CB71E31CF;
struct TokenizeResultU5BU5D_tF70B053BE34923076B37A4D882309FBA251291DC;
struct TokenizeResult2U5BU5D_t1A568A0E486BE4A5DC174D3E75B7812DD7FDF3D7;
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
struct Grammar_tAE58961FA6049A278788B45B0A0E417357BC14AE;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB;
struct Registry_t37E654B4C1F56ABAD063A4798DD2F673DD5D91EE;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct Theme_t4CAEF7A3EDC1C3A02E826F7EC53EC986771AA09E;
struct Token_t35AA31435ECA927558605D1CBD6DFDB094216B1E;
struct TokenizeResult_tC3D2C5E6E03A563590DF725546B216CDC4989B2F;
struct TokenizeResult2_t3F67D8DB5D1A1D7EBFCA093726387D8561884160;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayPool_1_tEE934B4A44CDA39BED8CBAF50F7C0E2E9E1ACC01_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EncodedTokenU5BU5D_t4F48C85A75390F71C854D63DAECF0535C4B0217A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GCHandleU5BU5D_t7EA6F2FA83CDF86871001174CF7D30033AC4A785_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Grammar_tAE58961FA6049A278788B45B0A0E417357BC14AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyCollection_1_tA63FB2A21D53298FCC1DF4D6FE39D4A17298EC1B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t05B5A9347A4FF3A8F7702945CD8D4F9B6D1B1990_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t59DF515164DE8F9BF5F013AAA45FE579F632B927_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Theme_t4CAEF7A3EDC1C3A02E826F7EC53EC986771AA09E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Token_t35AA31435ECA927558605D1CBD6DFDB094216B1E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TokenizeResult2U5BU5D_t1A568A0E486BE4A5DC174D3E75B7812DD7FDF3D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TokenizeResult2_t3F67D8DB5D1A1D7EBFCA093726387D8561884160_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TokenizeResultU5BU5D_tF70B053BE34923076B37A4D882309FBA251291DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TokenizeResult_tC3D2C5E6E03A563590DF725546B216CDC4989B2F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0C1E101C0F64B0C146CB7C8E79D2AA7BB43F101C;
IL2CPP_EXTERN_C String_t* _stringLiteral1D1AA74B715BE0548BC06FA1E04BBAC9CBBF5059;
IL2CPP_EXTERN_C String_t* _stringLiteral2C9F25A80AE26142580ED30214649FDA3528C13E;
IL2CPP_EXTERN_C String_t* _stringLiteral428B9A1BFF1D93AB7D6616FBE6ADCE24A0914872;
IL2CPP_EXTERN_C String_t* _stringLiteral46D9C7FA571DE65777FF674D728A6316C6A26A7C;
IL2CPP_EXTERN_C String_t* _stringLiteral4F30F43F2E3FA305BDABD0C5A2E5B453BD009CCD;
IL2CPP_EXTERN_C String_t* _stringLiteral5590187A5D6C7B0BDD0A05220CFF2F59D4A644C2;
IL2CPP_EXTERN_C String_t* _stringLiteral5770965CE4ECE463FE4DA8686D2E6838A514900C;
IL2CPP_EXTERN_C String_t* _stringLiteral5D20BC172AA1CDB4333747D5EFA4BEBDEBB4B4F5;
IL2CPP_EXTERN_C String_t* _stringLiteral6354B662E6D4018AD1D160A623B83715AA36D9AA;
IL2CPP_EXTERN_C String_t* _stringLiteral6BAD2E13A37335D9DBB1C5299E883D8E64149D0E;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral7E10EFC03476383B9C3E04930BABFD408F070B73;
IL2CPP_EXTERN_C String_t* _stringLiteral805EDCB77B7DBAFCE861B55BEF60A3E806F8B35C;
IL2CPP_EXTERN_C String_t* _stringLiteral87C395C5B31BE3BD1DA36C9237DA03640F329078;
IL2CPP_EXTERN_C String_t* _stringLiteral97BC2D489655819D0C6D2F33281A1A9C1A476ED6;
IL2CPP_EXTERN_C String_t* _stringLiteral9C94709BF46B5014877590397F543CA728D6E8E4;
IL2CPP_EXTERN_C String_t* _stringLiteralA4393B571C3DDE59494504D72CE90E7C17D9DFCC;
IL2CPP_EXTERN_C String_t* _stringLiteralB08033EEFC594932614064D90D6A79275B85BF5C;
IL2CPP_EXTERN_C String_t* _stringLiteralC607A8310C70E33DA0D8F3EB9F99DB32F431B38C;
IL2CPP_EXTERN_C String_t* _stringLiteralC636BC4718130E92668BB1D46A2BCE9F27733E73;
IL2CPP_EXTERN_C String_t* _stringLiteralDC1C4E0B2B89558AF9FB0251113A4E997FA48B23;
IL2CPP_EXTERN_C String_t* _stringLiteralFAE6C5C3B5B8DDDDF4EA2382715D2AB2F40FABAC;
IL2CPP_EXTERN_C const RuntimeMethod* ArrayPool_1_get_Shared_m0F5374FE0AF46A9CAB3F9501E56B2D990DEB0C39_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisEncodedToken_t13C2F10CED0558A0D78571E96868624F518FB1A6_m126C2641150E6D5ED089E618EAD0A3D3AA997877_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisString_t_m9832B70DF2B936246FE60F75D3D12CB946C39D16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisTokenizeResult2_t3F67D8DB5D1A1D7EBFCA093726387D8561884160_m5315F5A641A5817AB95F7976651277637441769F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisTokenizeResult_tC3D2C5E6E03A563590DF725546B216CDC4989B2F_mF854B44AF3C00B52164C5A765BE26087C29760EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Grammar_ThrowIfDisposed_m5DA3BF557A0C609ECAE3DE5D7619769DB8F9D193_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Grammar_TokenizeLine2_m7001429F733D8EA1FF8CD739E96BF667FB558679_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Grammar_TokenizeLine_m978DEDBFA66CACD930B72641C0084465564F8DF4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Grammar_TokenizeLines2_m8EF66306C3637A8D170C771DF40BCC544683E173_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m3AF4A32ED2E34C28EF208EB18AD01DA041E1516B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mD9626590915FBA17E9EA10C6E6711BA08E74B78C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m185EA5A7A78FC9527A27E5ACB553C6239D6B3DCA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mEA2FC9B9CB8013AC30CAB3B0C5A13DA59880392E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Marshal_PtrToStructure_TisTextMateColorMap_tBF7A6063763DEEB5B64F7AA21A9B013E7B372A9F_m9403C341BE68393B65502FA0680FDD4C66B0F08B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Marshal_PtrToStructure_TisTextMateToken_t58D37C2A1FBFE6B45AAC8744EF1C1F371F00C874_m5EA63AE3F269514C8735A4A7F5A2C834214121CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Marshal_PtrToStructure_TisTextMateTokenizeMultiLinesResult2_tF73DB547B3577F488B2F04E5AC76E3F780638F68_m850FC40F8C06C3C304BE6E2276ADE8E157FFF35C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Marshal_PtrToStructure_TisTextMateTokenizeResult2_tDB673B3A42F57ECED7D92F7CA8C727F214551DD7_m1E8145D731302002AAD832D9E1B9344901D59E02_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Marshal_PtrToStructure_TisTextMateTokenizeResult_tB8838D087311294D22F9FEC052E0620E11F6018E_mB2A86B6DBB1CC11B9802C563501613DA121B8FE3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Marshal_SizeOf_TisTextMateToken_t58D37C2A1FBFE6B45AAC8744EF1C1F371F00C874_mB1FD5617D51EED426146683894F1FD6FA7079A94_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Registry_AddGrammarFromFile_m2A776A3DBED7291928CEA9ABA7830F9C609BA6A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Registry_AddGrammarFromJson_m1ECAAC312B622960AF99AA76DE185966E7DF4792_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Registry_LoadGrammar_m999F02F097B4C393F6F9A611CE42CE7F5ADE80BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Registry_SetThemeFromJson_mAFE7FE33B0E034620F175DAA9CC832CDF751455B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Registry_ThrowIfDisposed_m0AEB069FA01DA98E849C0A40F251D5F2BD9A9942_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Registry__ctor_m8DCABE4FFD5A7D480D0196ECA1458EA7A60982DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Theme_LoadFromFile_mA84302DC9E85F0C63BC5FA9551B7270DF13244C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Theme_LoadFromJson_m354CAC2D67ABAB030A541D9D27508E792044CA21_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Theme_ThrowIfDisposed_m8821FA9E3ED4BA2FEFF69ABF68A5D69C0C0AC0D3_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct EncodedTokenU5BU5D_t4F48C85A75390F71C854D63DAECF0535C4B0217A;
struct GCHandleU5BU5D_t7EA6F2FA83CDF86871001174CF7D30033AC4A785;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TokenizeResultU5BU5D_tF70B053BE34923076B37A4D882309FBA251291DC;
struct TokenizeResult2U5BU5D_t1A568A0E486BE4A5DC174D3E75B7812DD7FDF3D7;
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_tE0EABD8F7886C8D26C27AF13C5DF31F1F0394319 
{
};
struct ArrayPool_1_tEE934B4A44CDA39BED8CBAF50F7C0E2E9E1ACC01  : public RuntimeObject
{
};
struct EmptyArray_1_t7054034D163D1BFA7FDC520A896D4BEC0C58C58D  : public RuntimeObject
{
};
struct EmptyArray_1_tF2F83411E5DC963DBFFD1F75B10B58A1ED224DD5  : public RuntimeObject
{
};
struct List_1_t59DF515164DE8F9BF5F013AAA45FE579F632B927  : public RuntimeObject
{
	GrammarU5BU5D_t0D0AA092036FCD2020B2D8218AB6787916B3C2F1* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t05B5A9347A4FF3A8F7702945CD8D4F9B6D1B1990  : public RuntimeObject
{
	TokenU5BU5D_tD9FF189D421BA9F6A1647CAD813B8C1CB71E31CF* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E  : public RuntimeObject
{
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct EncodedTokenAttributes_tD4D94E119349AD98EE33ED590C4DF70F9192DFFB  : public RuntimeObject
{
};
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	int32_t ___m_codePage;
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem;
	bool ___m_deserializedFromEverett;
	bool ___m_isReadOnly;
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback;
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback;
};
struct NativeMethods_t9BB40FEB3037CE66903205B56A790BF05F13B430  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct Token_t35AA31435ECA927558605D1CBD6DFDB094216B1E  : public RuntimeObject
{
	int32_t ___U3CStartIndexU3Ek__BackingField;
	int32_t ___U3CEndIndexU3Ek__BackingField;
	RuntimeObject* ___U3CScopesU3Ek__BackingField;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct Enumerator_t232CE8129533867195FAA6CD57E130DB14EAE8F2 
{
	List_1_t59DF515164DE8F9BF5F013AAA45FE579F632B927* ____list;
	int32_t ____index;
	int32_t ____version;
	Grammar_tAE58961FA6049A278788B45B0A0E417357BC14AE* ____current;
};
struct Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9 
{
	List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* ____list;
	int32_t ____index;
	int32_t ____version;
	Il2CppSharedGenericObject* ____current;
};
typedef Il2CppFullySharedGenericStruct Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF;
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct EncodedToken_t13C2F10CED0558A0D78571E96868624F518FB1A6 
{
	int32_t ___StartIndex;
	uint32_t ___Metadata;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
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
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct FontStyle_t6861B9F9EE7386A629BD5D105EFE6FEC4342436E 
{
	int32_t ___value__;
};
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	intptr_t ___handle;
};
struct GCHandleType_t4CD45A3495E593D093AB0CE36EF9EC1A1572F82A 
{
	int32_t ___value__;
};
struct Grammar_tAE58961FA6049A278788B45B0A0E417357BC14AE  : public RuntimeObject
{
	intptr_t ___m_Handle;
	bool ___m_Disposed;
};
struct Registry_t37E654B4C1F56ABAD063A4798DD2F673DD5D91EE  : public RuntimeObject
{
	intptr_t ___m_Handle;
	intptr_t ___m_OnigLib;
	bool ___m_Disposed;
	List_1_t59DF515164DE8F9BF5F013AAA45FE579F632B927* ___m_LoadedGrammars;
};
struct Theme_t4CAEF7A3EDC1C3A02E826F7EC53EC986771AA09E  : public RuntimeObject
{
	intptr_t ___m_Handle;
	bool ___m_Disposed;
};
struct TokenizeResult_tC3D2C5E6E03A563590DF725546B216CDC4989B2F  : public RuntimeObject
{
	RuntimeObject* ___U3CTokensU3Ek__BackingField;
	intptr_t ___U3CStateStackU3Ek__BackingField;
	bool ___U3CStoppedEarlyU3Ek__BackingField;
};
struct TokenizeResult2_t3F67D8DB5D1A1D7EBFCA093726387D8561884160  : public RuntimeObject
{
	RuntimeObject* ___U3CTokensU3Ek__BackingField;
	intptr_t ___U3CStateStackU3Ek__BackingField;
	bool ___U3CStoppedEarlyU3Ek__BackingField;
};
struct TextMateColorMap_tBF7A6063763DEEB5B64F7AA21A9B013E7B372A9F 
{
	intptr_t ___Colors;
	int32_t ___ColorCount;
};
struct TextMateGrammar_t3E29E80BF27ADAA1057180E63D5A593A0F2370DE 
{
	intptr_t ___Handle;
};
struct TextMateOnigLib_t1AB68C6F3A5D773149DCEDF4152F0C92E1D890CD 
{
	intptr_t ___Handle;
};
struct TextMateRegistry_t975F37308A88EB0F9A8F66B7F214EDA308854794 
{
	intptr_t ___Handle;
};
struct TextMateStateStack_t99A7DE78B2D1E3D5DAA3C1C88B9DA911291454E8 
{
	intptr_t ___Handle;
};
struct TextMateTheme_tB371F6609C6A4B1EA41BAF59306908F87ECD38AC 
{
	intptr_t ___Handle;
};
struct TextMateToken_t58D37C2A1FBFE6B45AAC8744EF1C1F371F00C874 
{
	int32_t ___StartIndex;
	int32_t ___EndIndex;
	int32_t ___ScopeDepth;
	intptr_t ___Scopes;
};
struct TextMateTokenizeMultiLinesResult2_tF73DB547B3577F488B2F04E5AC76E3F780638F68 
{
	intptr_t ___LineResults;
	int32_t ___LineCount;
};
struct TextMateTokenizeResult_tB8838D087311294D22F9FEC052E0620E11F6018E 
{
	intptr_t ___Tokens;
	int32_t ___TokenCount;
	intptr_t ___RuleStack;
	int32_t ___StoppedEarly;
};
struct TextMateTokenizeResult2_tDB673B3A42F57ECED7D92F7CA8C727F214551DD7 
{
	intptr_t ___Tokens;
	int32_t ___TokenCount;
	intptr_t ___RuleStack;
	int32_t ___StoppedEarly;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
struct ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB  : public InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB
{
	String_t* ____objectName;
};
struct ArrayPool_1_tEE934B4A44CDA39BED8CBAF50F7C0E2E9E1ACC01_StaticFields
{
	ArrayPool_1_tEE934B4A44CDA39BED8CBAF50F7C0E2E9E1ACC01* ___U3CSharedU3Ek__BackingField;
};
struct EmptyArray_1_t7054034D163D1BFA7FDC520A896D4BEC0C58C58D_StaticFields
{
	EncodedTokenU5BU5D_t4F48C85A75390F71C854D63DAECF0535C4B0217A* ___Value;
};
struct EmptyArray_1_tF2F83411E5DC963DBFFD1F75B10B58A1ED224DD5_StaticFields
{
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___Value;
};
struct List_1_t59DF515164DE8F9BF5F013AAA45FE579F632B927_StaticFields
{
	GrammarU5BU5D_t0D0AA092036FCD2020B2D8218AB6787916B3C2F1* ___s_emptyArray;
};
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray;
};
struct List_1_t05B5A9347A4FF3A8F7702945CD8D4F9B6D1B1990_StaticFields
{
	TokenU5BU5D_tD9FF189D421BA9F6A1647CAD813B8C1CB71E31CF* ___s_emptyArray;
};
struct List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E_StaticFields
{
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___s_emptyArray;
};
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding;
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings;
	RuntimeObject* ___s_InternalSyncObject;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
struct EncodedTokenU5BU5D_t4F48C85A75390F71C854D63DAECF0535C4B0217A  : public RuntimeArray
{
	ALIGN_FIELD (8) EncodedToken_t13C2F10CED0558A0D78571E96868624F518FB1A6 m_Items[1];

	inline EncodedToken_t13C2F10CED0558A0D78571E96868624F518FB1A6 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline EncodedToken_t13C2F10CED0558A0D78571E96868624F518FB1A6* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, EncodedToken_t13C2F10CED0558A0D78571E96868624F518FB1A6 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline EncodedToken_t13C2F10CED0558A0D78571E96868624F518FB1A6 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline EncodedToken_t13C2F10CED0558A0D78571E96868624F518FB1A6* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, EncodedToken_t13C2F10CED0558A0D78571E96868624F518FB1A6 value)
	{
		m_Items[index] = value;
	}
};
struct TokenizeResult2U5BU5D_t1A568A0E486BE4A5DC174D3E75B7812DD7FDF3D7  : public RuntimeArray
{
	ALIGN_FIELD (8) TokenizeResult2_t3F67D8DB5D1A1D7EBFCA093726387D8561884160* m_Items[1];

	inline TokenizeResult2_t3F67D8DB5D1A1D7EBFCA093726387D8561884160* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TokenizeResult2_t3F67D8DB5D1A1D7EBFCA093726387D8561884160** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TokenizeResult2_t3F67D8DB5D1A1D7EBFCA093726387D8561884160* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TokenizeResult2_t3F67D8DB5D1A1D7EBFCA093726387D8561884160* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TokenizeResult2_t3F67D8DB5D1A1D7EBFCA093726387D8561884160** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TokenizeResult2_t3F67D8DB5D1A1D7EBFCA093726387D8561884160* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA  : public RuntimeArray
{
	ALIGN_FIELD (8) ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* m_Items[1];

	inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct GCHandleU5BU5D_t7EA6F2FA83CDF86871001174CF7D30033AC4A785  : public RuntimeArray
{
	ALIGN_FIELD (8) GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC m_Items[1];

	inline GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC value)
	{
		m_Items[index] = value;
	}
};
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832  : public RuntimeArray
{
	ALIGN_FIELD (8) intptr_t m_Items[1];

	inline intptr_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline intptr_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, intptr_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline intptr_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline intptr_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, intptr_t value)
	{
		m_Items[index] = value;
	}
};
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
struct TokenizeResultU5BU5D_tF70B053BE34923076B37A4D882309FBA251291DC  : public RuntimeArray
{
	ALIGN_FIELD (8) TokenizeResult_tC3D2C5E6E03A563590DF725546B216CDC4989B2F* m_Items[1];

	inline TokenizeResult_tC3D2C5E6E03A563590DF725546B216CDC4989B2F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TokenizeResult_tC3D2C5E6E03A563590DF725546B216CDC4989B2F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TokenizeResult_tC3D2C5E6E03A563590DF725546B216CDC4989B2F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TokenizeResult_tC3D2C5E6E03A563590DF725546B216CDC4989B2F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TokenizeResult_tC3D2C5E6E03A563590DF725546B216CDC4989B2F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TokenizeResult_tC3D2C5E6E03A563590DF725546B216CDC4989B2F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppSharedGenericObject* m_Items[1];

	inline Il2CppSharedGenericObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppSharedGenericObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppSharedGenericObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Il2CppSharedGenericObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppSharedGenericObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppSharedGenericObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextMateTokenizeResult_tB8838D087311294D22F9FEC052E0620E11F6018E Marshal_PtrToStructure_TisTextMateTokenizeResult_tB8838D087311294D22F9FEC052E0620E11F6018E_mB2A86B6DBB1CC11B9802C563501613DA121B8FE3 (intptr_t ___0_ptr, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7378BA5FBCA1E88080985FB810820B3F47DAD54C_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Marshal_SizeOf_TisTextMateToken_t58D37C2A1FBFE6B45AAC8744EF1C1F371F00C874_mB1FD5617D51EED426146683894F1FD6FA7079A94 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextMateToken_t58D37C2A1FBFE6B45AAC8744EF1C1F371F00C874 Marshal_PtrToStructure_TisTextMateToken_t58D37C2A1FBFE6B45AAC8744EF1C1F371F00C874_m5EA63AE3F269514C8735A4A7F5A2C834214121CB (intptr_t ___0_ptr, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0CE6E39234ED33F5195AABC8029D06D4756C75C1_gshared_inline (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextMateTokenizeResult2_tDB673B3A42F57ECED7D92F7CA8C727F214551DD7 Marshal_PtrToStructure_TisTextMateTokenizeResult2_tDB673B3A42F57ECED7D92F7CA8C727F214551DD7_m1E8145D731302002AAD832D9E1B9344901D59E02 (intptr_t ___0_ptr, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* Array_Empty_TisIl2CppSharedGenericObject_m688909407CF299AE69145CC33ACB1E90C775C653_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextMateTokenizeMultiLinesResult2_tF73DB547B3577F488B2F04E5AC76E3F780638F68 Marshal_PtrToStructure_TisTextMateTokenizeMultiLinesResult2_tF73DB547B3577F488B2F04E5AC76E3F780638F68_m850FC40F8C06C3C304BE6E2276ADE8E157FFF35C (intptr_t ___0_ptr, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EncodedTokenU5BU5D_t4F48C85A75390F71C854D63DAECF0535C4B0217A* Array_Empty_TisEncodedToken_t13C2F10CED0558A0D78571E96868624F518FB1A6_m126C2641150E6D5ED089E618EAD0A3D3AA997877_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArrayPool_1_tEE934B4A44CDA39BED8CBAF50F7C0E2E9E1ACC01* ArrayPool_1_get_Shared_m0F5374FE0AF46A9CAB3F9501E56B2D990DEB0C39_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextMateColorMap_tBF7A6063763DEEB5B64F7AA21A9B013E7B372A9F Marshal_PtrToStructure_TisTextMateColorMap_tBF7A6063763DEEB5B64F7AA21A9B013E7B372A9F_m9403C341BE68393B65502FA0680FDD4C66B0F08B (intptr_t ___0_ptr, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9 List_1_GetEnumerator_mD48177D95D4B5D6A9D8E84E2477668C2850DD5D9_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mFE1EBE6F6425283FEAEAE7C79D02CDE4F9D367E8_fshared (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Enumerator_get_Current_mA50CED82C4671CC4E1D82333FAC2587F700565D0_gshared_inline (Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2B096A69E95EF2C7A223BA853D66AEC59C4A5C25_gshared (Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mCCC05B98943E8F4E0F6FBF47063A269048AE71E5_gshared_inline (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_mCC24A812DFC30C3DE2230E3C8EE705871C1DFF81_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Grammar_ThrowIfDisposed_m5DA3BF557A0C609ECAE3DE5D7619769DB8F9D193 (Grammar_tAE58961FA6049A278788B45B0A0E417357BC14AE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_textmate_grammar_get_scope_name_m04BB1EE3A1136412590D76E9900984BD85280049 (intptr_t ___0_grammar, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Marshal_PtrToStringAnsi_m8DF88D9F22FCF791C538A36C9233B3882F579B4A (intptr_t ___0_ptr, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_textmate_get_initial_state_m0DF34A7E05C35D3688E9BA88B62FB7DB6C5FDC9B (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_textmate_tokenize_line_utf16_m05F2A3D88679E653F3383CADD163CCCF353DDB4D (intptr_t ___0_grammar, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_lineTextUtf8, intptr_t ___2_prevState, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_textmate_free_tokenize_result_mED21A7C48B0C510C991B4231A8F5CE7C9297D6A8 (intptr_t ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextMateTokenizeResult_tB8838D087311294D22F9FEC052E0620E11F6018E Marshal_PtrToStructure_TisTextMateTokenizeResult_tB8838D087311294D22F9FEC052E0620E11F6018E_mB2A86B6DBB1CC11B9802C563501613DA121B8FE3 (intptr_t ___0_ptr, const RuntimeMethod* method) ;
inline void List_1__ctor_m185EA5A7A78FC9527A27E5ACB553C6239D6B3DCA (List_1_t05B5A9347A4FF3A8F7702945CD8D4F9B6D1B1990* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05B5A9347A4FF3A8F7702945CD8D4F9B6D1B1990*, const RuntimeMethod*))List_1__ctor_m7378BA5FBCA1E88080985FB810820B3F47DAD54C_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Marshal_SizeOf_TisTextMateToken_t58D37C2A1FBFE6B45AAC8744EF1C1F371F00C874_mB1FD5617D51EED426146683894F1FD6FA7079A94 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A (intptr_t ___0_pointer, int32_t ___1_offset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextMateToken_t58D37C2A1FBFE6B45AAC8744EF1C1F371F00C874 Marshal_PtrToStructure_TisTextMateToken_t58D37C2A1FBFE6B45AAC8744EF1C1F371F00C874_m5EA63AE3F269514C8735A4A7F5A2C834214121CB (intptr_t ___0_ptr, const RuntimeMethod* method) ;
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7378BA5FBCA1E88080985FB810820B3F47DAD54C_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntPtr_get_Size_m1FAAA59DA73D7E32BB1AB55DD92A90AFE3251DBE (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Marshal_ReadIntPtr_m576E200A849BE7A6BC688058AA869B12B30D970F (intptr_t ___0_ptr, int32_t ___1_ofs, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B_inline (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_m0CE6E39234ED33F5195AABC8029D06D4756C75C1_gshared_inline)(__this, ___0_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Token__ctor_mF24D964BF65B8DF0F3088E1153015F9C53619C05 (Token_t35AA31435ECA927558605D1CBD6DFDB094216B1E* __this, int32_t ___0_startIndex, int32_t ___1_endIndex, RuntimeObject* ___2_scopes, const RuntimeMethod* method) ;
inline void List_1_Add_m3AF4A32ED2E34C28EF208EB18AD01DA041E1516B_inline (List_1_t05B5A9347A4FF3A8F7702945CD8D4F9B6D1B1990* __this, Token_t35AA31435ECA927558605D1CBD6DFDB094216B1E* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05B5A9347A4FF3A8F7702945CD8D4F9B6D1B1990*, Token_t35AA31435ECA927558605D1CBD6DFDB094216B1E*, const RuntimeMethod*))List_1_Add_m0CE6E39234ED33F5195AABC8029D06D4756C75C1_gshared_inline)(__this, ___0_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenizeResult__ctor_m462209867DD3B779AE6C34E8D294CB5192D1BCD8 (TokenizeResult_tC3D2C5E6E03A563590DF725546B216CDC4989B2F* __this, RuntimeObject* ___0_tokens, intptr_t ___1_stateStack, bool ___2_stoppedEarly, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_textmate_tokenize_line2_utf16_mFF9D1D47472AA4271D88924FA901C1D516F75007 (intptr_t ___0_grammar, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_lineTextUtf8, intptr_t ___2_prevState, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_textmate_free_tokenize_result2_m14C98FCC58CEECC6054B7F0980BCD7B157B0E783 (intptr_t ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextMateTokenizeResult2_tDB673B3A42F57ECED7D92F7CA8C727F214551DD7 Marshal_PtrToStructure_TisTextMateTokenizeResult2_tDB673B3A42F57ECED7D92F7CA8C727F214551DD7_m1E8145D731302002AAD832D9E1B9344901D59E02 (intptr_t ___0_ptr, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EncodedTokenU5BU5D_t4F48C85A75390F71C854D63DAECF0535C4B0217A* Grammar_MarshalEncodedTokens_m87DA9302B94CDFED11C5B87348AB5AB721ED79EE (intptr_t ___0_tokensPtr, int32_t ___1_rawCount, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenizeResult2__ctor_m06C6AA7D0B211EBD42CE135070CEE8A3DA454559 (TokenizeResult2_t3F67D8DB5D1A1D7EBFCA093726387D8561884160* __this, RuntimeObject* ___0_tokens, intptr_t ___1_stateStack, bool ___2_stoppedEarly, const RuntimeMethod* method) ;
inline TokenizeResult2U5BU5D_t1A568A0E486BE4A5DC174D3E75B7812DD7FDF3D7* Array_Empty_TisTokenizeResult2_t3F67D8DB5D1A1D7EBFCA093726387D8561884160_m5315F5A641A5817AB95F7976651277637441769F_inline (const RuntimeMethod* method)
{
	return ((  TokenizeResult2U5BU5D_t1A568A0E486BE4A5DC174D3E75B7812DD7FDF3D7* (*) (const RuntimeMethod*))Array_Empty_TisIl2CppSharedGenericObject_m688909407CF299AE69145CC33ACB1E90C775C653_gshared_inline)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* NativeMethods_ToUtf8NullTerminated_m91A104303F9990A91D2E02585185191DE22E3D86 (String_t* ___0_text, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843_inline (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC GCHandle_Alloc_m3BFD398427352FC756FFE078F01A504B681352EC (RuntimeObject* ___0_value, int32_t ___1_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GCHandle_AddrOfPinnedObject_m9C047E154D6F0FE66BE003AB99F0B67A2CA953A6 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_textmate_tokenize_lines2_utf16_m82B71283172D813223C0E0C70C32397ABA20A91C (intptr_t ___0_grammar, intptr_t ___1_lines, int32_t ___2_lineCount, intptr_t ___3_initialState, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_textmate_free_tokenize_lines_result2_mEFD5600FC49D66DC2006B03729C9D5EA2CA0A562 (intptr_t ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextMateTokenizeMultiLinesResult2_tF73DB547B3577F488B2F04E5AC76E3F780638F68 Marshal_PtrToStructure_TisTextMateTokenizeMultiLinesResult2_tF73DB547B3577F488B2F04E5AC76E3F780638F68_m850FC40F8C06C3C304BE6E2276ADE8E157FFF35C (intptr_t ___0_ptr, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EncodedTokenU5BU5D_t4F48C85A75390F71C854D63DAECF0535C4B0217A* Array_Empty_TisEncodedToken_t13C2F10CED0558A0D78571E96868624F518FB1A6_m126C2641150E6D5ED089E618EAD0A3D3AA997877_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArrayPool_1_tEE934B4A44CDA39BED8CBAF50F7C0E2E9E1ACC01* ArrayPool_1_get_Shared_m0F5374FE0AF46A9CAB3F9501E56B2D990DEB0C39_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_m7AB9510A41CD2959424C87A8E0C332F19E40D980 (intptr_t ___0_source, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_destination, int32_t ___2_startIndex, int32_t ___3_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncodedToken__ctor_m86192F4F3BDE4E13E069CEDF155EAEF612468CB3 (EncodedToken_t13C2F10CED0558A0D78571E96868624F518FB1A6* __this, int32_t ___0_startIndex, uint32_t ___1_metadata, const RuntimeMethod* method) ;
inline TokenizeResultU5BU5D_tF70B053BE34923076B37A4D882309FBA251291DC* Array_Empty_TisTokenizeResult_tC3D2C5E6E03A563590DF725546B216CDC4989B2F_mF854B44AF3C00B52164C5A765BE26087C29760EE_inline (const RuntimeMethod* method)
{
	return ((  TokenizeResultU5BU5D_tF70B053BE34923076B37A4D882309FBA251291DC* (*) (const RuntimeMethod*))Array_Empty_TisIl2CppSharedGenericObject_m688909407CF299AE69145CC33ACB1E90C775C653_gshared_inline)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TokenizeResult_tC3D2C5E6E03A563590DF725546B216CDC4989B2F* Grammar_TokenizeLine_m978DEDBFA66CACD930B72641C0084465564F8DF4 (Grammar_tAE58961FA6049A278788B45B0A0E417357BC14AE* __this, String_t* ___0_lineText, intptr_t ___1_prevState, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t TokenizeResult_get_StateStack_m98B01531716C8AF75421EBC493C83EB6E0E22E2D_inline (TokenizeResult_tC3D2C5E6E03A563590DF725546B216CDC4989B2F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48 (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* __this, String_t* ___0_objectName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65 (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Grammar_Dispose_m6A367FAC25FEF32E3F5F5E0E86513DAC032D0F47 (Grammar_tAE58961FA6049A278788B45B0A0E417357BC14AE* __this, const RuntimeMethod* method) ;
inline void List_1__ctor_mEA2FC9B9CB8013AC30CAB3B0C5A13DA59880392E (List_1_t59DF515164DE8F9BF5F013AAA45FE579F632B927* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t59DF515164DE8F9BF5F013AAA45FE579F632B927*, const RuntimeMethod*))List_1__ctor_m7378BA5FBCA1E88080985FB810820B3F47DAD54C_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_textmate_oniglib_create_mBEE48DA6ACE0DE143261E731B4216F9F4EA32AED (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_textmate_registry_create_m64ADAF4D9A362E5F97272120D2071180104B5DF6 (intptr_t ___0_onigLib, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_textmate_oniglib_dispose_mFDD991E234CADDCD9131BAAA2E57C3BEC84F212F (intptr_t ___0_onigLib, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Registry_ThrowIfDisposed_m0AEB069FA01DA98E849C0A40F251D5F2BD9A9942 (Registry_t37E654B4C1F56ABAD063A4798DD2F673DD5D91EE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_textmate_registry_add_grammar_from_file_m2B02ADF86925597AB943E89E65F7E4ED7BAB725A (intptr_t ___0_registry, String_t* ___1_grammarPath, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_textmate_registry_add_grammar_from_json_mBFFDBC49A4B3D41F04ABB8A3877295EC6F4EC66C (intptr_t ___0_registry, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_jsonContentUtf8, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_textmate_registry_set_theme_m468F2F231400892896ECF14CC6CB936567B43F05 (intptr_t ___0_registry, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_themeJsonContentUtf8, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_textmate_registry_get_color_map_m7B49E02AE5EE062191FD501DA65B8BD784BA70DB (intptr_t ___0_registry, const RuntimeMethod* method) ;
inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Array_Empty_TisString_t_m9832B70DF2B936246FE60F75D3D12CB946C39D16_inline (const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*) (const RuntimeMethod*))Array_Empty_TisIl2CppSharedGenericObject_m688909407CF299AE69145CC33ACB1E90C775C653_gshared_inline)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_textmate_free_color_map_m7712131573BC9D48C7E30E23625B567199626585 (intptr_t ___0_colorMap, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextMateColorMap_tBF7A6063763DEEB5B64F7AA21A9B013E7B372A9F Marshal_PtrToStructure_TisTextMateColorMap_tBF7A6063763DEEB5B64F7AA21A9B013E7B372A9F_m9403C341BE68393B65502FA0680FDD4C66B0F08B (intptr_t ___0_ptr, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_textmate_registry_load_grammar_mF940D81DCA10BBAA97BDDDC6DA76A9EDBA9F4C5A (intptr_t ___0_registry, String_t* ___1_scopeName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Grammar__ctor_mFF9DA81FA4B63FEB9C7870A9F17CB1204E573AAB (Grammar_tAE58961FA6049A278788B45B0A0E417357BC14AE* __this, intptr_t ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Grammar_get_ScopeName_m2291E4162DBFFFFF5623D22CC6D12D64A1C30FA4 (Grammar_tAE58961FA6049A278788B45B0A0E417357BC14AE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, String_t* ___3_str3, const RuntimeMethod* method) ;
inline void List_1_Add_mD9626590915FBA17E9EA10C6E6711BA08E74B78C_inline (List_1_t59DF515164DE8F9BF5F013AAA45FE579F632B927* __this, Grammar_tAE58961FA6049A278788B45B0A0E417357BC14AE* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t59DF515164DE8F9BF5F013AAA45FE579F632B927*, Grammar_tAE58961FA6049A278788B45B0A0E417357BC14AE*, const RuntimeMethod*))List_1_Add_m0CE6E39234ED33F5195AABC8029D06D4756C75C1_gshared_inline)(__this, ___0_item, method);
}
inline Enumerator_t232CE8129533867195FAA6CD57E130DB14EAE8F2 List_1_GetEnumerator_mD23C320DE6F5F7175047F232FC5C4CFB19C15B53 (List_1_t59DF515164DE8F9BF5F013AAA45FE579F632B927* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t232CE8129533867195FAA6CD57E130DB14EAE8F2 (*) (List_1_t59DF515164DE8F9BF5F013AAA45FE579F632B927*, const RuntimeMethod*))List_1_GetEnumerator_mD48177D95D4B5D6A9D8E84E2477668C2850DD5D9_gshared)(__this, method);
}
inline void Enumerator_Dispose_m52A5EB330D63C966E7266BB85FC253E48C89D96F (Enumerator_t232CE8129533867195FAA6CD57E130DB14EAE8F2* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t232CE8129533867195FAA6CD57E130DB14EAE8F2*, const RuntimeMethod*))Enumerator_Dispose_mFE1EBE6F6425283FEAEAE7C79D02CDE4F9D367E8_fshared)(__this, method);
}
inline Grammar_tAE58961FA6049A278788B45B0A0E417357BC14AE* Enumerator_get_Current_m6016870E979A878A730A72FC065FCB0830B6E34B_inline (Enumerator_t232CE8129533867195FAA6CD57E130DB14EAE8F2* __this, const RuntimeMethod* method)
{
	return ((  Grammar_tAE58961FA6049A278788B45B0A0E417357BC14AE* (*) (Enumerator_t232CE8129533867195FAA6CD57E130DB14EAE8F2*, const RuntimeMethod*))Enumerator_get_Current_mA50CED82C4671CC4E1D82333FAC2587F700565D0_gshared_inline)(__this, method);
}
inline bool Enumerator_MoveNext_mBE2D761FCE2DB76F0A00D9A6367BBDBAFFA5EB56 (Enumerator_t232CE8129533867195FAA6CD57E130DB14EAE8F2* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t232CE8129533867195FAA6CD57E130DB14EAE8F2*, const RuntimeMethod*))Enumerator_MoveNext_m2B096A69E95EF2C7A223BA853D66AEC59C4A5C25_gshared)(__this, method);
}
inline void List_1_Clear_mA2DE7CDC6CD4CF342C867A203FD70B8995187FA0_inline (List_1_t59DF515164DE8F9BF5F013AAA45FE579F632B927* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t59DF515164DE8F9BF5F013AAA45FE579F632B927*, const RuntimeMethod*))List_1_Clear_mCCC05B98943E8F4E0F6FBF47063A269048AE71E5_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_textmate_registry_dispose_mB9E2759280C3B0A8D49A8A7714A4F7195CA6C7D4 (intptr_t ___0_registry, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Registry_Dispose_mDFCF7A67FBF84FA8BE35BD86EF0B82A2C023F01D (Registry_t37E654B4C1F56ABAD063A4798DD2F673DD5D91EE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_textmate_theme_load_from_file_m2BA1DC19277C5928A6A4E6343937117FFFBE8CF8 (String_t* ___0_themePath, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Theme__ctor_m66D11B77D899A464D70B3999F832BEDE2FBCD8B4 (Theme_t4CAEF7A3EDC1C3A02E826F7EC53EC986771AA09E* __this, intptr_t ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_textmate_theme_load_from_json_m04853C40F082165A42876B537A3496861C5F231C (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_jsonContentUtf8, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Theme_ThrowIfDisposed_m8821FA9E3ED4BA2FEFF69ABF68A5D69C0C0AC0D3 (Theme_t4CAEF7A3EDC1C3A02E826F7EC53EC986771AA09E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t NativeMethods_textmate_theme_get_foreground_mBE5C2B3CEAEE45EF415897F279F03BE1B3332669 (intptr_t ___0_theme, String_t* ___1_scopePath, uint32_t ___2_defaultColor, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t NativeMethods_textmate_theme_get_background_mC22C0DED3166DB061FD5A8F3438A62BC034BE829 (intptr_t ___0_theme, String_t* ___1_scopePath, uint32_t ___2_defaultColor, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_textmate_theme_get_font_style_mFE71E7D02E38B667FCFB3FA77A49D590AC47B6D2 (intptr_t ___0_theme, String_t* ___1_scopePath, int32_t ___2_defaultStyle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t NativeMethods_textmate_theme_get_default_foreground_m4F060125F6EE3B65E7E688DCB1661ACC814C412D (intptr_t ___0_theme, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t NativeMethods_textmate_theme_get_default_background_m9B3C2A4111D0DD58452A1B28D3BCE7D34EBE36F1 (intptr_t ___0_theme, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_textmate_theme_dispose_m3A9F3454A2CA110069C540D5147CF623DA5B2514 (intptr_t ___0_theme, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Theme_Dispose_mAD81686ECF4BA16C70FFE29922D98009ECBCAF25 (Theme_t4CAEF7A3EDC1C3A02E826F7EC53EC986771AA09E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Token_get_EndIndex_mFE8CA7E14ABDE20D8D2740B64886E579FB3D9835_inline (Token_t35AA31435ECA927558605D1CBD6DFDB094216B1E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Token_get_StartIndex_m35E48CB6DCBE41F22C1B1FFC12C40B18D9EBE1C8_inline (Token_t35AA31435ECA927558605D1CBD6DFDB094216B1E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52 (int32_t ___0_val1, int32_t ___1_val2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___0_startIndex, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Token_get_Scopes_m1B344857DB1EA382814AA93C77DF9416AA1BC621_inline (Token_t35AA31435ECA927558605D1CBD6DFDB094216B1E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m8159F953B3D62AA54A0853A6E9573CDC0F63E158 (String_t* ___0_separator, RuntimeObject* ___1_values, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, RuntimeObject* ___3_arg2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EncodedTokenAttributes_GetFontStyle_m15A3169796E4AC2844B3E688F8AFF034686819C1 (uint32_t ___0_metadata, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EncodedTokenAttributes_GetForeground_m6748889F3D142175B1C6C2C42770522AA86C382F (uint32_t ___0_metadata, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EncodedTokenAttributes_GetBackground_mF2AE186FB41C14A4C6865A1FE01B824A4D7196B1 (uint32_t ___0_metadata, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TokenizeResult2_get_Tokens_m8DF47C70FD34CFECA6A010727A11A24A67E3589E_inline (TokenizeResult2_t3F67D8DB5D1A1D7EBFCA093726387D8561884160* __this, const RuntimeMethod* method) ;
inline void List_1_AddWithResize_mCC24A812DFC30C3DE2230E3C8EE705871C1DFF81 (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*, Il2CppSharedGenericObject*, const RuntimeMethod*))List_1_AddWithResize_mCC24A812DFC30C3DE2230E3C8EE705871C1DFF81_gshared)(__this, ___0_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AppUITextMateLib_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL textmate_theme_load_from_file(char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AppUITextMateLib_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL textmate_theme_load_from_json(uint8_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AppUITextMateLib_INTERNAL
IL2CPP_EXTERN_C uint32_t CDECL textmate_theme_get_foreground(intptr_t, char*, uint32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AppUITextMateLib_INTERNAL
IL2CPP_EXTERN_C uint32_t CDECL textmate_theme_get_background(intptr_t, char*, uint32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AppUITextMateLib_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL textmate_theme_get_font_style(intptr_t, char*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AppUITextMateLib_INTERNAL
IL2CPP_EXTERN_C uint32_t CDECL textmate_theme_get_default_foreground(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AppUITextMateLib_INTERNAL
IL2CPP_EXTERN_C uint32_t CDECL textmate_theme_get_default_background(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AppUITextMateLib_INTERNAL
IL2CPP_EXTERN_C void CDECL textmate_theme_dispose(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AppUITextMateLib_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL textmate_oniglib_create();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AppUITextMateLib_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL textmate_registry_create(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AppUITextMateLib_INTERNAL
IL2CPP_EXTERN_C void CDECL textmate_registry_dispose(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AppUITextMateLib_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL textmate_registry_add_grammar_from_file(intptr_t, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AppUITextMateLib_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL textmate_registry_add_grammar_from_json(intptr_t, uint8_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AppUITextMateLib_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL textmate_registry_load_grammar(intptr_t, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AppUITextMateLib_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL textmate_registry_set_theme(intptr_t, uint8_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AppUITextMateLib_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL textmate_registry_get_color_map(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AppUITextMateLib_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL textmate_get_initial_state();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AppUITextMateLib_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL textmate_tokenize_line(intptr_t, char*, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AppUITextMateLib_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL textmate_tokenize_line2(intptr_t, char*, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AppUITextMateLib_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL textmate_tokenize_line_utf16(intptr_t, uint8_t*, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AppUITextMateLib_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL textmate_tokenize_line2_utf16(intptr_t, uint8_t*, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AppUITextMateLib_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL textmate_tokenize_lines_utf16(intptr_t, intptr_t, int32_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AppUITextMateLib_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL textmate_tokenize_lines2_utf16(intptr_t, intptr_t, int32_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AppUITextMateLib_INTERNAL
IL2CPP_EXTERN_C void CDECL textmate_free_tokenize_result(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AppUITextMateLib_INTERNAL
IL2CPP_EXTERN_C void CDECL textmate_free_tokenize_result2(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AppUITextMateLib_INTERNAL
IL2CPP_EXTERN_C void CDECL textmate_free_tokenize_lines_result(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AppUITextMateLib_INTERNAL
IL2CPP_EXTERN_C void CDECL textmate_free_tokenize_lines_result2(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AppUITextMateLib_INTERNAL
IL2CPP_EXTERN_C void CDECL textmate_free_color_map(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AppUITextMateLib_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL textmate_grammar_get_scope_name(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AppUITextMateLib_INTERNAL
IL2CPP_EXTERN_C void CDECL textmate_oniglib_dispose(intptr_t);
#endif
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Grammar__ctor_mFF9DA81FA4B63FEB9C7870A9F17CB1204E573AAB (Grammar_tAE58961FA6049A278788B45B0A0E417357BC14AE* __this, intptr_t ___0_handle, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		intptr_t L_0 = ___0_handle;
		__this->___m_Handle = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Grammar_get_ScopeName_m2291E4162DBFFFFF5623D22CC6D12D64A1C30FA4 (Grammar_tAE58961FA6049A278788B45B0A0E417357BC14AE* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_StaticInit);
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	{
		Grammar_ThrowIfDisposed_m5DA3BF557A0C609ECAE3DE5D7619769DB8F9D193(__this, NULL);
		intptr_t L_0 = __this->___m_Handle;
		intptr_t L_1;
		L_1 = NativeMethods_textmate_grammar_get_scope_name_m04BB1EE3A1136412590D76E9900984BD85280049(L_0, NULL);
		CHECKED_LOCAL_INIT(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_StaticInit,(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		String_t* L_2;
		L_2 = Marshal_PtrToStringAnsi_m8DF88D9F22FCF791C538A36C9233B3882F579B4A(L_1, NULL);
		String_t* L_3 = L_2;
		if (L_3)
		{
			G_B2_0 = L_3;
			goto IL_001f;
		}
		G_B1_0 = L_3;
	}
	{
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
		G_B2_0 = L_4;
	}

IL_001f:
	{
		return G_B2_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TokenizeResult_tC3D2C5E6E03A563590DF725546B216CDC4989B2F* Grammar_TokenizeLine_m978DEDBFA66CACD930B72641C0084465564F8DF4 (Grammar_tAE58961FA6049A278788B45B0A0E417357BC14AE* __this, String_t* ___0_lineText, intptr_t ___1_prevState, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3AF4A32ED2E34C28EF208EB18AD01DA041E1516B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m185EA5A7A78FC9527A27E5ACB553C6239D6B3DCA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t05B5A9347A4FF3A8F7702945CD8D4F9B6D1B1990_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_PtrToStructure_TisTextMateToken_t58D37C2A1FBFE6B45AAC8744EF1C1F371F00C874_m5EA63AE3F269514C8735A4A7F5A2C834214121CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_PtrToStructure_TisTextMateTokenizeResult_tB8838D087311294D22F9FEC052E0620E11F6018E_mB2A86B6DBB1CC11B9802C563501613DA121B8FE3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_SizeOf_TisTextMateToken_t58D37C2A1FBFE6B45AAC8744EF1C1F371F00C874_mB1FD5617D51EED426146683894F1FD6FA7079A94_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Token_t35AA31435ECA927558605D1CBD6DFDB094216B1E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TokenizeResult_tC3D2C5E6E03A563590DF725546B216CDC4989B2F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_StaticInit);
	String_t* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	TextMateTokenizeResult_tB8838D087311294D22F9FEC052E0620E11F6018E V_3;
	memset((&V_3), 0, sizeof(V_3));
	List_1_t05B5A9347A4FF3A8F7702945CD8D4F9B6D1B1990* V_4 = NULL;
	int32_t V_5 = 0;
	TextMateToken_t58D37C2A1FBFE6B45AAC8744EF1C1F371F00C874 V_6;
	memset((&V_6), 0, sizeof(V_6));
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_7 = NULL;
	int32_t V_8 = 0;
	intptr_t V_9;
	memset((&V_9), 0, sizeof(V_9));
	String_t* V_10 = NULL;
	TokenizeResult_tC3D2C5E6E03A563590DF725546B216CDC4989B2F* V_11 = NULL;
	String_t* G_B4_0 = NULL;
	String_t* G_B3_0 = NULL;
	{
		Grammar_ThrowIfDisposed_m5DA3BF557A0C609ECAE3DE5D7619769DB8F9D193(__this, NULL);
		intptr_t L_0 = ___1_prevState;
		bool L_1;
		L_1 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_0, 0, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		intptr_t L_2;
		L_2 = NativeMethods_textmate_get_initial_state_m0DF34A7E05C35D3688E9BA88B62FB7DB6C5FDC9B(NULL);
		___1_prevState = L_2;
	}

IL_001a:
	{
		String_t* L_3 = ___0_lineText;
		String_t* L_4 = L_3;
		if (L_4)
		{
			G_B4_0 = L_4;
			goto IL_0024;
		}
		G_B3_0 = L_4;
	}
	{
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
		G_B4_0 = L_5;
	}

IL_0024:
	{
		V_0 = G_B4_0;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_6;
		L_6 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8;
		L_8 = VirtualFuncInvoker1< int32_t, String_t* >::Invoke(10, L_6, L_7);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(L_8, 1)));
		V_1 = L_9;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_10;
		L_10 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_11 = V_0;
		String_t* L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_12, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_1;
		NullCheck(L_10);
		int32_t L_15;
		L_15 = VirtualFuncInvoker5< int32_t, String_t*, int32_t, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(17, L_10, L_11, 0, L_13, L_14, 0);
		intptr_t L_16 = __this->___m_Handle;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_1;
		intptr_t L_18 = ___1_prevState;
		intptr_t L_19;
		L_19 = NativeMethods_textmate_tokenize_line_utf16_m05F2A3D88679E653F3383CADD163CCCF353DDB4D(L_16, L_17, L_18, NULL);
		V_2 = L_19;
		intptr_t L_20 = V_2;
		bool L_21;
		L_21 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_20, 0, NULL);
		if (!L_21)
		{
			goto IL_0073;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_22 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_22, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral97BC2D489655819D0C6D2F33281A1A9C1A476ED6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Grammar_TokenizeLine_m978DEDBFA66CACD930B72641C0084465564F8DF4_RuntimeMethod_var)));
	}

IL_0073:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0149:
			{
				intptr_t L_23 = V_2;
				NativeMethods_textmate_free_tokenize_result_mED21A7C48B0C510C991B4231A8F5CE7C9297D6A8(L_23, NULL);
				return;
			}
		});
		try
		{
			{
				intptr_t L_24 = V_2;
				CHECKED_LOCAL_INIT(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_StaticInit,(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
				TextMateTokenizeResult_tB8838D087311294D22F9FEC052E0620E11F6018E L_25;
				L_25 = Marshal_PtrToStructure_TisTextMateTokenizeResult_tB8838D087311294D22F9FEC052E0620E11F6018E_mB2A86B6DBB1CC11B9802C563501613DA121B8FE3(L_24, Marshal_PtrToStructure_TisTextMateTokenizeResult_tB8838D087311294D22F9FEC052E0620E11F6018E_mB2A86B6DBB1CC11B9802C563501613DA121B8FE3_RuntimeMethod_var);
				V_3 = L_25;
				List_1_t05B5A9347A4FF3A8F7702945CD8D4F9B6D1B1990* L_26 = (List_1_t05B5A9347A4FF3A8F7702945CD8D4F9B6D1B1990*)il2cpp_codegen_object_new(List_1_t05B5A9347A4FF3A8F7702945CD8D4F9B6D1B1990_il2cpp_TypeInfo_var);
				List_1__ctor_m185EA5A7A78FC9527A27E5ACB553C6239D6B3DCA(L_26, List_1__ctor_m185EA5A7A78FC9527A27E5ACB553C6239D6B3DCA_RuntimeMethod_var);
				V_4 = L_26;
				V_5 = 0;
				goto IL_0122_1;
			}

IL_008a_1:
			{
				TextMateTokenizeResult_tB8838D087311294D22F9FEC052E0620E11F6018E L_27 = V_3;
				intptr_t L_28 = L_27.___Tokens;
				int32_t L_29 = V_5;
				CHECKED_LOCAL_INIT(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_StaticInit,(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
				int32_t L_30;
				L_30 = Marshal_SizeOf_TisTextMateToken_t58D37C2A1FBFE6B45AAC8744EF1C1F371F00C874_mB1FD5617D51EED426146683894F1FD6FA7079A94(Marshal_SizeOf_TisTextMateToken_t58D37C2A1FBFE6B45AAC8744EF1C1F371F00C874_mB1FD5617D51EED426146683894F1FD6FA7079A94_RuntimeMethod_var);
				intptr_t L_31;
				L_31 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_28, ((int32_t)il2cpp_codegen_multiply(L_29, L_30)), NULL);
				TextMateToken_t58D37C2A1FBFE6B45AAC8744EF1C1F371F00C874 L_32;
				L_32 = Marshal_PtrToStructure_TisTextMateToken_t58D37C2A1FBFE6B45AAC8744EF1C1F371F00C874_m5EA63AE3F269514C8735A4A7F5A2C834214121CB(L_31, Marshal_PtrToStructure_TisTextMateToken_t58D37C2A1FBFE6B45AAC8744EF1C1F371F00C874_m5EA63AE3F269514C8735A4A7F5A2C834214121CB_RuntimeMethod_var);
				V_6 = L_32;
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_33 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
				List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_33, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
				V_7 = L_33;
				V_8 = 0;
				goto IL_00f5_1;
			}

IL_00b0_1:
			{
				TextMateToken_t58D37C2A1FBFE6B45AAC8744EF1C1F371F00C874 L_34 = V_6;
				intptr_t L_35 = L_34.___Scopes;
				int32_t L_36 = V_8;
				int32_t L_37;
				L_37 = IntPtr_get_Size_m1FAAA59DA73D7E32BB1AB55DD92A90AFE3251DBE(NULL);
				CHECKED_LOCAL_INIT(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_StaticInit,(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
				intptr_t L_38;
				L_38 = Marshal_ReadIntPtr_m576E200A849BE7A6BC688058AA869B12B30D970F(L_35, ((int32_t)il2cpp_codegen_multiply(L_36, L_37)), NULL);
				V_9 = L_38;
				intptr_t L_39 = V_9;
				bool L_40;
				L_40 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B_inline(L_39, 0, NULL);
				if (!L_40)
				{
					goto IL_00ef_1;
				}
			}
			{
				intptr_t L_41 = V_9;
				CHECKED_LOCAL_INIT(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_StaticInit,(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
				String_t* L_42;
				L_42 = Marshal_PtrToStringAnsi_m8DF88D9F22FCF791C538A36C9233B3882F579B4A(L_41, NULL);
				V_10 = L_42;
				String_t* L_43 = V_10;
				bool L_44;
				L_44 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_43, NULL);
				if (L_44)
				{
					goto IL_00ef_1;
				}
			}
			{
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_45 = V_7;
				String_t* L_46 = V_10;
				NullCheck(L_45);
				List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_45, L_46, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
			}

IL_00ef_1:
			{
				int32_t L_47 = V_8;
				V_8 = ((int32_t)il2cpp_codegen_add(L_47, 1));
			}

IL_00f5_1:
			{
				int32_t L_48 = V_8;
				TextMateToken_t58D37C2A1FBFE6B45AAC8744EF1C1F371F00C874 L_49 = V_6;
				int32_t L_50 = L_49.___ScopeDepth;
				if ((((int32_t)L_48) < ((int32_t)L_50)))
				{
					goto IL_00b0_1;
				}
			}
			{
				List_1_t05B5A9347A4FF3A8F7702945CD8D4F9B6D1B1990* L_51 = V_4;
				TextMateToken_t58D37C2A1FBFE6B45AAC8744EF1C1F371F00C874 L_52 = V_6;
				int32_t L_53 = L_52.___StartIndex;
				TextMateToken_t58D37C2A1FBFE6B45AAC8744EF1C1F371F00C874 L_54 = V_6;
				int32_t L_55 = L_54.___EndIndex;
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_56 = V_7;
				Token_t35AA31435ECA927558605D1CBD6DFDB094216B1E* L_57 = (Token_t35AA31435ECA927558605D1CBD6DFDB094216B1E*)il2cpp_codegen_object_new(Token_t35AA31435ECA927558605D1CBD6DFDB094216B1E_il2cpp_TypeInfo_var);
				Token__ctor_mF24D964BF65B8DF0F3088E1153015F9C53619C05(L_57, L_53, L_55, L_56, NULL);
				NullCheck(L_51);
				List_1_Add_m3AF4A32ED2E34C28EF208EB18AD01DA041E1516B_inline(L_51, L_57, List_1_Add_m3AF4A32ED2E34C28EF208EB18AD01DA041E1516B_RuntimeMethod_var);
				int32_t L_58 = V_5;
				V_5 = ((int32_t)il2cpp_codegen_add(L_58, 1));
			}

IL_0122_1:
			{
				int32_t L_59 = V_5;
				TextMateTokenizeResult_tB8838D087311294D22F9FEC052E0620E11F6018E L_60 = V_3;
				int32_t L_61 = L_60.___TokenCount;
				if ((((int32_t)L_59) < ((int32_t)L_61)))
				{
					goto IL_008a_1;
				}
			}
			{
				List_1_t05B5A9347A4FF3A8F7702945CD8D4F9B6D1B1990* L_62 = V_4;
				TextMateTokenizeResult_tB8838D087311294D22F9FEC052E0620E11F6018E L_63 = V_3;
				intptr_t L_64 = L_63.___RuleStack;
				TextMateTokenizeResult_tB8838D087311294D22F9FEC052E0620E11F6018E L_65 = V_3;
				int32_t L_66 = L_65.___StoppedEarly;
				TokenizeResult_tC3D2C5E6E03A563590DF725546B216CDC4989B2F* L_67 = (TokenizeResult_tC3D2C5E6E03A563590DF725546B216CDC4989B2F*)il2cpp_codegen_object_new(TokenizeResult_tC3D2C5E6E03A563590DF725546B216CDC4989B2F_il2cpp_TypeInfo_var);
				TokenizeResult__ctor_m462209867DD3B779AE6C34E8D294CB5192D1BCD8(L_67, L_62, L_64, (bool)((!(((uint32_t)L_66) <= ((uint32_t)0)))? 1 : 0), NULL);
				V_11 = L_67;
				goto IL_0150;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0150:
	{
		TokenizeResult_tC3D2C5E6E03A563590DF725546B216CDC4989B2F* L_68 = V_11;
		return L_68;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TokenizeResult2_t3F67D8DB5D1A1D7EBFCA093726387D8561884160* Grammar_TokenizeLine2_m7001429F733D8EA1FF8CD739E96BF667FB558679 (Grammar_tAE58961FA6049A278788B45B0A0E417357BC14AE* __this, String_t* ___0_lineText, intptr_t ___1_prevState, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_PtrToStructure_TisTextMateTokenizeResult2_tDB673B3A42F57ECED7D92F7CA8C727F214551DD7_m1E8145D731302002AAD832D9E1B9344901D59E02_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TokenizeResult2_t3F67D8DB5D1A1D7EBFCA093726387D8561884160_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_StaticInit);
	String_t* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	TextMateTokenizeResult2_tDB673B3A42F57ECED7D92F7CA8C727F214551DD7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	TokenizeResult2_t3F67D8DB5D1A1D7EBFCA093726387D8561884160* V_4 = NULL;
	String_t* G_B4_0 = NULL;
	String_t* G_B3_0 = NULL;
	{
		Grammar_ThrowIfDisposed_m5DA3BF557A0C609ECAE3DE5D7619769DB8F9D193(__this, NULL);
		intptr_t L_0 = ___1_prevState;
		bool L_1;
		L_1 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_0, 0, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		intptr_t L_2;
		L_2 = NativeMethods_textmate_get_initial_state_m0DF34A7E05C35D3688E9BA88B62FB7DB6C5FDC9B(NULL);
		___1_prevState = L_2;
	}

IL_001a:
	{
		String_t* L_3 = ___0_lineText;
		String_t* L_4 = L_3;
		if (L_4)
		{
			G_B4_0 = L_4;
			goto IL_0024;
		}
		G_B3_0 = L_4;
	}
	{
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
		G_B4_0 = L_5;
	}

IL_0024:
	{
		V_0 = G_B4_0;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_6;
		L_6 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8;
		L_8 = VirtualFuncInvoker1< int32_t, String_t* >::Invoke(10, L_6, L_7);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(L_8, 1)));
		V_1 = L_9;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_10;
		L_10 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_11 = V_0;
		String_t* L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_12, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_1;
		NullCheck(L_10);
		int32_t L_15;
		L_15 = VirtualFuncInvoker5< int32_t, String_t*, int32_t, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(17, L_10, L_11, 0, L_13, L_14, 0);
		intptr_t L_16 = __this->___m_Handle;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_1;
		intptr_t L_18 = ___1_prevState;
		intptr_t L_19;
		L_19 = NativeMethods_textmate_tokenize_line2_utf16_mFF9D1D47472AA4271D88924FA901C1D516F75007(L_16, L_17, L_18, NULL);
		V_2 = L_19;
		intptr_t L_20 = V_2;
		bool L_21;
		L_21 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_20, 0, NULL);
		if (!L_21)
		{
			goto IL_0073;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_22 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_22, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDC1C4E0B2B89558AF9FB0251113A4E997FA48B23)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Grammar_TokenizeLine2_m7001429F733D8EA1FF8CD739E96BF667FB558679_RuntimeMethod_var)));
	}

IL_0073:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00a4:
			{
				intptr_t L_23 = V_2;
				NativeMethods_textmate_free_tokenize_result2_m14C98FCC58CEECC6054B7F0980BCD7B157B0E783(L_23, NULL);
				return;
			}
		});
		try
		{
			intptr_t L_24 = V_2;
			CHECKED_LOCAL_INIT(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_StaticInit,(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
			TextMateTokenizeResult2_tDB673B3A42F57ECED7D92F7CA8C727F214551DD7 L_25;
			L_25 = Marshal_PtrToStructure_TisTextMateTokenizeResult2_tDB673B3A42F57ECED7D92F7CA8C727F214551DD7_m1E8145D731302002AAD832D9E1B9344901D59E02(L_24, Marshal_PtrToStructure_TisTextMateTokenizeResult2_tDB673B3A42F57ECED7D92F7CA8C727F214551DD7_m1E8145D731302002AAD832D9E1B9344901D59E02_RuntimeMethod_var);
			V_3 = L_25;
			TextMateTokenizeResult2_tDB673B3A42F57ECED7D92F7CA8C727F214551DD7 L_26 = V_3;
			intptr_t L_27 = L_26.___Tokens;
			TextMateTokenizeResult2_tDB673B3A42F57ECED7D92F7CA8C727F214551DD7 L_28 = V_3;
			int32_t L_29 = L_28.___TokenCount;
			EncodedTokenU5BU5D_t4F48C85A75390F71C854D63DAECF0535C4B0217A* L_30;
			L_30 = Grammar_MarshalEncodedTokens_m87DA9302B94CDFED11C5B87348AB5AB721ED79EE(L_27, L_29, NULL);
			TextMateTokenizeResult2_tDB673B3A42F57ECED7D92F7CA8C727F214551DD7 L_31 = V_3;
			intptr_t L_32 = L_31.___RuleStack;
			TextMateTokenizeResult2_tDB673B3A42F57ECED7D92F7CA8C727F214551DD7 L_33 = V_3;
			int32_t L_34 = L_33.___StoppedEarly;
			TokenizeResult2_t3F67D8DB5D1A1D7EBFCA093726387D8561884160* L_35 = (TokenizeResult2_t3F67D8DB5D1A1D7EBFCA093726387D8561884160*)il2cpp_codegen_object_new(TokenizeResult2_t3F67D8DB5D1A1D7EBFCA093726387D8561884160_il2cpp_TypeInfo_var);
			TokenizeResult2__ctor_m06C6AA7D0B211EBD42CE135070CEE8A3DA454559(L_35, (RuntimeObject*)L_30, L_32, (bool)((!(((uint32_t)L_34) <= ((uint32_t)0)))? 1 : 0), NULL);
			V_4 = L_35;
			goto IL_00ab;
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00ab:
	{
		TokenizeResult2_t3F67D8DB5D1A1D7EBFCA093726387D8561884160* L_36 = V_4;
		return L_36;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TokenizeResult2U5BU5D_t1A568A0E486BE4A5DC174D3E75B7812DD7FDF3D7* Grammar_TokenizeLines2_m8EF66306C3637A8D170C771DF40BCC544683E173 (Grammar_tAE58961FA6049A278788B45B0A0E417357BC14AE* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_lines, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisTokenizeResult2_t3F67D8DB5D1A1D7EBFCA093726387D8561884160_m5315F5A641A5817AB95F7976651277637441769F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GCHandleU5BU5D_t7EA6F2FA83CDF86871001174CF7D30033AC4A785_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_PtrToStructure_TisTextMateTokenizeMultiLinesResult2_tF73DB547B3577F488B2F04E5AC76E3F780638F68_m850FC40F8C06C3C304BE6E2276ADE8E157FFF35C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_PtrToStructure_TisTextMateTokenizeResult2_tDB673B3A42F57ECED7D92F7CA8C727F214551DD7_m1E8145D731302002AAD832D9E1B9344901D59E02_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TokenizeResult2U5BU5D_t1A568A0E486BE4A5DC174D3E75B7812DD7FDF3D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TokenizeResult2_t3F67D8DB5D1A1D7EBFCA093726387D8561884160_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_StaticInit);
	ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* V_0 = NULL;
	GCHandleU5BU5D_t7EA6F2FA83CDF86871001174CF7D30033AC4A785* V_1 = NULL;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* V_2 = NULL;
	int32_t V_3 = 0;
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	intptr_t V_6;
	memset((&V_6), 0, sizeof(V_6));
	TextMateTokenizeMultiLinesResult2_tF73DB547B3577F488B2F04E5AC76E3F780638F68 V_7;
	memset((&V_7), 0, sizeof(V_7));
	TokenizeResult2U5BU5D_t1A568A0E486BE4A5DC174D3E75B7812DD7FDF3D7* V_8 = NULL;
	int32_t V_9 = 0;
	TextMateTokenizeResult2_tDB673B3A42F57ECED7D92F7CA8C727F214551DD7 V_10;
	memset((&V_10), 0, sizeof(V_10));
	EncodedTokenU5BU5D_t4F48C85A75390F71C854D63DAECF0535C4B0217A* V_11 = NULL;
	TokenizeResult2U5BU5D_t1A568A0E486BE4A5DC174D3E75B7812DD7FDF3D7* V_12 = NULL;
	int32_t V_13 = 0;
	{
		Grammar_ThrowIfDisposed_m5DA3BF557A0C609ECAE3DE5D7619769DB8F9D193(__this, NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___0_lines;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___0_lines;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0013;
		}
	}

IL_000d:
	{
		TokenizeResult2U5BU5D_t1A568A0E486BE4A5DC174D3E75B7812DD7FDF3D7* L_2;
		L_2 = Array_Empty_TisTokenizeResult2_t3F67D8DB5D1A1D7EBFCA093726387D8561884160_m5315F5A641A5817AB95F7976651277637441769F_inline(Array_Empty_TisTokenizeResult2_t3F67D8DB5D1A1D7EBFCA093726387D8561884160_m5315F5A641A5817AB95F7976651277637441769F_RuntimeMethod_var);
		return L_2;
	}

IL_0013:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = ___0_lines;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_5 = (ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA*)(ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA*)SZArrayNew(ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA_il2cpp_TypeInfo_var, (uint32_t)L_4);
		V_0 = L_5;
		V_3 = 0;
		goto IL_002f;
	}

IL_0020:
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_6 = V_0;
		int32_t L_7 = V_3;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = ___0_lines;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		String_t* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12;
		L_12 = NativeMethods_ToUtf8NullTerminated_m91A104303F9990A91D2E02585185191DE22E3D86(L_11, NULL);
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_12);
		int32_t L_13 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_002f:
	{
		int32_t L_14 = V_3;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = ___0_lines;
		NullCheck(L_15);
		int32_t L_16 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_15)->max_length),NULL));
		if ((((int32_t)L_14) < ((int32_t)L_16)))
		{
			goto IL_0020;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = ___0_lines;
		NullCheck(L_17);
		int32_t L_18 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_17)->max_length),NULL));
		GCHandleU5BU5D_t7EA6F2FA83CDF86871001174CF7D30033AC4A785* L_19 = (GCHandleU5BU5D_t7EA6F2FA83CDF86871001174CF7D30033AC4A785*)(GCHandleU5BU5D_t7EA6F2FA83CDF86871001174CF7D30033AC4A785*)SZArrayNew(GCHandleU5BU5D_t7EA6F2FA83CDF86871001174CF7D30033AC4A785_il2cpp_TypeInfo_var, (uint32_t)L_18);
		V_1 = L_19;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = ___0_lines;
		NullCheck(L_20);
		int32_t L_21 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_20)->max_length),NULL));
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_22 = (IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832*)(IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832*)SZArrayNew(IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832_il2cpp_TypeInfo_var, (uint32_t)L_21);
		V_2 = L_22;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0173:
			{
				{
					V_13 = 0;
					goto IL_019a;
				}

IL_0178:
				{
					GCHandleU5BU5D_t7EA6F2FA83CDF86871001174CF7D30033AC4A785* L_23 = V_1;
					int32_t L_24 = V_13;
					NullCheck(L_23);
					bool L_25;
					L_25 = GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843_inline(((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24))), NULL);
					if (!L_25)
					{
						goto IL_0194;
					}
				}
				{
					GCHandleU5BU5D_t7EA6F2FA83CDF86871001174CF7D30033AC4A785* L_26 = V_1;
					int32_t L_27 = V_13;
					NullCheck(L_26);
					GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3(((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27))), NULL);
				}

IL_0194:
				{
					int32_t L_28 = V_13;
					V_13 = ((int32_t)il2cpp_codegen_add(L_28, 1));
				}

IL_019a:
				{
					int32_t L_29 = V_13;
					GCHandleU5BU5D_t7EA6F2FA83CDF86871001174CF7D30033AC4A785* L_30 = V_1;
					NullCheck(L_30);
					int32_t L_31 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_30)->max_length),NULL));
					if ((((int32_t)L_29) < ((int32_t)L_31)))
					{
						goto IL_0178;
					}
				}
				{
					return;
				}
			}
		});
		try
		{
			{
				V_5 = 0;
				goto IL_0075_1;
			}

IL_004c_1:
			{
				GCHandleU5BU5D_t7EA6F2FA83CDF86871001174CF7D30033AC4A785* L_32 = V_1;
				int32_t L_33 = V_5;
				ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_34 = V_0;
				int32_t L_35 = V_5;
				NullCheck(L_34);
				int32_t L_36 = L_35;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
				GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_38;
				L_38 = GCHandle_Alloc_m3BFD398427352FC756FFE078F01A504B681352EC((RuntimeObject*)L_37, 3, NULL);
				NullCheck(L_32);
				(L_32)->SetAt(static_cast<il2cpp_array_size_t>(L_33), (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC)L_38);
				IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_39 = V_2;
				int32_t L_40 = V_5;
				GCHandleU5BU5D_t7EA6F2FA83CDF86871001174CF7D30033AC4A785* L_41 = V_1;
				int32_t L_42 = V_5;
				NullCheck(L_41);
				intptr_t L_43;
				L_43 = GCHandle_AddrOfPinnedObject_m9C047E154D6F0FE66BE003AB99F0B67A2CA953A6(((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42))), NULL);
				NullCheck(L_39);
				(L_39)->SetAt(static_cast<il2cpp_array_size_t>(L_40), (intptr_t)L_43);
				int32_t L_44 = V_5;
				V_5 = ((int32_t)il2cpp_codegen_add(L_44, 1));
			}

IL_0075_1:
			{
				int32_t L_45 = V_5;
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_46 = ___0_lines;
				NullCheck(L_46);
				int32_t L_47 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_46)->max_length),NULL));
				if ((((int32_t)L_45) < ((int32_t)L_47)))
				{
					goto IL_004c_1;
				}
			}
			{
				IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_48 = V_2;
				GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_49;
				L_49 = GCHandle_Alloc_m3BFD398427352FC756FFE078F01A504B681352EC((RuntimeObject*)L_48, 3, NULL);
				V_4 = L_49;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_016b_1:
					{
						GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3((&V_4), NULL);
						return;
					}
				});
				try
				{
					{
						intptr_t L_50 = __this->___m_Handle;
						intptr_t L_51;
						L_51 = GCHandle_AddrOfPinnedObject_m9C047E154D6F0FE66BE003AB99F0B67A2CA953A6((&V_4), NULL);
						StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_52 = ___0_lines;
						NullCheck(L_52);
						int32_t L_53 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_52)->max_length),NULL));
						intptr_t L_54;
						L_54 = NativeMethods_textmate_get_initial_state_m0DF34A7E05C35D3688E9BA88B62FB7DB6C5FDC9B(NULL);
						intptr_t L_55;
						L_55 = NativeMethods_textmate_tokenize_lines2_utf16_m82B71283172D813223C0E0C70C32397ABA20A91C(L_50, L_51, L_53, L_54, NULL);
						V_6 = L_55;
						intptr_t L_56 = V_6;
						bool L_57;
						L_57 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_56, 0, NULL);
						if (!L_57)
						{
							goto IL_00ba_2;
						}
					}
					{
						InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_58 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
						InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_58, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral87C395C5B31BE3BD1DA36C9237DA03640F329078)), NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_58, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Grammar_TokenizeLines2_m8EF66306C3637A8D170C771DF40BCC544683E173_RuntimeMethod_var)));
					}

IL_00ba_2:
					{
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_0163_2:
							{
								intptr_t L_59 = V_6;
								NativeMethods_textmate_free_tokenize_lines_result2_mEFD5600FC49D66DC2006B03729C9D5EA2CA0A562(L_59, NULL);
								return;
							}
						});
						try
						{
							{
								intptr_t L_60 = V_6;
								CHECKED_LOCAL_INIT(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_StaticInit,(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
								TextMateTokenizeMultiLinesResult2_tF73DB547B3577F488B2F04E5AC76E3F780638F68 L_61;
								L_61 = Marshal_PtrToStructure_TisTextMateTokenizeMultiLinesResult2_tF73DB547B3577F488B2F04E5AC76E3F780638F68_m850FC40F8C06C3C304BE6E2276ADE8E157FFF35C(L_60, Marshal_PtrToStructure_TisTextMateTokenizeMultiLinesResult2_tF73DB547B3577F488B2F04E5AC76E3F780638F68_m850FC40F8C06C3C304BE6E2276ADE8E157FFF35C_RuntimeMethod_var);
								V_7 = L_61;
								TextMateTokenizeMultiLinesResult2_tF73DB547B3577F488B2F04E5AC76E3F780638F68 L_62 = V_7;
								int32_t L_63 = L_62.___LineCount;
								if ((((int32_t)L_63) <= ((int32_t)0)))
								{
									goto IL_00ec_3;
								}
							}
							{
								TextMateTokenizeMultiLinesResult2_tF73DB547B3577F488B2F04E5AC76E3F780638F68 L_64 = V_7;
								intptr_t L_65 = L_64.___LineResults;
								bool L_66;
								L_66 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_65, 0, NULL);
								if (!L_66)
								{
									goto IL_00ec_3;
								}
							}
							{
								InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_67 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
								InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_67, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral428B9A1BFF1D93AB7D6616FBE6ADCE24A0914872)), NULL);
								IL2CPP_RAISE_MANAGED_EXCEPTION(L_67, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Grammar_TokenizeLines2_m8EF66306C3637A8D170C771DF40BCC544683E173_RuntimeMethod_var)));
							}

IL_00ec_3:
							{
								TextMateTokenizeMultiLinesResult2_tF73DB547B3577F488B2F04E5AC76E3F780638F68 L_68 = V_7;
								int32_t L_69 = L_68.___LineCount;
								TokenizeResult2U5BU5D_t1A568A0E486BE4A5DC174D3E75B7812DD7FDF3D7* L_70 = (TokenizeResult2U5BU5D_t1A568A0E486BE4A5DC174D3E75B7812DD7FDF3D7*)(TokenizeResult2U5BU5D_t1A568A0E486BE4A5DC174D3E75B7812DD7FDF3D7*)SZArrayNew(TokenizeResult2U5BU5D_t1A568A0E486BE4A5DC174D3E75B7812DD7FDF3D7_il2cpp_TypeInfo_var, (uint32_t)L_69);
								V_8 = L_70;
								V_9 = 0;
								goto IL_0152_3;
							}

IL_00ff_3:
							{
								TextMateTokenizeMultiLinesResult2_tF73DB547B3577F488B2F04E5AC76E3F780638F68 L_71 = V_7;
								intptr_t L_72 = L_71.___LineResults;
								int32_t L_73 = V_9;
								int32_t L_74;
								L_74 = IntPtr_get_Size_m1FAAA59DA73D7E32BB1AB55DD92A90AFE3251DBE(NULL);
								CHECKED_LOCAL_INIT(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_StaticInit,(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
								intptr_t L_75;
								L_75 = Marshal_ReadIntPtr_m576E200A849BE7A6BC688058AA869B12B30D970F(L_72, ((int32_t)il2cpp_codegen_multiply(L_73, L_74)), NULL);
								TextMateTokenizeResult2_tDB673B3A42F57ECED7D92F7CA8C727F214551DD7 L_76;
								L_76 = Marshal_PtrToStructure_TisTextMateTokenizeResult2_tDB673B3A42F57ECED7D92F7CA8C727F214551DD7_m1E8145D731302002AAD832D9E1B9344901D59E02(L_75, Marshal_PtrToStructure_TisTextMateTokenizeResult2_tDB673B3A42F57ECED7D92F7CA8C727F214551DD7_m1E8145D731302002AAD832D9E1B9344901D59E02_RuntimeMethod_var);
								V_10 = L_76;
								TextMateTokenizeResult2_tDB673B3A42F57ECED7D92F7CA8C727F214551DD7 L_77 = V_10;
								intptr_t L_78 = L_77.___Tokens;
								TextMateTokenizeResult2_tDB673B3A42F57ECED7D92F7CA8C727F214551DD7 L_79 = V_10;
								int32_t L_80 = L_79.___TokenCount;
								EncodedTokenU5BU5D_t4F48C85A75390F71C854D63DAECF0535C4B0217A* L_81;
								L_81 = Grammar_MarshalEncodedTokens_m87DA9302B94CDFED11C5B87348AB5AB721ED79EE(L_78, L_80, NULL);
								V_11 = L_81;
								TokenizeResult2U5BU5D_t1A568A0E486BE4A5DC174D3E75B7812DD7FDF3D7* L_82 = V_8;
								int32_t L_83 = V_9;
								EncodedTokenU5BU5D_t4F48C85A75390F71C854D63DAECF0535C4B0217A* L_84 = V_11;
								TextMateTokenizeResult2_tDB673B3A42F57ECED7D92F7CA8C727F214551DD7 L_85 = V_10;
								intptr_t L_86 = L_85.___RuleStack;
								TextMateTokenizeResult2_tDB673B3A42F57ECED7D92F7CA8C727F214551DD7 L_87 = V_10;
								int32_t L_88 = L_87.___StoppedEarly;
								TokenizeResult2_t3F67D8DB5D1A1D7EBFCA093726387D8561884160* L_89 = (TokenizeResult2_t3F67D8DB5D1A1D7EBFCA093726387D8561884160*)il2cpp_codegen_object_new(TokenizeResult2_t3F67D8DB5D1A1D7EBFCA093726387D8561884160_il2cpp_TypeInfo_var);
								TokenizeResult2__ctor_m06C6AA7D0B211EBD42CE135070CEE8A3DA454559(L_89, (RuntimeObject*)L_84, L_86, (bool)((!(((uint32_t)L_88) <= ((uint32_t)0)))? 1 : 0), NULL);
								NullCheck(L_82);
								ArrayElementTypeCheck (L_82, L_89);
								(L_82)->SetAt(static_cast<il2cpp_array_size_t>(L_83), (TokenizeResult2_t3F67D8DB5D1A1D7EBFCA093726387D8561884160*)L_89);
								int32_t L_90 = V_9;
								V_9 = ((int32_t)il2cpp_codegen_add(L_90, 1));
							}

IL_0152_3:
							{
								int32_t L_91 = V_9;
								TextMateTokenizeMultiLinesResult2_tF73DB547B3577F488B2F04E5AC76E3F780638F68 L_92 = V_7;
								int32_t L_93 = L_92.___LineCount;
								if ((((int32_t)L_91) < ((int32_t)L_93)))
								{
									goto IL_00ff_3;
								}
							}
							{
								TokenizeResult2U5BU5D_t1A568A0E486BE4A5DC174D3E75B7812DD7FDF3D7* L_94 = V_8;
								V_12 = L_94;
								goto IL_01a2;
							}
						}
						catch(Il2CppNativeThreadAbortException&)
						{
							__finallyBlock.SetNativeThreadAbortOccurred();
						}
						catch(Il2CppExceptionWrapper& e)
						{
							__finallyBlock.StoreException(e.ex);
						}
					}
				}
				catch(Il2CppNativeThreadAbortException&)
				{
					__finallyBlock.SetNativeThreadAbortOccurred();
				}
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_01a2:
	{
		TokenizeResult2U5BU5D_t1A568A0E486BE4A5DC174D3E75B7812DD7FDF3D7* L_95 = V_12;
		return L_95;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EncodedTokenU5BU5D_t4F48C85A75390F71C854D63DAECF0535C4B0217A* Grammar_MarshalEncodedTokens_m87DA9302B94CDFED11C5B87348AB5AB721ED79EE (intptr_t ___0_tokensPtr, int32_t ___1_rawCount, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPool_1_get_Shared_m0F5374FE0AF46A9CAB3F9501E56B2D990DEB0C39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPool_1_tEE934B4A44CDA39BED8CBAF50F7C0E2E9E1ACC01_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisEncodedToken_t13C2F10CED0558A0D78571E96868624F518FB1A6_m126C2641150E6D5ED089E618EAD0A3D3AA997877_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EncodedTokenU5BU5D_t4F48C85A75390F71C854D63DAECF0535C4B0217A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ArrayPool_1_tEE934B4A44CDA39BED8CBAF50F7C0E2E9E1ACC01_StaticInit);
	CHECKED_LOCAL(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_StaticInit);
	int32_t V_0 = 0;
	EncodedTokenU5BU5D_t4F48C85A75390F71C854D63DAECF0535C4B0217A* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	int32_t V_3 = 0;
	{
		int32_t L_0 = ___1_rawCount;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		intptr_t L_1 = ___0_tokensPtr;
		bool L_2;
		L_2 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_1, 0, NULL);
		if (!L_2)
		{
			goto IL_0017;
		}
	}

IL_0011:
	{
		EncodedTokenU5BU5D_t4F48C85A75390F71C854D63DAECF0535C4B0217A* L_3;
		L_3 = Array_Empty_TisEncodedToken_t13C2F10CED0558A0D78571E96868624F518FB1A6_m126C2641150E6D5ED089E618EAD0A3D3AA997877_inline(Array_Empty_TisEncodedToken_t13C2F10CED0558A0D78571E96868624F518FB1A6_m126C2641150E6D5ED089E618EAD0A3D3AA997877_RuntimeMethod_var);
		return L_3;
	}

IL_0017:
	{
		int32_t L_4 = ___1_rawCount;
		V_0 = ((int32_t)(L_4/2));
		int32_t L_5 = V_0;
		EncodedTokenU5BU5D_t4F48C85A75390F71C854D63DAECF0535C4B0217A* L_6 = (EncodedTokenU5BU5D_t4F48C85A75390F71C854D63DAECF0535C4B0217A*)(EncodedTokenU5BU5D_t4F48C85A75390F71C854D63DAECF0535C4B0217A*)SZArrayNew(EncodedTokenU5BU5D_t4F48C85A75390F71C854D63DAECF0535C4B0217A_il2cpp_TypeInfo_var, (uint32_t)L_5);
		V_1 = L_6;
		CHECKED_LOCAL_INIT(ArrayPool_1_tEE934B4A44CDA39BED8CBAF50F7C0E2E9E1ACC01_StaticInit,(ArrayPool_1_tEE934B4A44CDA39BED8CBAF50F7C0E2E9E1ACC01_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ArrayPool_1_tEE934B4A44CDA39BED8CBAF50F7C0E2E9E1ACC01* L_7;
		L_7 = ArrayPool_1_get_Shared_m0F5374FE0AF46A9CAB3F9501E56B2D990DEB0C39_inline(ArrayPool_1_get_Shared_m0F5374FE0AF46A9CAB3F9501E56B2D990DEB0C39_RuntimeMethod_var);
		int32_t L_8 = ___1_rawCount;
		NullCheck(L_7);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9;
		L_9 = VirtualFuncInvoker1< Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t >::Invoke(4, L_7, L_8);
		V_2 = L_9;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005d:
			{
				CHECKED_LOCAL_INIT(ArrayPool_1_tEE934B4A44CDA39BED8CBAF50F7C0E2E9E1ACC01_StaticInit,(ArrayPool_1_tEE934B4A44CDA39BED8CBAF50F7C0E2E9E1ACC01_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
				ArrayPool_1_tEE934B4A44CDA39BED8CBAF50F7C0E2E9E1ACC01* L_10;
				L_10 = ArrayPool_1_get_Shared_m0F5374FE0AF46A9CAB3F9501E56B2D990DEB0C39_inline(ArrayPool_1_get_Shared_m0F5374FE0AF46A9CAB3F9501E56B2D990DEB0C39_RuntimeMethod_var);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = V_2;
				NullCheck(L_10);
				VirtualActionInvoker2< Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, bool >::Invoke(5, L_10, L_11, (bool)0);
				return;
			}
		});
		try
		{
			{
				intptr_t L_12 = ___0_tokensPtr;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = V_2;
				int32_t L_14 = ___1_rawCount;
				CHECKED_LOCAL_INIT(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_StaticInit,(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
				Marshal_Copy_m7AB9510A41CD2959424C87A8E0C332F19E40D980(L_12, L_13, 0, L_14, NULL);
				V_3 = 0;
				goto IL_0057_1;
			}

IL_003b_1:
			{
				EncodedTokenU5BU5D_t4F48C85A75390F71C854D63DAECF0535C4B0217A* L_15 = V_1;
				int32_t L_16 = V_3;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = V_2;
				int32_t L_18 = V_3;
				NullCheck(L_17);
				int32_t L_19 = ((int32_t)il2cpp_codegen_multiply(L_18, 2));
				int32_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = V_2;
				int32_t L_22 = V_3;
				NullCheck(L_21);
				int32_t L_23 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_22, 2)), 1));
				int32_t L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
				EncodedToken_t13C2F10CED0558A0D78571E96868624F518FB1A6 L_25;
				memset((&L_25), 0, sizeof(L_25));
				EncodedToken__ctor_m86192F4F3BDE4E13E069CEDF155EAEF612468CB3((&L_25), L_20, L_24, NULL);
				NullCheck(L_15);
				(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (EncodedToken_t13C2F10CED0558A0D78571E96868624F518FB1A6)L_25);
				int32_t L_26 = V_3;
				V_3 = ((int32_t)il2cpp_codegen_add(L_26, 1));
			}

IL_0057_1:
			{
				int32_t L_27 = V_3;
				int32_t L_28 = V_0;
				if ((((int32_t)L_27) < ((int32_t)L_28)))
				{
					goto IL_003b_1;
				}
			}
			{
				goto IL_006a;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006a:
	{
		EncodedTokenU5BU5D_t4F48C85A75390F71C854D63DAECF0535C4B0217A* L_29 = V_1;
		return L_29;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TokenizeResultU5BU5D_tF70B053BE34923076B37A4D882309FBA251291DC* Grammar_TokenizeLines_m1D1127A4BAB033DDB798966DFE8D5D73D3BD3E6B (Grammar_tAE58961FA6049A278788B45B0A0E417357BC14AE* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_lines, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisTokenizeResult_tC3D2C5E6E03A563590DF725546B216CDC4989B2F_mF854B44AF3C00B52164C5A765BE26087C29760EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TokenizeResultU5BU5D_tF70B053BE34923076B37A4D882309FBA251291DC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TokenizeResultU5BU5D_tF70B053BE34923076B37A4D882309FBA251291DC* V_0 = NULL;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		Grammar_ThrowIfDisposed_m5DA3BF557A0C609ECAE3DE5D7619769DB8F9D193(__this, NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___0_lines;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___0_lines;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0013;
		}
	}

IL_000d:
	{
		TokenizeResultU5BU5D_tF70B053BE34923076B37A4D882309FBA251291DC* L_2;
		L_2 = Array_Empty_TisTokenizeResult_tC3D2C5E6E03A563590DF725546B216CDC4989B2F_mF854B44AF3C00B52164C5A765BE26087C29760EE_inline(Array_Empty_TisTokenizeResult_tC3D2C5E6E03A563590DF725546B216CDC4989B2F_mF854B44AF3C00B52164C5A765BE26087C29760EE_RuntimeMethod_var);
		return L_2;
	}

IL_0013:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = ___0_lines;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		TokenizeResultU5BU5D_tF70B053BE34923076B37A4D882309FBA251291DC* L_5 = (TokenizeResultU5BU5D_tF70B053BE34923076B37A4D882309FBA251291DC*)(TokenizeResultU5BU5D_tF70B053BE34923076B37A4D882309FBA251291DC*)SZArrayNew(TokenizeResultU5BU5D_tF70B053BE34923076B37A4D882309FBA251291DC_il2cpp_TypeInfo_var, (uint32_t)L_4);
		V_0 = L_5;
		intptr_t L_6;
		L_6 = NativeMethods_textmate_get_initial_state_m0DF34A7E05C35D3688E9BA88B62FB7DB6C5FDC9B(NULL);
		V_1 = L_6;
		V_2 = 0;
		goto IL_0040;
	}

IL_0026:
	{
		TokenizeResultU5BU5D_tF70B053BE34923076B37A4D882309FBA251291DC* L_7 = V_0;
		int32_t L_8 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = ___0_lines;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		String_t* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		intptr_t L_13 = V_1;
		TokenizeResult_tC3D2C5E6E03A563590DF725546B216CDC4989B2F* L_14;
		L_14 = Grammar_TokenizeLine_m978DEDBFA66CACD930B72641C0084465564F8DF4(__this, L_12, L_13, NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_14);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (TokenizeResult_tC3D2C5E6E03A563590DF725546B216CDC4989B2F*)L_14);
		TokenizeResultU5BU5D_tF70B053BE34923076B37A4D882309FBA251291DC* L_15 = V_0;
		int32_t L_16 = V_2;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		TokenizeResult_tC3D2C5E6E03A563590DF725546B216CDC4989B2F* L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_18);
		intptr_t L_19;
		L_19 = TokenizeResult_get_StateStack_m98B01531716C8AF75421EBC493C83EB6E0E22E2D_inline(L_18, NULL);
		V_1 = L_19;
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0040:
	{
		int32_t L_21 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = ___0_lines;
		NullCheck(L_22);
		int32_t L_23 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_22)->max_length),NULL));
		if ((((int32_t)L_21) < ((int32_t)L_23)))
		{
			goto IL_0026;
		}
	}
	{
		TokenizeResultU5BU5D_tF70B053BE34923076B37A4D882309FBA251291DC* L_24 = V_0;
		return L_24;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Grammar_get_Handle_m998B6CB9EB5F0C9E46A49A6E9CA9E9C7409391AB (Grammar_tAE58961FA6049A278788B45B0A0E417357BC14AE* __this, const RuntimeMethod* method) 
{
	{
		Grammar_ThrowIfDisposed_m5DA3BF557A0C609ECAE3DE5D7619769DB8F9D193(__this, NULL);
		intptr_t L_0 = __this->___m_Handle;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Grammar_ThrowIfDisposed_m5DA3BF557A0C609ECAE3DE5D7619769DB8F9D193 (Grammar_tAE58961FA6049A278788B45B0A0E417357BC14AE* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___m_Disposed;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_1 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1D1AA74B715BE0548BC06FA1E04BBAC9CBBF5059)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Grammar_ThrowIfDisposed_m5DA3BF557A0C609ECAE3DE5D7619769DB8F9D193_RuntimeMethod_var)));
	}

IL_0013:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Grammar_Dispose_m6A367FAC25FEF32E3F5F5E0E86513DAC032D0F47 (Grammar_tAE58961FA6049A278788B45B0A0E417357BC14AE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_StaticInit);
	{
		bool L_0 = __this->___m_Disposed;
		if (L_0)
		{
			goto IL_002c;
		}
	}
	{
		intptr_t L_1 = __this->___m_Handle;
		bool L_2;
		L_2 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B_inline(L_1, 0, NULL);
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		__this->___m_Handle = 0;
	}

IL_0025:
	{
		__this->___m_Disposed = (bool)1;
	}

IL_002c:
	{
		CHECKED_LOCAL_INIT(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_StaticInit,(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Grammar_Finalize_m1A3DBB20C7E2329C307899E30E2F044F348E6F0D (Grammar_tAE58961FA6049A278788B45B0A0E417357BC14AE* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0008:
			{
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}
		});
		try
		{
			Grammar_Dispose_m6A367FAC25FEF32E3F5F5E0E86513DAC032D0F47(__this, NULL);
			goto IL_000f;
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_000f:
	{
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_textmate_theme_load_from_file_m2BA1DC19277C5928A6A4E6343937117FFFBE8CF8 (String_t* ___0_themePath, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_AppUITextMateLib_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("AppUITextMateLib"), "textmate_theme_load_from_file", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	char* ____0_themePath_marshaled = NULL;
	____0_themePath_marshaled = il2cpp_codegen_marshal_string(___0_themePath);

	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AppUITextMateLib_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(textmate_theme_load_from_file)(____0_themePath_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_themePath_marshaled);
	#endif

	il2cpp_codegen_marshal_free(____0_themePath_marshaled);
	____0_themePath_marshaled = NULL;

	return returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_textmate_theme_load_from_json_m04853C40F082165A42876B537A3496861C5F231C (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_jsonContentUtf8, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (uint8_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_AppUITextMateLib_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("AppUITextMateLib"), "textmate_theme_load_from_json", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	uint8_t* ____0_jsonContentUtf8_marshaled = NULL;
	if (___0_jsonContentUtf8 != NULL)
	{
		____0_jsonContentUtf8_marshaled = reinterpret_cast<uint8_t*>((___0_jsonContentUtf8)->GetAddressAtUnchecked(0));
	}

	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AppUITextMateLib_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(textmate_theme_load_from_json)(____0_jsonContentUtf8_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jsonContentUtf8_marshaled);
	#endif

	return returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t NativeMethods_textmate_theme_get_foreground_mBE5C2B3CEAEE45EF415897F279F03BE1B3332669 (intptr_t ___0_theme, String_t* ___1_scopePath, uint32_t ___2_defaultColor, const RuntimeMethod* method) 
{
	typedef uint32_t (CDECL *PInvokeFunc) (intptr_t, char*, uint32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_AppUITextMateLib_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(char*) + sizeof(uint32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("AppUITextMateLib"), "textmate_theme_get_foreground", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	char* ____1_scopePath_marshaled = NULL;
	____1_scopePath_marshaled = il2cpp_codegen_marshal_string(___1_scopePath);

	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AppUITextMateLib_INTERNAL
	uint32_t returnValue = reinterpret_cast<PInvokeFunc>(textmate_theme_get_foreground)(___0_theme, ____1_scopePath_marshaled, ___2_defaultColor);
	#else
	uint32_t returnValue = il2cppPInvokeFunc(___0_theme, ____1_scopePath_marshaled, ___2_defaultColor);
	#endif

	il2cpp_codegen_marshal_free(____1_scopePath_marshaled);
	____1_scopePath_marshaled = NULL;

	return returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t NativeMethods_textmate_theme_get_background_mC22C0DED3166DB061FD5A8F3438A62BC034BE829 (intptr_t ___0_theme, String_t* ___1_scopePath, uint32_t ___2_defaultColor, const RuntimeMethod* method) 
{
	typedef uint32_t (CDECL *PInvokeFunc) (intptr_t, char*, uint32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_AppUITextMateLib_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(char*) + sizeof(uint32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("AppUITextMateLib"), "textmate_theme_get_background", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	char* ____1_scopePath_marshaled = NULL;
	____1_scopePath_marshaled = il2cpp_codegen_marshal_string(___1_scopePath);

	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AppUITextMateLib_INTERNAL
	uint32_t returnValue = reinterpret_cast<PInvokeFunc>(textmate_theme_get_background)(___0_theme, ____1_scopePath_marshaled, ___2_defaultColor);
	#else
	uint32_t returnValue = il2cppPInvokeFunc(___0_theme, ____1_scopePath_marshaled, ___2_defaultColor);
	#endif

	il2cpp_codegen_marshal_free(____1_scopePath_marshaled);
	____1_scopePath_marshaled = NULL;

	return returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_textmate_theme_get_font_style_mFE71E7D02E38B667FCFB3FA77A49D590AC47B6D2 (intptr_t ___0_theme, String_t* ___1_scopePath, int32_t ___2_defaultStyle, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, char*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_AppUITextMateLib_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(char*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("AppUITextMateLib"), "textmate_theme_get_font_style", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	char* ____1_scopePath_marshaled = NULL;
	____1_scopePath_marshaled = il2cpp_codegen_marshal_string(___1_scopePath);

	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AppUITextMateLib_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(textmate_theme_get_font_style)(___0_theme, ____1_scopePath_marshaled, ___2_defaultStyle);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_theme, ____1_scopePath_marshaled, ___2_defaultStyle);
	#endif

	il2cpp_codegen_marshal_free(____1_scopePath_marshaled);
	____1_scopePath_marshaled = NULL;

	return returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t NativeMethods_textmate_theme_get_default_foreground_m4F060125F6EE3B65E7E688DCB1661ACC814C412D (intptr_t ___0_theme, const RuntimeMethod* method) 
{
	typedef uint32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_AppUITextMateLib_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("AppUITextMateLib"), "textmate_theme_get_default_foreground", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AppUITextMateLib_INTERNAL
	uint32_t returnValue = reinterpret_cast<PInvokeFunc>(textmate_theme_get_default_foreground)(___0_theme);
	#else
	uint32_t returnValue = il2cppPInvokeFunc(___0_theme);
	#endif

	return returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t NativeMethods_textmate_theme_get_default_background_m9B3C2A4111D0DD58452A1B28D3BCE7D34EBE36F1 (intptr_t ___0_theme, const RuntimeMethod* method) 
{
	typedef uint32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_AppUITextMateLib_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("AppUITextMateLib"), "textmate_theme_get_default_background", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AppUITextMateLib_INTERNAL
	uint32_t returnValue = reinterpret_cast<PInvokeFunc>(textmate_theme_get_default_background)(___0_theme);
	#else
	uint32_t returnValue = il2cppPInvokeFunc(___0_theme);
	#endif

	return returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_textmate_theme_dispose_m3A9F3454A2CA110069C540D5147CF623DA5B2514 (intptr_t ___0_theme, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_AppUITextMateLib_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("AppUITextMateLib"), "textmate_theme_dispose", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AppUITextMateLib_INTERNAL
	reinterpret_cast<PInvokeFunc>(textmate_theme_dispose)(___0_theme);
	#else
	il2cppPInvokeFunc(___0_theme);
	#endif

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_textmate_oniglib_create_mBEE48DA6ACE0DE143261E731B4216F9F4EA32AED (const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_AppUITextMateLib_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("AppUITextMateLib"), "textmate_oniglib_create", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AppUITextMateLib_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(textmate_oniglib_create)();
	#else
	intptr_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_textmate_registry_create_m64ADAF4D9A362E5F97272120D2071180104B5DF6 (intptr_t ___0_onigLib, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_AppUITextMateLib_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("AppUITextMateLib"), "textmate_registry_create", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AppUITextMateLib_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(textmate_registry_create)(___0_onigLib);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_onigLib);
	#endif

	return returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_textmate_registry_dispose_mB9E2759280C3B0A8D49A8A7714A4F7195CA6C7D4 (intptr_t ___0_registry, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_AppUITextMateLib_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("AppUITextMateLib"), "textmate_registry_dispose", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AppUITextMateLib_INTERNAL
	reinterpret_cast<PInvokeFunc>(textmate_registry_dispose)(___0_registry);
	#else
	il2cppPInvokeFunc(___0_registry);
	#endif

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_textmate_registry_add_grammar_from_file_m2B02ADF86925597AB943E89E65F7E4ED7BAB725A (intptr_t ___0_registry, String_t* ___1_grammarPath, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_AppUITextMateLib_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("AppUITextMateLib"), "textmate_registry_add_grammar_from_file", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	char* ____1_grammarPath_marshaled = NULL;
	____1_grammarPath_marshaled = il2cpp_codegen_marshal_string(___1_grammarPath);

	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AppUITextMateLib_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(textmate_registry_add_grammar_from_file)(___0_registry, ____1_grammarPath_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_registry, ____1_grammarPath_marshaled);
	#endif

	il2cpp_codegen_marshal_free(____1_grammarPath_marshaled);
	____1_grammarPath_marshaled = NULL;

	return returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_textmate_registry_add_grammar_from_json_mBFFDBC49A4B3D41F04ABB8A3877295EC6F4EC66C (intptr_t ___0_registry, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_jsonContentUtf8, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, uint8_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_AppUITextMateLib_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("AppUITextMateLib"), "textmate_registry_add_grammar_from_json", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	uint8_t* ____1_jsonContentUtf8_marshaled = NULL;
	if (___1_jsonContentUtf8 != NULL)
	{
		____1_jsonContentUtf8_marshaled = reinterpret_cast<uint8_t*>((___1_jsonContentUtf8)->GetAddressAtUnchecked(0));
	}

	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AppUITextMateLib_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(textmate_registry_add_grammar_from_json)(___0_registry, ____1_jsonContentUtf8_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_registry, ____1_jsonContentUtf8_marshaled);
	#endif

	return returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_textmate_registry_load_grammar_mF940D81DCA10BBAA97BDDDC6DA76A9EDBA9F4C5A (intptr_t ___0_registry, String_t* ___1_scopeName, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_AppUITextMateLib_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("AppUITextMateLib"), "textmate_registry_load_grammar", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	char* ____1_scopeName_marshaled = NULL;
	____1_scopeName_marshaled = il2cpp_codegen_marshal_string(___1_scopeName);

	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AppUITextMateLib_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(textmate_registry_load_grammar)(___0_registry, ____1_scopeName_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_registry, ____1_scopeName_marshaled);
	#endif

	il2cpp_codegen_marshal_free(____1_scopeName_marshaled);
	____1_scopeName_marshaled = NULL;

	return returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_textmate_registry_set_theme_m468F2F231400892896ECF14CC6CB936567B43F05 (intptr_t ___0_registry, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_themeJsonContentUtf8, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, uint8_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_AppUITextMateLib_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("AppUITextMateLib"), "textmate_registry_set_theme", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	uint8_t* ____1_themeJsonContentUtf8_marshaled = NULL;
	if (___1_themeJsonContentUtf8 != NULL)
	{
		____1_themeJsonContentUtf8_marshaled = reinterpret_cast<uint8_t*>((___1_themeJsonContentUtf8)->GetAddressAtUnchecked(0));
	}

	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AppUITextMateLib_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(textmate_registry_set_theme)(___0_registry, ____1_themeJsonContentUtf8_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_registry, ____1_themeJsonContentUtf8_marshaled);
	#endif

	return returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_textmate_registry_get_color_map_m7B49E02AE5EE062191FD501DA65B8BD784BA70DB (intptr_t ___0_registry, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_AppUITextMateLib_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("AppUITextMateLib"), "textmate_registry_get_color_map", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AppUITextMateLib_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(textmate_registry_get_color_map)(___0_registry);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_registry);
	#endif

	return returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_textmate_get_initial_state_m0DF34A7E05C35D3688E9BA88B62FB7DB6C5FDC9B (const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_AppUITextMateLib_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("AppUITextMateLib"), "textmate_get_initial_state", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AppUITextMateLib_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(textmate_get_initial_state)();
	#else
	intptr_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_textmate_tokenize_line_mD8F97C38AABF250161905BDC2C5C5EFFBD5D04A8 (intptr_t ___0_grammar, String_t* ___1_lineText, intptr_t ___2_prevState, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, char*, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_AppUITextMateLib_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(char*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("AppUITextMateLib"), "textmate_tokenize_line", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	char* ____1_lineText_marshaled = NULL;
	____1_lineText_marshaled = il2cpp_codegen_marshal_string(___1_lineText);

	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AppUITextMateLib_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(textmate_tokenize_line)(___0_grammar, ____1_lineText_marshaled, ___2_prevState);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_grammar, ____1_lineText_marshaled, ___2_prevState);
	#endif

	il2cpp_codegen_marshal_free(____1_lineText_marshaled);
	____1_lineText_marshaled = NULL;

	return returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_textmate_tokenize_line2_mC2FA0D0873334E4919659C07F8F8F9CC6B82AEFB (intptr_t ___0_grammar, String_t* ___1_lineText, intptr_t ___2_prevState, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, char*, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_AppUITextMateLib_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(char*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("AppUITextMateLib"), "textmate_tokenize_line2", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	char* ____1_lineText_marshaled = NULL;
	____1_lineText_marshaled = il2cpp_codegen_marshal_string(___1_lineText);

	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AppUITextMateLib_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(textmate_tokenize_line2)(___0_grammar, ____1_lineText_marshaled, ___2_prevState);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_grammar, ____1_lineText_marshaled, ___2_prevState);
	#endif

	il2cpp_codegen_marshal_free(____1_lineText_marshaled);
	____1_lineText_marshaled = NULL;

	return returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_textmate_tokenize_line_utf16_m05F2A3D88679E653F3383CADD163CCCF353DDB4D (intptr_t ___0_grammar, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_lineTextUtf8, intptr_t ___2_prevState, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, uint8_t*, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_AppUITextMateLib_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("AppUITextMateLib"), "textmate_tokenize_line_utf16", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	uint8_t* ____1_lineTextUtf8_marshaled = NULL;
	if (___1_lineTextUtf8 != NULL)
	{
		____1_lineTextUtf8_marshaled = reinterpret_cast<uint8_t*>((___1_lineTextUtf8)->GetAddressAtUnchecked(0));
	}

	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AppUITextMateLib_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(textmate_tokenize_line_utf16)(___0_grammar, ____1_lineTextUtf8_marshaled, ___2_prevState);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_grammar, ____1_lineTextUtf8_marshaled, ___2_prevState);
	#endif

	return returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_textmate_tokenize_line2_utf16_mFF9D1D47472AA4271D88924FA901C1D516F75007 (intptr_t ___0_grammar, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_lineTextUtf8, intptr_t ___2_prevState, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, uint8_t*, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_AppUITextMateLib_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("AppUITextMateLib"), "textmate_tokenize_line2_utf16", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	uint8_t* ____1_lineTextUtf8_marshaled = NULL;
	if (___1_lineTextUtf8 != NULL)
	{
		____1_lineTextUtf8_marshaled = reinterpret_cast<uint8_t*>((___1_lineTextUtf8)->GetAddressAtUnchecked(0));
	}

	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AppUITextMateLib_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(textmate_tokenize_line2_utf16)(___0_grammar, ____1_lineTextUtf8_marshaled, ___2_prevState);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_grammar, ____1_lineTextUtf8_marshaled, ___2_prevState);
	#endif

	return returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_textmate_tokenize_lines_utf16_m58B13D998540DFAA0127BD956B2CB360D9B8E46B (intptr_t ___0_grammar, intptr_t ___1_lines, int32_t ___2_lineCount, intptr_t ___3_initialState, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, intptr_t, int32_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_AppUITextMateLib_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(int32_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("AppUITextMateLib"), "textmate_tokenize_lines_utf16", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AppUITextMateLib_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(textmate_tokenize_lines_utf16)(___0_grammar, ___1_lines, ___2_lineCount, ___3_initialState);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_grammar, ___1_lines, ___2_lineCount, ___3_initialState);
	#endif

	return returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_textmate_tokenize_lines2_utf16_m82B71283172D813223C0E0C70C32397ABA20A91C (intptr_t ___0_grammar, intptr_t ___1_lines, int32_t ___2_lineCount, intptr_t ___3_initialState, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, intptr_t, int32_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_AppUITextMateLib_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(int32_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("AppUITextMateLib"), "textmate_tokenize_lines2_utf16", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AppUITextMateLib_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(textmate_tokenize_lines2_utf16)(___0_grammar, ___1_lines, ___2_lineCount, ___3_initialState);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_grammar, ___1_lines, ___2_lineCount, ___3_initialState);
	#endif

	return returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_textmate_free_tokenize_result_mED21A7C48B0C510C991B4231A8F5CE7C9297D6A8 (intptr_t ___0_result, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_AppUITextMateLib_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("AppUITextMateLib"), "textmate_free_tokenize_result", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AppUITextMateLib_INTERNAL
	reinterpret_cast<PInvokeFunc>(textmate_free_tokenize_result)(___0_result);
	#else
	il2cppPInvokeFunc(___0_result);
	#endif

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_textmate_free_tokenize_result2_m14C98FCC58CEECC6054B7F0980BCD7B157B0E783 (intptr_t ___0_result, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_AppUITextMateLib_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("AppUITextMateLib"), "textmate_free_tokenize_result2", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AppUITextMateLib_INTERNAL
	reinterpret_cast<PInvokeFunc>(textmate_free_tokenize_result2)(___0_result);
	#else
	il2cppPInvokeFunc(___0_result);
	#endif

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_textmate_free_tokenize_lines_result_m581D8C377610626F65676A4956705337BE450563 (intptr_t ___0_result, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_AppUITextMateLib_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("AppUITextMateLib"), "textmate_free_tokenize_lines_result", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AppUITextMateLib_INTERNAL
	reinterpret_cast<PInvokeFunc>(textmate_free_tokenize_lines_result)(___0_result);
	#else
	il2cppPInvokeFunc(___0_result);
	#endif

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_textmate_free_tokenize_lines_result2_mEFD5600FC49D66DC2006B03729C9D5EA2CA0A562 (intptr_t ___0_result, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_AppUITextMateLib_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("AppUITextMateLib"), "textmate_free_tokenize_lines_result2", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AppUITextMateLib_INTERNAL
	reinterpret_cast<PInvokeFunc>(textmate_free_tokenize_lines_result2)(___0_result);
	#else
	il2cppPInvokeFunc(___0_result);
	#endif

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_textmate_free_color_map_m7712131573BC9D48C7E30E23625B567199626585 (intptr_t ___0_colorMap, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_AppUITextMateLib_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("AppUITextMateLib"), "textmate_free_color_map", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AppUITextMateLib_INTERNAL
	reinterpret_cast<PInvokeFunc>(textmate_free_color_map)(___0_colorMap);
	#else
	il2cppPInvokeFunc(___0_colorMap);
	#endif

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_textmate_grammar_get_scope_name_m04BB1EE3A1136412590D76E9900984BD85280049 (intptr_t ___0_grammar, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_AppUITextMateLib_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("AppUITextMateLib"), "textmate_grammar_get_scope_name", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AppUITextMateLib_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(textmate_grammar_get_scope_name)(___0_grammar);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_grammar);
	#endif

	return returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_textmate_oniglib_dispose_mFDD991E234CADDCD9131BAAA2E57C3BEC84F212F (intptr_t ___0_onigLib, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_AppUITextMateLib_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("AppUITextMateLib"), "textmate_oniglib_dispose", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AppUITextMateLib_INTERNAL
	reinterpret_cast<PInvokeFunc>(textmate_oniglib_dispose)(___0_onigLib);
	#else
	il2cppPInvokeFunc(___0_onigLib);
	#endif

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* NativeMethods_ToUtf8NullTerminated_m91A104303F9990A91D2E02585185191DE22E3D86 (String_t* ___0_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		String_t* L_0 = ___0_text;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
		___0_text = L_1;
	}

IL_000a:
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_2;
		L_2 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_3 = ___0_text;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = VirtualFuncInvoker1< int32_t, String_t* >::Invoke(10, L_2, L_3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(L_4, 1)));
		V_0 = L_5;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_6;
		L_6 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_7 = ___0_text;
		String_t* L_8 = ___0_text;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_8, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_0;
		NullCheck(L_6);
		int32_t L_11;
		L_11 = VirtualFuncInvoker5< int32_t, String_t*, int32_t, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(17, L_6, L_7, 0, L_9, L_10, 0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_0;
		return L_12;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Registry__ctor_m8DCABE4FFD5A7D480D0196ECA1458EA7A60982DD (Registry_t37E654B4C1F56ABAD063A4798DD2F673DD5D91EE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mEA2FC9B9CB8013AC30CAB3B0C5A13DA59880392E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t59DF515164DE8F9BF5F013AAA45FE579F632B927_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t59DF515164DE8F9BF5F013AAA45FE579F632B927* L_0 = (List_1_t59DF515164DE8F9BF5F013AAA45FE579F632B927*)il2cpp_codegen_object_new(List_1_t59DF515164DE8F9BF5F013AAA45FE579F632B927_il2cpp_TypeInfo_var);
		List_1__ctor_mEA2FC9B9CB8013AC30CAB3B0C5A13DA59880392E(L_0, List_1__ctor_mEA2FC9B9CB8013AC30CAB3B0C5A13DA59880392E_RuntimeMethod_var);
		__this->___m_LoadedGrammars = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LoadedGrammars), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		intptr_t L_1;
		L_1 = NativeMethods_textmate_oniglib_create_mBEE48DA6ACE0DE143261E731B4216F9F4EA32AED(NULL);
		__this->___m_OnigLib = L_1;
		intptr_t L_2 = __this->___m_OnigLib;
		bool L_3;
		L_3 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_2, 0, NULL);
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5770965CE4ECE463FE4DA8686D2E6838A514900C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Registry__ctor_m8DCABE4FFD5A7D480D0196ECA1458EA7A60982DD_RuntimeMethod_var)));
	}

IL_0039:
	{
		intptr_t L_5 = __this->___m_OnigLib;
		intptr_t L_6;
		L_6 = NativeMethods_textmate_registry_create_m64ADAF4D9A362E5F97272120D2071180104B5DF6(L_5, NULL);
		__this->___m_Handle = L_6;
		intptr_t L_7 = __this->___m_Handle;
		bool L_8;
		L_8 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_7, 0, NULL);
		if (!L_8)
		{
			goto IL_0072;
		}
	}
	{
		intptr_t L_9 = __this->___m_OnigLib;
		NativeMethods_textmate_oniglib_dispose_mFDD991E234CADDCD9131BAAA2E57C3BEC84F212F(L_9, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_10 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5D20BC172AA1CDB4333747D5EFA4BEBDEBB4B4F5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Registry__ctor_m8DCABE4FFD5A7D480D0196ECA1458EA7A60982DD_RuntimeMethod_var)));
	}

IL_0072:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Registry_AddGrammarFromFile_m2A776A3DBED7291928CEA9ABA7830F9C609BA6A2 (Registry_t37E654B4C1F56ABAD063A4798DD2F673DD5D91EE* __this, String_t* ___0_grammarPath, const RuntimeMethod* method) 
{
	{
		Registry_ThrowIfDisposed_m0AEB069FA01DA98E849C0A40F251D5F2BD9A9942(__this, NULL);
		String_t* L_0 = ___0_grammarPath;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC607A8310C70E33DA0D8F3EB9F99DB32F431B38C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Registry_AddGrammarFromFile_m2A776A3DBED7291928CEA9ABA7830F9C609BA6A2_RuntimeMethod_var)));
	}

IL_0019:
	{
		intptr_t L_3 = __this->___m_Handle;
		String_t* L_4 = ___0_grammarPath;
		int32_t L_5;
		L_5 = NativeMethods_textmate_registry_add_grammar_from_file_m2B02ADF86925597AB943E89E65F7E4ED7BAB725A(L_3, L_4, NULL);
		if (L_5)
		{
			goto IL_0038;
		}
	}
	{
		String_t* L_6 = ___0_grammarPath;
		String_t* L_7;
		L_7 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA4393B571C3DDE59494504D72CE90E7C17D9DFCC)), L_6, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_8 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_8, L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Registry_AddGrammarFromFile_m2A776A3DBED7291928CEA9ABA7830F9C609BA6A2_RuntimeMethod_var)));
	}

IL_0038:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Registry_AddGrammarFromJson_m1ECAAC312B622960AF99AA76DE185966E7DF4792 (Registry_t37E654B4C1F56ABAD063A4798DD2F673DD5D91EE* __this, String_t* ___0_jsonContent, const RuntimeMethod* method) 
{
	{
		Registry_ThrowIfDisposed_m0AEB069FA01DA98E849C0A40F251D5F2BD9A9942(__this, NULL);
		String_t* L_0 = ___0_jsonContent;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9C94709BF46B5014877590397F543CA728D6E8E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Registry_AddGrammarFromJson_m1ECAAC312B622960AF99AA76DE185966E7DF4792_RuntimeMethod_var)));
	}

IL_0019:
	{
		intptr_t L_3 = __this->___m_Handle;
		String_t* L_4 = ___0_jsonContent;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = NativeMethods_ToUtf8NullTerminated_m91A104303F9990A91D2E02585185191DE22E3D86(L_4, NULL);
		int32_t L_6;
		L_6 = NativeMethods_textmate_registry_add_grammar_from_json_mBFFDBC49A4B3D41F04ABB8A3877295EC6F4EC66C(L_3, L_5, NULL);
		if (L_6)
		{
			goto IL_0037;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_7 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral805EDCB77B7DBAFCE861B55BEF60A3E806F8B35C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Registry_AddGrammarFromJson_m1ECAAC312B622960AF99AA76DE185966E7DF4792_RuntimeMethod_var)));
	}

IL_0037:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Registry_SetThemeFromJson_mAFE7FE33B0E034620F175DAA9CC832CDF751455B (Registry_t37E654B4C1F56ABAD063A4798DD2F673DD5D91EE* __this, String_t* ___0_jsonContent, const RuntimeMethod* method) 
{
	{
		Registry_ThrowIfDisposed_m0AEB069FA01DA98E849C0A40F251D5F2BD9A9942(__this, NULL);
		String_t* L_0 = ___0_jsonContent;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9C94709BF46B5014877590397F543CA728D6E8E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Registry_SetThemeFromJson_mAFE7FE33B0E034620F175DAA9CC832CDF751455B_RuntimeMethod_var)));
	}

IL_0019:
	{
		intptr_t L_3 = __this->___m_Handle;
		String_t* L_4 = ___0_jsonContent;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = NativeMethods_ToUtf8NullTerminated_m91A104303F9990A91D2E02585185191DE22E3D86(L_4, NULL);
		int32_t L_6;
		L_6 = NativeMethods_textmate_registry_set_theme_m468F2F231400892896ECF14CC6CB936567B43F05(L_3, L_5, NULL);
		if (L_6)
		{
			goto IL_0037;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_7 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6354B662E6D4018AD1D160A623B83715AA36D9AA)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Registry_SetThemeFromJson_mAFE7FE33B0E034620F175DAA9CC832CDF751455B_RuntimeMethod_var)));
	}

IL_0037:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Registry_GetColorMap_m5A827345A5235D0A8D8C0BC44F0532D9F46D8917 (Registry_t37E654B4C1F56ABAD063A4798DD2F673DD5D91EE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisString_t_m9832B70DF2B936246FE60F75D3D12CB946C39D16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_PtrToStructure_TisTextMateColorMap_tBF7A6063763DEEB5B64F7AA21A9B013E7B372A9F_m9403C341BE68393B65502FA0680FDD4C66B0F08B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_StaticInit);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	TextMateColorMap_tBF7A6063763DEEB5B64F7AA21A9B013E7B372A9F V_1;
	memset((&V_1), 0, sizeof(V_1));
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_3 = NULL;
	int32_t V_4 = 0;
	intptr_t V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t G_B9_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B9_1 = NULL;
	int32_t G_B8_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B8_1 = NULL;
	String_t* G_B11_0 = NULL;
	int32_t G_B11_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B11_2 = NULL;
	String_t* G_B10_0 = NULL;
	int32_t G_B10_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B10_2 = NULL;
	{
		Registry_ThrowIfDisposed_m0AEB069FA01DA98E849C0A40F251D5F2BD9A9942(__this, NULL);
		intptr_t L_0 = __this->___m_Handle;
		intptr_t L_1;
		L_1 = NativeMethods_textmate_registry_get_color_map_m7B49E02AE5EE062191FD501DA65B8BD784BA70DB(L_0, NULL);
		V_0 = L_1;
		intptr_t L_2 = V_0;
		bool L_3;
		L_3 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_2, 0, NULL);
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4;
		L_4 = Array_Empty_TisString_t_m9832B70DF2B936246FE60F75D3D12CB946C39D16_inline(Array_Empty_TisString_t_m9832B70DF2B936246FE60F75D3D12CB946C39D16_RuntimeMethod_var);
		return L_4;
	}

IL_0025:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b3:
			{
				intptr_t L_5 = V_0;
				NativeMethods_textmate_free_color_map_m7712131573BC9D48C7E30E23625B567199626585(L_5, NULL);
				return;
			}
		});
		try
		{
			{
				intptr_t L_6 = V_0;
				CHECKED_LOCAL_INIT(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_StaticInit,(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
				TextMateColorMap_tBF7A6063763DEEB5B64F7AA21A9B013E7B372A9F L_7;
				L_7 = Marshal_PtrToStructure_TisTextMateColorMap_tBF7A6063763DEEB5B64F7AA21A9B013E7B372A9F_m9403C341BE68393B65502FA0680FDD4C66B0F08B(L_6, Marshal_PtrToStructure_TisTextMateColorMap_tBF7A6063763DEEB5B64F7AA21A9B013E7B372A9F_m9403C341BE68393B65502FA0680FDD4C66B0F08B_RuntimeMethod_var);
				V_1 = L_7;
				TextMateColorMap_tBF7A6063763DEEB5B64F7AA21A9B013E7B372A9F L_8 = V_1;
				int32_t L_9 = L_8.___ColorCount;
				if ((((int32_t)L_9) <= ((int32_t)0)))
				{
					goto IL_0050_1;
				}
			}
			{
				TextMateColorMap_tBF7A6063763DEEB5B64F7AA21A9B013E7B372A9F L_10 = V_1;
				intptr_t L_11 = L_10.___Colors;
				bool L_12;
				L_12 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_11, 0, NULL);
				if (!L_12)
				{
					goto IL_0050_1;
				}
			}
			{
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13;
				L_13 = Array_Empty_TisString_t_m9832B70DF2B936246FE60F75D3D12CB946C39D16_inline(Array_Empty_TisString_t_m9832B70DF2B936246FE60F75D3D12CB946C39D16_RuntimeMethod_var);
				V_3 = L_13;
				goto IL_00ba;
			}

IL_0050_1:
			{
				TextMateColorMap_tBF7A6063763DEEB5B64F7AA21A9B013E7B372A9F L_14 = V_1;
				int32_t L_15 = L_14.___ColorCount;
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_15);
				V_2 = L_16;
				V_4 = 0;
				goto IL_00a5_1;
			}

IL_0061_1:
			{
				TextMateColorMap_tBF7A6063763DEEB5B64F7AA21A9B013E7B372A9F L_17 = V_1;
				intptr_t L_18 = L_17.___Colors;
				int32_t L_19 = V_4;
				int32_t L_20;
				L_20 = IntPtr_get_Size_m1FAAA59DA73D7E32BB1AB55DD92A90AFE3251DBE(NULL);
				CHECKED_LOCAL_INIT(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_StaticInit,(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
				intptr_t L_21;
				L_21 = Marshal_ReadIntPtr_m576E200A849BE7A6BC688058AA869B12B30D970F(L_18, ((int32_t)il2cpp_codegen_multiply(L_19, L_20)), NULL);
				V_5 = L_21;
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = V_2;
				int32_t L_23 = V_4;
				intptr_t L_24 = V_5;
				bool L_25;
				L_25 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B_inline(L_24, 0, NULL);
				if (L_25)
				{
					G_B9_0 = L_23;
					G_B9_1 = L_22;
					goto IL_008e_1;
				}
				G_B8_0 = L_23;
				G_B8_1 = L_22;
			}
			{
				String_t* L_26 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
				G_B11_0 = L_26;
				G_B11_1 = G_B8_0;
				G_B11_2 = G_B8_1;
				goto IL_009e_1;
			}

IL_008e_1:
			{
				intptr_t L_27 = V_5;
				CHECKED_LOCAL_INIT(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_StaticInit,(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
				String_t* L_28;
				L_28 = Marshal_PtrToStringAnsi_m8DF88D9F22FCF791C538A36C9233B3882F579B4A(L_27, NULL);
				String_t* L_29 = L_28;
				if (L_29)
				{
					G_B11_0 = L_29;
					G_B11_1 = G_B9_0;
					G_B11_2 = G_B9_1;
					goto IL_009e_1;
				}
				G_B10_0 = L_29;
				G_B10_1 = G_B9_0;
				G_B10_2 = G_B9_1;
			}
			{
				String_t* L_30 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
				G_B11_0 = L_30;
				G_B11_1 = G_B10_1;
				G_B11_2 = G_B10_2;
			}

IL_009e_1:
			{
				NullCheck(G_B11_2);
				(G_B11_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B11_1), (String_t*)G_B11_0);
				int32_t L_31 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_31, 1));
			}

IL_00a5_1:
			{
				int32_t L_32 = V_4;
				TextMateColorMap_tBF7A6063763DEEB5B64F7AA21A9B013E7B372A9F L_33 = V_1;
				int32_t L_34 = L_33.___ColorCount;
				if ((((int32_t)L_32) < ((int32_t)L_34)))
				{
					goto IL_0061_1;
				}
			}
			{
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_35 = V_2;
				V_3 = L_35;
				goto IL_00ba;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00ba:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_36 = V_3;
		return L_36;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Grammar_tAE58961FA6049A278788B45B0A0E417357BC14AE* Registry_LoadGrammar_m999F02F097B4C393F6F9A611CE42CE7F5ADE80BB (Registry_t37E654B4C1F56ABAD063A4798DD2F673DD5D91EE* __this, String_t* ___0_scopeName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Grammar_tAE58961FA6049A278788B45B0A0E417357BC14AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mD9626590915FBA17E9EA10C6E6711BA08E74B78C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Grammar_tAE58961FA6049A278788B45B0A0E417357BC14AE* V_0 = NULL;
	String_t* V_1 = NULL;
	intptr_t G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	intptr_t G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		Registry_ThrowIfDisposed_m0AEB069FA01DA98E849C0A40F251D5F2BD9A9942(__this, NULL);
		String_t* L_0 = ___0_scopeName;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFAE6C5C3B5B8DDDDF4EA2382715D2AB2F40FABAC)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Registry_LoadGrammar_m999F02F097B4C393F6F9A611CE42CE7F5ADE80BB_RuntimeMethod_var)));
	}

IL_0019:
	{
		intptr_t L_3 = __this->___m_Handle;
		String_t* L_4 = ___0_scopeName;
		intptr_t L_5;
		L_5 = NativeMethods_textmate_registry_load_grammar_mF940D81DCA10BBAA97BDDDC6DA76A9EDBA9F4C5A(L_3, L_4, NULL);
		intptr_t L_6 = L_5;
		bool L_7;
		L_7 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_6, 0, NULL);
		if (!L_7)
		{
			G_B4_0 = L_6;
			goto IL_0043;
		}
		G_B3_0 = L_6;
	}
	{
		String_t* L_8 = ___0_scopeName;
		String_t* L_9;
		L_9 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0C1E101C0F64B0C146CB7C8E79D2AA7BB43F101C)), L_8, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_10 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Registry_LoadGrammar_m999F02F097B4C393F6F9A611CE42CE7F5ADE80BB_RuntimeMethod_var)));
	}

IL_0043:
	{
		Grammar_tAE58961FA6049A278788B45B0A0E417357BC14AE* L_11 = (Grammar_tAE58961FA6049A278788B45B0A0E417357BC14AE*)il2cpp_codegen_object_new(Grammar_tAE58961FA6049A278788B45B0A0E417357BC14AE_il2cpp_TypeInfo_var);
		Grammar__ctor_mFF9DA81FA4B63FEB9C7870A9F17CB1204E573AAB(L_11, G_B4_0, NULL);
		V_0 = L_11;
		Grammar_tAE58961FA6049A278788B45B0A0E417357BC14AE* L_12 = V_0;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = Grammar_get_ScopeName_m2291E4162DBFFFFF5623D22CC6D12D64A1C30FA4(L_12, NULL);
		V_1 = L_13;
		String_t* L_14 = V_1;
		String_t* L_15 = ___0_scopeName;
		bool L_16;
		L_16 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_14, L_15, NULL);
		if (!L_16)
		{
			goto IL_0076;
		}
	}
	{
		Grammar_tAE58961FA6049A278788B45B0A0E417357BC14AE* L_17 = V_0;
		NullCheck(L_17);
		Grammar_Dispose_m6A367FAC25FEF32E3F5F5E0E86513DAC032D0F47(L_17, NULL);
		String_t* L_18 = ___0_scopeName;
		String_t* L_19 = V_1;
		String_t* L_20;
		L_20 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4F30F43F2E3FA305BDABD0C5A2E5B453BD009CCD)), L_18, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB08033EEFC594932614064D90D6A79275B85BF5C)), L_19, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_21 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_21, L_20, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Registry_LoadGrammar_m999F02F097B4C393F6F9A611CE42CE7F5ADE80BB_RuntimeMethod_var)));
	}

IL_0076:
	{
		List_1_t59DF515164DE8F9BF5F013AAA45FE579F632B927* L_22 = __this->___m_LoadedGrammars;
		Grammar_tAE58961FA6049A278788B45B0A0E417357BC14AE* L_23 = V_0;
		NullCheck(L_22);
		List_1_Add_mD9626590915FBA17E9EA10C6E6711BA08E74B78C_inline(L_22, L_23, List_1_Add_mD9626590915FBA17E9EA10C6E6711BA08E74B78C_RuntimeMethod_var);
		Grammar_tAE58961FA6049A278788B45B0A0E417357BC14AE* L_24 = V_0;
		return L_24;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Registry_ThrowIfDisposed_m0AEB069FA01DA98E849C0A40F251D5F2BD9A9942 (Registry_t37E654B4C1F56ABAD063A4798DD2F673DD5D91EE* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___m_Disposed;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_1 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7E10EFC03476383B9C3E04930BABFD408F070B73)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Registry_ThrowIfDisposed_m0AEB069FA01DA98E849C0A40F251D5F2BD9A9942_RuntimeMethod_var)));
	}

IL_0013:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Registry_Dispose_mDFCF7A67FBF84FA8BE35BD86EF0B82A2C023F01D (Registry_t37E654B4C1F56ABAD063A4798DD2F673DD5D91EE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_StaticInit);
	Enumerator_t232CE8129533867195FAA6CD57E130DB14EAE8F2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		bool L_0 = __this->___m_Disposed;
		if (L_0)
		{
			goto IL_00a0;
		}
	}
	{
		List_1_t59DF515164DE8F9BF5F013AAA45FE579F632B927* L_1 = __this->___m_LoadedGrammars;
		NullCheck(L_1);
		Enumerator_t232CE8129533867195FAA6CD57E130DB14EAE8F2 L_2;
		L_2 = List_1_GetEnumerator_mD23C320DE6F5F7175047F232FC5C4CFB19C15B53(L_1, NULL);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{
				Enumerator_Dispose_m52A5EB330D63C966E7266BB85FC253E48C89D96F((&V_0), NULL);
				return;
			}
		});
		try
		{
			{
				goto IL_0025_1;
			}

IL_0019_1:
			{
				Grammar_tAE58961FA6049A278788B45B0A0E417357BC14AE* L_3;
				L_3 = Enumerator_get_Current_m6016870E979A878A730A72FC065FCB0830B6E34B_inline((&V_0), NULL);
				NullCheck(L_3);
				Grammar_Dispose_m6A367FAC25FEF32E3F5F5E0E86513DAC032D0F47(L_3, NULL);
			}

IL_0025_1:
			{
				bool L_4;
				L_4 = Enumerator_MoveNext_mBE2D761FCE2DB76F0A00D9A6367BBDBAFFA5EB56((&V_0), NULL);
				if (L_4)
				{
					goto IL_0019_1;
				}
			}
			{
				goto IL_003e;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003e:
	{
		List_1_t59DF515164DE8F9BF5F013AAA45FE579F632B927* L_5 = __this->___m_LoadedGrammars;
		NullCheck(L_5);
		List_1_Clear_mA2DE7CDC6CD4CF342C867A203FD70B8995187FA0_inline(L_5, NULL);
		intptr_t L_6 = __this->___m_Handle;
		bool L_7;
		L_7 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B_inline(L_6, 0, NULL);
		if (!L_7)
		{
			goto IL_0071;
		}
	}
	{
		intptr_t L_8 = __this->___m_Handle;
		NativeMethods_textmate_registry_dispose_mB9E2759280C3B0A8D49A8A7714A4F7195CA6C7D4(L_8, NULL);
		__this->___m_Handle = 0;
	}

IL_0071:
	{
		intptr_t L_9 = __this->___m_OnigLib;
		bool L_10;
		L_10 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B_inline(L_9, 0, NULL);
		if (!L_10)
		{
			goto IL_0099;
		}
	}
	{
		intptr_t L_11 = __this->___m_OnigLib;
		NativeMethods_textmate_oniglib_dispose_mFDD991E234CADDCD9131BAAA2E57C3BEC84F212F(L_11, NULL);
		__this->___m_OnigLib = 0;
	}

IL_0099:
	{
		__this->___m_Disposed = (bool)1;
	}

IL_00a0:
	{
		CHECKED_LOCAL_INIT(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_StaticInit,(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Registry_Finalize_m230050AEAAD24DC5C07978286554D5B5890396F4 (Registry_t37E654B4C1F56ABAD063A4798DD2F673DD5D91EE* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0008:
			{
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}
		});
		try
		{
			Registry_Dispose_mDFCF7A67FBF84FA8BE35BD86EF0B82A2C023F01D(__this, NULL);
			goto IL_000f;
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_000f:
	{
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Theme__ctor_m66D11B77D899A464D70B3999F832BEDE2FBCD8B4 (Theme_t4CAEF7A3EDC1C3A02E826F7EC53EC986771AA09E* __this, intptr_t ___0_handle, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		intptr_t L_0 = ___0_handle;
		__this->___m_Handle = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Theme_t4CAEF7A3EDC1C3A02E826F7EC53EC986771AA09E* Theme_LoadFromFile_mA84302DC9E85F0C63BC5FA9551B7270DF13244C1 (String_t* ___0_themePath, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Theme_t4CAEF7A3EDC1C3A02E826F7EC53EC986771AA09E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	intptr_t G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		String_t* L_0 = ___0_themePath;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2C9F25A80AE26142580ED30214649FDA3528C13E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Theme_LoadFromFile_mA84302DC9E85F0C63BC5FA9551B7270DF13244C1_RuntimeMethod_var)));
	}

IL_0013:
	{
		String_t* L_3 = ___0_themePath;
		intptr_t L_4;
		L_4 = NativeMethods_textmate_theme_load_from_file_m2BA1DC19277C5928A6A4E6343937117FFFBE8CF8(L_3, NULL);
		intptr_t L_5 = L_4;
		bool L_6;
		L_6 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_5, 0, NULL);
		if (!L_6)
		{
			G_B4_0 = L_5;
			goto IL_0037;
		}
		G_B3_0 = L_5;
	}
	{
		String_t* L_7 = ___0_themePath;
		String_t* L_8;
		L_8 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6BAD2E13A37335D9DBB1C5299E883D8E64149D0E)), L_7, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_9 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Theme_LoadFromFile_mA84302DC9E85F0C63BC5FA9551B7270DF13244C1_RuntimeMethod_var)));
	}

IL_0037:
	{
		Theme_t4CAEF7A3EDC1C3A02E826F7EC53EC986771AA09E* L_10 = (Theme_t4CAEF7A3EDC1C3A02E826F7EC53EC986771AA09E*)il2cpp_codegen_object_new(Theme_t4CAEF7A3EDC1C3A02E826F7EC53EC986771AA09E_il2cpp_TypeInfo_var);
		Theme__ctor_m66D11B77D899A464D70B3999F832BEDE2FBCD8B4(L_10, G_B4_0, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Theme_t4CAEF7A3EDC1C3A02E826F7EC53EC986771AA09E* Theme_LoadFromJson_m354CAC2D67ABAB030A541D9D27508E792044CA21 (String_t* ___0_jsonContent, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Theme_t4CAEF7A3EDC1C3A02E826F7EC53EC986771AA09E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	intptr_t G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		String_t* L_0 = ___0_jsonContent;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9C94709BF46B5014877590397F543CA728D6E8E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Theme_LoadFromJson_m354CAC2D67ABAB030A541D9D27508E792044CA21_RuntimeMethod_var)));
	}

IL_0013:
	{
		String_t* L_3 = ___0_jsonContent;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = NativeMethods_ToUtf8NullTerminated_m91A104303F9990A91D2E02585185191DE22E3D86(L_3, NULL);
		intptr_t L_5;
		L_5 = NativeMethods_textmate_theme_load_from_json_m04853C40F082165A42876B537A3496861C5F231C(L_4, NULL);
		intptr_t L_6 = L_5;
		bool L_7;
		L_7 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_6, 0, NULL);
		if (!L_7)
		{
			G_B4_0 = L_6;
			goto IL_0036;
		}
		G_B3_0 = L_6;
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_8 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5590187A5D6C7B0BDD0A05220CFF2F59D4A644C2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Theme_LoadFromJson_m354CAC2D67ABAB030A541D9D27508E792044CA21_RuntimeMethod_var)));
	}

IL_0036:
	{
		Theme_t4CAEF7A3EDC1C3A02E826F7EC53EC986771AA09E* L_9 = (Theme_t4CAEF7A3EDC1C3A02E826F7EC53EC986771AA09E*)il2cpp_codegen_object_new(Theme_t4CAEF7A3EDC1C3A02E826F7EC53EC986771AA09E_il2cpp_TypeInfo_var);
		Theme__ctor_m66D11B77D899A464D70B3999F832BEDE2FBCD8B4(L_9, G_B4_0, NULL);
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Theme_GetForeground_m410C19EC16D94DB9AC45630A07B4DA040F7453CD (Theme_t4CAEF7A3EDC1C3A02E826F7EC53EC986771AA09E* __this, String_t* ___0_scopePath, uint32_t ___1_defaultColor, const RuntimeMethod* method) 
{
	String_t* G_B2_0 = NULL;
	intptr_t G_B2_1;
	memset((&G_B2_1), 0, sizeof(G_B2_1));
	String_t* G_B1_0 = NULL;
	intptr_t G_B1_1;
	memset((&G_B1_1), 0, sizeof(G_B1_1));
	{
		Theme_ThrowIfDisposed_m8821FA9E3ED4BA2FEFF69ABF68A5D69C0C0AC0D3(__this, NULL);
		intptr_t L_0 = __this->___m_Handle;
		String_t* L_1 = ___0_scopePath;
		String_t* L_2 = L_1;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0016;
		}
		G_B1_0 = L_2;
		G_B1_1 = L_0;
	}
	{
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
		G_B2_0 = L_3;
		G_B2_1 = G_B1_1;
	}

IL_0016:
	{
		uint32_t L_4 = ___1_defaultColor;
		uint32_t L_5;
		L_5 = NativeMethods_textmate_theme_get_foreground_mBE5C2B3CEAEE45EF415897F279F03BE1B3332669(G_B2_1, G_B2_0, L_4, NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Theme_GetBackground_m355F9E0E2349AB58BC0219F721270531A10F4C75 (Theme_t4CAEF7A3EDC1C3A02E826F7EC53EC986771AA09E* __this, String_t* ___0_scopePath, uint32_t ___1_defaultColor, const RuntimeMethod* method) 
{
	String_t* G_B2_0 = NULL;
	intptr_t G_B2_1;
	memset((&G_B2_1), 0, sizeof(G_B2_1));
	String_t* G_B1_0 = NULL;
	intptr_t G_B1_1;
	memset((&G_B1_1), 0, sizeof(G_B1_1));
	{
		Theme_ThrowIfDisposed_m8821FA9E3ED4BA2FEFF69ABF68A5D69C0C0AC0D3(__this, NULL);
		intptr_t L_0 = __this->___m_Handle;
		String_t* L_1 = ___0_scopePath;
		String_t* L_2 = L_1;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0016;
		}
		G_B1_0 = L_2;
		G_B1_1 = L_0;
	}
	{
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
		G_B2_0 = L_3;
		G_B2_1 = G_B1_1;
	}

IL_0016:
	{
		uint32_t L_4 = ___1_defaultColor;
		uint32_t L_5;
		L_5 = NativeMethods_textmate_theme_get_background_mC22C0DED3166DB061FD5A8F3438A62BC034BE829(G_B2_1, G_B2_0, L_4, NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Theme_GetFontStyle_mBA2ECC3A628864F7BFF69594985E1965B1C3FEBB (Theme_t4CAEF7A3EDC1C3A02E826F7EC53EC986771AA09E* __this, String_t* ___0_scopePath, int32_t ___1_defaultStyle, const RuntimeMethod* method) 
{
	String_t* G_B2_0 = NULL;
	intptr_t G_B2_1;
	memset((&G_B2_1), 0, sizeof(G_B2_1));
	String_t* G_B1_0 = NULL;
	intptr_t G_B1_1;
	memset((&G_B1_1), 0, sizeof(G_B1_1));
	{
		Theme_ThrowIfDisposed_m8821FA9E3ED4BA2FEFF69ABF68A5D69C0C0AC0D3(__this, NULL);
		intptr_t L_0 = __this->___m_Handle;
		String_t* L_1 = ___0_scopePath;
		String_t* L_2 = L_1;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0016;
		}
		G_B1_0 = L_2;
		G_B1_1 = L_0;
	}
	{
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
		G_B2_0 = L_3;
		G_B2_1 = G_B1_1;
	}

IL_0016:
	{
		int32_t L_4 = ___1_defaultStyle;
		int32_t L_5;
		L_5 = NativeMethods_textmate_theme_get_font_style_mFE71E7D02E38B667FCFB3FA77A49D590AC47B6D2(G_B2_1, G_B2_0, L_4, NULL);
		return (int32_t)(L_5);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Theme_GetDefaultForeground_mE0B814B856E636A7096908FA46D22DC3CA7CF91B (Theme_t4CAEF7A3EDC1C3A02E826F7EC53EC986771AA09E* __this, const RuntimeMethod* method) 
{
	{
		Theme_ThrowIfDisposed_m8821FA9E3ED4BA2FEFF69ABF68A5D69C0C0AC0D3(__this, NULL);
		intptr_t L_0 = __this->___m_Handle;
		uint32_t L_1;
		L_1 = NativeMethods_textmate_theme_get_default_foreground_m4F060125F6EE3B65E7E688DCB1661ACC814C412D(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Theme_GetDefaultBackground_mD6DAB03328FD56C125DA954BF87D079F973A5FF4 (Theme_t4CAEF7A3EDC1C3A02E826F7EC53EC986771AA09E* __this, const RuntimeMethod* method) 
{
	{
		Theme_ThrowIfDisposed_m8821FA9E3ED4BA2FEFF69ABF68A5D69C0C0AC0D3(__this, NULL);
		intptr_t L_0 = __this->___m_Handle;
		uint32_t L_1;
		L_1 = NativeMethods_textmate_theme_get_default_background_m9B3C2A4111D0DD58452A1B28D3BCE7D34EBE36F1(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Theme_get_Handle_m591500FA464D8360F557DF3D5E6159E9995B5849 (Theme_t4CAEF7A3EDC1C3A02E826F7EC53EC986771AA09E* __this, const RuntimeMethod* method) 
{
	{
		Theme_ThrowIfDisposed_m8821FA9E3ED4BA2FEFF69ABF68A5D69C0C0AC0D3(__this, NULL);
		intptr_t L_0 = __this->___m_Handle;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Theme_ThrowIfDisposed_m8821FA9E3ED4BA2FEFF69ABF68A5D69C0C0AC0D3 (Theme_t4CAEF7A3EDC1C3A02E826F7EC53EC986771AA09E* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___m_Disposed;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_1 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46D9C7FA571DE65777FF674D728A6316C6A26A7C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Theme_ThrowIfDisposed_m8821FA9E3ED4BA2FEFF69ABF68A5D69C0C0AC0D3_RuntimeMethod_var)));
	}

IL_0013:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Theme_Dispose_mAD81686ECF4BA16C70FFE29922D98009ECBCAF25 (Theme_t4CAEF7A3EDC1C3A02E826F7EC53EC986771AA09E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_StaticInit);
	{
		bool L_0 = __this->___m_Disposed;
		if (L_0)
		{
			goto IL_0037;
		}
	}
	{
		intptr_t L_1 = __this->___m_Handle;
		bool L_2;
		L_2 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B_inline(L_1, 0, NULL);
		if (!L_2)
		{
			goto IL_0030;
		}
	}
	{
		intptr_t L_3 = __this->___m_Handle;
		NativeMethods_textmate_theme_dispose_m3A9F3454A2CA110069C540D5147CF623DA5B2514(L_3, NULL);
		__this->___m_Handle = 0;
	}

IL_0030:
	{
		__this->___m_Disposed = (bool)1;
	}

IL_0037:
	{
		CHECKED_LOCAL_INIT(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_StaticInit,(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Theme_Finalize_m20DAAA0A0622E4CB1D269FD668D72FFC6B49C84B (Theme_t4CAEF7A3EDC1C3A02E826F7EC53EC986771AA09E* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0008:
			{
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}
		});
		try
		{
			Theme_Dispose_mAD81686ECF4BA16C70FFE29922D98009ECBCAF25(__this, NULL);
			goto IL_000f;
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_000f:
	{
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Token_get_StartIndex_m35E48CB6DCBE41F22C1B1FFC12C40B18D9EBE1C8 (Token_t35AA31435ECA927558605D1CBD6DFDB094216B1E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CStartIndexU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Token_get_EndIndex_mFE8CA7E14ABDE20D8D2740B64886E579FB3D9835 (Token_t35AA31435ECA927558605D1CBD6DFDB094216B1E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CEndIndexU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Token_get_Scopes_m1B344857DB1EA382814AA93C77DF9416AA1BC621 (Token_t35AA31435ECA927558605D1CBD6DFDB094216B1E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CScopesU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Token__ctor_mF24D964BF65B8DF0F3088E1153015F9C53619C05 (Token_t35AA31435ECA927558605D1CBD6DFDB094216B1E* __this, int32_t ___0_startIndex, int32_t ___1_endIndex, RuntimeObject* ___2_scopes, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_startIndex;
		__this->___U3CStartIndexU3Ek__BackingField = L_0;
		int32_t L_1 = ___1_endIndex;
		__this->___U3CEndIndexU3Ek__BackingField = L_1;
		RuntimeObject* L_2 = ___2_scopes;
		__this->___U3CScopesU3Ek__BackingField = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CScopesU3Ek__BackingField), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Token_get_Length_mC8079C63AD8C497055AA13D8700538F8937D948A (Token_t35AA31435ECA927558605D1CBD6DFDB094216B1E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = Token_get_EndIndex_mFE8CA7E14ABDE20D8D2740B64886E579FB3D9835_inline(__this, NULL);
		int32_t L_1;
		L_1 = Token_get_StartIndex_m35E48CB6DCBE41F22C1B1FFC12C40B18D9EBE1C8_inline(__this, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Token_GetValue_mC7D998C2493DA9CEA898D2D92376E0C2BDC631E5 (Token_t35AA31435ECA927558605D1CBD6DFDB094216B1E* __this, String_t* ___0_line, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_StaticInit);
	int32_t V_0 = 0;
	{
		String_t* L_0 = ___0_line;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
		return L_2;
	}

IL_000e:
	{
		int32_t L_3;
		L_3 = Token_get_StartIndex_m35E48CB6DCBE41F22C1B1FFC12C40B18D9EBE1C8_inline(__this, NULL);
		String_t* L_4 = ___0_line;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_4, NULL);
		if ((((int32_t)L_3) < ((int32_t)L_5)))
		{
			goto IL_0022;
		}
	}
	{
		String_t* L_6 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
		return L_6;
	}

IL_0022:
	{
		int32_t L_7;
		L_7 = Token_get_EndIndex_mFE8CA7E14ABDE20D8D2740B64886E579FB3D9835_inline(__this, NULL);
		String_t* L_8 = ___0_line;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_8, NULL);
		CHECKED_LOCAL_INIT(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_StaticInit,(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_10;
		L_10 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_7, L_9, NULL);
		int32_t L_11;
		L_11 = Token_get_StartIndex_m35E48CB6DCBE41F22C1B1FFC12C40B18D9EBE1C8_inline(__this, NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_10, L_11));
		String_t* L_12 = ___0_line;
		int32_t L_13;
		L_13 = Token_get_StartIndex_m35E48CB6DCBE41F22C1B1FFC12C40B18D9EBE1C8_inline(__this, NULL);
		int32_t L_14 = V_0;
		NullCheck(L_12);
		String_t* L_15;
		L_15 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_12, L_13, L_14, NULL);
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Token_ToString_mD8CEF1CC0E73714430A3DB929027579B5793E997 (Token_t35AA31435ECA927558605D1CBD6DFDB094216B1E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC636BC4718130E92668BB1D46A2BCE9F27733E73);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0;
		L_0 = Token_get_StartIndex_m35E48CB6DCBE41F22C1B1FFC12C40B18D9EBE1C8_inline(__this, NULL);
		int32_t L_1 = L_0;
		RuntimeObject* L_2 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_1);
		int32_t L_3;
		L_3 = Token_get_EndIndex_mFE8CA7E14ABDE20D8D2740B64886E579FB3D9835_inline(__this, NULL);
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		RuntimeObject* L_6;
		L_6 = Token_get_Scopes_m1B344857DB1EA382814AA93C77DF9416AA1BC621_inline(__this, NULL);
		String_t* L_7;
		L_7 = String_Join_m8159F953B3D62AA54A0853A6E9573CDC0F63E158(_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, L_6, NULL);
		String_t* L_8;
		L_8 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteralC636BC4718130E92668BB1D46A2BCE9F27733E73, L_2, L_5, L_7, NULL);
		return L_8;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TokenizeResult_get_Tokens_m4ABAEA3B808CD9FCE6C78E9172E705F863F9C1D4 (TokenizeResult_tC3D2C5E6E03A563590DF725546B216CDC4989B2F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTokensU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t TokenizeResult_get_StateStack_m98B01531716C8AF75421EBC493C83EB6E0E22E2D (TokenizeResult_tC3D2C5E6E03A563590DF725546B216CDC4989B2F* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->___U3CStateStackU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TokenizeResult_get_StoppedEarly_m5C4AF21D187024770A5BE243CAB3F833E2F068CE (TokenizeResult_tC3D2C5E6E03A563590DF725546B216CDC4989B2F* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CStoppedEarlyU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenizeResult__ctor_m462209867DD3B779AE6C34E8D294CB5192D1BCD8 (TokenizeResult_tC3D2C5E6E03A563590DF725546B216CDC4989B2F* __this, RuntimeObject* ___0_tokens, intptr_t ___1_stateStack, bool ___2_stoppedEarly, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_tokens;
		__this->___U3CTokensU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTokensU3Ek__BackingField), (void*)L_0);
		intptr_t L_1 = ___1_stateStack;
		__this->___U3CStateStackU3Ek__BackingField = L_1;
		bool L_2 = ___2_stoppedEarly;
		__this->___U3CStoppedEarlyU3Ek__BackingField = L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EncodedTokenAttributes_GetFontStyle_m15A3169796E4AC2844B3E688F8AFF034686819C1 (uint32_t ___0_metadata, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_metadata;
		return ((int32_t)((uint32_t)((int32_t)((int32_t)L_0&((int32_t)30720)))>>((int32_t)11)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EncodedTokenAttributes_GetForeground_m6748889F3D142175B1C6C2C42770522AA86C382F (uint32_t ___0_metadata, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_metadata;
		return ((int32_t)((uint32_t)((int32_t)((int32_t)L_0&((int32_t)16744448)))>>((int32_t)15)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EncodedTokenAttributes_GetBackground_mF2AE186FB41C14A4C6865A1FE01B824A4D7196B1 (uint32_t ___0_metadata, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_metadata;
		return ((int32_t)((uint32_t)((int32_t)((int32_t)L_0&((int32_t)-16777216)))>>((int32_t)24)));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncodedToken__ctor_m86192F4F3BDE4E13E069CEDF155EAEF612468CB3 (EncodedToken_t13C2F10CED0558A0D78571E96868624F518FB1A6* __this, int32_t ___0_startIndex, uint32_t ___1_metadata, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_startIndex;
		__this->___StartIndex = L_0;
		uint32_t L_1 = ___1_metadata;
		__this->___Metadata = L_1;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EncodedToken_get_FontStyle_m3B5BDC073100DE55F21636F5F63C4C8BD30EED8F (EncodedToken_t13C2F10CED0558A0D78571E96868624F518FB1A6* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___Metadata;
		int32_t L_1;
		L_1 = EncodedTokenAttributes_GetFontStyle_m15A3169796E4AC2844B3E688F8AFF034686819C1(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EncodedToken_get_ForegroundId_m1E39D16D6EA9DB81B2223D4D9A06A4838F6C31FA (EncodedToken_t13C2F10CED0558A0D78571E96868624F518FB1A6* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___Metadata;
		int32_t L_1;
		L_1 = EncodedTokenAttributes_GetForeground_m6748889F3D142175B1C6C2C42770522AA86C382F(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EncodedToken_get_BackgroundId_m9D93C6BD766774404181377316AECC67F8E464D8 (EncodedToken_t13C2F10CED0558A0D78571E96868624F518FB1A6* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___Metadata;
		int32_t L_1;
		L_1 = EncodedTokenAttributes_GetBackground_mF2AE186FB41C14A4C6865A1FE01B824A4D7196B1(L_0, NULL);
		return L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TokenizeResult2_get_Tokens_m8DF47C70FD34CFECA6A010727A11A24A67E3589E (TokenizeResult2_t3F67D8DB5D1A1D7EBFCA093726387D8561884160* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTokensU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TokenizeResult2_get_TokenCount_mF891E822439950F545C3BB9EE61DC55E4EC77542 (TokenizeResult2_t3F67D8DB5D1A1D7EBFCA093726387D8561884160* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_tA63FB2A21D53298FCC1DF4D6FE39D4A17298EC1B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = TokenizeResult2_get_Tokens_m8DF47C70FD34CFECA6A010727A11A24A67E3589E_inline(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_tA63FB2A21D53298FCC1DF4D6FE39D4A17298EC1B_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t TokenizeResult2_get_StateStack_m971ACC07075CF5E7FB4E065FBB72BE1375750A56 (TokenizeResult2_t3F67D8DB5D1A1D7EBFCA093726387D8561884160* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->___U3CStateStackU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TokenizeResult2_get_StoppedEarly_mB4A020FF9CC881A4622DCA5258F3147364CD8C81 (TokenizeResult2_t3F67D8DB5D1A1D7EBFCA093726387D8561884160* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CStoppedEarlyU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenizeResult2__ctor_m06C6AA7D0B211EBD42CE135070CEE8A3DA454559 (TokenizeResult2_t3F67D8DB5D1A1D7EBFCA093726387D8561884160* __this, RuntimeObject* ___0_tokens, intptr_t ___1_stateStack, bool ___2_stoppedEarly, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_tokens;
		__this->___U3CTokensU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTokensU3Ek__BackingField), (void*)L_0);
		intptr_t L_1 = ___1_stateStack;
		__this->___U3CStateStackU3Ek__BackingField = L_1;
		bool L_2 = ___2_stoppedEarly;
		__this->___U3CStoppedEarlyU3Ek__BackingField = L_2;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___0_value1;
		intptr_t L_1 = ___1_value2;
		return (bool)((((intptr_t)L_0) == ((intptr_t)L_1))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B_inline (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___0_value1;
		intptr_t L_1 = ___1_value2;
		return (bool)((((int32_t)((((intptr_t)L_0) == ((intptr_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843_inline (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->___handle;
		bool L_1;
		L_1 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B_inline(L_0, 0, NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t TokenizeResult_get_StateStack_m98B01531716C8AF75421EBC493C83EB6E0E22E2D_inline (TokenizeResult_tC3D2C5E6E03A563590DF725546B216CDC4989B2F* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->___U3CStateStackU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Token_get_EndIndex_mFE8CA7E14ABDE20D8D2740B64886E579FB3D9835_inline (Token_t35AA31435ECA927558605D1CBD6DFDB094216B1E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CEndIndexU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Token_get_StartIndex_m35E48CB6DCBE41F22C1B1FFC12C40B18D9EBE1C8_inline (Token_t35AA31435ECA927558605D1CBD6DFDB094216B1E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CStartIndexU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Token_get_Scopes_m1B344857DB1EA382814AA93C77DF9416AA1BC621_inline (Token_t35AA31435ECA927558605D1CBD6DFDB094216B1E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CScopesU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TokenizeResult2_get_Tokens_m8DF47C70FD34CFECA6A010727A11A24A67E3589E_inline (TokenizeResult2_t3F67D8DB5D1A1D7EBFCA093726387D8561884160* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTokensU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0CE6E39234ED33F5195AABC8029D06D4756C75C1_gshared_inline (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) 
{
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) < ((uint32_t)L_5))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_6 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_6, 1));
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_7 = V_0;
		int32_t L_8 = V_1;
		Il2CppSharedGenericObject* L_9 = ___0_item;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (Il2CppSharedGenericObject*)L_9);
		return;
	}

IL_0034:
	{
		Il2CppSharedGenericObject* L_10 = ___0_item;
		List_1_AddWithResize_mCC24A812DFC30C3DE2230E3C8EE705871C1DFF81(__this, L_10, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* Array_Empty_TisIl2CppSharedGenericObject_m688909407CF299AE69145CC33ACB1E90C775C653_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_0 = ((EmptyArray_1_tF2F83411E5DC963DBFFD1F75B10B58A1ED224DD5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EncodedTokenU5BU5D_t4F48C85A75390F71C854D63DAECF0535C4B0217A* Array_Empty_TisEncodedToken_t13C2F10CED0558A0D78571E96868624F518FB1A6_m126C2641150E6D5ED089E618EAD0A3D3AA997877_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		EncodedTokenU5BU5D_t4F48C85A75390F71C854D63DAECF0535C4B0217A* L_0 = ((EmptyArray_1_t7054034D163D1BFA7FDC520A896D4BEC0C58C58D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArrayPool_1_tEE934B4A44CDA39BED8CBAF50F7C0E2E9E1ACC01* ArrayPool_1_get_Shared_m0F5374FE0AF46A9CAB3F9501E56B2D990DEB0C39_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(ArrayPool_1_tBCAECBD7E56D178C8C7A2FD7EB9C61B46E22C3C2_StaticInit);
	{
		CHECKED_LOCAL_INIT(ArrayPool_1_tBCAECBD7E56D178C8C7A2FD7EB9C61B46E22C3C2_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		ArrayPool_1_tEE934B4A44CDA39BED8CBAF50F7C0E2E9E1ACC01* L_0 = ((ArrayPool_1_tEE934B4A44CDA39BED8CBAF50F7C0E2E9E1ACC01_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___U3CSharedU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Enumerator_get_Current_mA50CED82C4671CC4E1D82333FAC2587F700565D0_gshared_inline (Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9* __this, const RuntimeMethod* method) 
{
	{
		Il2CppSharedGenericObject* L_0 = __this->____current;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mCCC05B98943E8F4E0F6FBF47063A269048AE71E5_gshared_inline (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
	}
	{
		int32_t L_1 = __this->____size;
		V_0 = L_1;
		__this->____size = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_3 = __this->____items;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_003c:
	{
		return;
	}
}
