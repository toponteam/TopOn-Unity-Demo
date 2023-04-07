#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.Collections.Generic.IDictionary`2<System.String,AnyThinkAds.ThirdParty.LitJson.JsonData>
struct IDictionary_2_t06B32EBDF3FBDE009E64552FCEF1CEEA6C2EF6A0;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,AnyThinkAds.ThirdParty.LitJson.JsonData>>
struct IList_1_t16BE2BEC7F86E1FFDB9AB249AF16D122ECDA989E;
// System.Collections.Generic.IList`1<AnyThinkAds.ThirdParty.LitJson.JsonData>
struct IList_1_tFC6955D64CF25E20D63A4D2640A24CEF83108F2C;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// AnyThinkAds.Api.ATAdErrorEventArgs
struct ATAdErrorEventArgs_t8A61AA2BB6E96BFE7387A05EED0128A3D2BD3314;
// AnyThinkAds.Api.ATAdEventArgs
struct ATAdEventArgs_tACF382E072AE36E7C55A018FE3AF8D273C5C95CA;
// AnyThinkAds.Api.ATAdProgressEventArgs
struct ATAdProgressEventArgs_tD43B6F0E5FEE8F01533D199C6FD9AEF8046D13E5;
// AnyThinkAds.Api.ATAdRewardEventArgs
struct ATAdRewardEventArgs_t169DED6F7BEE7E52674898B6DAF423E40E48D665;
// AnyThinkAds.Api.ATBannerAd
struct ATBannerAd_t34DFAA451EED592F85506D138227347ED875BCA2;
// AnyThinkAds.Api.ATBannerAdLoadingExtra
struct ATBannerAdLoadingExtra_tB7BE886F3735472AEC8919BDE71BDFB534A9DF96;
// AnyThinkAds.Api.ATCallbackInfo
struct ATCallbackInfo_tEAB4B96EDB8FA37AEF0E359D43E9AA128FCC6AEB;
// AnyThinkAds.Api.ATConst
struct ATConst_tC4379944A54BD1D08DADD87FB3878EC04620C8E7;
// AnyThinkAds.Api.ATDownloadAdListener
struct ATDownloadAdListener_tB7F77A496620D25C9B5B5DCC8724FB3F3D65EB40;
// AnyThinkAds.Api.ATDownloadManager
struct ATDownloadManager_t7CF62A4FEFB0854016FA6E98BA4C59AAD967272B;
// AnyThinkAds.Api.ATGetAreaListener
struct ATGetAreaListener_tFE83035181F5B5C2374F40A83BE1566DAB64E9AE;
// AnyThinkAds.Api.ATGetUserLocationListener
struct ATGetUserLocationListener_t3CEF39FAD9648842EDE9192DE42980E2AB798201;
// AnyThinkAds.Api.ATInterstitialAd
struct ATInterstitialAd_t68C4D29B8572B16C2F1EFF99D6FC2BE0AA339817;
// AnyThinkAds.Api.ATInterstitialAdLoadingExtra
struct ATInterstitialAdLoadingExtra_tBDE0F8742C81BD918736554917D67DEE3884A509;
// AnyThinkAds.Api.ATInterstitialAutoAd
struct ATInterstitialAutoAd_t73C090E631B76B76539F75A908A8875FEF823DCB;
// AnyThinkAds.Api.ATNativeAd
struct ATNativeAd_t2015F7596076CA06AF4B5854E81CEA0BD7E1B2FB;
// AnyThinkAds.Api.ATNativeAdLoadingExtra
struct ATNativeAdLoadingExtra_tD57B2018036CA3FCCC6FC6645E41B7B53C50E98D;
// AnyThinkAds.Api.ATNativeAdView
struct ATNativeAdView_tBBD4CA9EBDE5D330CC866EB249E872D5C287F18C;
// AnyThinkAds.Api.ATNativeBannerAd
struct ATNativeBannerAd_tE58854FA0A73E26146A20E25FF3F3D937203AFEC;
// AnyThinkAds.Api.ATNativeBannerAdListener
struct ATNativeBannerAdListener_t19CB9EFD2488B37B617C102D5140C4DC0E6D23A3;
// AnyThinkAds.Api.ATNativeBannerAdShowingExtra
struct ATNativeBannerAdShowingExtra_t0FE66289975CC9B69EDA88DB3846C945A42185A1;
// AnyThinkAds.Api.ATNativeConfig
struct ATNativeConfig_t1C2488BAA15F3BE2BF56F58A95F48B386B9E9D1A;
// AnyThinkAds.Api.ATNativeItemProperty
struct ATNativeItemProperty_t58B41E7E5AB08D343652315D7CF53AD2EBB2349A;
// AnyThinkAds.Api.ATRect
struct ATRect_tBBC85FAC20A1E12B1EB9F3CE00870B793834C7C2;
// AnyThinkAds.Api.ATRewardedAutoVideo
struct ATRewardedAutoVideo_t186A232BB8A51374EC69B092A3AE1E678BC0DE36;
// AnyThinkAds.Api.ATRewardedVideo
struct ATRewardedVideo_tFF1F706884EA5B4FFF4DA6829157F6150DABFB97;
// AnyThinkAds.Api.ATSDKAPI
struct ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6;
// AnyThinkAds.Api.ATSDKInitListener
struct ATSDKInitListener_t792D34E04FD6176B6885B70F08B8272793F7BB1F;
// AnyThinkAds.Api.ATSize
struct ATSize_tB526AFFCD84BA3CC54C85D8125F2B279B6C3588D;
// AnyThinkAds.Common.IATBannerAdClient
struct IATBannerAdClient_tDAA53507100645D3DEEB4E9AC814E6C5DCD27FEF;
// AnyThinkAds.Common.IATDownloadClient
struct IATDownloadClient_tE915DC3A98BA33AE641D7D773A373ECF33EBAEDC;
// AnyThinkAds.Common.IATInterstitialAdClient
struct IATInterstitialAdClient_t8DE3DFDD0468982640EAE2198BEAE61407AE340C;
// AnyThinkAds.Common.IATNativeAdClient
struct IATNativeAdClient_t55535B17E142EB4F34DF66497A466BB037D2C59C;
// AnyThinkAds.Common.IATNativeBannerAdClient
struct IATNativeBannerAdClient_tDA9467756C97EA5831BDDBB0ECB6E91396CBD294;
// AnyThinkAds.Common.IATRewardedVideoAdClient
struct IATRewardedVideoAdClient_t35B9B560532A6BE76B3EBACE8DEC4FD62C4496A9;
// AnyThinkAds.Common.IATSDKAPIClient
struct IATSDKAPIClient_tC0FECACCA46F6FA8F6FEF3A5A112BBA10245A01B;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// AnyThinkAds.ThirdParty.LitJson.JsonData
struct JsonData_tC2CA8D7C407ECAC4EE42392A60118C480372F7B8;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ATBannerAdLoadingExtra_tB7BE886F3735472AEC8919BDE71BDFB534A9DF96_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ATBannerAd_t34DFAA451EED592F85506D138227347ED875BCA2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ATCallbackInfo_tEAB4B96EDB8FA37AEF0E359D43E9AA128FCC6AEB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ATDownloadManager_t7CF62A4FEFB0854016FA6E98BA4C59AAD967272B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ATInterstitialAdLoadingExtra_tBDE0F8742C81BD918736554917D67DEE3884A509_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ATInterstitialAd_t68C4D29B8572B16C2F1EFF99D6FC2BE0AA339817_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ATInterstitialAutoAd_t73C090E631B76B76539F75A908A8875FEF823DCB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ATNativeAdLoadingExtra_tD57B2018036CA3FCCC6FC6645E41B7B53C50E98D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ATNativeAd_t2015F7596076CA06AF4B5854E81CEA0BD7E1B2FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ATNativeBannerAdShowingExtra_t0FE66289975CC9B69EDA88DB3846C945A42185A1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ATNativeBannerAd_tE58854FA0A73E26146A20E25FF3F3D937203AFEC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ATRewardedAutoVideo_t186A232BB8A51374EC69B092A3AE1E678BC0DE36_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ATRewardedVideo_tFF1F706884EA5B4FFF4DA6829157F6150DABFB97_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ATSize_tB526AFFCD84BA3CC54C85D8125F2B279B6C3588D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IATBannerAdClient_tDAA53507100645D3DEEB4E9AC814E6C5DCD27FEF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IATDownloadClient_tE915DC3A98BA33AE641D7D773A373ECF33EBAEDC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IATInterstitialAdClient_t8DE3DFDD0468982640EAE2198BEAE61407AE340C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IATNativeAdClient_t55535B17E142EB4F34DF66497A466BB037D2C59C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IATNativeBannerAdClient_tDA9467756C97EA5831BDDBB0ECB6E91396CBD294_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IATRewardedVideoAdClient_t35B9B560532A6BE76B3EBACE8DEC4FD62C4496A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IATSDKAPIClient_tC0FECACCA46F6FA8F6FEF3A5A112BBA10245A01B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonMapper_t6C02C11E5758BFDB34AD6A5F41ABBFC7FAB2E598_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral03B000D2C4DAFF596116BD3AC596F41D96CFF5B9;
IL2CPP_EXTERN_C String_t* _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B;
IL2CPP_EXTERN_C String_t* _stringLiteral0749C3AB6B46A5C9B817BCF9C0C6BD2FE94613B1;
IL2CPP_EXTERN_C String_t* _stringLiteral0BABBCE95BCD478A1457643796BE96B9ACA4E6C2;
IL2CPP_EXTERN_C String_t* _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A;
IL2CPP_EXTERN_C String_t* _stringLiteral0DA44B4B2555A4BCF3589D4EC74EB1AB1ACD9912;
IL2CPP_EXTERN_C String_t* _stringLiteral0DFA9AA29082727751167EB3C54FCAD0F9EDC665;
IL2CPP_EXTERN_C String_t* _stringLiteral1084E0508EC132638288C6F0A8F166242775D100;
IL2CPP_EXTERN_C String_t* _stringLiteral10CFCF3EBD4D77E7A54DFD0926B0796496169AB9;
IL2CPP_EXTERN_C String_t* _stringLiteral10D904031D0D73164858E9561BEBF8188F164AF6;
IL2CPP_EXTERN_C String_t* _stringLiteral11203B5B843E50223E13B821BA07333862DE0A64;
IL2CPP_EXTERN_C String_t* _stringLiteral1327E3E0D2EDE515C865E554C1090B04A103D22A;
IL2CPP_EXTERN_C String_t* _stringLiteral1388D53684B0996B3FF27203D1547660E4D82509;
IL2CPP_EXTERN_C String_t* _stringLiteral16AE29D4982527C4C7A6AF3EB4314E66EAD38294;
IL2CPP_EXTERN_C String_t* _stringLiteral170AD99AD2A9FB6605C713D5E03E562C7D968B69;
IL2CPP_EXTERN_C String_t* _stringLiteral171032605001E1912A8A0600431BF07A1726537F;
IL2CPP_EXTERN_C String_t* _stringLiteral1745ECCF09CB581FB30F96360D0D0E8B3E0AD134;
IL2CPP_EXTERN_C String_t* _stringLiteral18BB3D3DEA07E1AFA8BD4C6534A379047D9991CC;
IL2CPP_EXTERN_C String_t* _stringLiteral19A4DD21BBFD4F7063C65CBD5B8DEB0688B58B10;
IL2CPP_EXTERN_C String_t* _stringLiteral1D1EFCF52A4E0FA49E30A3DE65058928ACB5EF13;
IL2CPP_EXTERN_C String_t* _stringLiteral2512497A38103E878C0A6145651B419DEE131154;
IL2CPP_EXTERN_C String_t* _stringLiteral25705477E232DDE539315FA572A0CE775D407106;
IL2CPP_EXTERN_C String_t* _stringLiteral2687B859C52DBDD7EA54FE527B1981F4F4B67B0E;
IL2CPP_EXTERN_C String_t* _stringLiteral28F57C7C7D07611D497C365D2E8D646E014185B3;
IL2CPP_EXTERN_C String_t* _stringLiteral292BD63800E4D7AB03958C97F752AA04D34A681B;
IL2CPP_EXTERN_C String_t* _stringLiteral2C1E27EE7EEC15120D76B35E99FCEF230345D161;
IL2CPP_EXTERN_C String_t* _stringLiteral2E52B4BC35C1F9068E8AD23DC9937D65194A5135;
IL2CPP_EXTERN_C String_t* _stringLiteral2FCC894C8E31955BBEE1DA8D542825C6EFA4CC19;
IL2CPP_EXTERN_C String_t* _stringLiteral33F6758AC1777DAA0016096F040CBC13B8AB090F;
IL2CPP_EXTERN_C String_t* _stringLiteral3A0638EF431254803510AEEF4E30E0DCB0C2E12D;
IL2CPP_EXTERN_C String_t* _stringLiteral3B247B668327A8C2234CDF83CC6E6A225D536776;
IL2CPP_EXTERN_C String_t* _stringLiteral425C3CBEE5296F98B99484FBA972E5B2FA7A25D3;
IL2CPP_EXTERN_C String_t* _stringLiteral44F1E7DB2E8AAD233857868896DFEFE5A63EECEF;
IL2CPP_EXTERN_C String_t* _stringLiteral46EBAC5E8BDA7E4F7044E37E0C769312169C651B;
IL2CPP_EXTERN_C String_t* _stringLiteral483DFA9A614472DBFD4B58265DDE1C943D92F756;
IL2CPP_EXTERN_C String_t* _stringLiteral486C5E022B623208CEC796B9BCD2F72E31E8A072;
IL2CPP_EXTERN_C String_t* _stringLiteral486CF3B61D48E45ADB2C8A2A368A318060EADE3B;
IL2CPP_EXTERN_C String_t* _stringLiteral4C9820D0000A8721F54710F1ABFB2EDBFC71FDE8;
IL2CPP_EXTERN_C String_t* _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30;
IL2CPP_EXTERN_C String_t* _stringLiteral5CDE5C91E6E6A38F4BCDA5848E64C14E7B6CF92C;
IL2CPP_EXTERN_C String_t* _stringLiteral6464580B4BA3FBA5EE5A3A1A31C35F8B2BB42CB9;
IL2CPP_EXTERN_C String_t* _stringLiteral6488BB0E8D628F6BAD095A096DE57BB154AD1E04;
IL2CPP_EXTERN_C String_t* _stringLiteral64ECDAF6849D3AB5BFABD37685135C6123A23CC3;
IL2CPP_EXTERN_C String_t* _stringLiteral6697CDCB0762971428BEAB2CC086B115C9E38187;
IL2CPP_EXTERN_C String_t* _stringLiteral69ED2F27015E1D8E16B770424685FDD3D7EDD076;
IL2CPP_EXTERN_C String_t* _stringLiteral6CC49087803A7B2C8D0F9B2626880FF8EC4FF94C;
IL2CPP_EXTERN_C String_t* _stringLiteral71C17B3684796D88DD17328DF65F347A856EAF31;
IL2CPP_EXTERN_C String_t* _stringLiteral778F4B6769BD76BEA1B6F935EF09DAE5B686E017;
IL2CPP_EXTERN_C String_t* _stringLiteral7AC9006F30C221D398925A34B4E6D093FA9ED120;
IL2CPP_EXTERN_C String_t* _stringLiteral7AFF5DCE6B762488699DFA749CC45116752C6045;
IL2CPP_EXTERN_C String_t* _stringLiteral7DD4F702FB1B016670C03544EB428F980A55531C;
IL2CPP_EXTERN_C String_t* _stringLiteral82EC7C3895FE320756F278BA445746A31462E3C2;
IL2CPP_EXTERN_C String_t* _stringLiteral83A97723F7E5BDE036330459FB667402C7C32740;
IL2CPP_EXTERN_C String_t* _stringLiteral8769D5429AA71436D34F062199813C43C7D11E01;
IL2CPP_EXTERN_C String_t* _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D;
IL2CPP_EXTERN_C String_t* _stringLiteral8E55A4C5A6C5EA49FB99BAFA2B4646BDC4229840;
IL2CPP_EXTERN_C String_t* _stringLiteral9042595A1005F3694F667150D68011E6E1B221D7;
IL2CPP_EXTERN_C String_t* _stringLiteral90777CC080B8210DFA568244B6C673ACA06D9BFF;
IL2CPP_EXTERN_C String_t* _stringLiteral988090910866A3AC43E431323DD6916C60B1A59A;
IL2CPP_EXTERN_C String_t* _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694;
IL2CPP_EXTERN_C String_t* _stringLiteral9DC959FBB8A194C03003E178EF9BEED608444FB2;
IL2CPP_EXTERN_C String_t* _stringLiteral9EFB87BB64D28FEAB900DA3E711EF2A22510DB3D;
IL2CPP_EXTERN_C String_t* _stringLiteralA11BC0AB16491B5DAEE99EAA33CF52FE6BC826E3;
IL2CPP_EXTERN_C String_t* _stringLiteralA1701382D5DB91FE64299861D18B6B8D90F12AFA;
IL2CPP_EXTERN_C String_t* _stringLiteralA223E6F0C54D77B42B95E26C1F074DA464E2049C;
IL2CPP_EXTERN_C String_t* _stringLiteralA47A168D660B942A0E4EFA75F386C8669267074D;
IL2CPP_EXTERN_C String_t* _stringLiteralA56563187CE402C2D214D1D438FAEFE383069121;
IL2CPP_EXTERN_C String_t* _stringLiteralA582AFCA1811C5E0A07C5B63E7A046DFA7087D1A;
IL2CPP_EXTERN_C String_t* _stringLiteralA5B0B11BB35DDF1357AB0D80F47D1B74FAA4E9A8;
IL2CPP_EXTERN_C String_t* _stringLiteralA76A1FBB5BDCCBC5DBCEDB47C87027870724AC3E;
IL2CPP_EXTERN_C String_t* _stringLiteralA9BF39889835439556D3C22F981E68B4CDF66D3E;
IL2CPP_EXTERN_C String_t* _stringLiteralAAB6F5974AA6BF52B67FEA0BB8610F793A2BBCDD;
IL2CPP_EXTERN_C String_t* _stringLiteralAB3E708924BFB9D6B641A4B9F82FE5FE57F307B6;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralB714933B91F72FB57380135D2B50660975351E49;
IL2CPP_EXTERN_C String_t* _stringLiteralB74CD87160E732F533F99DCAA83E9EAFBBEDAEAC;
IL2CPP_EXTERN_C String_t* _stringLiteralB8805582BE73806AB6806DC032B0E98F07A42022;
IL2CPP_EXTERN_C String_t* _stringLiteralBC0048E68AAA6E10064F62D278CB090D1AAE69DF;
IL2CPP_EXTERN_C String_t* _stringLiteralBC0CFC91159B68CDB00561EE3B792C9679F86738;
IL2CPP_EXTERN_C String_t* _stringLiteralBFB810260B3D8BC7FC286E1DFC7D03ED191A782B;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralC2174A5652A092BA4EA81CC88E05A4CF11987070;
IL2CPP_EXTERN_C String_t* _stringLiteralC5AEAC59DFAF8098FFEBA846B955A932F758E831;
IL2CPP_EXTERN_C String_t* _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677;
IL2CPP_EXTERN_C String_t* _stringLiteralC7B4D926EF9532A71B25AEC040A33D52C926425F;
IL2CPP_EXTERN_C String_t* _stringLiteralC8B5F8CFFD59A7B59061F52A426CC740232A7314;
IL2CPP_EXTERN_C String_t* _stringLiteralCB95AC6F5DAF4F3EB9438A7F55847FF126519704;
IL2CPP_EXTERN_C String_t* _stringLiteralCC1F7052057A1EC518E41F548AA4C5A4BA47C59D;
IL2CPP_EXTERN_C String_t* _stringLiteralDA29C31BF1A1235E83B36C818C313368D6188CA1;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDE6D13D8B5CAB7B6CF611C5B25BC71DE7AA04FD5;
IL2CPP_EXTERN_C String_t* _stringLiteralE0560976B58269705E291202AB17A7D7F1543FA4;
IL2CPP_EXTERN_C String_t* _stringLiteralE43F841A3746AE40EA7342E66712C308D15FC289;
IL2CPP_EXTERN_C String_t* _stringLiteralE652D195EED39893D696733B289E29130B7D0A52;
IL2CPP_EXTERN_C String_t* _stringLiteralEDCC39ACE1BE3A6CCC4D73DEDA17B26E795EF1D3;
IL2CPP_EXTERN_C String_t* _stringLiteralEE88DB00CE4B2E2DC6AB5DCD8BBEB39289B25168;
IL2CPP_EXTERN_C String_t* _stringLiteralEF042A4C30146DF9FD9D245912DCA96150741EF5;
IL2CPP_EXTERN_C String_t* _stringLiteralF18D9351ADB98D1E281ABDAE06CD78D7EA630828;
IL2CPP_EXTERN_C String_t* _stringLiteralF455F86FAE600437E02E61A410A984183EB8EC54;
IL2CPP_EXTERN_C String_t* _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
IL2CPP_EXTERN_C String_t* _stringLiteralFA590547E6EFCCA8DA15CB0A84030B57AFDE8FA4;
IL2CPP_EXTERN_C String_t* _stringLiteralFB142E8FAC15B58FA1613BBFA334987193B27BBF;
IL2CPP_EXTERN_C String_t* _stringLiteralFCEC1331B0ED56283A557BB3EE79406A80D474CC;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_ToObject_TisDictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_m3AD2D687303F4E0B8AD4C4EAA456000D57216503_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96* ____entries_1;
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
	KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7* ____entries_1;
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
	KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// AnyThinkAds.Api.ATAdEventArgs
struct ATAdEventArgs_tACF382E072AE36E7C55A018FE3AF8D273C5C95CA  : public RuntimeObject
{
	// System.String AnyThinkAds.Api.ATAdEventArgs::<placementId>k__BackingField
	String_t* ___U3CplacementIdU3Ek__BackingField_0;
	// AnyThinkAds.Api.ATCallbackInfo AnyThinkAds.Api.ATAdEventArgs::<callbackInfo>k__BackingField
	ATCallbackInfo_tEAB4B96EDB8FA37AEF0E359D43E9AA128FCC6AEB* ___U3CcallbackInfoU3Ek__BackingField_1;
};

// AnyThinkAds.Api.ATBannerAd
struct ATBannerAd_t34DFAA451EED592F85506D138227347ED875BCA2  : public RuntimeObject
{
	// AnyThinkAds.Common.IATBannerAdClient AnyThinkAds.Api.ATBannerAd::client
	RuntimeObject* ___client_1;
};

struct ATBannerAd_t34DFAA451EED592F85506D138227347ED875BCA2_StaticFields
{
	// AnyThinkAds.Api.ATBannerAd AnyThinkAds.Api.ATBannerAd::instance
	ATBannerAd_t34DFAA451EED592F85506D138227347ED875BCA2* ___instance_0;
};

// AnyThinkAds.Api.ATBannerAdLoadingExtra
struct ATBannerAdLoadingExtra_tB7BE886F3735472AEC8919BDE71BDFB534A9DF96  : public RuntimeObject
{
};

struct ATBannerAdLoadingExtra_tB7BE886F3735472AEC8919BDE71BDFB534A9DF96_StaticFields
{
	// System.String AnyThinkAds.Api.ATBannerAdLoadingExtra::kATBannerAdLoadingExtraBannerAdSize
	String_t* ___kATBannerAdLoadingExtraBannerAdSize_0;
	// System.String AnyThinkAds.Api.ATBannerAdLoadingExtra::kATBannerAdLoadingExtraBannerAdSizeStruct
	String_t* ___kATBannerAdLoadingExtraBannerAdSizeStruct_1;
	// System.String AnyThinkAds.Api.ATBannerAdLoadingExtra::kATBannerAdSizeUsesPixelFlagKey
	String_t* ___kATBannerAdSizeUsesPixelFlagKey_2;
	// System.String AnyThinkAds.Api.ATBannerAdLoadingExtra::kATBannerAdShowingPisitionTop
	String_t* ___kATBannerAdShowingPisitionTop_3;
	// System.String AnyThinkAds.Api.ATBannerAdLoadingExtra::kATBannerAdShowingPisitionBottom
	String_t* ___kATBannerAdShowingPisitionBottom_4;
	// System.String AnyThinkAds.Api.ATBannerAdLoadingExtra::kATBannerAdLoadingExtraInlineAdaptiveWidth
	String_t* ___kATBannerAdLoadingExtraInlineAdaptiveWidth_5;
	// System.String AnyThinkAds.Api.ATBannerAdLoadingExtra::kATBannerAdLoadingExtraInlineAdaptiveOrientation
	String_t* ___kATBannerAdLoadingExtraInlineAdaptiveOrientation_6;
	// System.Int32 AnyThinkAds.Api.ATBannerAdLoadingExtra::kATBannerAdLoadingExtraInlineAdaptiveOrientationCurrent
	int32_t ___kATBannerAdLoadingExtraInlineAdaptiveOrientationCurrent_7;
	// System.Int32 AnyThinkAds.Api.ATBannerAdLoadingExtra::kATBannerAdLoadingExtraInlineAdaptiveOrientationPortrait
	int32_t ___kATBannerAdLoadingExtraInlineAdaptiveOrientationPortrait_8;
	// System.Int32 AnyThinkAds.Api.ATBannerAdLoadingExtra::kATBannerAdLoadingExtraInlineAdaptiveOrientationLandscape
	int32_t ___kATBannerAdLoadingExtraInlineAdaptiveOrientationLandscape_9;
	// System.String AnyThinkAds.Api.ATBannerAdLoadingExtra::kATBannerAdLoadingExtraAdaptiveWidth
	String_t* ___kATBannerAdLoadingExtraAdaptiveWidth_10;
	// System.String AnyThinkAds.Api.ATBannerAdLoadingExtra::kATBannerAdLoadingExtraAdaptiveOrientation
	String_t* ___kATBannerAdLoadingExtraAdaptiveOrientation_11;
	// System.Int32 AnyThinkAds.Api.ATBannerAdLoadingExtra::kATBannerAdLoadingExtraAdaptiveOrientationCurrent
	int32_t ___kATBannerAdLoadingExtraAdaptiveOrientationCurrent_12;
	// System.Int32 AnyThinkAds.Api.ATBannerAdLoadingExtra::kATBannerAdLoadingExtraAdaptiveOrientationPortrait
	int32_t ___kATBannerAdLoadingExtraAdaptiveOrientationPortrait_13;
	// System.Int32 AnyThinkAds.Api.ATBannerAdLoadingExtra::kATBannerAdLoadingExtraAdaptiveOrientationLandscape
	int32_t ___kATBannerAdLoadingExtraAdaptiveOrientationLandscape_14;
};

// AnyThinkAds.Api.ATCallbackInfo
struct ATCallbackInfo_tEAB4B96EDB8FA37AEF0E359D43E9AA128FCC6AEB  : public RuntimeObject
{
	// System.Int32 AnyThinkAds.Api.ATCallbackInfo::network_firm_id
	int32_t ___network_firm_id_0;
	// System.String AnyThinkAds.Api.ATCallbackInfo::adsource_id
	String_t* ___adsource_id_1;
	// System.Int32 AnyThinkAds.Api.ATCallbackInfo::adsource_index
	int32_t ___adsource_index_2;
	// System.Double AnyThinkAds.Api.ATCallbackInfo::adsource_price
	double ___adsource_price_3;
	// System.Int32 AnyThinkAds.Api.ATCallbackInfo::adsource_isheaderbidding
	int32_t ___adsource_isheaderbidding_4;
	// System.String AnyThinkAds.Api.ATCallbackInfo::id
	String_t* ___id_5;
	// System.Double AnyThinkAds.Api.ATCallbackInfo::publisher_revenue
	double ___publisher_revenue_6;
	// System.String AnyThinkAds.Api.ATCallbackInfo::currency
	String_t* ___currency_7;
	// System.String AnyThinkAds.Api.ATCallbackInfo::country
	String_t* ___country_8;
	// System.String AnyThinkAds.Api.ATCallbackInfo::adunit_id
	String_t* ___adunit_id_9;
	// System.String AnyThinkAds.Api.ATCallbackInfo::adunit_format
	String_t* ___adunit_format_10;
	// System.String AnyThinkAds.Api.ATCallbackInfo::precision
	String_t* ___precision_11;
	// System.String AnyThinkAds.Api.ATCallbackInfo::network_type
	String_t* ___network_type_12;
	// System.String AnyThinkAds.Api.ATCallbackInfo::network_placement_id
	String_t* ___network_placement_id_13;
	// System.Int32 AnyThinkAds.Api.ATCallbackInfo::ecpm_level
	int32_t ___ecpm_level_14;
	// System.Int32 AnyThinkAds.Api.ATCallbackInfo::segment_id
	int32_t ___segment_id_15;
	// System.String AnyThinkAds.Api.ATCallbackInfo::scenario_id
	String_t* ___scenario_id_16;
	// System.String AnyThinkAds.Api.ATCallbackInfo::scenario_reward_name
	String_t* ___scenario_reward_name_17;
	// System.Int32 AnyThinkAds.Api.ATCallbackInfo::scenario_reward_number
	int32_t ___scenario_reward_number_18;
	// System.String AnyThinkAds.Api.ATCallbackInfo::sub_channel
	String_t* ___sub_channel_19;
	// System.String AnyThinkAds.Api.ATCallbackInfo::channel
	String_t* ___channel_20;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> AnyThinkAds.Api.ATCallbackInfo::custom_rule
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___custom_rule_21;
	// System.String AnyThinkAds.Api.ATCallbackInfo::reward_custom_data
	String_t* ___reward_custom_data_22;
	// System.String AnyThinkAds.Api.ATCallbackInfo::callbackJson
	String_t* ___callbackJson_23;
};

// AnyThinkAds.Api.ATConst
struct ATConst_tC4379944A54BD1D08DADD87FB3878EC04620C8E7  : public RuntimeObject
{
};

// AnyThinkAds.Api.ATDownloadManager
struct ATDownloadManager_t7CF62A4FEFB0854016FA6E98BA4C59AAD967272B  : public RuntimeObject
{
	// AnyThinkAds.Common.IATDownloadClient AnyThinkAds.Api.ATDownloadManager::client
	RuntimeObject* ___client_1;
};

struct ATDownloadManager_t7CF62A4FEFB0854016FA6E98BA4C59AAD967272B_StaticFields
{
	// AnyThinkAds.Api.ATDownloadManager AnyThinkAds.Api.ATDownloadManager::instance
	ATDownloadManager_t7CF62A4FEFB0854016FA6E98BA4C59AAD967272B* ___instance_0;
};

// AnyThinkAds.Api.ATInterstitialAd
struct ATInterstitialAd_t68C4D29B8572B16C2F1EFF99D6FC2BE0AA339817  : public RuntimeObject
{
	// AnyThinkAds.Common.IATInterstitialAdClient AnyThinkAds.Api.ATInterstitialAd::client
	RuntimeObject* ___client_1;
};

struct ATInterstitialAd_t68C4D29B8572B16C2F1EFF99D6FC2BE0AA339817_StaticFields
{
	// AnyThinkAds.Api.ATInterstitialAd AnyThinkAds.Api.ATInterstitialAd::instance
	ATInterstitialAd_t68C4D29B8572B16C2F1EFF99D6FC2BE0AA339817* ___instance_0;
};

// AnyThinkAds.Api.ATInterstitialAdLoadingExtra
struct ATInterstitialAdLoadingExtra_tBDE0F8742C81BD918736554917D67DEE3884A509  : public RuntimeObject
{
};

struct ATInterstitialAdLoadingExtra_tBDE0F8742C81BD918736554917D67DEE3884A509_StaticFields
{
	// System.String AnyThinkAds.Api.ATInterstitialAdLoadingExtra::kATInterstitialAdLoadingExtraInterstitialAdSize
	String_t* ___kATInterstitialAdLoadingExtraInterstitialAdSize_0;
	// System.String AnyThinkAds.Api.ATInterstitialAdLoadingExtra::kATInterstitialAdLoadingExtraInterstitialAdSizeStruct
	String_t* ___kATInterstitialAdLoadingExtraInterstitialAdSizeStruct_1;
	// System.String AnyThinkAds.Api.ATInterstitialAdLoadingExtra::kATInterstitialAdSizeUsesPixelFlagKey
	String_t* ___kATInterstitialAdSizeUsesPixelFlagKey_2;
};

// AnyThinkAds.Api.ATInterstitialAutoAd
struct ATInterstitialAutoAd_t73C090E631B76B76539F75A908A8875FEF823DCB  : public RuntimeObject
{
	// AnyThinkAds.Common.IATInterstitialAdClient AnyThinkAds.Api.ATInterstitialAutoAd::client
	RuntimeObject* ___client_1;
};

struct ATInterstitialAutoAd_t73C090E631B76B76539F75A908A8875FEF823DCB_StaticFields
{
	// AnyThinkAds.Api.ATInterstitialAutoAd AnyThinkAds.Api.ATInterstitialAutoAd::instance
	ATInterstitialAutoAd_t73C090E631B76B76539F75A908A8875FEF823DCB* ___instance_0;
};

// AnyThinkAds.Api.ATNativeAd
struct ATNativeAd_t2015F7596076CA06AF4B5854E81CEA0BD7E1B2FB  : public RuntimeObject
{
	// AnyThinkAds.Common.IATNativeAdClient AnyThinkAds.Api.ATNativeAd::client
	RuntimeObject* ___client_1;
};

struct ATNativeAd_t2015F7596076CA06AF4B5854E81CEA0BD7E1B2FB_StaticFields
{
	// AnyThinkAds.Api.ATNativeAd AnyThinkAds.Api.ATNativeAd::instance
	ATNativeAd_t2015F7596076CA06AF4B5854E81CEA0BD7E1B2FB* ___instance_0;
};

// AnyThinkAds.Api.ATNativeAdLoadingExtra
struct ATNativeAdLoadingExtra_tD57B2018036CA3FCCC6FC6645E41B7B53C50E98D  : public RuntimeObject
{
};

struct ATNativeAdLoadingExtra_tD57B2018036CA3FCCC6FC6645E41B7B53C50E98D_StaticFields
{
	// System.String AnyThinkAds.Api.ATNativeAdLoadingExtra::kATNativeAdLoadingExtraNativeAdSizeStruct
	String_t* ___kATNativeAdLoadingExtraNativeAdSizeStruct_0;
	// System.String AnyThinkAds.Api.ATNativeAdLoadingExtra::kATNativeAdLoadingExtraNativeAdSize
	String_t* ___kATNativeAdLoadingExtraNativeAdSize_1;
	// System.String AnyThinkAds.Api.ATNativeAdLoadingExtra::kATNativeAdSizeUsesPixelFlagKey
	String_t* ___kATNativeAdSizeUsesPixelFlagKey_2;
};

// AnyThinkAds.Api.ATNativeAdView
struct ATNativeAdView_tBBD4CA9EBDE5D330CC866EB249E872D5C287F18C  : public RuntimeObject
{
	// AnyThinkAds.Api.ATNativeConfig AnyThinkAds.Api.ATNativeAdView::config
	ATNativeConfig_t1C2488BAA15F3BE2BF56F58A95F48B386B9E9D1A* ___config_0;
	// System.String AnyThinkAds.Api.ATNativeAdView::parentKey
	String_t* ___parentKey_1;
	// System.String AnyThinkAds.Api.ATNativeAdView::appIconKey
	String_t* ___appIconKey_2;
	// System.String AnyThinkAds.Api.ATNativeAdView::mainImageKey
	String_t* ___mainImageKey_3;
	// System.String AnyThinkAds.Api.ATNativeAdView::titleKey
	String_t* ___titleKey_4;
	// System.String AnyThinkAds.Api.ATNativeAdView::descKey
	String_t* ___descKey_5;
	// System.String AnyThinkAds.Api.ATNativeAdView::adLogoKey
	String_t* ___adLogoKey_6;
	// System.String AnyThinkAds.Api.ATNativeAdView::ctaButtonKey
	String_t* ___ctaButtonKey_7;
	// System.String AnyThinkAds.Api.ATNativeAdView::dislikeButtonKey
	String_t* ___dislikeButtonKey_8;
};

// AnyThinkAds.Api.ATNativeBannerAd
struct ATNativeBannerAd_tE58854FA0A73E26146A20E25FF3F3D937203AFEC  : public RuntimeObject
{
	// AnyThinkAds.Common.IATNativeBannerAdClient AnyThinkAds.Api.ATNativeBannerAd::client
	RuntimeObject* ___client_1;
};

struct ATNativeBannerAd_tE58854FA0A73E26146A20E25FF3F3D937203AFEC_StaticFields
{
	// AnyThinkAds.Api.ATNativeBannerAd AnyThinkAds.Api.ATNativeBannerAd::instance
	ATNativeBannerAd_tE58854FA0A73E26146A20E25FF3F3D937203AFEC* ___instance_0;
};

// AnyThinkAds.Api.ATNativeBannerAdShowingExtra
struct ATNativeBannerAdShowingExtra_t0FE66289975CC9B69EDA88DB3846C945A42185A1  : public RuntimeObject
{
};

struct ATNativeBannerAdShowingExtra_t0FE66289975CC9B69EDA88DB3846C945A42185A1_StaticFields
{
	// System.String AnyThinkAds.Api.ATNativeBannerAdShowingExtra::kATNativeBannerAdShowingExtraBackgroundColor
	String_t* ___kATNativeBannerAdShowingExtraBackgroundColor_0;
	// System.String AnyThinkAds.Api.ATNativeBannerAdShowingExtra::kATNativeBannerAdShowingExtraAutorefreshInterval
	String_t* ___kATNativeBannerAdShowingExtraAutorefreshInterval_1;
	// System.String AnyThinkAds.Api.ATNativeBannerAdShowingExtra::kATNativeBannerAdShowingExtraHideCloseButtonFlag
	String_t* ___kATNativeBannerAdShowingExtraHideCloseButtonFlag_2;
	// System.String AnyThinkAds.Api.ATNativeBannerAdShowingExtra::kATNativeBannerAdShowingExtraCTAButtonBackgroundColor
	String_t* ___kATNativeBannerAdShowingExtraCTAButtonBackgroundColor_3;
	// System.String AnyThinkAds.Api.ATNativeBannerAdShowingExtra::kATNativeBannerAdShowingExtraCTATextColor
	String_t* ___kATNativeBannerAdShowingExtraCTATextColor_4;
	// System.String AnyThinkAds.Api.ATNativeBannerAdShowingExtra::kATNativeBannerAdShowingExtraCTATextFont
	String_t* ___kATNativeBannerAdShowingExtraCTATextFont_5;
	// System.String AnyThinkAds.Api.ATNativeBannerAdShowingExtra::kATNativeBannerAdShowingExtraTitleColor
	String_t* ___kATNativeBannerAdShowingExtraTitleColor_6;
	// System.String AnyThinkAds.Api.ATNativeBannerAdShowingExtra::kATNativeBannerAdShowingExtraTitleFont
	String_t* ___kATNativeBannerAdShowingExtraTitleFont_7;
	// System.String AnyThinkAds.Api.ATNativeBannerAdShowingExtra::kATNativeBannerAdShowingExtraTextColor
	String_t* ___kATNativeBannerAdShowingExtraTextColor_8;
	// System.String AnyThinkAds.Api.ATNativeBannerAdShowingExtra::kATNativeBannerAdShowingExtraTextFont
	String_t* ___kATNativeBannerAdShowingExtraTextFont_9;
	// System.String AnyThinkAds.Api.ATNativeBannerAdShowingExtra::kATNativeBannerAdShowingExtraAdvertiserTextFont
	String_t* ___kATNativeBannerAdShowingExtraAdvertiserTextFont_10;
	// System.String AnyThinkAds.Api.ATNativeBannerAdShowingExtra::kATNativeBannerAdShowingExtraAdvertiserTextColor
	String_t* ___kATNativeBannerAdShowingExtraAdvertiserTextColor_11;
};

// AnyThinkAds.Api.ATNativeConfig
struct ATNativeConfig_t1C2488BAA15F3BE2BF56F58A95F48B386B9E9D1A  : public RuntimeObject
{
	// AnyThinkAds.Api.ATNativeItemProperty AnyThinkAds.Api.ATNativeConfig::parentProperty
	ATNativeItemProperty_t58B41E7E5AB08D343652315D7CF53AD2EBB2349A* ___parentProperty_0;
	// AnyThinkAds.Api.ATNativeItemProperty AnyThinkAds.Api.ATNativeConfig::appIconProperty
	ATNativeItemProperty_t58B41E7E5AB08D343652315D7CF53AD2EBB2349A* ___appIconProperty_1;
	// AnyThinkAds.Api.ATNativeItemProperty AnyThinkAds.Api.ATNativeConfig::mainImageProperty
	ATNativeItemProperty_t58B41E7E5AB08D343652315D7CF53AD2EBB2349A* ___mainImageProperty_2;
	// AnyThinkAds.Api.ATNativeItemProperty AnyThinkAds.Api.ATNativeConfig::titleProperty
	ATNativeItemProperty_t58B41E7E5AB08D343652315D7CF53AD2EBB2349A* ___titleProperty_3;
	// AnyThinkAds.Api.ATNativeItemProperty AnyThinkAds.Api.ATNativeConfig::descProperty
	ATNativeItemProperty_t58B41E7E5AB08D343652315D7CF53AD2EBB2349A* ___descProperty_4;
	// AnyThinkAds.Api.ATNativeItemProperty AnyThinkAds.Api.ATNativeConfig::adLogoProperty
	ATNativeItemProperty_t58B41E7E5AB08D343652315D7CF53AD2EBB2349A* ___adLogoProperty_5;
	// AnyThinkAds.Api.ATNativeItemProperty AnyThinkAds.Api.ATNativeConfig::ctaButtonProperty
	ATNativeItemProperty_t58B41E7E5AB08D343652315D7CF53AD2EBB2349A* ___ctaButtonProperty_6;
	// AnyThinkAds.Api.ATNativeItemProperty AnyThinkAds.Api.ATNativeConfig::dislikeButtonProperty
	ATNativeItemProperty_t58B41E7E5AB08D343652315D7CF53AD2EBB2349A* ___dislikeButtonProperty_7;
};

// AnyThinkAds.Api.ATNativeItemProperty
struct ATNativeItemProperty_t58B41E7E5AB08D343652315D7CF53AD2EBB2349A  : public RuntimeObject
{
	// System.Int32 AnyThinkAds.Api.ATNativeItemProperty::x
	int32_t ___x_0;
	// System.Int32 AnyThinkAds.Api.ATNativeItemProperty::y
	int32_t ___y_1;
	// System.Int32 AnyThinkAds.Api.ATNativeItemProperty::width
	int32_t ___width_2;
	// System.Int32 AnyThinkAds.Api.ATNativeItemProperty::height
	int32_t ___height_3;
	// System.Boolean AnyThinkAds.Api.ATNativeItemProperty::usesPixel
	bool ___usesPixel_4;
	// System.String AnyThinkAds.Api.ATNativeItemProperty::backgroundColor
	String_t* ___backgroundColor_5;
	// System.String AnyThinkAds.Api.ATNativeItemProperty::textColor
	String_t* ___textColor_6;
	// System.Int32 AnyThinkAds.Api.ATNativeItemProperty::textSize
	int32_t ___textSize_7;
	// System.Boolean AnyThinkAds.Api.ATNativeItemProperty::isCustomClick
	bool ___isCustomClick_8;
};

// AnyThinkAds.Api.ATRect
struct ATRect_tBBC85FAC20A1E12B1EB9F3CE00870B793834C7C2  : public RuntimeObject
{
	// System.Int32 AnyThinkAds.Api.ATRect::x
	int32_t ___x_0;
	// System.Int32 AnyThinkAds.Api.ATRect::y
	int32_t ___y_1;
	// System.Int32 AnyThinkAds.Api.ATRect::width
	int32_t ___width_2;
	// System.Int32 AnyThinkAds.Api.ATRect::height
	int32_t ___height_3;
	// System.Boolean AnyThinkAds.Api.ATRect::usesPixel
	bool ___usesPixel_4;
};

// AnyThinkAds.Api.ATRewardedAutoVideo
struct ATRewardedAutoVideo_t186A232BB8A51374EC69B092A3AE1E678BC0DE36  : public RuntimeObject
{
	// AnyThinkAds.Common.IATRewardedVideoAdClient AnyThinkAds.Api.ATRewardedAutoVideo::client
	RuntimeObject* ___client_1;
};

struct ATRewardedAutoVideo_t186A232BB8A51374EC69B092A3AE1E678BC0DE36_StaticFields
{
	// AnyThinkAds.Api.ATRewardedAutoVideo AnyThinkAds.Api.ATRewardedAutoVideo::instance
	ATRewardedAutoVideo_t186A232BB8A51374EC69B092A3AE1E678BC0DE36* ___instance_0;
};

// AnyThinkAds.Api.ATRewardedVideo
struct ATRewardedVideo_tFF1F706884EA5B4FFF4DA6829157F6150DABFB97  : public RuntimeObject
{
	// AnyThinkAds.Common.IATRewardedVideoAdClient AnyThinkAds.Api.ATRewardedVideo::client
	RuntimeObject* ___client_1;
};

struct ATRewardedVideo_tFF1F706884EA5B4FFF4DA6829157F6150DABFB97_StaticFields
{
	// AnyThinkAds.Api.ATRewardedVideo AnyThinkAds.Api.ATRewardedVideo::instance
	ATRewardedVideo_tFF1F706884EA5B4FFF4DA6829157F6150DABFB97* ___instance_0;
};

// AnyThinkAds.Api.ATSDKAPI
struct ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6  : public RuntimeObject
{
};

struct ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_StaticFields
{
	// System.Int32 AnyThinkAds.Api.ATSDKAPI::kATUserLocationUnknown
	int32_t ___kATUserLocationUnknown_0;
	// System.Int32 AnyThinkAds.Api.ATSDKAPI::kATUserLocationInEU
	int32_t ___kATUserLocationInEU_1;
	// System.Int32 AnyThinkAds.Api.ATSDKAPI::kATUserLocationOutOfEU
	int32_t ___kATUserLocationOutOfEU_2;
	// System.Int32 AnyThinkAds.Api.ATSDKAPI::PERSONALIZED
	int32_t ___PERSONALIZED_3;
	// System.Int32 AnyThinkAds.Api.ATSDKAPI::NONPERSONALIZED
	int32_t ___NONPERSONALIZED_4;
	// System.Int32 AnyThinkAds.Api.ATSDKAPI::UNKNOWN
	int32_t ___UNKNOWN_5;
	// System.Int32 AnyThinkAds.Api.ATSDKAPI::AREA_GLOBAL
	int32_t ___AREA_GLOBAL_6;
	// System.Int32 AnyThinkAds.Api.ATSDKAPI::AREA_CHINESE_MAINLAND
	int32_t ___AREA_CHINESE_MAINLAND_7;
	// System.String AnyThinkAds.Api.ATSDKAPI::OS_VERSION_NAME
	String_t* ___OS_VERSION_NAME_8;
	// System.String AnyThinkAds.Api.ATSDKAPI::OS_VERSION_CODE
	String_t* ___OS_VERSION_CODE_9;
	// System.String AnyThinkAds.Api.ATSDKAPI::APP_PACKAGE_NAME
	String_t* ___APP_PACKAGE_NAME_10;
	// System.String AnyThinkAds.Api.ATSDKAPI::APP_VERSION_NAME
	String_t* ___APP_VERSION_NAME_11;
	// System.String AnyThinkAds.Api.ATSDKAPI::APP_VERSION_CODE
	String_t* ___APP_VERSION_CODE_12;
	// System.String AnyThinkAds.Api.ATSDKAPI::BRAND
	String_t* ___BRAND_13;
	// System.String AnyThinkAds.Api.ATSDKAPI::MODEL
	String_t* ___MODEL_14;
	// System.String AnyThinkAds.Api.ATSDKAPI::DEVICE_SCREEN_SIZE
	String_t* ___DEVICE_SCREEN_SIZE_15;
	// System.String AnyThinkAds.Api.ATSDKAPI::MNC
	String_t* ___MNC_16;
	// System.String AnyThinkAds.Api.ATSDKAPI::MCC
	String_t* ___MCC_17;
	// System.String AnyThinkAds.Api.ATSDKAPI::LANGUAGE
	String_t* ___LANGUAGE_18;
	// System.String AnyThinkAds.Api.ATSDKAPI::TIMEZONE
	String_t* ___TIMEZONE_19;
	// System.String AnyThinkAds.Api.ATSDKAPI::USER_AGENT
	String_t* ___USER_AGENT_20;
	// System.String AnyThinkAds.Api.ATSDKAPI::ORIENTATION
	String_t* ___ORIENTATION_21;
	// System.String AnyThinkAds.Api.ATSDKAPI::NETWORK_TYPE
	String_t* ___NETWORK_TYPE_22;
	// System.String AnyThinkAds.Api.ATSDKAPI::INSTALLER
	String_t* ___INSTALLER_23;
	// System.String AnyThinkAds.Api.ATSDKAPI::ANDROID_ID
	String_t* ___ANDROID_ID_24;
	// System.String AnyThinkAds.Api.ATSDKAPI::GAID
	String_t* ___GAID_25;
	// System.String AnyThinkAds.Api.ATSDKAPI::MAC
	String_t* ___MAC_26;
	// System.String AnyThinkAds.Api.ATSDKAPI::IMEI
	String_t* ___IMEI_27;
	// System.String AnyThinkAds.Api.ATSDKAPI::OAID
	String_t* ___OAID_28;
	// System.String AnyThinkAds.Api.ATSDKAPI::IDFA
	String_t* ___IDFA_29;
	// System.String AnyThinkAds.Api.ATSDKAPI::IDFV
	String_t* ___IDFV_30;
	// AnyThinkAds.Common.IATSDKAPIClient AnyThinkAds.Api.ATSDKAPI::client
	RuntimeObject* ___client_31;
};

// AnyThinkAds.Api.ATSize
struct ATSize_tB526AFFCD84BA3CC54C85D8125F2B279B6C3588D  : public RuntimeObject
{
	// System.Int32 AnyThinkAds.Api.ATSize::width
	int32_t ___width_0;
	// System.Int32 AnyThinkAds.Api.ATSize::height
	int32_t ___height_1;
	// System.Boolean AnyThinkAds.Api.ATSize::usesPixel
	bool ___usesPixel_2;
};
struct Il2CppArrayBounds;

// AnyThinkAds.ThirdParty.LitJson.JsonData
struct JsonData_tC2CA8D7C407ECAC4EE42392A60118C480372F7B8  : public RuntimeObject
{
	// System.Collections.Generic.IList`1<AnyThinkAds.ThirdParty.LitJson.JsonData> AnyThinkAds.ThirdParty.LitJson.JsonData::inst_array
	RuntimeObject* ___inst_array_0;
	// System.Boolean AnyThinkAds.ThirdParty.LitJson.JsonData::inst_boolean
	bool ___inst_boolean_1;
	// System.Double AnyThinkAds.ThirdParty.LitJson.JsonData::inst_double
	double ___inst_double_2;
	// System.Int32 AnyThinkAds.ThirdParty.LitJson.JsonData::inst_int
	int32_t ___inst_int_3;
	// System.Int64 AnyThinkAds.ThirdParty.LitJson.JsonData::inst_long
	int64_t ___inst_long_4;
	// System.Collections.Generic.IDictionary`2<System.String,AnyThinkAds.ThirdParty.LitJson.JsonData> AnyThinkAds.ThirdParty.LitJson.JsonData::inst_object
	RuntimeObject* ___inst_object_5;
	// System.String AnyThinkAds.ThirdParty.LitJson.JsonData::inst_string
	String_t* ___inst_string_6;
	// System.String AnyThinkAds.ThirdParty.LitJson.JsonData::json
	String_t* ___json_7;
	// AnyThinkAds.ThirdParty.LitJson.JsonType AnyThinkAds.ThirdParty.LitJson.JsonData::type
	int32_t ___type_8;
	// System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,AnyThinkAds.ThirdParty.LitJson.JsonData>> AnyThinkAds.ThirdParty.LitJson.JsonData::object_list
	RuntimeObject* ___object_list_9;
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

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
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

// AnyThinkAds.Api.ATAdErrorEventArgs
struct ATAdErrorEventArgs_t8A61AA2BB6E96BFE7387A05EED0128A3D2BD3314  : public ATAdEventArgs_tACF382E072AE36E7C55A018FE3AF8D273C5C95CA
{
	// System.String AnyThinkAds.Api.ATAdErrorEventArgs::<errorMessage>k__BackingField
	String_t* ___U3CerrorMessageU3Ek__BackingField_2;
	// System.String AnyThinkAds.Api.ATAdErrorEventArgs::<errorCode>k__BackingField
	String_t* ___U3CerrorCodeU3Ek__BackingField_3;
};

// AnyThinkAds.Api.ATAdProgressEventArgs
struct ATAdProgressEventArgs_tD43B6F0E5FEE8F01533D199C6FD9AEF8046D13E5  : public ATAdEventArgs_tACF382E072AE36E7C55A018FE3AF8D273C5C95CA
{
	// System.Int32 AnyThinkAds.Api.ATAdProgressEventArgs::<adProgress>k__BackingField
	int32_t ___U3CadProgressU3Ek__BackingField_2;
};

// AnyThinkAds.Api.ATAdRewardEventArgs
struct ATAdRewardEventArgs_t169DED6F7BEE7E52674898B6DAF423E40E48D665  : public ATAdEventArgs_tACF382E072AE36E7C55A018FE3AF8D273C5C95CA
{
	// System.Boolean AnyThinkAds.Api.ATAdRewardEventArgs::<isRewarded>k__BackingField
	bool ___U3CisRewardedU3Ek__BackingField_2;
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

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=112
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D112_t338F22B6F3CC67FDBAE2DB73218458D355AA2089 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D112_t338F22B6F3CC67FDBAE2DB73218458D355AA2089__padding[112];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D12_t1BDD2193C3F925556BCD5FF35C0AC52DDB0CAB8F 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D12_t1BDD2193C3F925556BCD5FF35C0AC52DDB0CAB8F__padding[12];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::59B7E757844D3BF9299877BD1C17451611BFBAB493374D6B18D973FDE534151A
	__StaticArrayInitTypeSizeU3D12_t1BDD2193C3F925556BCD5FF35C0AC52DDB0CAB8F ___59B7E757844D3BF9299877BD1C17451611BFBAB493374D6B18D973FDE534151A_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::5B979F69B96A61586A09DD4ED26F20534C629B08732AE32FA34B6F8A0049ACDD
	__StaticArrayInitTypeSizeU3D12_t1BDD2193C3F925556BCD5FF35C0AC52DDB0CAB8F ___5B979F69B96A61586A09DD4ED26F20534C629B08732AE32FA34B6F8A0049ACDD_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::7FCA397EF25DB53B2C58A05F9BBFA4E8E0685FDBC8AAF39536123447056895C0
	__StaticArrayInitTypeSizeU3D12_t1BDD2193C3F925556BCD5FF35C0AC52DDB0CAB8F ___7FCA397EF25DB53B2C58A05F9BBFA4E8E0685FDBC8AAF39536123447056895C0_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::B257E85A5D3CAB5E738D5A0FD1A7AE96624BFE92CB7915726CBBE1518C3225CF
	__StaticArrayInitTypeSizeU3D12_t1BDD2193C3F925556BCD5FF35C0AC52DDB0CAB8F ___B257E85A5D3CAB5E738D5A0FD1A7AE96624BFE92CB7915726CBBE1518C3225CF_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::B7A918F6F138CA8137025633559198B529D28CCEC5A51B005376CC69A5B83D85
	__StaticArrayInitTypeSizeU3D12_t1BDD2193C3F925556BCD5FF35C0AC52DDB0CAB8F ___B7A918F6F138CA8137025633559198B529D28CCEC5A51B005376CC69A5B83D85_4;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=112 <PrivateImplementationDetails>::C84227140A8A7787B30DFF8BD5693C19AA5A430C4E89FFD0256D7F77B3FEAD82
	__StaticArrayInitTypeSizeU3D112_t338F22B6F3CC67FDBAE2DB73218458D355AA2089 ___C84227140A8A7787B30DFF8BD5693C19AA5A430C4E89FFD0256D7F77B3FEAD82_5;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::FC03ECB1D62767A5B31230F548FA4D4C02F01E3DA8CA1FC66C7C332EA16BF206
	__StaticArrayInitTypeSizeU3D12_t1BDD2193C3F925556BCD5FF35C0AC52DDB0CAB8F ___FC03ECB1D62767A5B31230F548FA4D4C02F01E3DA8CA1FC66C7C332EA16BF206_6;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
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


// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// T AnyThinkAds.ThirdParty.LitJson.JsonMapper::ToObject<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonMapper_ToObject_TisRuntimeObject_m31BF0A500ECE865406ED3D1682416A90C17EA8F8_gshared (String_t* ___json0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void AnyThinkAds.Api.ATCallbackInfo::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATCallbackInfo__ctor_mE81C76E2CE2891D12090496B5D51A5F91D797745 (ATCallbackInfo_tEAB4B96EDB8FA37AEF0E359D43E9AA128FCC6AEB* __this, String_t* ___callbackJson0, const RuntimeMethod* method) ;
// System.Void AnyThinkAds.Api.ATAdEventArgs::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATAdEventArgs__ctor_m1D4817907AD0CE8320C9C1A46809853C464A9FCD (ATAdEventArgs_tACF382E072AE36E7C55A018FE3AF8D273C5C95CA* __this, String_t* ___id0, const RuntimeMethod* method) ;
// System.Void AnyThinkAds.Api.ATAdEventArgs::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATAdEventArgs__ctor_m4F697F7A38CE7C5A1965623ECA9976830A8DAD8C (ATAdEventArgs_tACF382E072AE36E7C55A018FE3AF8D273C5C95CA* __this, String_t* ___id0, String_t* ___callbackJson1, const RuntimeMethod* method) ;
// AnyThinkAds.Common.IATBannerAdClient AnyThinkAds.Api.ATBannerAd::GetATBannerAdClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ATBannerAd_GetATBannerAdClient_m6DDE5AA6F83493C2ECC9F9348EAF8EB8E7DB2958 (ATBannerAd_t34DFAA451EED592F85506D138227347ED875BCA2* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___key0, method);
}
// System.String AnyThinkAds.ThirdParty.LitJson.JsonMapper::ToJson(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonMapper_ToJson_m640303EB0458D6FC503ACB6AFECB29F3EAC84336 (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(TKey)
inline RuntimeObject* Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___key0, method);
}
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(TKey,TValue)
inline void Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, String_t* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, String_t*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// AnyThinkAds.Common.IATBannerAdClient AnyThinkAds.ATAdsClientFactory::BuildBannerAdClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ATAdsClientFactory_BuildBannerAdClient_m24A9E1ED98105C85F75F32847312224DFD187294 (const RuntimeMethod* method) ;
// System.Void AnyThinkAds.Api.ATBannerAd::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATBannerAd__ctor_mF76A898AAC57C7279D898E242052595470B2209F (ATBannerAd_t34DFAA451EED592F85506D138227347ED875BCA2* __this, const RuntimeMethod* method) ;
// AnyThinkAds.ThirdParty.LitJson.JsonData AnyThinkAds.ThirdParty.LitJson.JsonMapper::ToObject(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonData_tC2CA8D7C407ECAC4EE42392A60118C480372F7B8* JsonMapper_ToObject_m6F172C5533804E8F5D2CD9BA74E86387BEA1159B (String_t* ___json0, const RuntimeMethod* method) ;
// System.Boolean AnyThinkAds.ThirdParty.LitJson.JsonData::ContainsKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_ContainsKey_mEBB01415765C9AD822B46C0786E0B52F00C37C29 (JsonData_tC2CA8D7C407ECAC4EE42392A60118C480372F7B8* __this, String_t* ___key0, const RuntimeMethod* method) ;
// AnyThinkAds.ThirdParty.LitJson.JsonData AnyThinkAds.ThirdParty.LitJson.JsonData::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonData_tC2CA8D7C407ECAC4EE42392A60118C480372F7B8* JsonData_get_Item_m00EAC67BB1E47EFC8CAA78F47F4A5D4ED6057661 (JsonData_tC2CA8D7C407ECAC4EE42392A60118C480372F7B8* __this, String_t* ___prop_name0, const RuntimeMethod* method) ;
// System.Int32 System.Int32::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0 (String_t* ___s0, const RuntimeMethod* method) ;
// System.String AnyThinkAds.ThirdParty.LitJson.JsonData::op_Explicit(AnyThinkAds.ThirdParty.LitJson.JsonData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonData_op_Explicit_mE4A176D7A819698E397AF2A942FF2CB169F47AC0 (JsonData_tC2CA8D7C407ECAC4EE42392A60118C480372F7B8* ___data0, const RuntimeMethod* method) ;
// System.Double System.Double::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Double_Parse_mEBC644CE0C86A405283EC4839F872EF9E556670A (String_t* ___s0, const RuntimeMethod* method) ;
// System.String AnyThinkAds.ThirdParty.LitJson.JsonData::ToJson()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonData_ToJson_m2ADCB6573BE417AADDE02183221830F52613B94B (JsonData_tC2CA8D7C407ECAC4EE42392A60118C480372F7B8* __this, const RuntimeMethod* method) ;
// T AnyThinkAds.ThirdParty.LitJson.JsonMapper::ToObject<System.Collections.Generic.Dictionary`2<System.String,System.Object>>(System.String)
inline Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* JsonMapper_ToObject_TisDictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_m3AD2D687303F4E0B8AD4C4EAA456000D57216503 (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* (*) (String_t*, const RuntimeMethod*))JsonMapper_ToObject_TisRuntimeObject_m31BF0A500ECE865406ED3D1682416A90C17EA8F8_gshared)(___json0, method);
}
// System.Void System.Console::WriteLine(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Console_WriteLine_mCF1AA33709B943A23A5CA168DF7972F4DAB53011 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
inline void Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// AnyThinkAds.Common.IATDownloadClient AnyThinkAds.Api.ATDownloadManager::GetATDownloadClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ATDownloadManager_GetATDownloadClient_mDFF4044D1AB6059A6E37159DDE6521B2762AC946 (ATDownloadManager_t7CF62A4FEFB0854016FA6E98BA4C59AAD967272B* __this, const RuntimeMethod* method) ;
// AnyThinkAds.Common.IATDownloadClient AnyThinkAds.ATAdsClientFactory::BuildDownloadClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ATAdsClientFactory_BuildDownloadClient_m01BEAA96DE6F67DE37B14B442038A84392089C0A (const RuntimeMethod* method) ;
// System.Void AnyThinkAds.Api.ATDownloadManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATDownloadManager__ctor_m64D1D4CBF4F7B76A6B228DDC40003012A4C75DD6 (ATDownloadManager_t7CF62A4FEFB0854016FA6E98BA4C59AAD967272B* __this, const RuntimeMethod* method) ;
// AnyThinkAds.Common.IATInterstitialAdClient AnyThinkAds.Api.ATInterstitialAd::GetATInterstitialAdClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ATInterstitialAd_GetATInterstitialAdClient_m62231E37E232FC8667C708DDB6776925B72A92CA (ATInterstitialAd_t68C4D29B8572B16C2F1EFF99D6FC2BE0AA339817* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
inline void Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// AnyThinkAds.Common.IATInterstitialAdClient AnyThinkAds.ATAdsClientFactory::BuildInterstitialAdClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ATAdsClientFactory_BuildInterstitialAdClient_m6014DFF80BD26B751FAF92AE1B759DB7A5B7908D (const RuntimeMethod* method) ;
// System.Void AnyThinkAds.Api.ATInterstitialAd::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATInterstitialAd__ctor_m9874DE86B16F638ABC4E130FC010823146557BC7 (ATInterstitialAd_t68C4D29B8572B16C2F1EFF99D6FC2BE0AA339817* __this, const RuntimeMethod* method) ;
// AnyThinkAds.Common.IATInterstitialAdClient AnyThinkAds.Api.ATInterstitialAutoAd::GetATInterstitialAdClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ATInterstitialAutoAd_GetATInterstitialAdClient_m4651472CE4648AB839281D7CCD53601284F8F769 (ATInterstitialAutoAd_t73C090E631B76B76539F75A908A8875FEF823DCB* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void AnyThinkAds.Api.ATInterstitialAutoAd::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATInterstitialAutoAd__ctor_m72B186CF744A756B6942B0AC716B99B737E2F5F9 (ATInterstitialAutoAd_t73C090E631B76B76539F75A908A8875FEF823DCB* __this, const RuntimeMethod* method) ;
// AnyThinkAds.Common.IATNativeAdClient AnyThinkAds.Api.ATNativeAd::GetATNativeAdClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ATNativeAd_GetATNativeAdClient_m6DECED9819AD205496269D71232AE4335B893190 (ATNativeAd_t2015F7596076CA06AF4B5854E81CEA0BD7E1B2FB* __this, const RuntimeMethod* method) ;
// AnyThinkAds.Common.IATNativeAdClient AnyThinkAds.ATAdsClientFactory::BuildNativeAdClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ATAdsClientFactory_BuildNativeAdClient_m77A89B3892F66666F279433A4BFD5841B174AA8B (const RuntimeMethod* method) ;
// System.Void AnyThinkAds.Api.ATNativeAd::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATNativeAd__ctor_m87494718B200DC48F14CEA528D1E59F8C50D2487 (ATNativeAd_t2015F7596076CA06AF4B5854E81CEA0BD7E1B2FB* __this, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String UnityEngine.JsonUtility::ToJson(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonUtility_ToJson_m28CC6843B9D3723D88AD13EA3829B71FDE7826BA (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Boolean System.String::EndsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_EndsWith_mCD3754F5401E19CE7821CD398986E4EAA6AD87DC (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method) ;
// AnyThinkAds.Common.IATNativeBannerAdClient AnyThinkAds.Api.ATNativeBannerAd::GetATNativeBannerAdClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ATNativeBannerAd_GetATNativeBannerAdClient_mC1C8967325B4670DCC85ACFD3E9E108439BA1155 (ATNativeBannerAd_tE58854FA0A73E26146A20E25FF3F3D937203AFEC* __this, const RuntimeMethod* method) ;
// AnyThinkAds.Common.IATNativeBannerAdClient AnyThinkAds.ATAdsClientFactory::BuildNativeBannerAdClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ATAdsClientFactory_BuildNativeBannerAdClient_m2AE4C998D94CD271CCFD1F8443E9F8C9B79DAEBC (const RuntimeMethod* method) ;
// System.Void AnyThinkAds.Api.ATNativeBannerAd::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATNativeBannerAd__ctor_m2B334A6D47425C7B2F8171950299AA57C02CB598 (ATNativeBannerAd_tE58854FA0A73E26146A20E25FF3F3D937203AFEC* __this, const RuntimeMethod* method) ;
// AnyThinkAds.Common.IATRewardedVideoAdClient AnyThinkAds.Api.ATRewardedAutoVideo::GetATRewardedClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ATRewardedAutoVideo_GetATRewardedClient_mDF7F88190674E801D86A79F892FD238E10F07566 (ATRewardedAutoVideo_t186A232BB8A51374EC69B092A3AE1E678BC0DE36* __this, const RuntimeMethod* method) ;
// AnyThinkAds.Common.IATRewardedVideoAdClient AnyThinkAds.ATAdsClientFactory::BuildRewardedVideoAdClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ATAdsClientFactory_BuildRewardedVideoAdClient_m6DE6B8A9057F9081333F5BC2E3A3A2DA18958BBB (const RuntimeMethod* method) ;
// System.Void AnyThinkAds.Api.ATRewardedAutoVideo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATRewardedAutoVideo__ctor_m9777C43E623BB3F67D3A771999635555138DED42 (ATRewardedAutoVideo_t186A232BB8A51374EC69B092A3AE1E678BC0DE36* __this, const RuntimeMethod* method) ;
// AnyThinkAds.Common.IATRewardedVideoAdClient AnyThinkAds.Api.ATRewardedVideo::GetATRewardedClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ATRewardedVideo_GetATRewardedClient_m6AD500ECAA75AA0D99E6A59E9B530614EC8FE1D2 (ATRewardedVideo_tFF1F706884EA5B4FFF4DA6829157F6150DABFB97* __this, const RuntimeMethod* method) ;
// System.Void AnyThinkAds.Api.ATRewardedVideo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATRewardedVideo__ctor_mC1740A24437B415D0FE589D663F3F0874F5CDADD (ATRewardedVideo_tFF1F706884EA5B4FFF4DA6829157F6150DABFB97* __this, const RuntimeMethod* method) ;
// AnyThinkAds.Common.IATSDKAPIClient AnyThinkAds.ATAdsClientFactory::BuildSDKAPIClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ATAdsClientFactory_BuildSDKAPIClient_m5E785FB8DD24EE905E3350F0BBFBEC9BAA5F3863 (const RuntimeMethod* method) ;
// AnyThinkAds.Common.IATSDKAPIClient AnyThinkAds.Api.ATSDKAPI::GetATSDKAPIClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ATSDKAPI_GetATSDKAPIClient_mC07322C0D667CF517304DF23CEFE5DB4B9A56FD9 (const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String AnyThinkAds.Api.ATAdEventArgs::get_placementId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ATAdEventArgs_get_placementId_m9DC169B08F9979C31879994D083A235810CF0947 (ATAdEventArgs_tACF382E072AE36E7C55A018FE3AF8D273C5C95CA* __this, const RuntimeMethod* method) 
{
	{
		// public String placementId { get; }
		String_t* L_0 = __this->___U3CplacementIdU3Ek__BackingField_0;
		return L_0;
	}
}
// AnyThinkAds.Api.ATCallbackInfo AnyThinkAds.Api.ATAdEventArgs::get_callbackInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ATCallbackInfo_tEAB4B96EDB8FA37AEF0E359D43E9AA128FCC6AEB* ATAdEventArgs_get_callbackInfo_m189026ED862D021EB52B02D61E0593433FB1EABF (ATAdEventArgs_tACF382E072AE36E7C55A018FE3AF8D273C5C95CA* __this, const RuntimeMethod* method) 
{
	{
		// public ATCallbackInfo callbackInfo { get; }
		ATCallbackInfo_tEAB4B96EDB8FA37AEF0E359D43E9AA128FCC6AEB* L_0 = __this->___U3CcallbackInfoU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void AnyThinkAds.Api.ATAdEventArgs::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATAdEventArgs__ctor_m1D4817907AD0CE8320C9C1A46809853C464A9FCD (ATAdEventArgs_tACF382E072AE36E7C55A018FE3AF8D273C5C95CA* __this, String_t* ___id0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ATCallbackInfo_tEAB4B96EDB8FA37AEF0E359D43E9AA128FCC6AEB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ATAdEventArgs(String id)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// placementId = id;
		String_t* L_0 = ___id0;
		__this->___U3CplacementIdU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CplacementIdU3Ek__BackingField_0), (void*)L_0);
		// callbackInfo = new ATCallbackInfo("");
		ATCallbackInfo_tEAB4B96EDB8FA37AEF0E359D43E9AA128FCC6AEB* L_1 = (ATCallbackInfo_tEAB4B96EDB8FA37AEF0E359D43E9AA128FCC6AEB*)il2cpp_codegen_object_new(ATCallbackInfo_tEAB4B96EDB8FA37AEF0E359D43E9AA128FCC6AEB_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ATCallbackInfo__ctor_mE81C76E2CE2891D12090496B5D51A5F91D797745(L_1, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		__this->___U3CcallbackInfoU3Ek__BackingField_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcallbackInfoU3Ek__BackingField_1), (void*)L_1);
		// }
		return;
	}
}
// System.Void AnyThinkAds.Api.ATAdEventArgs::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATAdEventArgs__ctor_m4F697F7A38CE7C5A1965623ECA9976830A8DAD8C (ATAdEventArgs_tACF382E072AE36E7C55A018FE3AF8D273C5C95CA* __this, String_t* ___id0, String_t* ___callbackJson1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ATCallbackInfo_tEAB4B96EDB8FA37AEF0E359D43E9AA128FCC6AEB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ATAdEventArgs(String id, String callbackJson)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// placementId = id;
		String_t* L_0 = ___id0;
		__this->___U3CplacementIdU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CplacementIdU3Ek__BackingField_0), (void*)L_0);
		// callbackInfo = new ATCallbackInfo(callbackJson);
		String_t* L_1 = ___callbackJson1;
		ATCallbackInfo_tEAB4B96EDB8FA37AEF0E359D43E9AA128FCC6AEB* L_2 = (ATCallbackInfo_tEAB4B96EDB8FA37AEF0E359D43E9AA128FCC6AEB*)il2cpp_codegen_object_new(ATCallbackInfo_tEAB4B96EDB8FA37AEF0E359D43E9AA128FCC6AEB_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ATCallbackInfo__ctor_mE81C76E2CE2891D12090496B5D51A5F91D797745(L_2, L_1, NULL);
		__this->___U3CcallbackInfoU3Ek__BackingField_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcallbackInfoU3Ek__BackingField_1), (void*)L_2);
		// }
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
// System.String AnyThinkAds.Api.ATAdErrorEventArgs::get_errorMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ATAdErrorEventArgs_get_errorMessage_mE6891AFD1CBB1E8A43B43E19870CF5619564D226 (ATAdErrorEventArgs_t8A61AA2BB6E96BFE7387A05EED0128A3D2BD3314* __this, const RuntimeMethod* method) 
{
	{
		// public String errorMessage { get; }
		String_t* L_0 = __this->___U3CerrorMessageU3Ek__BackingField_2;
		return L_0;
	}
}
// System.String AnyThinkAds.Api.ATAdErrorEventArgs::get_errorCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ATAdErrorEventArgs_get_errorCode_m58841D9D3C107803BF1AE5CB1A56ADE84A9A2BFE (ATAdErrorEventArgs_t8A61AA2BB6E96BFE7387A05EED0128A3D2BD3314* __this, const RuntimeMethod* method) 
{
	{
		// public String errorCode { get; }
		String_t* L_0 = __this->___U3CerrorCodeU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void AnyThinkAds.Api.ATAdErrorEventArgs::.ctor(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATAdErrorEventArgs__ctor_m0E6E2DABBC1F7F79CD02DB5B9EB9EE6CDC6E9380 (ATAdErrorEventArgs_t8A61AA2BB6E96BFE7387A05EED0128A3D2BD3314* __this, String_t* ___placementId0, String_t* ___code1, String_t* ___message2, const RuntimeMethod* method) 
{
	{
		// : base(placementId)
		String_t* L_0 = ___placementId0;
		ATAdEventArgs__ctor_m1D4817907AD0CE8320C9C1A46809853C464A9FCD(__this, L_0, NULL);
		// errorMessage = message;
		String_t* L_1 = ___message2;
		__this->___U3CerrorMessageU3Ek__BackingField_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CerrorMessageU3Ek__BackingField_2), (void*)L_1);
		// errorCode = code;
		String_t* L_2 = ___code1;
		__this->___U3CerrorCodeU3Ek__BackingField_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CerrorCodeU3Ek__BackingField_3), (void*)L_2);
		// }
		return;
	}
}
// System.Void AnyThinkAds.Api.ATAdErrorEventArgs::.ctor(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATAdErrorEventArgs__ctor_m7F36F6DD8139F25B0139B2BCE8E4157637E7CB06 (ATAdErrorEventArgs_t8A61AA2BB6E96BFE7387A05EED0128A3D2BD3314* __this, String_t* ___placementId0, String_t* ___callbackJson1, String_t* ___code2, String_t* ___message3, const RuntimeMethod* method) 
{
	{
		// : base(placementId, callbackJson)
		String_t* L_0 = ___placementId0;
		String_t* L_1 = ___callbackJson1;
		ATAdEventArgs__ctor_m4F697F7A38CE7C5A1965623ECA9976830A8DAD8C(__this, L_0, L_1, NULL);
		// errorMessage = message;
		String_t* L_2 = ___message3;
		__this->___U3CerrorMessageU3Ek__BackingField_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CerrorMessageU3Ek__BackingField_2), (void*)L_2);
		// errorCode = code;
		String_t* L_3 = ___code2;
		__this->___U3CerrorCodeU3Ek__BackingField_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CerrorCodeU3Ek__BackingField_3), (void*)L_3);
		// }
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
// System.Int32 AnyThinkAds.Api.ATAdProgressEventArgs::get_adProgress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ATAdProgressEventArgs_get_adProgress_m51FACD33B49CA210AEDA28114CC9AA7DE56CF8BD (ATAdProgressEventArgs_tD43B6F0E5FEE8F01533D199C6FD9AEF8046D13E5* __this, const RuntimeMethod* method) 
{
	{
		// public int adProgress { get; }
		int32_t L_0 = __this->___U3CadProgressU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void AnyThinkAds.Api.ATAdProgressEventArgs::.ctor(System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATAdProgressEventArgs__ctor_m298E161CDB12A4C8341CB18E14C241704A81F58E (ATAdProgressEventArgs_tD43B6F0E5FEE8F01533D199C6FD9AEF8046D13E5* __this, String_t* ___placementId0, String_t* ___callbackJson1, int32_t ___progress2, const RuntimeMethod* method) 
{
	{
		// : base(placementId, callbackJson)
		String_t* L_0 = ___placementId0;
		String_t* L_1 = ___callbackJson1;
		ATAdEventArgs__ctor_m4F697F7A38CE7C5A1965623ECA9976830A8DAD8C(__this, L_0, L_1, NULL);
		// adProgress = progress;
		int32_t L_2 = ___progress2;
		__this->___U3CadProgressU3Ek__BackingField_2 = L_2;
		// }
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
// System.Boolean AnyThinkAds.Api.ATAdRewardEventArgs::get_isRewarded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ATAdRewardEventArgs_get_isRewarded_m0860EF2748D38633BA679AC06281225A4D5851E9 (ATAdRewardEventArgs_t169DED6F7BEE7E52674898B6DAF423E40E48D665* __this, const RuntimeMethod* method) 
{
	{
		// public bool isRewarded { get; }
		bool L_0 = __this->___U3CisRewardedU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void AnyThinkAds.Api.ATAdRewardEventArgs::.ctor(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATAdRewardEventArgs__ctor_m7CDAAF602DEAF75E5087F390FA281C248CEE727A (ATAdRewardEventArgs_t169DED6F7BEE7E52674898B6DAF423E40E48D665* __this, String_t* ___placementId0, String_t* ___callbackJson1, bool ___doReward2, const RuntimeMethod* method) 
{
	{
		// : base(placementId, callbackJson)
		String_t* L_0 = ___placementId0;
		String_t* L_1 = ___callbackJson1;
		ATAdEventArgs__ctor_m4F697F7A38CE7C5A1965623ECA9976830A8DAD8C(__this, L_0, L_1, NULL);
		// isRewarded = doReward;
		bool L_2 = ___doReward2;
		__this->___U3CisRewardedU3Ek__BackingField_2 = L_2;
		// }
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
// System.Void AnyThinkAds.Api.ATBannerAdLoadingExtra::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATBannerAdLoadingExtra__ctor_mC4A5048852FC1B43FB23EEAF3F59EFC3127828A5 (ATBannerAdLoadingExtra_tB7BE886F3735472AEC8919BDE71BDFB534A9DF96* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void AnyThinkAds.Api.ATBannerAdLoadingExtra::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATBannerAdLoadingExtra__cctor_mDFD08448E943DBAF9254310C7389D6F076CCAC74 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ATBannerAdLoadingExtra_tB7BE886F3735472AEC8919BDE71BDFB534A9DF96_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DFA9AA29082727751167EB3C54FCAD0F9EDC665);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1388D53684B0996B3FF27203D1547660E4D82509);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral18BB3D3DEA07E1AFA8BD4C6534A379047D9991CC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral486CF3B61D48E45ADB2C8A2A368A318060EADE3B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82EC7C3895FE320756F278BA445746A31462E3C2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9DC959FBB8A194C03003E178EF9BEED608444FB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA11BC0AB16491B5DAEE99EAA33CF52FE6BC826E3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE43F841A3746AE40EA7342E66712C308D15FC289);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB142E8FAC15B58FA1613BBFA334987193B27BBF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly string kATBannerAdLoadingExtraBannerAdSize = "banner_ad_size";
		((ATBannerAdLoadingExtra_tB7BE886F3735472AEC8919BDE71BDFB534A9DF96_StaticFields*)il2cpp_codegen_static_fields_for(ATBannerAdLoadingExtra_tB7BE886F3735472AEC8919BDE71BDFB534A9DF96_il2cpp_TypeInfo_var))->___kATBannerAdLoadingExtraBannerAdSize_0 = _stringLiteral18BB3D3DEA07E1AFA8BD4C6534A379047D9991CC;
		Il2CppCodeGenWriteBarrier((void**)(&((ATBannerAdLoadingExtra_tB7BE886F3735472AEC8919BDE71BDFB534A9DF96_StaticFields*)il2cpp_codegen_static_fields_for(ATBannerAdLoadingExtra_tB7BE886F3735472AEC8919BDE71BDFB534A9DF96_il2cpp_TypeInfo_var))->___kATBannerAdLoadingExtraBannerAdSize_0), (void*)_stringLiteral18BB3D3DEA07E1AFA8BD4C6534A379047D9991CC);
		// public static readonly string kATBannerAdLoadingExtraBannerAdSizeStruct = "banner_ad_size_struct";
		((ATBannerAdLoadingExtra_tB7BE886F3735472AEC8919BDE71BDFB534A9DF96_StaticFields*)il2cpp_codegen_static_fields_for(ATBannerAdLoadingExtra_tB7BE886F3735472AEC8919BDE71BDFB534A9DF96_il2cpp_TypeInfo_var))->___kATBannerAdLoadingExtraBannerAdSizeStruct_1 = _stringLiteralE43F841A3746AE40EA7342E66712C308D15FC289;
		Il2CppCodeGenWriteBarrier((void**)(&((ATBannerAdLoadingExtra_tB7BE886F3735472AEC8919BDE71BDFB534A9DF96_StaticFields*)il2cpp_codegen_static_fields_for(ATBannerAdLoadingExtra_tB7BE886F3735472AEC8919BDE71BDFB534A9DF96_il2cpp_TypeInfo_var))->___kATBannerAdLoadingExtraBannerAdSizeStruct_1), (void*)_stringLiteralE43F841A3746AE40EA7342E66712C308D15FC289);
		// public static readonly string kATBannerAdSizeUsesPixelFlagKey = "uses_pixel";
		((ATBannerAdLoadingExtra_tB7BE886F3735472AEC8919BDE71BDFB534A9DF96_StaticFields*)il2cpp_codegen_static_fields_for(ATBannerAdLoadingExtra_tB7BE886F3735472AEC8919BDE71BDFB534A9DF96_il2cpp_TypeInfo_var))->___kATBannerAdSizeUsesPixelFlagKey_2 = _stringLiteral1388D53684B0996B3FF27203D1547660E4D82509;
		Il2CppCodeGenWriteBarrier((void**)(&((ATBannerAdLoadingExtra_tB7BE886F3735472AEC8919BDE71BDFB534A9DF96_StaticFields*)il2cpp_codegen_static_fields_for(ATBannerAdLoadingExtra_tB7BE886F3735472AEC8919BDE71BDFB534A9DF96_il2cpp_TypeInfo_var))->___kATBannerAdSizeUsesPixelFlagKey_2), (void*)_stringLiteral1388D53684B0996B3FF27203D1547660E4D82509);
		// public static readonly string kATBannerAdShowingPisitionTop = "top";
		((ATBannerAdLoadingExtra_tB7BE886F3735472AEC8919BDE71BDFB534A9DF96_StaticFields*)il2cpp_codegen_static_fields_for(ATBannerAdLoadingExtra_tB7BE886F3735472AEC8919BDE71BDFB534A9DF96_il2cpp_TypeInfo_var))->___kATBannerAdShowingPisitionTop_3 = _stringLiteralA11BC0AB16491B5DAEE99EAA33CF52FE6BC826E3;
		Il2CppCodeGenWriteBarrier((void**)(&((ATBannerAdLoadingExtra_tB7BE886F3735472AEC8919BDE71BDFB534A9DF96_StaticFields*)il2cpp_codegen_static_fields_for(ATBannerAdLoadingExtra_tB7BE886F3735472AEC8919BDE71BDFB534A9DF96_il2cpp_TypeInfo_var))->___kATBannerAdShowingPisitionTop_3), (void*)_stringLiteralA11BC0AB16491B5DAEE99EAA33CF52FE6BC826E3);
		// public static readonly string kATBannerAdShowingPisitionBottom = "bottom";
		((ATBannerAdLoadingExtra_tB7BE886F3735472AEC8919BDE71BDFB534A9DF96_StaticFields*)il2cpp_codegen_static_fields_for(ATBannerAdLoadingExtra_tB7BE886F3735472AEC8919BDE71BDFB534A9DF96_il2cpp_TypeInfo_var))->___kATBannerAdShowingPisitionBottom_4 = _stringLiteral0DFA9AA29082727751167EB3C54FCAD0F9EDC665;
		Il2CppCodeGenWriteBarrier((void**)(&((ATBannerAdLoadingExtra_tB7BE886F3735472AEC8919BDE71BDFB534A9DF96_StaticFields*)il2cpp_codegen_static_fields_for(ATBannerAdLoadingExtra_tB7BE886F3735472AEC8919BDE71BDFB534A9DF96_il2cpp_TypeInfo_var))->___kATBannerAdShowingPisitionBottom_4), (void*)_stringLiteral0DFA9AA29082727751167EB3C54FCAD0F9EDC665);
		// public static readonly string kATBannerAdLoadingExtraInlineAdaptiveWidth = "inline_adaptive_width";
		((ATBannerAdLoadingExtra_tB7BE886F3735472AEC8919BDE71BDFB534A9DF96_StaticFields*)il2cpp_codegen_static_fields_for(ATBannerAdLoadingExtra_tB7BE886F3735472AEC8919BDE71BDFB534A9DF96_il2cpp_TypeInfo_var))->___kATBannerAdLoadingExtraInlineAdaptiveWidth_5 = _stringLiteral486CF3B61D48E45ADB2C8A2A368A318060EADE3B;
		Il2CppCodeGenWriteBarrier((void**)(&((ATBannerAdLoadingExtra_tB7BE886F3735472AEC8919BDE71BDFB534A9DF96_StaticFields*)il2cpp_codegen_static_fields_for(ATBannerAdLoadingExtra_tB7BE886F3735472AEC8919BDE71BDFB534A9DF96_il2cpp_TypeInfo_var))->___kATBannerAdLoadingExtraInlineAdaptiveWidth_5), (void*)_stringLiteral486CF3B61D48E45ADB2C8A2A368A318060EADE3B);
		// public static readonly string kATBannerAdLoadingExtraInlineAdaptiveOrientation = "inline_adaptive_orientation";
		((ATBannerAdLoadingExtra_tB7BE886F3735472AEC8919BDE71BDFB534A9DF96_StaticFields*)il2cpp_codegen_static_fields_for(ATBannerAdLoadingExtra_tB7BE886F3735472AEC8919BDE71BDFB534A9DF96_il2cpp_TypeInfo_var))->___kATBannerAdLoadingExtraInlineAdaptiveOrientation_6 = _stringLiteral82EC7C3895FE320756F278BA445746A31462E3C2;
		Il2CppCodeGenWriteBarrier((void**)(&((ATBannerAdLoadingExtra_tB7BE886F3735472AEC8919BDE71BDFB534A9DF96_StaticFields*)il2cpp_codegen_static_fields_for(ATBannerAdLoadingExtra_tB7BE886F3735472AEC8919BDE71BDFB534A9DF96_il2cpp_TypeInfo_var))->___kATBannerAdLoadingExtraInlineAdaptiveOrientation_6), (void*)_stringLiteral82EC7C3895FE320756F278BA445746A31462E3C2);
		// public static readonly int kATBannerAdLoadingExtraInlineAdaptiveOrientationCurrent = 0;
		((ATBannerAdLoadingExtra_tB7BE886F3735472AEC8919BDE71BDFB534A9DF96_StaticFields*)il2cpp_codegen_static_fields_for(ATBannerAdLoadingExtra_tB7BE886F3735472AEC8919BDE71BDFB534A9DF96_il2cpp_TypeInfo_var))->___kATBannerAdLoadingExtraInlineAdaptiveOrientationCurrent_7 = 0;
		// public static readonly int kATBannerAdLoadingExtraInlineAdaptiveOrientationPortrait = 1;
		((ATBannerAdLoadingExtra_tB7BE886F3735472AEC8919BDE71BDFB534A9DF96_StaticFields*)il2cpp_codegen_static_fields_for(ATBannerAdLoadingExtra_tB7BE886F3735472AEC8919BDE71BDFB534A9DF96_il2cpp_TypeInfo_var))->___kATBannerAdLoadingExtraInlineAdaptiveOrientationPortrait_8 = 1;
		// public static readonly int kATBannerAdLoadingExtraInlineAdaptiveOrientationLandscape = 2;
		((ATBannerAdLoadingExtra_tB7BE886F3735472AEC8919BDE71BDFB534A9DF96_StaticFields*)il2cpp_codegen_static_fields_for(ATBannerAdLoadingExtra_tB7BE886F3735472AEC8919BDE71BDFB534A9DF96_il2cpp_TypeInfo_var))->___kATBannerAdLoadingExtraInlineAdaptiveOrientationLandscape_9 = 2;
		// public static readonly string kATBannerAdLoadingExtraAdaptiveWidth = "adaptive_width";
		((ATBannerAdLoadingExtra_tB7BE886F3735472AEC8919BDE71BDFB534A9DF96_StaticFields*)il2cpp_codegen_static_fields_for(ATBannerAdLoadingExtra_tB7BE886F3735472AEC8919BDE71BDFB534A9DF96_il2cpp_TypeInfo_var))->___kATBannerAdLoadingExtraAdaptiveWidth_10 = _stringLiteral9DC959FBB8A194C03003E178EF9BEED608444FB2;
		Il2CppCodeGenWriteBarrier((void**)(&((ATBannerAdLoadingExtra_tB7BE886F3735472AEC8919BDE71BDFB534A9DF96_StaticFields*)il2cpp_codegen_static_fields_for(ATBannerAdLoadingExtra_tB7BE886F3735472AEC8919BDE71BDFB534A9DF96_il2cpp_TypeInfo_var))->___kATBannerAdLoadingExtraAdaptiveWidth_10), (void*)_stringLiteral9DC959FBB8A194C03003E178EF9BEED608444FB2);
		// public static readonly string kATBannerAdLoadingExtraAdaptiveOrientation = "adaptive_orientation";
		((ATBannerAdLoadingExtra_tB7BE886F3735472AEC8919BDE71BDFB534A9DF96_StaticFields*)il2cpp_codegen_static_fields_for(ATBannerAdLoadingExtra_tB7BE886F3735472AEC8919BDE71BDFB534A9DF96_il2cpp_TypeInfo_var))->___kATBannerAdLoadingExtraAdaptiveOrientation_11 = _stringLiteralFB142E8FAC15B58FA1613BBFA334987193B27BBF;
		Il2CppCodeGenWriteBarrier((void**)(&((ATBannerAdLoadingExtra_tB7BE886F3735472AEC8919BDE71BDFB534A9DF96_StaticFields*)il2cpp_codegen_static_fields_for(ATBannerAdLoadingExtra_tB7BE886F3735472AEC8919BDE71BDFB534A9DF96_il2cpp_TypeInfo_var))->___kATBannerAdLoadingExtraAdaptiveOrientation_11), (void*)_stringLiteralFB142E8FAC15B58FA1613BBFA334987193B27BBF);
		// public static readonly int kATBannerAdLoadingExtraAdaptiveOrientationCurrent = 0;
		((ATBannerAdLoadingExtra_tB7BE886F3735472AEC8919BDE71BDFB534A9DF96_StaticFields*)il2cpp_codegen_static_fields_for(ATBannerAdLoadingExtra_tB7BE886F3735472AEC8919BDE71BDFB534A9DF96_il2cpp_TypeInfo_var))->___kATBannerAdLoadingExtraAdaptiveOrientationCurrent_12 = 0;
		// public static readonly int kATBannerAdLoadingExtraAdaptiveOrientationPortrait = 1;
		((ATBannerAdLoadingExtra_tB7BE886F3735472AEC8919BDE71BDFB534A9DF96_StaticFields*)il2cpp_codegen_static_fields_for(ATBannerAdLoadingExtra_tB7BE886F3735472AEC8919BDE71BDFB534A9DF96_il2cpp_TypeInfo_var))->___kATBannerAdLoadingExtraAdaptiveOrientationPortrait_13 = 1;
		// public static readonly int kATBannerAdLoadingExtraAdaptiveOrientationLandscape = 2;
		((ATBannerAdLoadingExtra_tB7BE886F3735472AEC8919BDE71BDFB534A9DF96_StaticFields*)il2cpp_codegen_static_fields_for(ATBannerAdLoadingExtra_tB7BE886F3735472AEC8919BDE71BDFB534A9DF96_il2cpp_TypeInfo_var))->___kATBannerAdLoadingExtraAdaptiveOrientationLandscape_14 = 2;
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
// System.Void AnyThinkAds.Api.ATBannerAd::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATBannerAd__ctor_mF76A898AAC57C7279D898E242052595470B2209F (ATBannerAd_t34DFAA451EED592F85506D138227347ED875BCA2* __this, const RuntimeMethod* method) 
{
	{
		// private ATBannerAd()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// client = GetATBannerAdClient();
		RuntimeObject* L_0;
		L_0 = ATBannerAd_GetATBannerAdClient_m6DDE5AA6F83493C2ECC9F9348EAF8EB8E7DB2958(__this, NULL);
		__this->___client_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___client_1), (void*)L_0);
		// }
		return;
	}
}
// AnyThinkAds.Api.ATBannerAd AnyThinkAds.Api.ATBannerAd::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ATBannerAd_t34DFAA451EED592F85506D138227347ED875BCA2* ATBannerAd_get_Instance_m4E4C622C9CA843EE986DE1D15E0E39BB953B3D0A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ATBannerAd_t34DFAA451EED592F85506D138227347ED875BCA2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return instance;
		il2cpp_codegen_runtime_class_init_inline(ATBannerAd_t34DFAA451EED592F85506D138227347ED875BCA2_il2cpp_TypeInfo_var);
		ATBannerAd_t34DFAA451EED592F85506D138227347ED875BCA2* L_0 = ((ATBannerAd_t34DFAA451EED592F85506D138227347ED875BCA2_StaticFields*)il2cpp_codegen_static_fields_for(ATBannerAd_t34DFAA451EED592F85506D138227347ED875BCA2_il2cpp_TypeInfo_var))->___instance_0;
		return L_0;
	}
}
// System.Void AnyThinkAds.Api.ATBannerAd::loadBannerAd(System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATBannerAd_loadBannerAd_m80954DED293C0FB52D9DF75E927BDC140393C1BE (ATBannerAd_t34DFAA451EED592F85506D138227347ED875BCA2* __this, String_t* ___placementId0, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___pairs1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ATBannerAdLoadingExtra_tB7BE886F3735472AEC8919BDE71BDFB534A9DF96_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ATSize_tB526AFFCD84BA3CC54C85D8125F2B279B6C3588D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IATBannerAdClient_tDAA53507100645D3DEEB4E9AC814E6C5DCD27FEF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t6C02C11E5758BFDB34AD6A5F41ABBFC7FAB2E598_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		s_Il2CppMethodInitialized = true;
	}
	ATSize_tB526AFFCD84BA3CC54C85D8125F2B279B6C3588D* V_0 = NULL;
	{
		// if (pairs != null && pairs.ContainsKey(ATBannerAdLoadingExtra.kATBannerAdLoadingExtraBannerAdSize))
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = ___pairs1;
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_1 = ___pairs1;
		il2cpp_codegen_runtime_class_init_inline(ATBannerAdLoadingExtra_tB7BE886F3735472AEC8919BDE71BDFB534A9DF96_il2cpp_TypeInfo_var);
		String_t* L_2 = ((ATBannerAdLoadingExtra_tB7BE886F3735472AEC8919BDE71BDFB534A9DF96_StaticFields*)il2cpp_codegen_static_fields_for(ATBannerAdLoadingExtra_tB7BE886F3735472AEC8919BDE71BDFB534A9DF96_il2cpp_TypeInfo_var))->___kATBannerAdLoadingExtraBannerAdSize_0;
		NullCheck(L_1);
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC(L_1, L_2, Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		// client.loadBannerAd(placementId, JsonMapper.ToJson(pairs));
		RuntimeObject* L_4 = __this->___client_1;
		String_t* L_5 = ___placementId0;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_6 = ___pairs1;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t6C02C11E5758BFDB34AD6A5F41ABBFC7FAB2E598_il2cpp_TypeInfo_var);
		String_t* L_7;
		L_7 = JsonMapper_ToJson_m640303EB0458D6FC503ACB6AFECB29F3EAC84336(L_6, NULL);
		NullCheck(L_4);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(0 /* System.Void AnyThinkAds.Common.IATBannerAdClient::loadBannerAd(System.String,System.String) */, IATBannerAdClient_tDAA53507100645D3DEEB4E9AC814E6C5DCD27FEF_il2cpp_TypeInfo_var, L_4, L_5, L_7);
		return;
	}

IL_0023:
	{
		// else if (pairs != null && pairs.ContainsKey(ATBannerAdLoadingExtra.kATBannerAdLoadingExtraBannerAdSizeStruct))
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_8 = ___pairs1;
		if (!L_8)
		{
			goto IL_0098;
		}
	}
	{
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_9 = ___pairs1;
		il2cpp_codegen_runtime_class_init_inline(ATBannerAdLoadingExtra_tB7BE886F3735472AEC8919BDE71BDFB534A9DF96_il2cpp_TypeInfo_var);
		String_t* L_10 = ((ATBannerAdLoadingExtra_tB7BE886F3735472AEC8919BDE71BDFB534A9DF96_StaticFields*)il2cpp_codegen_static_fields_for(ATBannerAdLoadingExtra_tB7BE886F3735472AEC8919BDE71BDFB534A9DF96_il2cpp_TypeInfo_var))->___kATBannerAdLoadingExtraBannerAdSizeStruct_1;
		NullCheck(L_9);
		bool L_11;
		L_11 = Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC(L_9, L_10, Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC_RuntimeMethod_var);
		if (!L_11)
		{
			goto IL_0098;
		}
	}
	{
		// ATSize size = (ATSize)(pairs[ATBannerAdLoadingExtra.kATBannerAdLoadingExtraBannerAdSizeStruct]);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_12 = ___pairs1;
		il2cpp_codegen_runtime_class_init_inline(ATBannerAdLoadingExtra_tB7BE886F3735472AEC8919BDE71BDFB534A9DF96_il2cpp_TypeInfo_var);
		String_t* L_13 = ((ATBannerAdLoadingExtra_tB7BE886F3735472AEC8919BDE71BDFB534A9DF96_StaticFields*)il2cpp_codegen_static_fields_for(ATBannerAdLoadingExtra_tB7BE886F3735472AEC8919BDE71BDFB534A9DF96_il2cpp_TypeInfo_var))->___kATBannerAdLoadingExtraBannerAdSizeStruct_1;
		NullCheck(L_12);
		RuntimeObject* L_14;
		L_14 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_12, L_13, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		V_0 = ((ATSize_tB526AFFCD84BA3CC54C85D8125F2B279B6C3588D*)CastclassClass((RuntimeObject*)L_14, ATSize_tB526AFFCD84BA3CC54C85D8125F2B279B6C3588D_il2cpp_TypeInfo_var));
		// pairs.Add(ATBannerAdLoadingExtra.kATBannerAdLoadingExtraBannerAdSize, size.width + "x" + size.height);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_15 = ___pairs1;
		String_t* L_16 = ((ATBannerAdLoadingExtra_tB7BE886F3735472AEC8919BDE71BDFB534A9DF96_StaticFields*)il2cpp_codegen_static_fields_for(ATBannerAdLoadingExtra_tB7BE886F3735472AEC8919BDE71BDFB534A9DF96_il2cpp_TypeInfo_var))->___kATBannerAdLoadingExtraBannerAdSize_0;
		ATSize_tB526AFFCD84BA3CC54C85D8125F2B279B6C3588D* L_17 = V_0;
		NullCheck(L_17);
		int32_t* L_18 = (&L_17->___width_0);
		String_t* L_19;
		L_19 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_18, NULL);
		ATSize_tB526AFFCD84BA3CC54C85D8125F2B279B6C3588D* L_20 = V_0;
		NullCheck(L_20);
		int32_t* L_21 = (&L_20->___height_1);
		String_t* L_22;
		L_22 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_21, NULL);
		String_t* L_23;
		L_23 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_19, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, L_22, NULL);
		NullCheck(L_15);
		Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_15, L_16, L_23, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		// pairs.Add(ATBannerAdLoadingExtra.kATBannerAdSizeUsesPixelFlagKey, size.usesPixel);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_24 = ___pairs1;
		String_t* L_25 = ((ATBannerAdLoadingExtra_tB7BE886F3735472AEC8919BDE71BDFB534A9DF96_StaticFields*)il2cpp_codegen_static_fields_for(ATBannerAdLoadingExtra_tB7BE886F3735472AEC8919BDE71BDFB534A9DF96_il2cpp_TypeInfo_var))->___kATBannerAdSizeUsesPixelFlagKey_2;
		ATSize_tB526AFFCD84BA3CC54C85D8125F2B279B6C3588D* L_26 = V_0;
		NullCheck(L_26);
		bool L_27 = L_26->___usesPixel_2;
		bool L_28 = L_27;
		RuntimeObject* L_29 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_28);
		NullCheck(L_24);
		Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_24, L_25, L_29, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		// client.loadBannerAd(placementId, JsonMapper.ToJson(pairs));
		RuntimeObject* L_30 = __this->___client_1;
		String_t* L_31 = ___placementId0;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_32 = ___pairs1;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t6C02C11E5758BFDB34AD6A5F41ABBFC7FAB2E598_il2cpp_TypeInfo_var);
		String_t* L_33;
		L_33 = JsonMapper_ToJson_m640303EB0458D6FC503ACB6AFECB29F3EAC84336(L_32, NULL);
		NullCheck(L_30);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(0 /* System.Void AnyThinkAds.Common.IATBannerAdClient::loadBannerAd(System.String,System.String) */, IATBannerAdClient_tDAA53507100645D3DEEB4E9AC814E6C5DCD27FEF_il2cpp_TypeInfo_var, L_30, L_31, L_33);
		return;
	}

IL_0098:
	{
		// client.loadBannerAd(placementId, JsonMapper.ToJson(pairs));
		RuntimeObject* L_34 = __this->___client_1;
		String_t* L_35 = ___placementId0;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_36 = ___pairs1;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t6C02C11E5758BFDB34AD6A5F41ABBFC7FAB2E598_il2cpp_TypeInfo_var);
		String_t* L_37;
		L_37 = JsonMapper_ToJson_m640303EB0458D6FC503ACB6AFECB29F3EAC84336(L_36, NULL);
		NullCheck(L_34);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(0 /* System.Void AnyThinkAds.Common.IATBannerAdClient::loadBannerAd(System.String,System.String) */, IATBannerAdClient_tDAA53507100645D3DEEB4E9AC814E6C5DCD27FEF_il2cpp_TypeInfo_var, L_34, L_35, L_37);
		// }
		return;
	}
}
// System.String AnyThinkAds.Api.ATBannerAd::checkAdStatus(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ATBannerAd_checkAdStatus_m73E4D2686245A3F547E6D71E89850E297B05EA71 (ATBannerAd_t34DFAA451EED592F85506D138227347ED875BCA2* __this, String_t* ___placementId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IATBannerAdClient_tDAA53507100645D3DEEB4E9AC814E6C5DCD27FEF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return client.checkAdStatus(placementId);
		RuntimeObject* L_0 = __this->___client_1;
		String_t* L_1 = ___placementId0;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(1 /* System.String AnyThinkAds.Common.IATBannerAdClient::checkAdStatus(System.String) */, IATBannerAdClient_tDAA53507100645D3DEEB4E9AC814E6C5DCD27FEF_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.String AnyThinkAds.Api.ATBannerAd::getValidAdCaches(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ATBannerAd_getValidAdCaches_mFA7D1C690DDD3F33D94E168F467F0F294C3CF8D5 (ATBannerAd_t34DFAA451EED592F85506D138227347ED875BCA2* __this, String_t* ___placementId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IATBannerAdClient_tDAA53507100645D3DEEB4E9AC814E6C5DCD27FEF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return client.getValidAdCaches(placementId);
		RuntimeObject* L_0 = __this->___client_1;
		String_t* L_1 = ___placementId0;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(9 /* System.String AnyThinkAds.Common.IATBannerAdClient::getValidAdCaches(System.String) */, IATBannerAdClient_tDAA53507100645D3DEEB4E9AC814E6C5DCD27FEF_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Void AnyThinkAds.Api.ATBannerAd::showBannerAd(System.String,AnyThinkAds.Api.ATRect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATBannerAd_showBannerAd_m38C751901226EC8B4771DB2ECA3D5812F5BAB214 (ATBannerAd_t34DFAA451EED592F85506D138227347ED875BCA2* __this, String_t* ___placementId0, ATRect_tBBC85FAC20A1E12B1EB9F3CE00870B793834C7C2* ___rect1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IATBannerAdClient_tDAA53507100645D3DEEB4E9AC814E6C5DCD27FEF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// client.showBannerAd(placementId, rect, "");
		RuntimeObject* L_0 = __this->___client_1;
		String_t* L_1 = ___placementId0;
		ATRect_tBBC85FAC20A1E12B1EB9F3CE00870B793834C7C2* L_2 = ___rect1;
		NullCheck(L_0);
		InterfaceActionInvoker3< String_t*, ATRect_tBBC85FAC20A1E12B1EB9F3CE00870B793834C7C2*, String_t* >::Invoke(4 /* System.Void AnyThinkAds.Common.IATBannerAdClient::showBannerAd(System.String,AnyThinkAds.Api.ATRect,System.String) */, IATBannerAdClient_tDAA53507100645D3DEEB4E9AC814E6C5DCD27FEF_il2cpp_TypeInfo_var, L_0, L_1, L_2, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// }
		return;
	}
}
// System.Void AnyThinkAds.Api.ATBannerAd::showBannerAd(System.String,AnyThinkAds.Api.ATRect,System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATBannerAd_showBannerAd_m8CCD70DD4483C13B39AAE02A84437773F82C5A10 (ATBannerAd_t34DFAA451EED592F85506D138227347ED875BCA2* __this, String_t* ___placementId0, ATRect_tBBC85FAC20A1E12B1EB9F3CE00870B793834C7C2* ___rect1, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___pairs2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IATBannerAdClient_tDAA53507100645D3DEEB4E9AC814E6C5DCD27FEF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t6C02C11E5758BFDB34AD6A5F41ABBFC7FAB2E598_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// client.showBannerAd(placementId, rect, JsonMapper.ToJson(pairs));
		RuntimeObject* L_0 = __this->___client_1;
		String_t* L_1 = ___placementId0;
		ATRect_tBBC85FAC20A1E12B1EB9F3CE00870B793834C7C2* L_2 = ___rect1;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_3 = ___pairs2;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t6C02C11E5758BFDB34AD6A5F41ABBFC7FAB2E598_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = JsonMapper_ToJson_m640303EB0458D6FC503ACB6AFECB29F3EAC84336(L_3, NULL);
		NullCheck(L_0);
		InterfaceActionInvoker3< String_t*, ATRect_tBBC85FAC20A1E12B1EB9F3CE00870B793834C7C2*, String_t* >::Invoke(4 /* System.Void AnyThinkAds.Common.IATBannerAdClient::showBannerAd(System.String,AnyThinkAds.Api.ATRect,System.String) */, IATBannerAdClient_tDAA53507100645D3DEEB4E9AC814E6C5DCD27FEF_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_4);
		// }
		return;
	}
}
// System.Void AnyThinkAds.Api.ATBannerAd::showBannerAd(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATBannerAd_showBannerAd_m8880DD7EF1B8AD7D5DAB2E59A33930C2BA11441B (ATBannerAd_t34DFAA451EED592F85506D138227347ED875BCA2* __this, String_t* ___placementId0, String_t* ___position1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IATBannerAdClient_tDAA53507100645D3DEEB4E9AC814E6C5DCD27FEF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// client.showBannerAd(placementId, position, "");
		RuntimeObject* L_0 = __this->___client_1;
		String_t* L_1 = ___placementId0;
		String_t* L_2 = ___position1;
		NullCheck(L_0);
		InterfaceActionInvoker3< String_t*, String_t*, String_t* >::Invoke(3 /* System.Void AnyThinkAds.Common.IATBannerAdClient::showBannerAd(System.String,System.String,System.String) */, IATBannerAdClient_tDAA53507100645D3DEEB4E9AC814E6C5DCD27FEF_il2cpp_TypeInfo_var, L_0, L_1, L_2, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// }
		return;
	}
}
// System.Void AnyThinkAds.Api.ATBannerAd::showBannerAd(System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATBannerAd_showBannerAd_m4ACF0AF626F744D86A023192BE4BB994F2C68836 (ATBannerAd_t34DFAA451EED592F85506D138227347ED875BCA2* __this, String_t* ___placementId0, String_t* ___position1, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___pairs2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IATBannerAdClient_tDAA53507100645D3DEEB4E9AC814E6C5DCD27FEF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t6C02C11E5758BFDB34AD6A5F41ABBFC7FAB2E598_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// client.showBannerAd(placementId, position, JsonMapper.ToJson(pairs));
		RuntimeObject* L_0 = __this->___client_1;
		String_t* L_1 = ___placementId0;
		String_t* L_2 = ___position1;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_3 = ___pairs2;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t6C02C11E5758BFDB34AD6A5F41ABBFC7FAB2E598_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = JsonMapper_ToJson_m640303EB0458D6FC503ACB6AFECB29F3EAC84336(L_3, NULL);
		NullCheck(L_0);
		InterfaceActionInvoker3< String_t*, String_t*, String_t* >::Invoke(3 /* System.Void AnyThinkAds.Common.IATBannerAdClient::showBannerAd(System.String,System.String,System.String) */, IATBannerAdClient_tDAA53507100645D3DEEB4E9AC814E6C5DCD27FEF_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_4);
		// }
		return;
	}
}
// System.Void AnyThinkAds.Api.ATBannerAd::showBannerAd(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATBannerAd_showBannerAd_mEE4E6B396827CCA5DC3F2028991B45AF1C34C2D3 (ATBannerAd_t34DFAA451EED592F85506D138227347ED875BCA2* __this, String_t* ___placementId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IATBannerAdClient_tDAA53507100645D3DEEB4E9AC814E6C5DCD27FEF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// client.showBannerAd(placementId);
		RuntimeObject* L_0 = __this->___client_1;
		String_t* L_1 = ___placementId0;
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(7 /* System.Void AnyThinkAds.Common.IATBannerAdClient::showBannerAd(System.String) */, IATBannerAdClient_tDAA53507100645D3DEEB4E9AC814E6C5DCD27FEF_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void AnyThinkAds.Api.ATBannerAd::hideBannerAd(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATBannerAd_hideBannerAd_mAFF5F8034DFC840D256B72D24C245829A3952A2F (ATBannerAd_t34DFAA451EED592F85506D138227347ED875BCA2* __this, String_t* ___placementId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IATBannerAdClient_tDAA53507100645D3DEEB4E9AC814E6C5DCD27FEF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// client.hideBannerAd(placementId);
		RuntimeObject* L_0 = __this->___client_1;
		String_t* L_1 = ___placementId0;
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(6 /* System.Void AnyThinkAds.Common.IATBannerAdClient::hideBannerAd(System.String) */, IATBannerAdClient_tDAA53507100645D3DEEB4E9AC814E6C5DCD27FEF_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void AnyThinkAds.Api.ATBannerAd::cleanBannerAd(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATBannerAd_cleanBannerAd_m424854B2C8ACFDD47A74BFB3A69B6F2194C00361 (ATBannerAd_t34DFAA451EED592F85506D138227347ED875BCA2* __this, String_t* ___placementId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IATBannerAdClient_tDAA53507100645D3DEEB4E9AC814E6C5DCD27FEF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// client.cleanBannerAd(placementId);
		RuntimeObject* L_0 = __this->___client_1;
		String_t* L_1 = ___placementId0;
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(5 /* System.Void AnyThinkAds.Common.IATBannerAdClient::cleanBannerAd(System.String) */, IATBannerAdClient_tDAA53507100645D3DEEB4E9AC814E6C5DCD27FEF_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// AnyThinkAds.Common.IATBannerAdClient AnyThinkAds.Api.ATBannerAd::GetATBannerAdClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ATBannerAd_GetATBannerAdClient_m6DDE5AA6F83493C2ECC9F9348EAF8EB8E7DB2958 (ATBannerAd_t34DFAA451EED592F85506D138227347ED875BCA2* __this, const RuntimeMethod* method) 
{
	{
		// return AnyThinkAds.ATAdsClientFactory.BuildBannerAdClient();
		RuntimeObject* L_0;
		L_0 = ATAdsClientFactory_BuildBannerAdClient_m24A9E1ED98105C85F75F32847312224DFD187294(NULL);
		return L_0;
	}
}
// System.Void AnyThinkAds.Api.ATBannerAd::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATBannerAd__cctor_m467210A3F80CF93018ADCC01DA5898F584CDF3C7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ATBannerAd_t34DFAA451EED592F85506D138227347ED875BCA2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ATBannerAd instance = new ATBannerAd();
		ATBannerAd_t34DFAA451EED592F85506D138227347ED875BCA2* L_0 = (ATBannerAd_t34DFAA451EED592F85506D138227347ED875BCA2*)il2cpp_codegen_object_new(ATBannerAd_t34DFAA451EED592F85506D138227347ED875BCA2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ATBannerAd__ctor_mF76A898AAC57C7279D898E242052595470B2209F(L_0, NULL);
		((ATBannerAd_t34DFAA451EED592F85506D138227347ED875BCA2_StaticFields*)il2cpp_codegen_static_fields_for(ATBannerAd_t34DFAA451EED592F85506D138227347ED875BCA2_il2cpp_TypeInfo_var))->___instance_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ATBannerAd_t34DFAA451EED592F85506D138227347ED875BCA2_StaticFields*)il2cpp_codegen_static_fields_for(ATBannerAd_t34DFAA451EED592F85506D138227347ED875BCA2_il2cpp_TypeInfo_var))->___instance_0), (void*)L_0);
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
// System.Void AnyThinkAds.Api.ATCallbackInfo::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATCallbackInfo__ctor_mE81C76E2CE2891D12090496B5D51A5F91D797745 (ATCallbackInfo_tEAB4B96EDB8FA37AEF0E359D43E9AA128FCC6AEB* __this, String_t* ___callbackJson0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_ToObject_TisDictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_m3AD2D687303F4E0B8AD4C4EAA456000D57216503_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t6C02C11E5758BFDB34AD6A5F41ABBFC7FAB2E598_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0749C3AB6B46A5C9B817BCF9C0C6BD2FE94613B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral11203B5B843E50223E13B821BA07333862DE0A64);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1327E3E0D2EDE515C865E554C1090B04A103D22A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral25705477E232DDE539315FA572A0CE775D407106);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2687B859C52DBDD7EA54FE527B1981F4F4B67B0E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral28F57C7C7D07611D497C365D2E8D646E014185B3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C1E27EE7EEC15120D76B35E99FCEF230345D161);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B247B668327A8C2234CDF83CC6E6A225D536776);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral425C3CBEE5296F98B99484FBA972E5B2FA7A25D3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44F1E7DB2E8AAD233857868896DFEFE5A63EECEF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5CDE5C91E6E6A38F4BCDA5848E64C14E7B6CF92C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6488BB0E8D628F6BAD095A096DE57BB154AD1E04);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7AC9006F30C221D398925A34B4E6D093FA9ED120);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E55A4C5A6C5EA49FB99BAFA2B4646BDC4229840);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9EFB87BB64D28FEAB900DA3E711EF2A22510DB3D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA1701382D5DB91FE64299861D18B6B8D90F12AFA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA47A168D660B942A0E4EFA75F386C8669267074D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA9BF39889835439556D3C22F981E68B4CDF66D3E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAAB6F5974AA6BF52B67FEA0BB8610F793A2BBCDD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB3E708924BFB9D6B641A4B9F82FE5FE57F307B6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB74CD87160E732F533F99DCAA83E9EAFBBEDAEAC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB8805582BE73806AB6806DC032B0E98F07A42022);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8B5F8CFFD59A7B59061F52A426CC740232A7314);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	JsonData_tC2CA8D7C407ECAC4EE42392A60118C480372F7B8* V_0 = NULL;
	Exception_t* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	ATCallbackInfo_tEAB4B96EDB8FA37AEF0E359D43E9AA128FCC6AEB* G_B3_0 = NULL;
	ATCallbackInfo_tEAB4B96EDB8FA37AEF0E359D43E9AA128FCC6AEB* G_B2_0 = NULL;
	String_t* G_B4_0 = NULL;
	ATCallbackInfo_tEAB4B96EDB8FA37AEF0E359D43E9AA128FCC6AEB* G_B4_1 = NULL;
	ATCallbackInfo_tEAB4B96EDB8FA37AEF0E359D43E9AA128FCC6AEB* G_B6_0 = NULL;
	ATCallbackInfo_tEAB4B96EDB8FA37AEF0E359D43E9AA128FCC6AEB* G_B5_0 = NULL;
	String_t* G_B7_0 = NULL;
	ATCallbackInfo_tEAB4B96EDB8FA37AEF0E359D43E9AA128FCC6AEB* G_B7_1 = NULL;
	ATCallbackInfo_tEAB4B96EDB8FA37AEF0E359D43E9AA128FCC6AEB* G_B9_0 = NULL;
	ATCallbackInfo_tEAB4B96EDB8FA37AEF0E359D43E9AA128FCC6AEB* G_B8_0 = NULL;
	String_t* G_B10_0 = NULL;
	ATCallbackInfo_tEAB4B96EDB8FA37AEF0E359D43E9AA128FCC6AEB* G_B10_1 = NULL;
	ATCallbackInfo_tEAB4B96EDB8FA37AEF0E359D43E9AA128FCC6AEB* G_B12_0 = NULL;
	ATCallbackInfo_tEAB4B96EDB8FA37AEF0E359D43E9AA128FCC6AEB* G_B11_0 = NULL;
	String_t* G_B13_0 = NULL;
	ATCallbackInfo_tEAB4B96EDB8FA37AEF0E359D43E9AA128FCC6AEB* G_B13_1 = NULL;
	ATCallbackInfo_tEAB4B96EDB8FA37AEF0E359D43E9AA128FCC6AEB* G_B16_0 = NULL;
	ATCallbackInfo_tEAB4B96EDB8FA37AEF0E359D43E9AA128FCC6AEB* G_B15_0 = NULL;
	String_t* G_B17_0 = NULL;
	ATCallbackInfo_tEAB4B96EDB8FA37AEF0E359D43E9AA128FCC6AEB* G_B17_1 = NULL;
	ATCallbackInfo_tEAB4B96EDB8FA37AEF0E359D43E9AA128FCC6AEB* G_B20_0 = NULL;
	ATCallbackInfo_tEAB4B96EDB8FA37AEF0E359D43E9AA128FCC6AEB* G_B19_0 = NULL;
	String_t* G_B21_0 = NULL;
	ATCallbackInfo_tEAB4B96EDB8FA37AEF0E359D43E9AA128FCC6AEB* G_B21_1 = NULL;
	ATCallbackInfo_tEAB4B96EDB8FA37AEF0E359D43E9AA128FCC6AEB* G_B23_0 = NULL;
	ATCallbackInfo_tEAB4B96EDB8FA37AEF0E359D43E9AA128FCC6AEB* G_B22_0 = NULL;
	String_t* G_B24_0 = NULL;
	ATCallbackInfo_tEAB4B96EDB8FA37AEF0E359D43E9AA128FCC6AEB* G_B24_1 = NULL;
	ATCallbackInfo_tEAB4B96EDB8FA37AEF0E359D43E9AA128FCC6AEB* G_B26_0 = NULL;
	ATCallbackInfo_tEAB4B96EDB8FA37AEF0E359D43E9AA128FCC6AEB* G_B25_0 = NULL;
	String_t* G_B27_0 = NULL;
	ATCallbackInfo_tEAB4B96EDB8FA37AEF0E359D43E9AA128FCC6AEB* G_B27_1 = NULL;
	ATCallbackInfo_tEAB4B96EDB8FA37AEF0E359D43E9AA128FCC6AEB* G_B29_0 = NULL;
	ATCallbackInfo_tEAB4B96EDB8FA37AEF0E359D43E9AA128FCC6AEB* G_B28_0 = NULL;
	String_t* G_B30_0 = NULL;
	ATCallbackInfo_tEAB4B96EDB8FA37AEF0E359D43E9AA128FCC6AEB* G_B30_1 = NULL;
	ATCallbackInfo_tEAB4B96EDB8FA37AEF0E359D43E9AA128FCC6AEB* G_B32_0 = NULL;
	ATCallbackInfo_tEAB4B96EDB8FA37AEF0E359D43E9AA128FCC6AEB* G_B31_0 = NULL;
	String_t* G_B33_0 = NULL;
	ATCallbackInfo_tEAB4B96EDB8FA37AEF0E359D43E9AA128FCC6AEB* G_B33_1 = NULL;
	ATCallbackInfo_tEAB4B96EDB8FA37AEF0E359D43E9AA128FCC6AEB* G_B35_0 = NULL;
	ATCallbackInfo_tEAB4B96EDB8FA37AEF0E359D43E9AA128FCC6AEB* G_B34_0 = NULL;
	String_t* G_B36_0 = NULL;
	ATCallbackInfo_tEAB4B96EDB8FA37AEF0E359D43E9AA128FCC6AEB* G_B36_1 = NULL;
	ATCallbackInfo_tEAB4B96EDB8FA37AEF0E359D43E9AA128FCC6AEB* G_B38_0 = NULL;
	ATCallbackInfo_tEAB4B96EDB8FA37AEF0E359D43E9AA128FCC6AEB* G_B37_0 = NULL;
	String_t* G_B39_0 = NULL;
	ATCallbackInfo_tEAB4B96EDB8FA37AEF0E359D43E9AA128FCC6AEB* G_B39_1 = NULL;
	ATCallbackInfo_tEAB4B96EDB8FA37AEF0E359D43E9AA128FCC6AEB* G_B41_0 = NULL;
	ATCallbackInfo_tEAB4B96EDB8FA37AEF0E359D43E9AA128FCC6AEB* G_B40_0 = NULL;
	String_t* G_B42_0 = NULL;
	ATCallbackInfo_tEAB4B96EDB8FA37AEF0E359D43E9AA128FCC6AEB* G_B42_1 = NULL;
	ATCallbackInfo_tEAB4B96EDB8FA37AEF0E359D43E9AA128FCC6AEB* G_B44_0 = NULL;
	ATCallbackInfo_tEAB4B96EDB8FA37AEF0E359D43E9AA128FCC6AEB* G_B43_0 = NULL;
	String_t* G_B45_0 = NULL;
	ATCallbackInfo_tEAB4B96EDB8FA37AEF0E359D43E9AA128FCC6AEB* G_B45_1 = NULL;
	ATCallbackInfo_tEAB4B96EDB8FA37AEF0E359D43E9AA128FCC6AEB* G_B47_0 = NULL;
	ATCallbackInfo_tEAB4B96EDB8FA37AEF0E359D43E9AA128FCC6AEB* G_B46_0 = NULL;
	String_t* G_B48_0 = NULL;
	ATCallbackInfo_tEAB4B96EDB8FA37AEF0E359D43E9AA128FCC6AEB* G_B48_1 = NULL;
	ATCallbackInfo_tEAB4B96EDB8FA37AEF0E359D43E9AA128FCC6AEB* G_B50_0 = NULL;
	ATCallbackInfo_tEAB4B96EDB8FA37AEF0E359D43E9AA128FCC6AEB* G_B49_0 = NULL;
	String_t* G_B51_0 = NULL;
	ATCallbackInfo_tEAB4B96EDB8FA37AEF0E359D43E9AA128FCC6AEB* G_B51_1 = NULL;
	ATCallbackInfo_tEAB4B96EDB8FA37AEF0E359D43E9AA128FCC6AEB* G_B53_0 = NULL;
	ATCallbackInfo_tEAB4B96EDB8FA37AEF0E359D43E9AA128FCC6AEB* G_B52_0 = NULL;
	String_t* G_B54_0 = NULL;
	ATCallbackInfo_tEAB4B96EDB8FA37AEF0E359D43E9AA128FCC6AEB* G_B54_1 = NULL;
	ATCallbackInfo_tEAB4B96EDB8FA37AEF0E359D43E9AA128FCC6AEB* G_B56_0 = NULL;
	ATCallbackInfo_tEAB4B96EDB8FA37AEF0E359D43E9AA128FCC6AEB* G_B55_0 = NULL;
	String_t* G_B57_0 = NULL;
	ATCallbackInfo_tEAB4B96EDB8FA37AEF0E359D43E9AA128FCC6AEB* G_B57_1 = NULL;
	ATCallbackInfo_tEAB4B96EDB8FA37AEF0E359D43E9AA128FCC6AEB* G_B59_0 = NULL;
	ATCallbackInfo_tEAB4B96EDB8FA37AEF0E359D43E9AA128FCC6AEB* G_B58_0 = NULL;
	String_t* G_B60_0 = NULL;
	ATCallbackInfo_tEAB4B96EDB8FA37AEF0E359D43E9AA128FCC6AEB* G_B60_1 = NULL;
	ATCallbackInfo_tEAB4B96EDB8FA37AEF0E359D43E9AA128FCC6AEB* G_B62_0 = NULL;
	ATCallbackInfo_tEAB4B96EDB8FA37AEF0E359D43E9AA128FCC6AEB* G_B61_0 = NULL;
	String_t* G_B63_0 = NULL;
	ATCallbackInfo_tEAB4B96EDB8FA37AEF0E359D43E9AA128FCC6AEB* G_B63_1 = NULL;
	ATCallbackInfo_tEAB4B96EDB8FA37AEF0E359D43E9AA128FCC6AEB* G_B65_0 = NULL;
	ATCallbackInfo_tEAB4B96EDB8FA37AEF0E359D43E9AA128FCC6AEB* G_B64_0 = NULL;
	String_t* G_B66_0 = NULL;
	ATCallbackInfo_tEAB4B96EDB8FA37AEF0E359D43E9AA128FCC6AEB* G_B66_1 = NULL;
	ATCallbackInfo_tEAB4B96EDB8FA37AEF0E359D43E9AA128FCC6AEB* G_B68_0 = NULL;
	ATCallbackInfo_tEAB4B96EDB8FA37AEF0E359D43E9AA128FCC6AEB* G_B67_0 = NULL;
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* G_B69_0 = NULL;
	ATCallbackInfo_tEAB4B96EDB8FA37AEF0E359D43E9AA128FCC6AEB* G_B69_1 = NULL;
	ATCallbackInfo_tEAB4B96EDB8FA37AEF0E359D43E9AA128FCC6AEB* G_B71_0 = NULL;
	ATCallbackInfo_tEAB4B96EDB8FA37AEF0E359D43E9AA128FCC6AEB* G_B70_0 = NULL;
	String_t* G_B72_0 = NULL;
	ATCallbackInfo_tEAB4B96EDB8FA37AEF0E359D43E9AA128FCC6AEB* G_B72_1 = NULL;
	{
		// public ATCallbackInfo(string callbackJson)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
	}
	try
	{// begin try (depth: 1)
		{
			// this.callbackJson = callbackJson;
			String_t* L_0 = ___callbackJson0;
			__this->___callbackJson_23 = L_0;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___callbackJson_23), (void*)L_0);
			// JsonData jsonData = JsonMapper.ToObject(callbackJson);
			String_t* L_1 = ___callbackJson0;
			il2cpp_codegen_runtime_class_init_inline(JsonMapper_t6C02C11E5758BFDB34AD6A5F41ABBFC7FAB2E598_il2cpp_TypeInfo_var);
			JsonData_tC2CA8D7C407ECAC4EE42392A60118C480372F7B8* L_2;
			L_2 = JsonMapper_ToObject_m6F172C5533804E8F5D2CD9BA74E86387BEA1159B(L_1, NULL);
			V_0 = L_2;
			// network_firm_id = int.Parse(jsonData.ContainsKey("network_firm_id") ? jsonData["network_firm_id"].ToString() : "0");
			JsonData_tC2CA8D7C407ECAC4EE42392A60118C480372F7B8* L_3 = V_0;
			NullCheck(L_3);
			bool L_4;
			L_4 = JsonData_ContainsKey_mEBB01415765C9AD822B46C0786E0B52F00C37C29(L_3, _stringLiteral8E55A4C5A6C5EA49FB99BAFA2B4646BDC4229840, NULL);
			G_B2_0 = __this;
			if (L_4)
			{
				G_B3_0 = __this;
				goto IL_0029_1;
			}
		}
		{
			G_B4_0 = _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
			G_B4_1 = G_B2_0;
			goto IL_0039_1;
		}

IL_0029_1:
		{
			JsonData_tC2CA8D7C407ECAC4EE42392A60118C480372F7B8* L_5 = V_0;
			NullCheck(L_5);
			JsonData_tC2CA8D7C407ECAC4EE42392A60118C480372F7B8* L_6;
			L_6 = JsonData_get_Item_m00EAC67BB1E47EFC8CAA78F47F4A5D4ED6057661(L_5, _stringLiteral8E55A4C5A6C5EA49FB99BAFA2B4646BDC4229840, NULL);
			NullCheck(L_6);
			String_t* L_7;
			L_7 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
			G_B4_0 = L_7;
			G_B4_1 = G_B3_0;
		}

IL_0039_1:
		{
			int32_t L_8;
			L_8 = Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0(G_B4_0, NULL);
			NullCheck(G_B4_1);
			G_B4_1->___network_firm_id_0 = L_8;
			// adsource_id = jsonData.ContainsKey("adsource_id") ? (string)jsonData["adsource_id"] : "";
			JsonData_tC2CA8D7C407ECAC4EE42392A60118C480372F7B8* L_9 = V_0;
			NullCheck(L_9);
			bool L_10;
			L_10 = JsonData_ContainsKey_mEBB01415765C9AD822B46C0786E0B52F00C37C29(L_9, _stringLiteralAAB6F5974AA6BF52B67FEA0BB8610F793A2BBCDD, NULL);
			G_B5_0 = __this;
			if (L_10)
			{
				G_B6_0 = __this;
				goto IL_0058_1;
			}
		}
		{
			G_B7_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
			G_B7_1 = G_B5_0;
			goto IL_0068_1;
		}

IL_0058_1:
		{
			JsonData_tC2CA8D7C407ECAC4EE42392A60118C480372F7B8* L_11 = V_0;
			NullCheck(L_11);
			JsonData_tC2CA8D7C407ECAC4EE42392A60118C480372F7B8* L_12;
			L_12 = JsonData_get_Item_m00EAC67BB1E47EFC8CAA78F47F4A5D4ED6057661(L_11, _stringLiteralAAB6F5974AA6BF52B67FEA0BB8610F793A2BBCDD, NULL);
			String_t* L_13;
			L_13 = JsonData_op_Explicit_mE4A176D7A819698E397AF2A942FF2CB169F47AC0(L_12, NULL);
			G_B7_0 = L_13;
			G_B7_1 = G_B6_0;
		}

IL_0068_1:
		{
			NullCheck(G_B7_1);
			G_B7_1->___adsource_id_1 = G_B7_0;
			Il2CppCodeGenWriteBarrier((void**)(&G_B7_1->___adsource_id_1), (void*)G_B7_0);
			// adsource_index = int.Parse(jsonData.ContainsKey("adsource_index") ? jsonData["adsource_index"].ToString() : "-1");
			JsonData_tC2CA8D7C407ECAC4EE42392A60118C480372F7B8* L_14 = V_0;
			NullCheck(L_14);
			bool L_15;
			L_15 = JsonData_ContainsKey_mEBB01415765C9AD822B46C0786E0B52F00C37C29(L_14, _stringLiteral5CDE5C91E6E6A38F4BCDA5848E64C14E7B6CF92C, NULL);
			G_B8_0 = __this;
			if (L_15)
			{
				G_B9_0 = __this;
				goto IL_0082_1;
			}
		}
		{
			G_B10_0 = _stringLiteral2687B859C52DBDD7EA54FE527B1981F4F4B67B0E;
			G_B10_1 = G_B8_0;
			goto IL_0092_1;
		}

IL_0082_1:
		{
			JsonData_tC2CA8D7C407ECAC4EE42392A60118C480372F7B8* L_16 = V_0;
			NullCheck(L_16);
			JsonData_tC2CA8D7C407ECAC4EE42392A60118C480372F7B8* L_17;
			L_17 = JsonData_get_Item_m00EAC67BB1E47EFC8CAA78F47F4A5D4ED6057661(L_16, _stringLiteral5CDE5C91E6E6A38F4BCDA5848E64C14E7B6CF92C, NULL);
			NullCheck(L_17);
			String_t* L_18;
			L_18 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_17);
			G_B10_0 = L_18;
			G_B10_1 = G_B9_0;
		}

IL_0092_1:
		{
			int32_t L_19;
			L_19 = Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0(G_B10_0, NULL);
			NullCheck(G_B10_1);
			G_B10_1->___adsource_index_2 = L_19;
			// adsource_price = double.Parse(jsonData.ContainsKey("adsource_price") ? jsonData["adsource_price"].ToString() : "0");
			JsonData_tC2CA8D7C407ECAC4EE42392A60118C480372F7B8* L_20 = V_0;
			NullCheck(L_20);
			bool L_21;
			L_21 = JsonData_ContainsKey_mEBB01415765C9AD822B46C0786E0B52F00C37C29(L_20, _stringLiteral3B247B668327A8C2234CDF83CC6E6A225D536776, NULL);
			G_B11_0 = __this;
			if (L_21)
			{
				G_B12_0 = __this;
				goto IL_00b1_1;
			}
		}
		{
			G_B13_0 = _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
			G_B13_1 = G_B11_0;
			goto IL_00c1_1;
		}

IL_00b1_1:
		{
			JsonData_tC2CA8D7C407ECAC4EE42392A60118C480372F7B8* L_22 = V_0;
			NullCheck(L_22);
			JsonData_tC2CA8D7C407ECAC4EE42392A60118C480372F7B8* L_23;
			L_23 = JsonData_get_Item_m00EAC67BB1E47EFC8CAA78F47F4A5D4ED6057661(L_22, _stringLiteral3B247B668327A8C2234CDF83CC6E6A225D536776, NULL);
			NullCheck(L_23);
			String_t* L_24;
			L_24 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_23);
			G_B13_0 = L_24;
			G_B13_1 = G_B12_0;
		}

IL_00c1_1:
		{
			double L_25;
			L_25 = Double_Parse_mEBC644CE0C86A405283EC4839F872EF9E556670A(G_B13_0, NULL);
			NullCheck(G_B13_1);
			G_B13_1->___adsource_price_3 = L_25;
			// adsource_isheaderbidding = 0;
			__this->___adsource_isheaderbidding_4 = 0;
			// if (jsonData.ContainsKey("adsource_isheaderbidding")) {
			JsonData_tC2CA8D7C407ECAC4EE42392A60118C480372F7B8* L_26 = V_0;
			NullCheck(L_26);
			bool L_27;
			L_27 = JsonData_ContainsKey_mEBB01415765C9AD822B46C0786E0B52F00C37C29(L_26, _stringLiteral1327E3E0D2EDE515C865E554C1090B04A103D22A, NULL);
			if (!L_27)
			{
				goto IL_010e_1;
			}
		}
		{
			// adsource_isheaderbidding = int.Parse(jsonData.ContainsKey("adsource_isheaderbidding") ? jsonData["adsource_isheaderbidding"].ToString() : "0");
			JsonData_tC2CA8D7C407ECAC4EE42392A60118C480372F7B8* L_28 = V_0;
			NullCheck(L_28);
			bool L_29;
			L_29 = JsonData_ContainsKey_mEBB01415765C9AD822B46C0786E0B52F00C37C29(L_28, _stringLiteral1327E3E0D2EDE515C865E554C1090B04A103D22A, NULL);
			G_B15_0 = __this;
			if (L_29)
			{
				G_B16_0 = __this;
				goto IL_00f4_1;
			}
		}
		{
			G_B17_0 = _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
			G_B17_1 = G_B15_0;
			goto IL_0104_1;
		}

IL_00f4_1:
		{
			JsonData_tC2CA8D7C407ECAC4EE42392A60118C480372F7B8* L_30 = V_0;
			NullCheck(L_30);
			JsonData_tC2CA8D7C407ECAC4EE42392A60118C480372F7B8* L_31;
			L_31 = JsonData_get_Item_m00EAC67BB1E47EFC8CAA78F47F4A5D4ED6057661(L_30, _stringLiteral1327E3E0D2EDE515C865E554C1090B04A103D22A, NULL);
			NullCheck(L_31);
			String_t* L_32;
			L_32 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_31);
			G_B17_0 = L_32;
			G_B17_1 = G_B16_0;
		}

IL_0104_1:
		{
			int32_t L_33;
			L_33 = Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0(G_B17_0, NULL);
			NullCheck(G_B17_1);
			G_B17_1->___adsource_isheaderbidding_4 = L_33;
		}

IL_010e_1:
		{
			// id = jsonData.ContainsKey("id") ? (string)jsonData["id"] : "";
			JsonData_tC2CA8D7C407ECAC4EE42392A60118C480372F7B8* L_34 = V_0;
			NullCheck(L_34);
			bool L_35;
			L_35 = JsonData_ContainsKey_mEBB01415765C9AD822B46C0786E0B52F00C37C29(L_34, _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694, NULL);
			G_B19_0 = __this;
			if (L_35)
			{
				G_B20_0 = __this;
				goto IL_0123_1;
			}
		}
		{
			G_B21_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
			G_B21_1 = G_B19_0;
			goto IL_0133_1;
		}

IL_0123_1:
		{
			JsonData_tC2CA8D7C407ECAC4EE42392A60118C480372F7B8* L_36 = V_0;
			NullCheck(L_36);
			JsonData_tC2CA8D7C407ECAC4EE42392A60118C480372F7B8* L_37;
			L_37 = JsonData_get_Item_m00EAC67BB1E47EFC8CAA78F47F4A5D4ED6057661(L_36, _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694, NULL);
			String_t* L_38;
			L_38 = JsonData_op_Explicit_mE4A176D7A819698E397AF2A942FF2CB169F47AC0(L_37, NULL);
			G_B21_0 = L_38;
			G_B21_1 = G_B20_0;
		}

IL_0133_1:
		{
			NullCheck(G_B21_1);
			G_B21_1->___id_5 = G_B21_0;
			Il2CppCodeGenWriteBarrier((void**)(&G_B21_1->___id_5), (void*)G_B21_0);
			// publisher_revenue = double.Parse(jsonData.ContainsKey("publisher_revenue") ? jsonData["publisher_revenue"].ToString() : "0");
			JsonData_tC2CA8D7C407ECAC4EE42392A60118C480372F7B8* L_39 = V_0;
			NullCheck(L_39);
			bool L_40;
			L_40 = JsonData_ContainsKey_mEBB01415765C9AD822B46C0786E0B52F00C37C29(L_39, _stringLiteral6488BB0E8D628F6BAD095A096DE57BB154AD1E04, NULL);
			G_B22_0 = __this;
			if (L_40)
			{
				G_B23_0 = __this;
				goto IL_014d_1;
			}
		}
		{
			G_B24_0 = _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
			G_B24_1 = G_B22_0;
			goto IL_015d_1;
		}

IL_014d_1:
		{
			JsonData_tC2CA8D7C407ECAC4EE42392A60118C480372F7B8* L_41 = V_0;
			NullCheck(L_41);
			JsonData_tC2CA8D7C407ECAC4EE42392A60118C480372F7B8* L_42;
			L_42 = JsonData_get_Item_m00EAC67BB1E47EFC8CAA78F47F4A5D4ED6057661(L_41, _stringLiteral6488BB0E8D628F6BAD095A096DE57BB154AD1E04, NULL);
			NullCheck(L_42);
			String_t* L_43;
			L_43 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_42);
			G_B24_0 = L_43;
			G_B24_1 = G_B23_0;
		}

IL_015d_1:
		{
			double L_44;
			L_44 = Double_Parse_mEBC644CE0C86A405283EC4839F872EF9E556670A(G_B24_0, NULL);
			NullCheck(G_B24_1);
			G_B24_1->___publisher_revenue_6 = L_44;
			// currency = jsonData.ContainsKey("currency") ? (string)jsonData["currency"] : "";
			JsonData_tC2CA8D7C407ECAC4EE42392A60118C480372F7B8* L_45 = V_0;
			NullCheck(L_45);
			bool L_46;
			L_46 = JsonData_ContainsKey_mEBB01415765C9AD822B46C0786E0B52F00C37C29(L_45, _stringLiteralAB3E708924BFB9D6B641A4B9F82FE5FE57F307B6, NULL);
			G_B25_0 = __this;
			if (L_46)
			{
				G_B26_0 = __this;
				goto IL_017c_1;
			}
		}
		{
			G_B27_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
			G_B27_1 = G_B25_0;
			goto IL_018c_1;
		}

IL_017c_1:
		{
			JsonData_tC2CA8D7C407ECAC4EE42392A60118C480372F7B8* L_47 = V_0;
			NullCheck(L_47);
			JsonData_tC2CA8D7C407ECAC4EE42392A60118C480372F7B8* L_48;
			L_48 = JsonData_get_Item_m00EAC67BB1E47EFC8CAA78F47F4A5D4ED6057661(L_47, _stringLiteralAB3E708924BFB9D6B641A4B9F82FE5FE57F307B6, NULL);
			String_t* L_49;
			L_49 = JsonData_op_Explicit_mE4A176D7A819698E397AF2A942FF2CB169F47AC0(L_48, NULL);
			G_B27_0 = L_49;
			G_B27_1 = G_B26_0;
		}

IL_018c_1:
		{
			NullCheck(G_B27_1);
			G_B27_1->___currency_7 = G_B27_0;
			Il2CppCodeGenWriteBarrier((void**)(&G_B27_1->___currency_7), (void*)G_B27_0);
			// country = jsonData.ContainsKey("country") ? (string)jsonData["country"] : "";
			JsonData_tC2CA8D7C407ECAC4EE42392A60118C480372F7B8* L_50 = V_0;
			NullCheck(L_50);
			bool L_51;
			L_51 = JsonData_ContainsKey_mEBB01415765C9AD822B46C0786E0B52F00C37C29(L_50, _stringLiteralA47A168D660B942A0E4EFA75F386C8669267074D, NULL);
			G_B28_0 = __this;
			if (L_51)
			{
				G_B29_0 = __this;
				goto IL_01a6_1;
			}
		}
		{
			G_B30_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
			G_B30_1 = G_B28_0;
			goto IL_01b6_1;
		}

IL_01a6_1:
		{
			JsonData_tC2CA8D7C407ECAC4EE42392A60118C480372F7B8* L_52 = V_0;
			NullCheck(L_52);
			JsonData_tC2CA8D7C407ECAC4EE42392A60118C480372F7B8* L_53;
			L_53 = JsonData_get_Item_m00EAC67BB1E47EFC8CAA78F47F4A5D4ED6057661(L_52, _stringLiteralA47A168D660B942A0E4EFA75F386C8669267074D, NULL);
			String_t* L_54;
			L_54 = JsonData_op_Explicit_mE4A176D7A819698E397AF2A942FF2CB169F47AC0(L_53, NULL);
			G_B30_0 = L_54;
			G_B30_1 = G_B29_0;
		}

IL_01b6_1:
		{
			NullCheck(G_B30_1);
			G_B30_1->___country_8 = G_B30_0;
			Il2CppCodeGenWriteBarrier((void**)(&G_B30_1->___country_8), (void*)G_B30_0);
			// adunit_format = jsonData.ContainsKey("adunit_format") ? (string)jsonData["adunit_format"] : "";
			JsonData_tC2CA8D7C407ECAC4EE42392A60118C480372F7B8* L_55 = V_0;
			NullCheck(L_55);
			bool L_56;
			L_56 = JsonData_ContainsKey_mEBB01415765C9AD822B46C0786E0B52F00C37C29(L_55, _stringLiteralA9BF39889835439556D3C22F981E68B4CDF66D3E, NULL);
			G_B31_0 = __this;
			if (L_56)
			{
				G_B32_0 = __this;
				goto IL_01d0_1;
			}
		}
		{
			G_B33_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
			G_B33_1 = G_B31_0;
			goto IL_01e0_1;
		}

IL_01d0_1:
		{
			JsonData_tC2CA8D7C407ECAC4EE42392A60118C480372F7B8* L_57 = V_0;
			NullCheck(L_57);
			JsonData_tC2CA8D7C407ECAC4EE42392A60118C480372F7B8* L_58;
			L_58 = JsonData_get_Item_m00EAC67BB1E47EFC8CAA78F47F4A5D4ED6057661(L_57, _stringLiteralA9BF39889835439556D3C22F981E68B4CDF66D3E, NULL);
			String_t* L_59;
			L_59 = JsonData_op_Explicit_mE4A176D7A819698E397AF2A942FF2CB169F47AC0(L_58, NULL);
			G_B33_0 = L_59;
			G_B33_1 = G_B32_0;
		}

IL_01e0_1:
		{
			NullCheck(G_B33_1);
			G_B33_1->___adunit_format_10 = G_B33_0;
			Il2CppCodeGenWriteBarrier((void**)(&G_B33_1->___adunit_format_10), (void*)G_B33_0);
			// adunit_id = jsonData.ContainsKey("adunit_id") ? (string)jsonData["adunit_id"] : "";
			JsonData_tC2CA8D7C407ECAC4EE42392A60118C480372F7B8* L_60 = V_0;
			NullCheck(L_60);
			bool L_61;
			L_61 = JsonData_ContainsKey_mEBB01415765C9AD822B46C0786E0B52F00C37C29(L_60, _stringLiteral28F57C7C7D07611D497C365D2E8D646E014185B3, NULL);
			G_B34_0 = __this;
			if (L_61)
			{
				G_B35_0 = __this;
				goto IL_01fa_1;
			}
		}
		{
			G_B36_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
			G_B36_1 = G_B34_0;
			goto IL_020a_1;
		}

IL_01fa_1:
		{
			JsonData_tC2CA8D7C407ECAC4EE42392A60118C480372F7B8* L_62 = V_0;
			NullCheck(L_62);
			JsonData_tC2CA8D7C407ECAC4EE42392A60118C480372F7B8* L_63;
			L_63 = JsonData_get_Item_m00EAC67BB1E47EFC8CAA78F47F4A5D4ED6057661(L_62, _stringLiteral28F57C7C7D07611D497C365D2E8D646E014185B3, NULL);
			String_t* L_64;
			L_64 = JsonData_op_Explicit_mE4A176D7A819698E397AF2A942FF2CB169F47AC0(L_63, NULL);
			G_B36_0 = L_64;
			G_B36_1 = G_B35_0;
		}

IL_020a_1:
		{
			NullCheck(G_B36_1);
			G_B36_1->___adunit_id_9 = G_B36_0;
			Il2CppCodeGenWriteBarrier((void**)(&G_B36_1->___adunit_id_9), (void*)G_B36_0);
			// precision = jsonData.ContainsKey("precision") ? (string)jsonData["precision"] : "";
			JsonData_tC2CA8D7C407ECAC4EE42392A60118C480372F7B8* L_65 = V_0;
			NullCheck(L_65);
			bool L_66;
			L_66 = JsonData_ContainsKey_mEBB01415765C9AD822B46C0786E0B52F00C37C29(L_65, _stringLiteralC8B5F8CFFD59A7B59061F52A426CC740232A7314, NULL);
			G_B37_0 = __this;
			if (L_66)
			{
				G_B38_0 = __this;
				goto IL_0224_1;
			}
		}
		{
			G_B39_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
			G_B39_1 = G_B37_0;
			goto IL_0234_1;
		}

IL_0224_1:
		{
			JsonData_tC2CA8D7C407ECAC4EE42392A60118C480372F7B8* L_67 = V_0;
			NullCheck(L_67);
			JsonData_tC2CA8D7C407ECAC4EE42392A60118C480372F7B8* L_68;
			L_68 = JsonData_get_Item_m00EAC67BB1E47EFC8CAA78F47F4A5D4ED6057661(L_67, _stringLiteralC8B5F8CFFD59A7B59061F52A426CC740232A7314, NULL);
			String_t* L_69;
			L_69 = JsonData_op_Explicit_mE4A176D7A819698E397AF2A942FF2CB169F47AC0(L_68, NULL);
			G_B39_0 = L_69;
			G_B39_1 = G_B38_0;
		}

IL_0234_1:
		{
			NullCheck(G_B39_1);
			G_B39_1->___precision_11 = G_B39_0;
			Il2CppCodeGenWriteBarrier((void**)(&G_B39_1->___precision_11), (void*)G_B39_0);
			// network_type = jsonData.ContainsKey("network_type") ? (string)jsonData["network_type"] : "";
			JsonData_tC2CA8D7C407ECAC4EE42392A60118C480372F7B8* L_70 = V_0;
			NullCheck(L_70);
			bool L_71;
			L_71 = JsonData_ContainsKey_mEBB01415765C9AD822B46C0786E0B52F00C37C29(L_70, _stringLiteral25705477E232DDE539315FA572A0CE775D407106, NULL);
			G_B40_0 = __this;
			if (L_71)
			{
				G_B41_0 = __this;
				goto IL_024e_1;
			}
		}
		{
			G_B42_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
			G_B42_1 = G_B40_0;
			goto IL_025e_1;
		}

IL_024e_1:
		{
			JsonData_tC2CA8D7C407ECAC4EE42392A60118C480372F7B8* L_72 = V_0;
			NullCheck(L_72);
			JsonData_tC2CA8D7C407ECAC4EE42392A60118C480372F7B8* L_73;
			L_73 = JsonData_get_Item_m00EAC67BB1E47EFC8CAA78F47F4A5D4ED6057661(L_72, _stringLiteral25705477E232DDE539315FA572A0CE775D407106, NULL);
			String_t* L_74;
			L_74 = JsonData_op_Explicit_mE4A176D7A819698E397AF2A942FF2CB169F47AC0(L_73, NULL);
			G_B42_0 = L_74;
			G_B42_1 = G_B41_0;
		}

IL_025e_1:
		{
			NullCheck(G_B42_1);
			G_B42_1->___network_type_12 = G_B42_0;
			Il2CppCodeGenWriteBarrier((void**)(&G_B42_1->___network_type_12), (void*)G_B42_0);
			// network_placement_id = jsonData.ContainsKey("network_placement_id") ? (string)jsonData["network_placement_id"] : "";
			JsonData_tC2CA8D7C407ECAC4EE42392A60118C480372F7B8* L_75 = V_0;
			NullCheck(L_75);
			bool L_76;
			L_76 = JsonData_ContainsKey_mEBB01415765C9AD822B46C0786E0B52F00C37C29(L_75, _stringLiteral0749C3AB6B46A5C9B817BCF9C0C6BD2FE94613B1, NULL);
			G_B43_0 = __this;
			if (L_76)
			{
				G_B44_0 = __this;
				goto IL_0278_1;
			}
		}
		{
			G_B45_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
			G_B45_1 = G_B43_0;
			goto IL_0288_1;
		}

IL_0278_1:
		{
			JsonData_tC2CA8D7C407ECAC4EE42392A60118C480372F7B8* L_77 = V_0;
			NullCheck(L_77);
			JsonData_tC2CA8D7C407ECAC4EE42392A60118C480372F7B8* L_78;
			L_78 = JsonData_get_Item_m00EAC67BB1E47EFC8CAA78F47F4A5D4ED6057661(L_77, _stringLiteral0749C3AB6B46A5C9B817BCF9C0C6BD2FE94613B1, NULL);
			String_t* L_79;
			L_79 = JsonData_op_Explicit_mE4A176D7A819698E397AF2A942FF2CB169F47AC0(L_78, NULL);
			G_B45_0 = L_79;
			G_B45_1 = G_B44_0;
		}

IL_0288_1:
		{
			NullCheck(G_B45_1);
			G_B45_1->___network_placement_id_13 = G_B45_0;
			Il2CppCodeGenWriteBarrier((void**)(&G_B45_1->___network_placement_id_13), (void*)G_B45_0);
			// ecpm_level = int.Parse(jsonData.ContainsKey("ecpm_level") ? jsonData["ecpm_level"].ToString() : "0");
			JsonData_tC2CA8D7C407ECAC4EE42392A60118C480372F7B8* L_80 = V_0;
			NullCheck(L_80);
			bool L_81;
			L_81 = JsonData_ContainsKey_mEBB01415765C9AD822B46C0786E0B52F00C37C29(L_80, _stringLiteral9EFB87BB64D28FEAB900DA3E711EF2A22510DB3D, NULL);
			G_B46_0 = __this;
			if (L_81)
			{
				G_B47_0 = __this;
				goto IL_02a2_1;
			}
		}
		{
			G_B48_0 = _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
			G_B48_1 = G_B46_0;
			goto IL_02b2_1;
		}

IL_02a2_1:
		{
			JsonData_tC2CA8D7C407ECAC4EE42392A60118C480372F7B8* L_82 = V_0;
			NullCheck(L_82);
			JsonData_tC2CA8D7C407ECAC4EE42392A60118C480372F7B8* L_83;
			L_83 = JsonData_get_Item_m00EAC67BB1E47EFC8CAA78F47F4A5D4ED6057661(L_82, _stringLiteral9EFB87BB64D28FEAB900DA3E711EF2A22510DB3D, NULL);
			NullCheck(L_83);
			String_t* L_84;
			L_84 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_83);
			G_B48_0 = L_84;
			G_B48_1 = G_B47_0;
		}

IL_02b2_1:
		{
			int32_t L_85;
			L_85 = Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0(G_B48_0, NULL);
			NullCheck(G_B48_1);
			G_B48_1->___ecpm_level_14 = L_85;
			// segment_id = int.Parse(jsonData.ContainsKey("segment_id") ? jsonData["segment_id"].ToString() : "0");
			JsonData_tC2CA8D7C407ECAC4EE42392A60118C480372F7B8* L_86 = V_0;
			NullCheck(L_86);
			bool L_87;
			L_87 = JsonData_ContainsKey_mEBB01415765C9AD822B46C0786E0B52F00C37C29(L_86, _stringLiteralA1701382D5DB91FE64299861D18B6B8D90F12AFA, NULL);
			G_B49_0 = __this;
			if (L_87)
			{
				G_B50_0 = __this;
				goto IL_02d1_1;
			}
		}
		{
			G_B51_0 = _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
			G_B51_1 = G_B49_0;
			goto IL_02e1_1;
		}

IL_02d1_1:
		{
			JsonData_tC2CA8D7C407ECAC4EE42392A60118C480372F7B8* L_88 = V_0;
			NullCheck(L_88);
			JsonData_tC2CA8D7C407ECAC4EE42392A60118C480372F7B8* L_89;
			L_89 = JsonData_get_Item_m00EAC67BB1E47EFC8CAA78F47F4A5D4ED6057661(L_88, _stringLiteralA1701382D5DB91FE64299861D18B6B8D90F12AFA, NULL);
			NullCheck(L_89);
			String_t* L_90;
			L_90 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_89);
			G_B51_0 = L_90;
			G_B51_1 = G_B50_0;
		}

IL_02e1_1:
		{
			int32_t L_91;
			L_91 = Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0(G_B51_0, NULL);
			NullCheck(G_B51_1);
			G_B51_1->___segment_id_15 = L_91;
			// scenario_id = jsonData.ContainsKey("scenario_id") ? (string)jsonData["scenario_id"] : "";// RewardVideo & Interstitial
			JsonData_tC2CA8D7C407ECAC4EE42392A60118C480372F7B8* L_92 = V_0;
			NullCheck(L_92);
			bool L_93;
			L_93 = JsonData_ContainsKey_mEBB01415765C9AD822B46C0786E0B52F00C37C29(L_92, _stringLiteralB8805582BE73806AB6806DC032B0E98F07A42022, NULL);
			G_B52_0 = __this;
			if (L_93)
			{
				G_B53_0 = __this;
				goto IL_0300_1;
			}
		}
		{
			G_B54_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
			G_B54_1 = G_B52_0;
			goto IL_0310_1;
		}

IL_0300_1:
		{
			JsonData_tC2CA8D7C407ECAC4EE42392A60118C480372F7B8* L_94 = V_0;
			NullCheck(L_94);
			JsonData_tC2CA8D7C407ECAC4EE42392A60118C480372F7B8* L_95;
			L_95 = JsonData_get_Item_m00EAC67BB1E47EFC8CAA78F47F4A5D4ED6057661(L_94, _stringLiteralB8805582BE73806AB6806DC032B0E98F07A42022, NULL);
			String_t* L_96;
			L_96 = JsonData_op_Explicit_mE4A176D7A819698E397AF2A942FF2CB169F47AC0(L_95, NULL);
			G_B54_0 = L_96;
			G_B54_1 = G_B53_0;
		}

IL_0310_1:
		{
			NullCheck(G_B54_1);
			G_B54_1->___scenario_id_16 = G_B54_0;
			Il2CppCodeGenWriteBarrier((void**)(&G_B54_1->___scenario_id_16), (void*)G_B54_0);
			// scenario_reward_name = jsonData.ContainsKey("scenario_reward_name") ? (string)jsonData["scenario_reward_name"] : "";
			JsonData_tC2CA8D7C407ECAC4EE42392A60118C480372F7B8* L_97 = V_0;
			NullCheck(L_97);
			bool L_98;
			L_98 = JsonData_ContainsKey_mEBB01415765C9AD822B46C0786E0B52F00C37C29(L_97, _stringLiteralB74CD87160E732F533F99DCAA83E9EAFBBEDAEAC, NULL);
			G_B55_0 = __this;
			if (L_98)
			{
				G_B56_0 = __this;
				goto IL_032a_1;
			}
		}
		{
			G_B57_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
			G_B57_1 = G_B55_0;
			goto IL_033a_1;
		}

IL_032a_1:
		{
			JsonData_tC2CA8D7C407ECAC4EE42392A60118C480372F7B8* L_99 = V_0;
			NullCheck(L_99);
			JsonData_tC2CA8D7C407ECAC4EE42392A60118C480372F7B8* L_100;
			L_100 = JsonData_get_Item_m00EAC67BB1E47EFC8CAA78F47F4A5D4ED6057661(L_99, _stringLiteralB74CD87160E732F533F99DCAA83E9EAFBBEDAEAC, NULL);
			String_t* L_101;
			L_101 = JsonData_op_Explicit_mE4A176D7A819698E397AF2A942FF2CB169F47AC0(L_100, NULL);
			G_B57_0 = L_101;
			G_B57_1 = G_B56_0;
		}

IL_033a_1:
		{
			NullCheck(G_B57_1);
			G_B57_1->___scenario_reward_name_17 = G_B57_0;
			Il2CppCodeGenWriteBarrier((void**)(&G_B57_1->___scenario_reward_name_17), (void*)G_B57_0);
			// scenario_reward_number = int.Parse(jsonData.ContainsKey("scenario_reward_number") ? jsonData["scenario_reward_number"].ToString() : "0");
			JsonData_tC2CA8D7C407ECAC4EE42392A60118C480372F7B8* L_102 = V_0;
			NullCheck(L_102);
			bool L_103;
			L_103 = JsonData_ContainsKey_mEBB01415765C9AD822B46C0786E0B52F00C37C29(L_102, _stringLiteral2C1E27EE7EEC15120D76B35E99FCEF230345D161, NULL);
			G_B58_0 = __this;
			if (L_103)
			{
				G_B59_0 = __this;
				goto IL_0354_1;
			}
		}
		{
			G_B60_0 = _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
			G_B60_1 = G_B58_0;
			goto IL_0364_1;
		}

IL_0354_1:
		{
			JsonData_tC2CA8D7C407ECAC4EE42392A60118C480372F7B8* L_104 = V_0;
			NullCheck(L_104);
			JsonData_tC2CA8D7C407ECAC4EE42392A60118C480372F7B8* L_105;
			L_105 = JsonData_get_Item_m00EAC67BB1E47EFC8CAA78F47F4A5D4ED6057661(L_104, _stringLiteral2C1E27EE7EEC15120D76B35E99FCEF230345D161, NULL);
			NullCheck(L_105);
			String_t* L_106;
			L_106 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_105);
			G_B60_0 = L_106;
			G_B60_1 = G_B59_0;
		}

IL_0364_1:
		{
			int32_t L_107;
			L_107 = Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0(G_B60_0, NULL);
			NullCheck(G_B60_1);
			G_B60_1->___scenario_reward_number_18 = L_107;
			// channel = jsonData.ContainsKey("channel") ? (string)jsonData["channel"] : "";
			JsonData_tC2CA8D7C407ECAC4EE42392A60118C480372F7B8* L_108 = V_0;
			NullCheck(L_108);
			bool L_109;
			L_109 = JsonData_ContainsKey_mEBB01415765C9AD822B46C0786E0B52F00C37C29(L_108, _stringLiteral44F1E7DB2E8AAD233857868896DFEFE5A63EECEF, NULL);
			G_B61_0 = __this;
			if (L_109)
			{
				G_B62_0 = __this;
				goto IL_0383_1;
			}
		}
		{
			G_B63_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
			G_B63_1 = G_B61_0;
			goto IL_0393_1;
		}

IL_0383_1:
		{
			JsonData_tC2CA8D7C407ECAC4EE42392A60118C480372F7B8* L_110 = V_0;
			NullCheck(L_110);
			JsonData_tC2CA8D7C407ECAC4EE42392A60118C480372F7B8* L_111;
			L_111 = JsonData_get_Item_m00EAC67BB1E47EFC8CAA78F47F4A5D4ED6057661(L_110, _stringLiteral44F1E7DB2E8AAD233857868896DFEFE5A63EECEF, NULL);
			String_t* L_112;
			L_112 = JsonData_op_Explicit_mE4A176D7A819698E397AF2A942FF2CB169F47AC0(L_111, NULL);
			G_B63_0 = L_112;
			G_B63_1 = G_B62_0;
		}

IL_0393_1:
		{
			NullCheck(G_B63_1);
			G_B63_1->___channel_20 = G_B63_0;
			Il2CppCodeGenWriteBarrier((void**)(&G_B63_1->___channel_20), (void*)G_B63_0);
			// sub_channel = jsonData.ContainsKey("sub_channel") ? (string)jsonData["sub_channel"] : "";
			JsonData_tC2CA8D7C407ECAC4EE42392A60118C480372F7B8* L_113 = V_0;
			NullCheck(L_113);
			bool L_114;
			L_114 = JsonData_ContainsKey_mEBB01415765C9AD822B46C0786E0B52F00C37C29(L_113, _stringLiteral425C3CBEE5296F98B99484FBA972E5B2FA7A25D3, NULL);
			G_B64_0 = __this;
			if (L_114)
			{
				G_B65_0 = __this;
				goto IL_03ad_1;
			}
		}
		{
			G_B66_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
			G_B66_1 = G_B64_0;
			goto IL_03bd_1;
		}

IL_03ad_1:
		{
			JsonData_tC2CA8D7C407ECAC4EE42392A60118C480372F7B8* L_115 = V_0;
			NullCheck(L_115);
			JsonData_tC2CA8D7C407ECAC4EE42392A60118C480372F7B8* L_116;
			L_116 = JsonData_get_Item_m00EAC67BB1E47EFC8CAA78F47F4A5D4ED6057661(L_115, _stringLiteral425C3CBEE5296F98B99484FBA972E5B2FA7A25D3, NULL);
			String_t* L_117;
			L_117 = JsonData_op_Explicit_mE4A176D7A819698E397AF2A942FF2CB169F47AC0(L_116, NULL);
			G_B66_0 = L_117;
			G_B66_1 = G_B65_0;
		}

IL_03bd_1:
		{
			NullCheck(G_B66_1);
			G_B66_1->___sub_channel_19 = G_B66_0;
			Il2CppCodeGenWriteBarrier((void**)(&G_B66_1->___sub_channel_19), (void*)G_B66_0);
			// custom_rule = jsonData.ContainsKey("custom_rule") ? JsonMapper.ToObject<Dictionary<string, object>>(jsonData["custom_rule"].ToJson()) : null;
			JsonData_tC2CA8D7C407ECAC4EE42392A60118C480372F7B8* L_118 = V_0;
			NullCheck(L_118);
			bool L_119;
			L_119 = JsonData_ContainsKey_mEBB01415765C9AD822B46C0786E0B52F00C37C29(L_118, _stringLiteral11203B5B843E50223E13B821BA07333862DE0A64, NULL);
			G_B67_0 = __this;
			if (L_119)
			{
				G_B68_0 = __this;
				goto IL_03d3_1;
			}
		}
		{
			G_B69_0 = ((Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)(NULL));
			G_B69_1 = G_B67_0;
			goto IL_03e8_1;
		}

IL_03d3_1:
		{
			JsonData_tC2CA8D7C407ECAC4EE42392A60118C480372F7B8* L_120 = V_0;
			NullCheck(L_120);
			JsonData_tC2CA8D7C407ECAC4EE42392A60118C480372F7B8* L_121;
			L_121 = JsonData_get_Item_m00EAC67BB1E47EFC8CAA78F47F4A5D4ED6057661(L_120, _stringLiteral11203B5B843E50223E13B821BA07333862DE0A64, NULL);
			NullCheck(L_121);
			String_t* L_122;
			L_122 = JsonData_ToJson_m2ADCB6573BE417AADDE02183221830F52613B94B(L_121, NULL);
			il2cpp_codegen_runtime_class_init_inline(JsonMapper_t6C02C11E5758BFDB34AD6A5F41ABBFC7FAB2E598_il2cpp_TypeInfo_var);
			Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_123;
			L_123 = JsonMapper_ToObject_TisDictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_m3AD2D687303F4E0B8AD4C4EAA456000D57216503(L_122, JsonMapper_ToObject_TisDictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_m3AD2D687303F4E0B8AD4C4EAA456000D57216503_RuntimeMethod_var);
			G_B69_0 = L_123;
			G_B69_1 = G_B68_0;
		}

IL_03e8_1:
		{
			NullCheck(G_B69_1);
			G_B69_1->___custom_rule_21 = G_B69_0;
			Il2CppCodeGenWriteBarrier((void**)(&G_B69_1->___custom_rule_21), (void*)G_B69_0);
			// reward_custom_data = jsonData.ContainsKey("reward_custom_data") ? (string)jsonData["reward_custom_data"] : "";
			JsonData_tC2CA8D7C407ECAC4EE42392A60118C480372F7B8* L_124 = V_0;
			NullCheck(L_124);
			bool L_125;
			L_125 = JsonData_ContainsKey_mEBB01415765C9AD822B46C0786E0B52F00C37C29(L_124, _stringLiteral7AC9006F30C221D398925A34B4E6D093FA9ED120, NULL);
			G_B70_0 = __this;
			if (L_125)
			{
				G_B71_0 = __this;
				goto IL_0402_1;
			}
		}
		{
			G_B72_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
			G_B72_1 = G_B70_0;
			goto IL_0412_1;
		}

IL_0402_1:
		{
			JsonData_tC2CA8D7C407ECAC4EE42392A60118C480372F7B8* L_126 = V_0;
			NullCheck(L_126);
			JsonData_tC2CA8D7C407ECAC4EE42392A60118C480372F7B8* L_127;
			L_127 = JsonData_get_Item_m00EAC67BB1E47EFC8CAA78F47F4A5D4ED6057661(L_126, _stringLiteral7AC9006F30C221D398925A34B4E6D093FA9ED120, NULL);
			String_t* L_128;
			L_128 = JsonData_op_Explicit_mE4A176D7A819698E397AF2A942FF2CB169F47AC0(L_127, NULL);
			G_B72_0 = L_128;
			G_B72_1 = G_B71_0;
		}

IL_0412_1:
		{
			NullCheck(G_B72_1);
			G_B72_1->___reward_custom_data_22 = G_B72_0;
			Il2CppCodeGenWriteBarrier((void**)(&G_B72_1->___reward_custom_data_22), (void*)G_B72_0);
			// }
			goto IL_0427;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0419;
		}
		throw e;
	}

CATCH_0419:
	{// begin catch(System.Exception)
		// catch (System.Exception e) {
		V_1 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// System.Console.WriteLine("Exception caught: {0}", e);
		Exception_t* L_129 = V_1;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var)));
		Console_WriteLine_mCF1AA33709B943A23A5CA168DF7972F4DAB53011(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69ED2F27015E1D8E16B770424685FDD3D7EDD076)), L_129, NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0427;
	}// end catch (depth: 1)

IL_0427:
	{
		// }
		return;
	}
}
// System.String AnyThinkAds.Api.ATCallbackInfo::getOriginJSONString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ATCallbackInfo_getOriginJSONString_m185750FDDEA242F377D8F3203798C1933AE871FE (ATCallbackInfo_tEAB4B96EDB8FA37AEF0E359D43E9AA128FCC6AEB* __this, const RuntimeMethod* method) 
{
	{
		// return callbackJson;
		String_t* L_0 = __this->___callbackJson_23;
		return L_0;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Object> AnyThinkAds.Api.ATCallbackInfo::toAdsourceDictionary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ATCallbackInfo_toAdsourceDictionary_m330F6078E7FDFF33573E7D286C77E833966B2FAF (ATCallbackInfo_tEAB4B96EDB8FA37AEF0E359D43E9AA128FCC6AEB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0749C3AB6B46A5C9B817BCF9C0C6BD2FE94613B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral28F57C7C7D07611D497C365D2E8D646E014185B3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B247B668327A8C2234CDF83CC6E6A225D536776);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E55A4C5A6C5EA49FB99BAFA2B4646BDC4229840);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAAB6F5974AA6BF52B67FEA0BB8610F793A2BBCDD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB3E708924BFB9D6B641A4B9F82FE5FE57F307B6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Dictionary<string, object> dataDictionary = new Dictionary<string, object>();
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)il2cpp_codegen_object_new(Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9(L_0, Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		// dataDictionary.Add("adsource_id", adsource_id);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_1 = L_0;
		String_t* L_2 = __this->___adsource_id_1;
		NullCheck(L_1);
		Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_1, _stringLiteralAAB6F5974AA6BF52B67FEA0BB8610F793A2BBCDD, L_2, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		// dataDictionary.Add("adsource_price", adsource_price);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_3 = L_1;
		double L_4 = __this->___adsource_price_3;
		double L_5 = L_4;
		RuntimeObject* L_6 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_3, _stringLiteral3B247B668327A8C2234CDF83CC6E6A225D536776, L_6, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		// dataDictionary.Add("adunit_id", adunit_id);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_7 = L_3;
		String_t* L_8 = __this->___adunit_id_9;
		NullCheck(L_7);
		Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_7, _stringLiteral28F57C7C7D07611D497C365D2E8D646E014185B3, L_8, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		// dataDictionary.Add("currency", currency);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_9 = L_7;
		String_t* L_10 = __this->___currency_7;
		NullCheck(L_9);
		Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_9, _stringLiteralAB3E708924BFB9D6B641A4B9F82FE5FE57F307B6, L_10, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		// dataDictionary.Add("network_firm_id",network_firm_id);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_11 = L_9;
		int32_t L_12 = __this->___network_firm_id_0;
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_11, _stringLiteral8E55A4C5A6C5EA49FB99BAFA2B4646BDC4229840, L_14, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		// dataDictionary.Add("network_placement_id",network_placement_id);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_15 = L_11;
		String_t* L_16 = __this->___network_placement_id_13;
		NullCheck(L_15);
		Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_15, _stringLiteral0749C3AB6B46A5C9B817BCF9C0C6BD2FE94613B1, L_16, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		// return dataDictionary;
		return L_15;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Object> AnyThinkAds.Api.ATCallbackInfo::toDictionary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ATCallbackInfo_toDictionary_mE96F410F5CF3599C375BDF70066C75D93B502805 (ATCallbackInfo_tEAB4B96EDB8FA37AEF0E359D43E9AA128FCC6AEB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0749C3AB6B46A5C9B817BCF9C0C6BD2FE94613B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral11203B5B843E50223E13B821BA07333862DE0A64);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1327E3E0D2EDE515C865E554C1090B04A103D22A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral25705477E232DDE539315FA572A0CE775D407106);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral28F57C7C7D07611D497C365D2E8D646E014185B3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C1E27EE7EEC15120D76B35E99FCEF230345D161);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B247B668327A8C2234CDF83CC6E6A225D536776);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral425C3CBEE5296F98B99484FBA972E5B2FA7A25D3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44F1E7DB2E8AAD233857868896DFEFE5A63EECEF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5CDE5C91E6E6A38F4BCDA5848E64C14E7B6CF92C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6488BB0E8D628F6BAD095A096DE57BB154AD1E04);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7AC9006F30C221D398925A34B4E6D093FA9ED120);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E55A4C5A6C5EA49FB99BAFA2B4646BDC4229840);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9EFB87BB64D28FEAB900DA3E711EF2A22510DB3D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA1701382D5DB91FE64299861D18B6B8D90F12AFA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA47A168D660B942A0E4EFA75F386C8669267074D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA9BF39889835439556D3C22F981E68B4CDF66D3E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAAB6F5974AA6BF52B67FEA0BB8610F793A2BBCDD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB3E708924BFB9D6B641A4B9F82FE5FE57F307B6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB74CD87160E732F533F99DCAA83E9EAFBBEDAEAC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB8805582BE73806AB6806DC032B0E98F07A42022);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8B5F8CFFD59A7B59061F52A426CC740232A7314);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Dictionary<string, object> dataDictionary = new Dictionary<string, object>();
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)il2cpp_codegen_object_new(Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9(L_0, Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		// dataDictionary.Add("network_firm_id",network_firm_id);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_1 = L_0;
		int32_t L_2 = __this->___network_firm_id_0;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_1, _stringLiteral8E55A4C5A6C5EA49FB99BAFA2B4646BDC4229840, L_4, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		// dataDictionary.Add("adsource_id", adsource_id);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_5 = L_1;
		String_t* L_6 = __this->___adsource_id_1;
		NullCheck(L_5);
		Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_5, _stringLiteralAAB6F5974AA6BF52B67FEA0BB8610F793A2BBCDD, L_6, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		// dataDictionary.Add("adsource_index", adsource_index);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_7 = L_5;
		int32_t L_8 = __this->___adsource_index_2;
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_7, _stringLiteral5CDE5C91E6E6A38F4BCDA5848E64C14E7B6CF92C, L_10, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		// dataDictionary.Add("adsource_price", adsource_price);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_11 = L_7;
		double L_12 = __this->___adsource_price_3;
		double L_13 = L_12;
		RuntimeObject* L_14 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_11, _stringLiteral3B247B668327A8C2234CDF83CC6E6A225D536776, L_14, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		// dataDictionary.Add("adsource_isheaderbidding", adsource_isheaderbidding);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_15 = L_11;
		int32_t L_16 = __this->___adsource_isheaderbidding_4;
		int32_t L_17 = L_16;
		RuntimeObject* L_18 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_17);
		NullCheck(L_15);
		Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_15, _stringLiteral1327E3E0D2EDE515C865E554C1090B04A103D22A, L_18, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		// dataDictionary.Add("id", id);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_19 = L_15;
		String_t* L_20 = __this->___id_5;
		NullCheck(L_19);
		Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_19, _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694, L_20, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		// dataDictionary.Add("publisher_revenue", publisher_revenue);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_21 = L_19;
		double L_22 = __this->___publisher_revenue_6;
		double L_23 = L_22;
		RuntimeObject* L_24 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_23);
		NullCheck(L_21);
		Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_21, _stringLiteral6488BB0E8D628F6BAD095A096DE57BB154AD1E04, L_24, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		// dataDictionary.Add("currency", currency);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_25 = L_21;
		String_t* L_26 = __this->___currency_7;
		NullCheck(L_25);
		Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_25, _stringLiteralAB3E708924BFB9D6B641A4B9F82FE5FE57F307B6, L_26, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		// dataDictionary.Add("country", country);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_27 = L_25;
		String_t* L_28 = __this->___country_8;
		NullCheck(L_27);
		Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_27, _stringLiteralA47A168D660B942A0E4EFA75F386C8669267074D, L_28, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		// dataDictionary.Add("adunit_id", adunit_id);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_29 = L_27;
		String_t* L_30 = __this->___adunit_id_9;
		NullCheck(L_29);
		Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_29, _stringLiteral28F57C7C7D07611D497C365D2E8D646E014185B3, L_30, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		// dataDictionary.Add("adunit_format", adunit_format);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_31 = L_29;
		String_t* L_32 = __this->___adunit_format_10;
		NullCheck(L_31);
		Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_31, _stringLiteralA9BF39889835439556D3C22F981E68B4CDF66D3E, L_32, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		// dataDictionary.Add("precision", precision);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_33 = L_31;
		String_t* L_34 = __this->___precision_11;
		NullCheck(L_33);
		Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_33, _stringLiteralC8B5F8CFFD59A7B59061F52A426CC740232A7314, L_34, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		// dataDictionary.Add("network_type", network_type);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_35 = L_33;
		String_t* L_36 = __this->___network_type_12;
		NullCheck(L_35);
		Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_35, _stringLiteral25705477E232DDE539315FA572A0CE775D407106, L_36, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		// dataDictionary.Add("network_placement_id",network_placement_id);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_37 = L_35;
		String_t* L_38 = __this->___network_placement_id_13;
		NullCheck(L_37);
		Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_37, _stringLiteral0749C3AB6B46A5C9B817BCF9C0C6BD2FE94613B1, L_38, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		// dataDictionary.Add("ecpm_level", ecpm_level);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_39 = L_37;
		int32_t L_40 = __this->___ecpm_level_14;
		int32_t L_41 = L_40;
		RuntimeObject* L_42 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_41);
		NullCheck(L_39);
		Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_39, _stringLiteral9EFB87BB64D28FEAB900DA3E711EF2A22510DB3D, L_42, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		// dataDictionary.Add("segment_id", segment_id);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_43 = L_39;
		int32_t L_44 = __this->___segment_id_15;
		int32_t L_45 = L_44;
		RuntimeObject* L_46 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_45);
		NullCheck(L_43);
		Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_43, _stringLiteralA1701382D5DB91FE64299861D18B6B8D90F12AFA, L_46, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		// dataDictionary.Add("scenario_id", scenario_id);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_47 = L_43;
		String_t* L_48 = __this->___scenario_id_16;
		NullCheck(L_47);
		Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_47, _stringLiteralB8805582BE73806AB6806DC032B0E98F07A42022, L_48, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		// dataDictionary.Add("scenario_reward_name", scenario_reward_name);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_49 = L_47;
		String_t* L_50 = __this->___scenario_reward_name_17;
		NullCheck(L_49);
		Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_49, _stringLiteralB74CD87160E732F533F99DCAA83E9EAFBBEDAEAC, L_50, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		// dataDictionary.Add("scenario_reward_number", scenario_reward_number);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_51 = L_49;
		int32_t L_52 = __this->___scenario_reward_number_18;
		int32_t L_53 = L_52;
		RuntimeObject* L_54 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_53);
		NullCheck(L_51);
		Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_51, _stringLiteral2C1E27EE7EEC15120D76B35E99FCEF230345D161, L_54, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		// dataDictionary.Add("sub_channel", sub_channel);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_55 = L_51;
		String_t* L_56 = __this->___sub_channel_19;
		NullCheck(L_55);
		Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_55, _stringLiteral425C3CBEE5296F98B99484FBA972E5B2FA7A25D3, L_56, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		// dataDictionary.Add("channel", channel);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_57 = L_55;
		String_t* L_58 = __this->___channel_20;
		NullCheck(L_57);
		Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_57, _stringLiteral44F1E7DB2E8AAD233857868896DFEFE5A63EECEF, L_58, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		// dataDictionary.Add("custom_rule", custom_rule);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_59 = L_57;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_60 = __this->___custom_rule_21;
		NullCheck(L_59);
		Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_59, _stringLiteral11203B5B843E50223E13B821BA07333862DE0A64, L_60, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		// dataDictionary.Add("reward_custom_data", reward_custom_data);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_61 = L_59;
		String_t* L_62 = __this->___reward_custom_data_22;
		NullCheck(L_61);
		Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_61, _stringLiteral7AC9006F30C221D398925A34B4E6D093FA9ED120, L_62, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		// return dataDictionary;
		return L_61;
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
// System.Void AnyThinkAds.Api.ATConst::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATConst__ctor_mE178A686C9BEF0B07D1714686C4E8C343F6A6199 (ATConst_tC4379944A54BD1D08DADD87FB3878EC04620C8E7* __this, const RuntimeMethod* method) 
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
// System.Void AnyThinkAds.Api.ATDownloadManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATDownloadManager__ctor_m64D1D4CBF4F7B76A6B228DDC40003012A4C75DD6 (ATDownloadManager_t7CF62A4FEFB0854016FA6E98BA4C59AAD967272B* __this, const RuntimeMethod* method) 
{
	{
		// private ATDownloadManager()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// client = GetATDownloadClient();
		RuntimeObject* L_0;
		L_0 = ATDownloadManager_GetATDownloadClient_mDFF4044D1AB6059A6E37159DDE6521B2762AC946(__this, NULL);
		__this->___client_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___client_1), (void*)L_0);
		// }
		return;
	}
}
// AnyThinkAds.Api.ATDownloadManager AnyThinkAds.Api.ATDownloadManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ATDownloadManager_t7CF62A4FEFB0854016FA6E98BA4C59AAD967272B* ATDownloadManager_get_Instance_mA51B378C6DBBB4FA7AE57382402ECB0FE4FFA5EC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ATDownloadManager_t7CF62A4FEFB0854016FA6E98BA4C59AAD967272B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return instance;
		il2cpp_codegen_runtime_class_init_inline(ATDownloadManager_t7CF62A4FEFB0854016FA6E98BA4C59AAD967272B_il2cpp_TypeInfo_var);
		ATDownloadManager_t7CF62A4FEFB0854016FA6E98BA4C59AAD967272B* L_0 = ((ATDownloadManager_t7CF62A4FEFB0854016FA6E98BA4C59AAD967272B_StaticFields*)il2cpp_codegen_static_fields_for(ATDownloadManager_t7CF62A4FEFB0854016FA6E98BA4C59AAD967272B_il2cpp_TypeInfo_var))->___instance_0;
		return L_0;
	}
}
// System.Void AnyThinkAds.Api.ATDownloadManager::setListener(AnyThinkAds.Api.ATDownloadAdListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATDownloadManager_setListener_mDF0366C610A774BF9678ED44AC19795BE0280477 (ATDownloadManager_t7CF62A4FEFB0854016FA6E98BA4C59AAD967272B* __this, RuntimeObject* ___listener0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IATDownloadClient_tE915DC3A98BA33AE641D7D773A373ECF33EBAEDC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// client.setListener(listener);
		RuntimeObject* L_0 = __this->___client_1;
		RuntimeObject* L_1 = ___listener0;
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(0 /* System.Void AnyThinkAds.Common.IATDownloadClient::setListener(AnyThinkAds.Api.ATDownloadAdListener) */, IATDownloadClient_tE915DC3A98BA33AE641D7D773A373ECF33EBAEDC_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// AnyThinkAds.Common.IATDownloadClient AnyThinkAds.Api.ATDownloadManager::GetATDownloadClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ATDownloadManager_GetATDownloadClient_mDFF4044D1AB6059A6E37159DDE6521B2762AC946 (ATDownloadManager_t7CF62A4FEFB0854016FA6E98BA4C59AAD967272B* __this, const RuntimeMethod* method) 
{
	{
		// return AnyThinkAds.ATAdsClientFactory.BuildDownloadClient();
		RuntimeObject* L_0;
		L_0 = ATAdsClientFactory_BuildDownloadClient_m01BEAA96DE6F67DE37B14B442038A84392089C0A(NULL);
		return L_0;
	}
}
// System.Void AnyThinkAds.Api.ATDownloadManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATDownloadManager__cctor_mF00338E5B2C447B02E9B4B2D87759D2F0B678AD4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ATDownloadManager_t7CF62A4FEFB0854016FA6E98BA4C59AAD967272B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ATDownloadManager instance = new ATDownloadManager();
		ATDownloadManager_t7CF62A4FEFB0854016FA6E98BA4C59AAD967272B* L_0 = (ATDownloadManager_t7CF62A4FEFB0854016FA6E98BA4C59AAD967272B*)il2cpp_codegen_object_new(ATDownloadManager_t7CF62A4FEFB0854016FA6E98BA4C59AAD967272B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ATDownloadManager__ctor_m64D1D4CBF4F7B76A6B228DDC40003012A4C75DD6(L_0, NULL);
		((ATDownloadManager_t7CF62A4FEFB0854016FA6E98BA4C59AAD967272B_StaticFields*)il2cpp_codegen_static_fields_for(ATDownloadManager_t7CF62A4FEFB0854016FA6E98BA4C59AAD967272B_il2cpp_TypeInfo_var))->___instance_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ATDownloadManager_t7CF62A4FEFB0854016FA6E98BA4C59AAD967272B_StaticFields*)il2cpp_codegen_static_fields_for(ATDownloadManager_t7CF62A4FEFB0854016FA6E98BA4C59AAD967272B_il2cpp_TypeInfo_var))->___instance_0), (void*)L_0);
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
// System.Void AnyThinkAds.Api.ATInterstitialAdLoadingExtra::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATInterstitialAdLoadingExtra__ctor_mC61E0B6E4303EE9A1FCB8122C6163427E53888E8 (ATInterstitialAdLoadingExtra_tBDE0F8742C81BD918736554917D67DEE3884A509* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void AnyThinkAds.Api.ATInterstitialAdLoadingExtra::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATInterstitialAdLoadingExtra__cctor_m0CB48150E440674479DFE61DA41F61A7094A8DF0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ATInterstitialAdLoadingExtra_tBDE0F8742C81BD918736554917D67DEE3884A509_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1388D53684B0996B3FF27203D1547660E4D82509);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA223E6F0C54D77B42B95E26C1F074DA464E2049C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC0CFC91159B68CDB00561EE3B792C9679F86738);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly string kATInterstitialAdLoadingExtraInterstitialAdSize = "interstitial_ad_size";
		((ATInterstitialAdLoadingExtra_tBDE0F8742C81BD918736554917D67DEE3884A509_StaticFields*)il2cpp_codegen_static_fields_for(ATInterstitialAdLoadingExtra_tBDE0F8742C81BD918736554917D67DEE3884A509_il2cpp_TypeInfo_var))->___kATInterstitialAdLoadingExtraInterstitialAdSize_0 = _stringLiteralA223E6F0C54D77B42B95E26C1F074DA464E2049C;
		Il2CppCodeGenWriteBarrier((void**)(&((ATInterstitialAdLoadingExtra_tBDE0F8742C81BD918736554917D67DEE3884A509_StaticFields*)il2cpp_codegen_static_fields_for(ATInterstitialAdLoadingExtra_tBDE0F8742C81BD918736554917D67DEE3884A509_il2cpp_TypeInfo_var))->___kATInterstitialAdLoadingExtraInterstitialAdSize_0), (void*)_stringLiteralA223E6F0C54D77B42B95E26C1F074DA464E2049C);
		// public static readonly string kATInterstitialAdLoadingExtraInterstitialAdSizeStruct = "interstitial_ad_size_struct";
		((ATInterstitialAdLoadingExtra_tBDE0F8742C81BD918736554917D67DEE3884A509_StaticFields*)il2cpp_codegen_static_fields_for(ATInterstitialAdLoadingExtra_tBDE0F8742C81BD918736554917D67DEE3884A509_il2cpp_TypeInfo_var))->___kATInterstitialAdLoadingExtraInterstitialAdSizeStruct_1 = _stringLiteralBC0CFC91159B68CDB00561EE3B792C9679F86738;
		Il2CppCodeGenWriteBarrier((void**)(&((ATInterstitialAdLoadingExtra_tBDE0F8742C81BD918736554917D67DEE3884A509_StaticFields*)il2cpp_codegen_static_fields_for(ATInterstitialAdLoadingExtra_tBDE0F8742C81BD918736554917D67DEE3884A509_il2cpp_TypeInfo_var))->___kATInterstitialAdLoadingExtraInterstitialAdSizeStruct_1), (void*)_stringLiteralBC0CFC91159B68CDB00561EE3B792C9679F86738);
		// public static readonly string kATInterstitialAdSizeUsesPixelFlagKey = "uses_pixel";
		((ATInterstitialAdLoadingExtra_tBDE0F8742C81BD918736554917D67DEE3884A509_StaticFields*)il2cpp_codegen_static_fields_for(ATInterstitialAdLoadingExtra_tBDE0F8742C81BD918736554917D67DEE3884A509_il2cpp_TypeInfo_var))->___kATInterstitialAdSizeUsesPixelFlagKey_2 = _stringLiteral1388D53684B0996B3FF27203D1547660E4D82509;
		Il2CppCodeGenWriteBarrier((void**)(&((ATInterstitialAdLoadingExtra_tBDE0F8742C81BD918736554917D67DEE3884A509_StaticFields*)il2cpp_codegen_static_fields_for(ATInterstitialAdLoadingExtra_tBDE0F8742C81BD918736554917D67DEE3884A509_il2cpp_TypeInfo_var))->___kATInterstitialAdSizeUsesPixelFlagKey_2), (void*)_stringLiteral1388D53684B0996B3FF27203D1547660E4D82509);
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
// System.Void AnyThinkAds.Api.ATInterstitialAd::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATInterstitialAd__ctor_m9874DE86B16F638ABC4E130FC010823146557BC7 (ATInterstitialAd_t68C4D29B8572B16C2F1EFF99D6FC2BE0AA339817* __this, const RuntimeMethod* method) 
{
	{
		// private ATInterstitialAd()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// client = GetATInterstitialAdClient();
		RuntimeObject* L_0;
		L_0 = ATInterstitialAd_GetATInterstitialAdClient_m62231E37E232FC8667C708DDB6776925B72A92CA(__this, NULL);
		__this->___client_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___client_1), (void*)L_0);
		// }
		return;
	}
}
// AnyThinkAds.Api.ATInterstitialAd AnyThinkAds.Api.ATInterstitialAd::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ATInterstitialAd_t68C4D29B8572B16C2F1EFF99D6FC2BE0AA339817* ATInterstitialAd_get_Instance_m64601EBD5729633C2F6F72031863A1AEC6187311 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ATInterstitialAd_t68C4D29B8572B16C2F1EFF99D6FC2BE0AA339817_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return instance;
		il2cpp_codegen_runtime_class_init_inline(ATInterstitialAd_t68C4D29B8572B16C2F1EFF99D6FC2BE0AA339817_il2cpp_TypeInfo_var);
		ATInterstitialAd_t68C4D29B8572B16C2F1EFF99D6FC2BE0AA339817* L_0 = ((ATInterstitialAd_t68C4D29B8572B16C2F1EFF99D6FC2BE0AA339817_StaticFields*)il2cpp_codegen_static_fields_for(ATInterstitialAd_t68C4D29B8572B16C2F1EFF99D6FC2BE0AA339817_il2cpp_TypeInfo_var))->___instance_0;
		return L_0;
	}
}
// System.Void AnyThinkAds.Api.ATInterstitialAd::loadInterstitialAd(System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATInterstitialAd_loadInterstitialAd_m50747D0EA0ED0CECBE505E92C9A292D20AB1D6D2 (ATInterstitialAd_t68C4D29B8572B16C2F1EFF99D6FC2BE0AA339817* __this, String_t* ___placementId0, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___pairs1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ATInterstitialAdLoadingExtra_tBDE0F8742C81BD918736554917D67DEE3884A509_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ATSize_tB526AFFCD84BA3CC54C85D8125F2B279B6C3588D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IATInterstitialAdClient_t8DE3DFDD0468982640EAE2198BEAE61407AE340C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t6C02C11E5758BFDB34AD6A5F41ABBFC7FAB2E598_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		s_Il2CppMethodInitialized = true;
	}
	ATSize_tB526AFFCD84BA3CC54C85D8125F2B279B6C3588D* V_0 = NULL;
	{
		// if (pairs != null && pairs.ContainsKey(ATInterstitialAdLoadingExtra.kATInterstitialAdLoadingExtraInterstitialAdSizeStruct))
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = ___pairs1;
		if (!L_0)
		{
			goto IL_0075;
		}
	}
	{
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_1 = ___pairs1;
		il2cpp_codegen_runtime_class_init_inline(ATInterstitialAdLoadingExtra_tBDE0F8742C81BD918736554917D67DEE3884A509_il2cpp_TypeInfo_var);
		String_t* L_2 = ((ATInterstitialAdLoadingExtra_tBDE0F8742C81BD918736554917D67DEE3884A509_StaticFields*)il2cpp_codegen_static_fields_for(ATInterstitialAdLoadingExtra_tBDE0F8742C81BD918736554917D67DEE3884A509_il2cpp_TypeInfo_var))->___kATInterstitialAdLoadingExtraInterstitialAdSizeStruct_1;
		NullCheck(L_1);
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC(L_1, L_2, Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0075;
		}
	}
	{
		// ATSize size = (ATSize)(pairs[ATInterstitialAdLoadingExtra.kATInterstitialAdLoadingExtraInterstitialAdSizeStruct]);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_4 = ___pairs1;
		il2cpp_codegen_runtime_class_init_inline(ATInterstitialAdLoadingExtra_tBDE0F8742C81BD918736554917D67DEE3884A509_il2cpp_TypeInfo_var);
		String_t* L_5 = ((ATInterstitialAdLoadingExtra_tBDE0F8742C81BD918736554917D67DEE3884A509_StaticFields*)il2cpp_codegen_static_fields_for(ATInterstitialAdLoadingExtra_tBDE0F8742C81BD918736554917D67DEE3884A509_il2cpp_TypeInfo_var))->___kATInterstitialAdLoadingExtraInterstitialAdSizeStruct_1;
		NullCheck(L_4);
		RuntimeObject* L_6;
		L_6 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_4, L_5, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		V_0 = ((ATSize_tB526AFFCD84BA3CC54C85D8125F2B279B6C3588D*)CastclassClass((RuntimeObject*)L_6, ATSize_tB526AFFCD84BA3CC54C85D8125F2B279B6C3588D_il2cpp_TypeInfo_var));
		// pairs.Add(ATInterstitialAdLoadingExtra.kATInterstitialAdLoadingExtraInterstitialAdSize, size.width + "x" + size.height);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_7 = ___pairs1;
		String_t* L_8 = ((ATInterstitialAdLoadingExtra_tBDE0F8742C81BD918736554917D67DEE3884A509_StaticFields*)il2cpp_codegen_static_fields_for(ATInterstitialAdLoadingExtra_tBDE0F8742C81BD918736554917D67DEE3884A509_il2cpp_TypeInfo_var))->___kATInterstitialAdLoadingExtraInterstitialAdSize_0;
		ATSize_tB526AFFCD84BA3CC54C85D8125F2B279B6C3588D* L_9 = V_0;
		NullCheck(L_9);
		int32_t* L_10 = (&L_9->___width_0);
		String_t* L_11;
		L_11 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_10, NULL);
		ATSize_tB526AFFCD84BA3CC54C85D8125F2B279B6C3588D* L_12 = V_0;
		NullCheck(L_12);
		int32_t* L_13 = (&L_12->___height_1);
		String_t* L_14;
		L_14 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_13, NULL);
		String_t* L_15;
		L_15 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_11, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, L_14, NULL);
		NullCheck(L_7);
		Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_7, L_8, L_15, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		// pairs.Add(ATInterstitialAdLoadingExtra.kATInterstitialAdSizeUsesPixelFlagKey, size.usesPixel);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_16 = ___pairs1;
		String_t* L_17 = ((ATInterstitialAdLoadingExtra_tBDE0F8742C81BD918736554917D67DEE3884A509_StaticFields*)il2cpp_codegen_static_fields_for(ATInterstitialAdLoadingExtra_tBDE0F8742C81BD918736554917D67DEE3884A509_il2cpp_TypeInfo_var))->___kATInterstitialAdSizeUsesPixelFlagKey_2;
		ATSize_tB526AFFCD84BA3CC54C85D8125F2B279B6C3588D* L_18 = V_0;
		NullCheck(L_18);
		bool L_19 = L_18->___usesPixel_2;
		bool L_20 = L_19;
		RuntimeObject* L_21 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_16);
		Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_16, L_17, L_21, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		// client.loadInterstitialAd(placementId, JsonMapper.ToJson(pairs));
		RuntimeObject* L_22 = __this->___client_1;
		String_t* L_23 = ___placementId0;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_24 = ___pairs1;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t6C02C11E5758BFDB34AD6A5F41ABBFC7FAB2E598_il2cpp_TypeInfo_var);
		String_t* L_25;
		L_25 = JsonMapper_ToJson_m640303EB0458D6FC503ACB6AFECB29F3EAC84336(L_24, NULL);
		NullCheck(L_22);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(0 /* System.Void AnyThinkAds.Common.IATInterstitialAdClient::loadInterstitialAd(System.String,System.String) */, IATInterstitialAdClient_t8DE3DFDD0468982640EAE2198BEAE61407AE340C_il2cpp_TypeInfo_var, L_22, L_23, L_25);
		return;
	}

IL_0075:
	{
		// client.loadInterstitialAd(placementId, JsonMapper.ToJson(pairs));
		RuntimeObject* L_26 = __this->___client_1;
		String_t* L_27 = ___placementId0;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_28 = ___pairs1;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t6C02C11E5758BFDB34AD6A5F41ABBFC7FAB2E598_il2cpp_TypeInfo_var);
		String_t* L_29;
		L_29 = JsonMapper_ToJson_m640303EB0458D6FC503ACB6AFECB29F3EAC84336(L_28, NULL);
		NullCheck(L_26);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(0 /* System.Void AnyThinkAds.Common.IATInterstitialAdClient::loadInterstitialAd(System.String,System.String) */, IATInterstitialAdClient_t8DE3DFDD0468982640EAE2198BEAE61407AE340C_il2cpp_TypeInfo_var, L_26, L_27, L_29);
		// }
		return;
	}
}
// System.Boolean AnyThinkAds.Api.ATInterstitialAd::hasInterstitialAdReady(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ATInterstitialAd_hasInterstitialAdReady_mF1A3BF024681DA9E1DC51E53862A2679CFA375EA (ATInterstitialAd_t68C4D29B8572B16C2F1EFF99D6FC2BE0AA339817* __this, String_t* ___placementId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IATInterstitialAdClient_t8DE3DFDD0468982640EAE2198BEAE61407AE340C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return client.hasInterstitialAdReady(placementId);
		RuntimeObject* L_0 = __this->___client_1;
		String_t* L_1 = ___placementId0;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, String_t* >::Invoke(2 /* System.Boolean AnyThinkAds.Common.IATInterstitialAdClient::hasInterstitialAdReady(System.String) */, IATInterstitialAdClient_t8DE3DFDD0468982640EAE2198BEAE61407AE340C_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Void AnyThinkAds.Api.ATInterstitialAd::entryScenarioWithPlacementID(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATInterstitialAd_entryScenarioWithPlacementID_m91C4F2B014D83863C25F90BB6470B3B79DFB22BE (ATInterstitialAd_t68C4D29B8572B16C2F1EFF99D6FC2BE0AA339817* __this, String_t* ___placementId0, String_t* ___scenarioID1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IATInterstitialAdClient_t8DE3DFDD0468982640EAE2198BEAE61407AE340C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// client.entryScenarioWithPlacementID(placementId,scenarioID);
		RuntimeObject* L_0 = __this->___client_1;
		String_t* L_1 = ___placementId0;
		String_t* L_2 = ___scenarioID1;
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(6 /* System.Void AnyThinkAds.Common.IATInterstitialAdClient::entryScenarioWithPlacementID(System.String,System.String) */, IATInterstitialAdClient_t8DE3DFDD0468982640EAE2198BEAE61407AE340C_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		// }
		return;
	}
}
// System.String AnyThinkAds.Api.ATInterstitialAd::checkAdStatus(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ATInterstitialAd_checkAdStatus_m2668410E8E4EABB32C12594C99CB19EF7ACB3329 (ATInterstitialAd_t68C4D29B8572B16C2F1EFF99D6FC2BE0AA339817* __this, String_t* ___placementId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IATInterstitialAdClient_t8DE3DFDD0468982640EAE2198BEAE61407AE340C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return client.checkAdStatus(placementId);
		RuntimeObject* L_0 = __this->___client_1;
		String_t* L_1 = ___placementId0;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(3 /* System.String AnyThinkAds.Common.IATInterstitialAdClient::checkAdStatus(System.String) */, IATInterstitialAdClient_t8DE3DFDD0468982640EAE2198BEAE61407AE340C_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.String AnyThinkAds.Api.ATInterstitialAd::getValidAdCaches(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ATInterstitialAd_getValidAdCaches_mC5572111D1C5C4A46822562CB1CD3C982875F1FF (ATInterstitialAd_t68C4D29B8572B16C2F1EFF99D6FC2BE0AA339817* __this, String_t* ___placementId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IATInterstitialAdClient_t8DE3DFDD0468982640EAE2198BEAE61407AE340C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return client.getValidAdCaches(placementId);
		RuntimeObject* L_0 = __this->___client_1;
		String_t* L_1 = ___placementId0;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(5 /* System.String AnyThinkAds.Common.IATInterstitialAdClient::getValidAdCaches(System.String) */, IATInterstitialAdClient_t8DE3DFDD0468982640EAE2198BEAE61407AE340C_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Void AnyThinkAds.Api.ATInterstitialAd::showInterstitialAd(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATInterstitialAd_showInterstitialAd_m22381E4BA100AFE9BE8473C1C183A5211347FCE8 (ATInterstitialAd_t68C4D29B8572B16C2F1EFF99D6FC2BE0AA339817* __this, String_t* ___placementId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IATInterstitialAdClient_t8DE3DFDD0468982640EAE2198BEAE61407AE340C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t6C02C11E5758BFDB34AD6A5F41ABBFC7FAB2E598_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// client.showInterstitialAd(placementId, JsonMapper.ToJson(new Dictionary<string, string>()));
		RuntimeObject* L_0 = __this->___client_1;
		String_t* L_1 = ___placementId0;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_2 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_2, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t6C02C11E5758BFDB34AD6A5F41ABBFC7FAB2E598_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = JsonMapper_ToJson_m640303EB0458D6FC503ACB6AFECB29F3EAC84336(L_2, NULL);
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(4 /* System.Void AnyThinkAds.Common.IATInterstitialAdClient::showInterstitialAd(System.String,System.String) */, IATInterstitialAdClient_t8DE3DFDD0468982640EAE2198BEAE61407AE340C_il2cpp_TypeInfo_var, L_0, L_1, L_3);
		// }
		return;
	}
}
// System.Void AnyThinkAds.Api.ATInterstitialAd::showInterstitialAd(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATInterstitialAd_showInterstitialAd_m165181255E764E6A1E923CD474EA3D8E4B39CA9C (ATInterstitialAd_t68C4D29B8572B16C2F1EFF99D6FC2BE0AA339817* __this, String_t* ___placementId0, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___pairs1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IATInterstitialAdClient_t8DE3DFDD0468982640EAE2198BEAE61407AE340C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t6C02C11E5758BFDB34AD6A5F41ABBFC7FAB2E598_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// client.showInterstitialAd(placementId, JsonMapper.ToJson(pairs));
		RuntimeObject* L_0 = __this->___client_1;
		String_t* L_1 = ___placementId0;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_2 = ___pairs1;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t6C02C11E5758BFDB34AD6A5F41ABBFC7FAB2E598_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = JsonMapper_ToJson_m640303EB0458D6FC503ACB6AFECB29F3EAC84336(L_2, NULL);
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(4 /* System.Void AnyThinkAds.Common.IATInterstitialAdClient::showInterstitialAd(System.String,System.String) */, IATInterstitialAdClient_t8DE3DFDD0468982640EAE2198BEAE61407AE340C_il2cpp_TypeInfo_var, L_0, L_1, L_3);
		// }
		return;
	}
}
// AnyThinkAds.Common.IATInterstitialAdClient AnyThinkAds.Api.ATInterstitialAd::GetATInterstitialAdClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ATInterstitialAd_GetATInterstitialAdClient_m62231E37E232FC8667C708DDB6776925B72A92CA (ATInterstitialAd_t68C4D29B8572B16C2F1EFF99D6FC2BE0AA339817* __this, const RuntimeMethod* method) 
{
	{
		// return AnyThinkAds.ATAdsClientFactory.BuildInterstitialAdClient();
		RuntimeObject* L_0;
		L_0 = ATAdsClientFactory_BuildInterstitialAdClient_m6014DFF80BD26B751FAF92AE1B759DB7A5B7908D(NULL);
		return L_0;
	}
}
// System.Void AnyThinkAds.Api.ATInterstitialAd::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATInterstitialAd__cctor_m4D010B4157713887DACE675D33EB96F2872C702A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ATInterstitialAd_t68C4D29B8572B16C2F1EFF99D6FC2BE0AA339817_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ATInterstitialAd instance = new ATInterstitialAd();
		ATInterstitialAd_t68C4D29B8572B16C2F1EFF99D6FC2BE0AA339817* L_0 = (ATInterstitialAd_t68C4D29B8572B16C2F1EFF99D6FC2BE0AA339817*)il2cpp_codegen_object_new(ATInterstitialAd_t68C4D29B8572B16C2F1EFF99D6FC2BE0AA339817_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ATInterstitialAd__ctor_m9874DE86B16F638ABC4E130FC010823146557BC7(L_0, NULL);
		((ATInterstitialAd_t68C4D29B8572B16C2F1EFF99D6FC2BE0AA339817_StaticFields*)il2cpp_codegen_static_fields_for(ATInterstitialAd_t68C4D29B8572B16C2F1EFF99D6FC2BE0AA339817_il2cpp_TypeInfo_var))->___instance_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ATInterstitialAd_t68C4D29B8572B16C2F1EFF99D6FC2BE0AA339817_StaticFields*)il2cpp_codegen_static_fields_for(ATInterstitialAd_t68C4D29B8572B16C2F1EFF99D6FC2BE0AA339817_il2cpp_TypeInfo_var))->___instance_0), (void*)L_0);
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
// System.Void AnyThinkAds.Api.ATInterstitialAutoAd::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATInterstitialAutoAd__ctor_m72B186CF744A756B6942B0AC716B99B737E2F5F9 (ATInterstitialAutoAd_t73C090E631B76B76539F75A908A8875FEF823DCB* __this, const RuntimeMethod* method) 
{
	{
		// private ATInterstitialAutoAd()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// client = GetATInterstitialAdClient();
		RuntimeObject* L_0;
		L_0 = ATInterstitialAutoAd_GetATInterstitialAdClient_m4651472CE4648AB839281D7CCD53601284F8F769(__this, NULL);
		__this->___client_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___client_1), (void*)L_0);
		// }
		return;
	}
}
// AnyThinkAds.Api.ATInterstitialAutoAd AnyThinkAds.Api.ATInterstitialAutoAd::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ATInterstitialAutoAd_t73C090E631B76B76539F75A908A8875FEF823DCB* ATInterstitialAutoAd_get_Instance_m298E3856D4B766EFA28593F5BEA1932A02F04066 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ATInterstitialAutoAd_t73C090E631B76B76539F75A908A8875FEF823DCB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return instance;
		il2cpp_codegen_runtime_class_init_inline(ATInterstitialAutoAd_t73C090E631B76B76539F75A908A8875FEF823DCB_il2cpp_TypeInfo_var);
		ATInterstitialAutoAd_t73C090E631B76B76539F75A908A8875FEF823DCB* L_0 = ((ATInterstitialAutoAd_t73C090E631B76B76539F75A908A8875FEF823DCB_StaticFields*)il2cpp_codegen_static_fields_for(ATInterstitialAutoAd_t73C090E631B76B76539F75A908A8875FEF823DCB_il2cpp_TypeInfo_var))->___instance_0;
		return L_0;
	}
}
// AnyThinkAds.Common.IATInterstitialAdClient AnyThinkAds.Api.ATInterstitialAutoAd::GetATInterstitialAdClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ATInterstitialAutoAd_GetATInterstitialAdClient_m4651472CE4648AB839281D7CCD53601284F8F769 (ATInterstitialAutoAd_t73C090E631B76B76539F75A908A8875FEF823DCB* __this, const RuntimeMethod* method) 
{
	{
		// return AnyThinkAds.ATAdsClientFactory.BuildInterstitialAdClient();
		RuntimeObject* L_0;
		L_0 = ATAdsClientFactory_BuildInterstitialAdClient_m6014DFF80BD26B751FAF92AE1B759DB7A5B7908D(NULL);
		return L_0;
	}
}
// System.Void AnyThinkAds.Api.ATInterstitialAutoAd::addAutoLoadAdPlacementID(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATInterstitialAutoAd_addAutoLoadAdPlacementID_m94716EE069CB52600EBE304D144117685B5427DB (ATInterstitialAutoAd_t73C090E631B76B76539F75A908A8875FEF823DCB* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___placementIDList0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IATInterstitialAdClient_t8DE3DFDD0468982640EAE2198BEAE61407AE340C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// client.addAutoLoadAdPlacementID(placementIDList);
		RuntimeObject* L_0 = __this->___client_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___placementIDList0;
		NullCheck(L_0);
		InterfaceActionInvoker1< StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* >::Invoke(8 /* System.Void AnyThinkAds.Common.IATInterstitialAdClient::addAutoLoadAdPlacementID(System.String[]) */, IATInterstitialAdClient_t8DE3DFDD0468982640EAE2198BEAE61407AE340C_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void AnyThinkAds.Api.ATInterstitialAutoAd::removeAutoLoadAdPlacementID(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATInterstitialAutoAd_removeAutoLoadAdPlacementID_m2386247EEF75E161C3D491765DB291835ED41F87 (ATInterstitialAutoAd_t73C090E631B76B76539F75A908A8875FEF823DCB* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___placementIDList0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IATInterstitialAdClient_t8DE3DFDD0468982640EAE2198BEAE61407AE340C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t6C02C11E5758BFDB34AD6A5F41ABBFC7FAB2E598_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DA44B4B2555A4BCF3589D4EC74EB1AB1ACD9912);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral71C17B3684796D88DD17328DF65F347A856EAF31);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// if (placementIDList != null && placementIDList.Length > 0)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___placementIDList0;
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___placementIDList0;
		NullCheck(L_1);
		if (!(((RuntimeArray*)L_1)->max_length))
		{
			goto IL_002b;
		}
	}
	{
		// string placementIDListString = JsonMapper.ToJson(placementIDList);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = ___placementIDList0;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t6C02C11E5758BFDB34AD6A5F41ABBFC7FAB2E598_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = JsonMapper_ToJson_m640303EB0458D6FC503ACB6AFECB29F3EAC84336((RuntimeObject*)L_2, NULL);
		V_0 = L_3;
		// client.removeAutoLoadAdPlacementID(placementIDListString);
		RuntimeObject* L_4 = __this->___client_1;
		String_t* L_5 = V_0;
		NullCheck(L_4);
		InterfaceActionInvoker1< String_t* >::Invoke(9 /* System.Void AnyThinkAds.Common.IATInterstitialAdClient::removeAutoLoadAdPlacementID(System.String) */, IATInterstitialAdClient_t8DE3DFDD0468982640EAE2198BEAE61407AE340C_il2cpp_TypeInfo_var, L_4, L_5);
		// Debug.Log("removeAutoLoadAdPlacementID, placementIDList === " + placementIDListString);
		String_t* L_6 = V_0;
		String_t* L_7;
		L_7 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral71C17B3684796D88DD17328DF65F347A856EAF31, L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_7, NULL);
		return;
	}

IL_002b:
	{
		// Debug.Log("removeAutoLoadAdPlacementID, placementIDList = null");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral0DA44B4B2555A4BCF3589D4EC74EB1AB1ACD9912, NULL);
		// }
		return;
	}
}
// System.String AnyThinkAds.Api.ATInterstitialAutoAd::checkAutoAdStatus(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ATInterstitialAutoAd_checkAutoAdStatus_m8DB83342E199CDBFAB1BED5132603CC42B298D4F (ATInterstitialAutoAd_t73C090E631B76B76539F75A908A8875FEF823DCB* __this, String_t* ___placementId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IATInterstitialAdClient_t8DE3DFDD0468982640EAE2198BEAE61407AE340C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return client.checkAutoAdStatus(placementId);
		RuntimeObject* L_0 = __this->___client_1;
		String_t* L_1 = ___placementId0;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(7 /* System.String AnyThinkAds.Common.IATInterstitialAdClient::checkAutoAdStatus(System.String) */, IATInterstitialAdClient_t8DE3DFDD0468982640EAE2198BEAE61407AE340C_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Boolean AnyThinkAds.Api.ATInterstitialAutoAd::autoLoadInterstitialAdReadyForPlacementID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ATInterstitialAutoAd_autoLoadInterstitialAdReadyForPlacementID_m3C65A8C68976073D5D274F9B13E8575061FB11E0 (ATInterstitialAutoAd_t73C090E631B76B76539F75A908A8875FEF823DCB* __this, String_t* ___placementId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IATInterstitialAdClient_t8DE3DFDD0468982640EAE2198BEAE61407AE340C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return client.autoLoadInterstitialAdReadyForPlacementID(placementId);
		RuntimeObject* L_0 = __this->___client_1;
		String_t* L_1 = ___placementId0;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, String_t* >::Invoke(10 /* System.Boolean AnyThinkAds.Common.IATInterstitialAdClient::autoLoadInterstitialAdReadyForPlacementID(System.String) */, IATInterstitialAdClient_t8DE3DFDD0468982640EAE2198BEAE61407AE340C_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.String AnyThinkAds.Api.ATInterstitialAutoAd::getAutoValidAdCaches(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ATInterstitialAutoAd_getAutoValidAdCaches_m3B3B9BAB5B7D51E398F199A112A78C2DC4B08E44 (ATInterstitialAutoAd_t73C090E631B76B76539F75A908A8875FEF823DCB* __this, String_t* ___placementId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IATInterstitialAdClient_t8DE3DFDD0468982640EAE2198BEAE61407AE340C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return client.getAutoValidAdCaches(placementId);
		RuntimeObject* L_0 = __this->___client_1;
		String_t* L_1 = ___placementId0;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(11 /* System.String AnyThinkAds.Common.IATInterstitialAdClient::getAutoValidAdCaches(System.String) */, IATInterstitialAdClient_t8DE3DFDD0468982640EAE2198BEAE61407AE340C_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Void AnyThinkAds.Api.ATInterstitialAutoAd::setAutoLocalExtra(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATInterstitialAutoAd_setAutoLocalExtra_m52C179BD2B4820ED13702DFF1DDBF2F537691BE4 (ATInterstitialAutoAd_t73C090E631B76B76539F75A908A8875FEF823DCB* __this, String_t* ___placementId0, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___pairs1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IATInterstitialAdClient_t8DE3DFDD0468982640EAE2198BEAE61407AE340C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t6C02C11E5758BFDB34AD6A5F41ABBFC7FAB2E598_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// client.setAutoLocalExtra(placementId, JsonMapper.ToJson(pairs));
		RuntimeObject* L_0 = __this->___client_1;
		String_t* L_1 = ___placementId0;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_2 = ___pairs1;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t6C02C11E5758BFDB34AD6A5F41ABBFC7FAB2E598_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = JsonMapper_ToJson_m640303EB0458D6FC503ACB6AFECB29F3EAC84336(L_2, NULL);
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(12 /* System.Void AnyThinkAds.Common.IATInterstitialAdClient::setAutoLocalExtra(System.String,System.String) */, IATInterstitialAdClient_t8DE3DFDD0468982640EAE2198BEAE61407AE340C_il2cpp_TypeInfo_var, L_0, L_1, L_3);
		// }
		return;
	}
}
// System.Void AnyThinkAds.Api.ATInterstitialAutoAd::entryAutoAdScenarioWithPlacementID(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATInterstitialAutoAd_entryAutoAdScenarioWithPlacementID_m98EB46FC950E1C74C616F32426F7B1D2CE888C10 (ATInterstitialAutoAd_t73C090E631B76B76539F75A908A8875FEF823DCB* __this, String_t* ___placementId0, String_t* ___scenarioID1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IATInterstitialAdClient_t8DE3DFDD0468982640EAE2198BEAE61407AE340C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// client.entryAutoAdScenarioWithPlacementID(placementId, scenarioID);
		RuntimeObject* L_0 = __this->___client_1;
		String_t* L_1 = ___placementId0;
		String_t* L_2 = ___scenarioID1;
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(13 /* System.Void AnyThinkAds.Common.IATInterstitialAdClient::entryAutoAdScenarioWithPlacementID(System.String,System.String) */, IATInterstitialAdClient_t8DE3DFDD0468982640EAE2198BEAE61407AE340C_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		// }
		return;
	}
}
// System.Void AnyThinkAds.Api.ATInterstitialAutoAd::showAutoAd(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATInterstitialAutoAd_showAutoAd_m4E74953270B8FFCF6BBA4268E6212567F499A4D5 (ATInterstitialAutoAd_t73C090E631B76B76539F75A908A8875FEF823DCB* __this, String_t* ___placementId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IATInterstitialAdClient_t8DE3DFDD0468982640EAE2198BEAE61407AE340C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t6C02C11E5758BFDB34AD6A5F41ABBFC7FAB2E598_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// client.showAutoAd(placementId, JsonMapper.ToJson(new Dictionary<string, string>()));
		RuntimeObject* L_0 = __this->___client_1;
		String_t* L_1 = ___placementId0;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_2 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_2, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t6C02C11E5758BFDB34AD6A5F41ABBFC7FAB2E598_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = JsonMapper_ToJson_m640303EB0458D6FC503ACB6AFECB29F3EAC84336(L_2, NULL);
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(14 /* System.Void AnyThinkAds.Common.IATInterstitialAdClient::showAutoAd(System.String,System.String) */, IATInterstitialAdClient_t8DE3DFDD0468982640EAE2198BEAE61407AE340C_il2cpp_TypeInfo_var, L_0, L_1, L_3);
		// }
		return;
	}
}
// System.Void AnyThinkAds.Api.ATInterstitialAutoAd::showAutoAd(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATInterstitialAutoAd_showAutoAd_mA078FA8FF6410BED30D716EE296E609045F84C93 (ATInterstitialAutoAd_t73C090E631B76B76539F75A908A8875FEF823DCB* __this, String_t* ___placementId0, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___pairs1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IATInterstitialAdClient_t8DE3DFDD0468982640EAE2198BEAE61407AE340C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t6C02C11E5758BFDB34AD6A5F41ABBFC7FAB2E598_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// client.showAutoAd(placementId, JsonMapper.ToJson(pairs));
		RuntimeObject* L_0 = __this->___client_1;
		String_t* L_1 = ___placementId0;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_2 = ___pairs1;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t6C02C11E5758BFDB34AD6A5F41ABBFC7FAB2E598_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = JsonMapper_ToJson_m640303EB0458D6FC503ACB6AFECB29F3EAC84336(L_2, NULL);
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(14 /* System.Void AnyThinkAds.Common.IATInterstitialAdClient::showAutoAd(System.String,System.String) */, IATInterstitialAdClient_t8DE3DFDD0468982640EAE2198BEAE61407AE340C_il2cpp_TypeInfo_var, L_0, L_1, L_3);
		// }
		return;
	}
}
// System.Void AnyThinkAds.Api.ATInterstitialAutoAd::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATInterstitialAutoAd__cctor_m0B8FAD8ED1C88245AC0D5AAA5F9891EBCB7BDDB1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ATInterstitialAutoAd_t73C090E631B76B76539F75A908A8875FEF823DCB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ATInterstitialAutoAd instance = new ATInterstitialAutoAd();
		ATInterstitialAutoAd_t73C090E631B76B76539F75A908A8875FEF823DCB* L_0 = (ATInterstitialAutoAd_t73C090E631B76B76539F75A908A8875FEF823DCB*)il2cpp_codegen_object_new(ATInterstitialAutoAd_t73C090E631B76B76539F75A908A8875FEF823DCB_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ATInterstitialAutoAd__ctor_m72B186CF744A756B6942B0AC716B99B737E2F5F9(L_0, NULL);
		((ATInterstitialAutoAd_t73C090E631B76B76539F75A908A8875FEF823DCB_StaticFields*)il2cpp_codegen_static_fields_for(ATInterstitialAutoAd_t73C090E631B76B76539F75A908A8875FEF823DCB_il2cpp_TypeInfo_var))->___instance_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ATInterstitialAutoAd_t73C090E631B76B76539F75A908A8875FEF823DCB_StaticFields*)il2cpp_codegen_static_fields_for(ATInterstitialAutoAd_t73C090E631B76B76539F75A908A8875FEF823DCB_il2cpp_TypeInfo_var))->___instance_0), (void*)L_0);
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
// System.Void AnyThinkAds.Api.ATNativeAdLoadingExtra::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATNativeAdLoadingExtra__ctor_m9BAB14D6671C2FB03714755874FF7A2D31E34B80 (ATNativeAdLoadingExtra_tD57B2018036CA3FCCC6FC6645E41B7B53C50E98D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void AnyThinkAds.Api.ATNativeAdLoadingExtra::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATNativeAdLoadingExtra__cctor_mF342A64077A7795B67A47F9147D15F3E404BAA9D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ATNativeAdLoadingExtra_tD57B2018036CA3FCCC6FC6645E41B7B53C50E98D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1388D53684B0996B3FF27203D1547660E4D82509);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2174A5652A092BA4EA81CC88E05A4CF11987070);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0560976B58269705E291202AB17A7D7F1543FA4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly string kATNativeAdLoadingExtraNativeAdSizeStruct = "native_ad_size_struct";
		((ATNativeAdLoadingExtra_tD57B2018036CA3FCCC6FC6645E41B7B53C50E98D_StaticFields*)il2cpp_codegen_static_fields_for(ATNativeAdLoadingExtra_tD57B2018036CA3FCCC6FC6645E41B7B53C50E98D_il2cpp_TypeInfo_var))->___kATNativeAdLoadingExtraNativeAdSizeStruct_0 = _stringLiteralC2174A5652A092BA4EA81CC88E05A4CF11987070;
		Il2CppCodeGenWriteBarrier((void**)(&((ATNativeAdLoadingExtra_tD57B2018036CA3FCCC6FC6645E41B7B53C50E98D_StaticFields*)il2cpp_codegen_static_fields_for(ATNativeAdLoadingExtra_tD57B2018036CA3FCCC6FC6645E41B7B53C50E98D_il2cpp_TypeInfo_var))->___kATNativeAdLoadingExtraNativeAdSizeStruct_0), (void*)_stringLiteralC2174A5652A092BA4EA81CC88E05A4CF11987070);
		// public static readonly string kATNativeAdLoadingExtraNativeAdSize = "native_ad_size";
		((ATNativeAdLoadingExtra_tD57B2018036CA3FCCC6FC6645E41B7B53C50E98D_StaticFields*)il2cpp_codegen_static_fields_for(ATNativeAdLoadingExtra_tD57B2018036CA3FCCC6FC6645E41B7B53C50E98D_il2cpp_TypeInfo_var))->___kATNativeAdLoadingExtraNativeAdSize_1 = _stringLiteralE0560976B58269705E291202AB17A7D7F1543FA4;
		Il2CppCodeGenWriteBarrier((void**)(&((ATNativeAdLoadingExtra_tD57B2018036CA3FCCC6FC6645E41B7B53C50E98D_StaticFields*)il2cpp_codegen_static_fields_for(ATNativeAdLoadingExtra_tD57B2018036CA3FCCC6FC6645E41B7B53C50E98D_il2cpp_TypeInfo_var))->___kATNativeAdLoadingExtraNativeAdSize_1), (void*)_stringLiteralE0560976B58269705E291202AB17A7D7F1543FA4);
		// public static readonly string kATNativeAdSizeUsesPixelFlagKey = "uses_pixel";
		((ATNativeAdLoadingExtra_tD57B2018036CA3FCCC6FC6645E41B7B53C50E98D_StaticFields*)il2cpp_codegen_static_fields_for(ATNativeAdLoadingExtra_tD57B2018036CA3FCCC6FC6645E41B7B53C50E98D_il2cpp_TypeInfo_var))->___kATNativeAdSizeUsesPixelFlagKey_2 = _stringLiteral1388D53684B0996B3FF27203D1547660E4D82509;
		Il2CppCodeGenWriteBarrier((void**)(&((ATNativeAdLoadingExtra_tD57B2018036CA3FCCC6FC6645E41B7B53C50E98D_StaticFields*)il2cpp_codegen_static_fields_for(ATNativeAdLoadingExtra_tD57B2018036CA3FCCC6FC6645E41B7B53C50E98D_il2cpp_TypeInfo_var))->___kATNativeAdSizeUsesPixelFlagKey_2), (void*)_stringLiteral1388D53684B0996B3FF27203D1547660E4D82509);
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
// System.Void AnyThinkAds.Api.ATNativeAd::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATNativeAd__ctor_m87494718B200DC48F14CEA528D1E59F8C50D2487 (ATNativeAd_t2015F7596076CA06AF4B5854E81CEA0BD7E1B2FB* __this, const RuntimeMethod* method) 
{
	{
		// public ATNativeAd(){
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// client = GetATNativeAdClient();
		RuntimeObject* L_0;
		L_0 = ATNativeAd_GetATNativeAdClient_m6DECED9819AD205496269D71232AE4335B893190(__this, NULL);
		__this->___client_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___client_1), (void*)L_0);
		// }
		return;
	}
}
// AnyThinkAds.Api.ATNativeAd AnyThinkAds.Api.ATNativeAd::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ATNativeAd_t2015F7596076CA06AF4B5854E81CEA0BD7E1B2FB* ATNativeAd_get_Instance_m0738FD67A771C17BE682EBD0294538BAC02D267F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ATNativeAd_t2015F7596076CA06AF4B5854E81CEA0BD7E1B2FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return instance;
		il2cpp_codegen_runtime_class_init_inline(ATNativeAd_t2015F7596076CA06AF4B5854E81CEA0BD7E1B2FB_il2cpp_TypeInfo_var);
		ATNativeAd_t2015F7596076CA06AF4B5854E81CEA0BD7E1B2FB* L_0 = ((ATNativeAd_t2015F7596076CA06AF4B5854E81CEA0BD7E1B2FB_StaticFields*)il2cpp_codegen_static_fields_for(ATNativeAd_t2015F7596076CA06AF4B5854E81CEA0BD7E1B2FB_il2cpp_TypeInfo_var))->___instance_0;
		return L_0;
	}
}
// System.Void AnyThinkAds.Api.ATNativeAd::loadNativeAd(System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATNativeAd_loadNativeAd_mCEF862778A0C83362BA702083A93E72A653C0C70 (ATNativeAd_t2015F7596076CA06AF4B5854E81CEA0BD7E1B2FB* __this, String_t* ___placementId0, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___pairs1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ATNativeAdLoadingExtra_tD57B2018036CA3FCCC6FC6645E41B7B53C50E98D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ATSize_tB526AFFCD84BA3CC54C85D8125F2B279B6C3588D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IATNativeAdClient_t55535B17E142EB4F34DF66497A466BB037D2C59C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t6C02C11E5758BFDB34AD6A5F41ABBFC7FAB2E598_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		s_Il2CppMethodInitialized = true;
	}
	ATSize_tB526AFFCD84BA3CC54C85D8125F2B279B6C3588D* V_0 = NULL;
	{
		// if (pairs != null && pairs.ContainsKey(ATNativeAdLoadingExtra.kATNativeAdLoadingExtraNativeAdSizeStruct))
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = ___pairs1;
		if (!L_0)
		{
			goto IL_0062;
		}
	}
	{
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_1 = ___pairs1;
		il2cpp_codegen_runtime_class_init_inline(ATNativeAdLoadingExtra_tD57B2018036CA3FCCC6FC6645E41B7B53C50E98D_il2cpp_TypeInfo_var);
		String_t* L_2 = ((ATNativeAdLoadingExtra_tD57B2018036CA3FCCC6FC6645E41B7B53C50E98D_StaticFields*)il2cpp_codegen_static_fields_for(ATNativeAdLoadingExtra_tD57B2018036CA3FCCC6FC6645E41B7B53C50E98D_il2cpp_TypeInfo_var))->___kATNativeAdLoadingExtraNativeAdSizeStruct_0;
		NullCheck(L_1);
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC(L_1, L_2, Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0062;
		}
	}
	{
		// ATSize size = (ATSize)(pairs[ATNativeAdLoadingExtra.kATNativeAdLoadingExtraNativeAdSizeStruct]);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_4 = ___pairs1;
		il2cpp_codegen_runtime_class_init_inline(ATNativeAdLoadingExtra_tD57B2018036CA3FCCC6FC6645E41B7B53C50E98D_il2cpp_TypeInfo_var);
		String_t* L_5 = ((ATNativeAdLoadingExtra_tD57B2018036CA3FCCC6FC6645E41B7B53C50E98D_StaticFields*)il2cpp_codegen_static_fields_for(ATNativeAdLoadingExtra_tD57B2018036CA3FCCC6FC6645E41B7B53C50E98D_il2cpp_TypeInfo_var))->___kATNativeAdLoadingExtraNativeAdSizeStruct_0;
		NullCheck(L_4);
		RuntimeObject* L_6;
		L_6 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_4, L_5, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		V_0 = ((ATSize_tB526AFFCD84BA3CC54C85D8125F2B279B6C3588D*)CastclassClass((RuntimeObject*)L_6, ATSize_tB526AFFCD84BA3CC54C85D8125F2B279B6C3588D_il2cpp_TypeInfo_var));
		// pairs.Add(ATNativeAdLoadingExtra.kATNativeAdLoadingExtraNativeAdSize, size.width + "x" + size.height);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_7 = ___pairs1;
		String_t* L_8 = ((ATNativeAdLoadingExtra_tD57B2018036CA3FCCC6FC6645E41B7B53C50E98D_StaticFields*)il2cpp_codegen_static_fields_for(ATNativeAdLoadingExtra_tD57B2018036CA3FCCC6FC6645E41B7B53C50E98D_il2cpp_TypeInfo_var))->___kATNativeAdLoadingExtraNativeAdSize_1;
		ATSize_tB526AFFCD84BA3CC54C85D8125F2B279B6C3588D* L_9 = V_0;
		NullCheck(L_9);
		int32_t* L_10 = (&L_9->___width_0);
		String_t* L_11;
		L_11 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_10, NULL);
		ATSize_tB526AFFCD84BA3CC54C85D8125F2B279B6C3588D* L_12 = V_0;
		NullCheck(L_12);
		int32_t* L_13 = (&L_12->___height_1);
		String_t* L_14;
		L_14 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_13, NULL);
		String_t* L_15;
		L_15 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_11, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, L_14, NULL);
		NullCheck(L_7);
		Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_7, L_8, L_15, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		// pairs.Add(ATNativeAdLoadingExtra.kATNativeAdSizeUsesPixelFlagKey, size.usesPixel);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_16 = ___pairs1;
		String_t* L_17 = ((ATNativeAdLoadingExtra_tD57B2018036CA3FCCC6FC6645E41B7B53C50E98D_StaticFields*)il2cpp_codegen_static_fields_for(ATNativeAdLoadingExtra_tD57B2018036CA3FCCC6FC6645E41B7B53C50E98D_il2cpp_TypeInfo_var))->___kATNativeAdSizeUsesPixelFlagKey_2;
		ATSize_tB526AFFCD84BA3CC54C85D8125F2B279B6C3588D* L_18 = V_0;
		NullCheck(L_18);
		bool L_19 = L_18->___usesPixel_2;
		bool L_20 = L_19;
		RuntimeObject* L_21 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_16);
		Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_16, L_17, L_21, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
	}

IL_0062:
	{
		// client.loadNativeAd(placementId,JsonMapper.ToJson(pairs));
		RuntimeObject* L_22 = __this->___client_1;
		String_t* L_23 = ___placementId0;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_24 = ___pairs1;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t6C02C11E5758BFDB34AD6A5F41ABBFC7FAB2E598_il2cpp_TypeInfo_var);
		String_t* L_25;
		L_25 = JsonMapper_ToJson_m640303EB0458D6FC503ACB6AFECB29F3EAC84336(L_24, NULL);
		NullCheck(L_22);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(0 /* System.Void AnyThinkAds.Common.IATNativeAdClient::loadNativeAd(System.String,System.String) */, IATNativeAdClient_t55535B17E142EB4F34DF66497A466BB037D2C59C_il2cpp_TypeInfo_var, L_22, L_23, L_25);
		// }
		return;
	}
}
// System.Boolean AnyThinkAds.Api.ATNativeAd::hasAdReady(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ATNativeAd_hasAdReady_m1E2FFDD336680A14D791D2C86B0C3AC0CEED5F70 (ATNativeAd_t2015F7596076CA06AF4B5854E81CEA0BD7E1B2FB* __this, String_t* ___placementId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IATNativeAdClient_t55535B17E142EB4F34DF66497A466BB037D2C59C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return client.hasAdReady(placementId);
		RuntimeObject* L_0 = __this->___client_1;
		String_t* L_1 = ___placementId0;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, String_t* >::Invoke(1 /* System.Boolean AnyThinkAds.Common.IATNativeAdClient::hasAdReady(System.String) */, IATNativeAdClient_t55535B17E142EB4F34DF66497A466BB037D2C59C_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.String AnyThinkAds.Api.ATNativeAd::checkAdStatus(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ATNativeAd_checkAdStatus_mB6BC1C6A19772C890F2AEE821531EA0259332498 (ATNativeAd_t2015F7596076CA06AF4B5854E81CEA0BD7E1B2FB* __this, String_t* ___placementId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IATNativeAdClient_t55535B17E142EB4F34DF66497A466BB037D2C59C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return client.checkAdStatus(placementId);
		RuntimeObject* L_0 = __this->___client_1;
		String_t* L_1 = ___placementId0;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(2 /* System.String AnyThinkAds.Common.IATNativeAdClient::checkAdStatus(System.String) */, IATNativeAdClient_t55535B17E142EB4F34DF66497A466BB037D2C59C_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.String AnyThinkAds.Api.ATNativeAd::getValidAdCaches(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ATNativeAd_getValidAdCaches_m8724611208CB23492E6FF0A0FA09BFE85C1B3036 (ATNativeAd_t2015F7596076CA06AF4B5854E81CEA0BD7E1B2FB* __this, String_t* ___placementId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IATNativeAdClient_t55535B17E142EB4F34DF66497A466BB037D2C59C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return client.getValidAdCaches(placementId);
		RuntimeObject* L_0 = __this->___client_1;
		String_t* L_1 = ___placementId0;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(9 /* System.String AnyThinkAds.Common.IATNativeAdClient::getValidAdCaches(System.String) */, IATNativeAdClient_t55535B17E142EB4F34DF66497A466BB037D2C59C_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Void AnyThinkAds.Api.ATNativeAd::entryScenarioWithPlacementID(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATNativeAd_entryScenarioWithPlacementID_m9EAE22CCAF85FB4B7836EBB2DDCD918EDA85B79E (ATNativeAd_t2015F7596076CA06AF4B5854E81CEA0BD7E1B2FB* __this, String_t* ___placementId0, String_t* ___scenarioID1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IATNativeAdClient_t55535B17E142EB4F34DF66497A466BB037D2C59C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// client.entryScenarioWithPlacementID(placementId,scenarioID);
		RuntimeObject* L_0 = __this->___client_1;
		String_t* L_1 = ___placementId0;
		String_t* L_2 = ___scenarioID1;
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(10 /* System.Void AnyThinkAds.Common.IATNativeAdClient::entryScenarioWithPlacementID(System.String,System.String) */, IATNativeAdClient_t55535B17E142EB4F34DF66497A466BB037D2C59C_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		// }
		return;
	}
}
// System.Void AnyThinkAds.Api.ATNativeAd::renderAdToScene(System.String,AnyThinkAds.Api.ATNativeAdView)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATNativeAd_renderAdToScene_mC378315BC3B2ECEE59E2B0852AA24353CFC1013C (ATNativeAd_t2015F7596076CA06AF4B5854E81CEA0BD7E1B2FB* __this, String_t* ___placementId0, ATNativeAdView_tBBD4CA9EBDE5D330CC866EB249E872D5C287F18C* ___anyThinkNativeAdView1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IATNativeAdClient_t55535B17E142EB4F34DF66497A466BB037D2C59C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// client.renderAdToScene(placementId, anyThinkNativeAdView, "");
		RuntimeObject* L_0 = __this->___client_1;
		String_t* L_1 = ___placementId0;
		ATNativeAdView_tBBD4CA9EBDE5D330CC866EB249E872D5C287F18C* L_2 = ___anyThinkNativeAdView1;
		NullCheck(L_0);
		InterfaceActionInvoker3< String_t*, ATNativeAdView_tBBD4CA9EBDE5D330CC866EB249E872D5C287F18C*, String_t* >::Invoke(4 /* System.Void AnyThinkAds.Common.IATNativeAdClient::renderAdToScene(System.String,AnyThinkAds.Api.ATNativeAdView,System.String) */, IATNativeAdClient_t55535B17E142EB4F34DF66497A466BB037D2C59C_il2cpp_TypeInfo_var, L_0, L_1, L_2, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// }
		return;
	}
}
// System.Void AnyThinkAds.Api.ATNativeAd::renderAdToScene(System.String,AnyThinkAds.Api.ATNativeAdView,System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATNativeAd_renderAdToScene_mCA04C4E5CD0E67DDBBF8CB0886BB48D6637A9991 (ATNativeAd_t2015F7596076CA06AF4B5854E81CEA0BD7E1B2FB* __this, String_t* ___placementId0, ATNativeAdView_tBBD4CA9EBDE5D330CC866EB249E872D5C287F18C* ___anyThinkNativeAdView1, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___pairs2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IATNativeAdClient_t55535B17E142EB4F34DF66497A466BB037D2C59C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t6C02C11E5758BFDB34AD6A5F41ABBFC7FAB2E598_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// client.renderAdToScene(placementId, anyThinkNativeAdView, JsonMapper.ToJson(pairs));
		RuntimeObject* L_0 = __this->___client_1;
		String_t* L_1 = ___placementId0;
		ATNativeAdView_tBBD4CA9EBDE5D330CC866EB249E872D5C287F18C* L_2 = ___anyThinkNativeAdView1;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_3 = ___pairs2;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t6C02C11E5758BFDB34AD6A5F41ABBFC7FAB2E598_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = JsonMapper_ToJson_m640303EB0458D6FC503ACB6AFECB29F3EAC84336(L_3, NULL);
		NullCheck(L_0);
		InterfaceActionInvoker3< String_t*, ATNativeAdView_tBBD4CA9EBDE5D330CC866EB249E872D5C287F18C*, String_t* >::Invoke(4 /* System.Void AnyThinkAds.Common.IATNativeAdClient::renderAdToScene(System.String,AnyThinkAds.Api.ATNativeAdView,System.String) */, IATNativeAdClient_t55535B17E142EB4F34DF66497A466BB037D2C59C_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_4);
		// }
		return;
	}
}
// System.Void AnyThinkAds.Api.ATNativeAd::cleanAdView(System.String,AnyThinkAds.Api.ATNativeAdView)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATNativeAd_cleanAdView_mB463D1C45F8974DF8C1556C15A4FD1216E8F34C2 (ATNativeAd_t2015F7596076CA06AF4B5854E81CEA0BD7E1B2FB* __this, String_t* ___placementId0, ATNativeAdView_tBBD4CA9EBDE5D330CC866EB249E872D5C287F18C* ___anyThinkNativeAdView1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IATNativeAdClient_t55535B17E142EB4F34DF66497A466BB037D2C59C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// client.cleanAdView(placementId, anyThinkNativeAdView);
		RuntimeObject* L_0 = __this->___client_1;
		String_t* L_1 = ___placementId0;
		ATNativeAdView_tBBD4CA9EBDE5D330CC866EB249E872D5C287F18C* L_2 = ___anyThinkNativeAdView1;
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, ATNativeAdView_tBBD4CA9EBDE5D330CC866EB249E872D5C287F18C* >::Invoke(5 /* System.Void AnyThinkAds.Common.IATNativeAdClient::cleanAdView(System.String,AnyThinkAds.Api.ATNativeAdView) */, IATNativeAdClient_t55535B17E142EB4F34DF66497A466BB037D2C59C_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		// }
		return;
	}
}
// System.Void AnyThinkAds.Api.ATNativeAd::onApplicationForces(System.String,AnyThinkAds.Api.ATNativeAdView)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATNativeAd_onApplicationForces_m520152FDB00CDE41DDEDF6E4D00A07D0EADC3A84 (ATNativeAd_t2015F7596076CA06AF4B5854E81CEA0BD7E1B2FB* __this, String_t* ___placementId0, ATNativeAdView_tBBD4CA9EBDE5D330CC866EB249E872D5C287F18C* ___anyThinkNativeAdView1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IATNativeAdClient_t55535B17E142EB4F34DF66497A466BB037D2C59C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// client.onApplicationForces(placementId, anyThinkNativeAdView);
		RuntimeObject* L_0 = __this->___client_1;
		String_t* L_1 = ___placementId0;
		ATNativeAdView_tBBD4CA9EBDE5D330CC866EB249E872D5C287F18C* L_2 = ___anyThinkNativeAdView1;
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, ATNativeAdView_tBBD4CA9EBDE5D330CC866EB249E872D5C287F18C* >::Invoke(6 /* System.Void AnyThinkAds.Common.IATNativeAdClient::onApplicationForces(System.String,AnyThinkAds.Api.ATNativeAdView) */, IATNativeAdClient_t55535B17E142EB4F34DF66497A466BB037D2C59C_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		// }
		return;
	}
}
// System.Void AnyThinkAds.Api.ATNativeAd::onApplicationPasue(System.String,AnyThinkAds.Api.ATNativeAdView)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATNativeAd_onApplicationPasue_m97B801AFFFB6073516DD6C1D76A8294AD465C200 (ATNativeAd_t2015F7596076CA06AF4B5854E81CEA0BD7E1B2FB* __this, String_t* ___placementId0, ATNativeAdView_tBBD4CA9EBDE5D330CC866EB249E872D5C287F18C* ___anyThinkNativeAdView1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IATNativeAdClient_t55535B17E142EB4F34DF66497A466BB037D2C59C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// client.onApplicationPasue(placementId, anyThinkNativeAdView);
		RuntimeObject* L_0 = __this->___client_1;
		String_t* L_1 = ___placementId0;
		ATNativeAdView_tBBD4CA9EBDE5D330CC866EB249E872D5C287F18C* L_2 = ___anyThinkNativeAdView1;
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, ATNativeAdView_tBBD4CA9EBDE5D330CC866EB249E872D5C287F18C* >::Invoke(7 /* System.Void AnyThinkAds.Common.IATNativeAdClient::onApplicationPasue(System.String,AnyThinkAds.Api.ATNativeAdView) */, IATNativeAdClient_t55535B17E142EB4F34DF66497A466BB037D2C59C_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		// }
		return;
	}
}
// System.Void AnyThinkAds.Api.ATNativeAd::cleanCache(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATNativeAd_cleanCache_m4CA0E40F94A3EFB5E57B67188E4C4D801FBF5133 (ATNativeAd_t2015F7596076CA06AF4B5854E81CEA0BD7E1B2FB* __this, String_t* ___placementId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IATNativeAdClient_t55535B17E142EB4F34DF66497A466BB037D2C59C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// client.cleanCache(placementId);
		RuntimeObject* L_0 = __this->___client_1;
		String_t* L_1 = ___placementId0;
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(8 /* System.Void AnyThinkAds.Common.IATNativeAdClient::cleanCache(System.String) */, IATNativeAdClient_t55535B17E142EB4F34DF66497A466BB037D2C59C_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// AnyThinkAds.Common.IATNativeAdClient AnyThinkAds.Api.ATNativeAd::GetATNativeAdClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ATNativeAd_GetATNativeAdClient_m6DECED9819AD205496269D71232AE4335B893190 (ATNativeAd_t2015F7596076CA06AF4B5854E81CEA0BD7E1B2FB* __this, const RuntimeMethod* method) 
{
	{
		// return AnyThinkAds.ATAdsClientFactory.BuildNativeAdClient();
		RuntimeObject* L_0;
		L_0 = ATAdsClientFactory_BuildNativeAdClient_m77A89B3892F66666F279433A4BFD5841B174AA8B(NULL);
		return L_0;
	}
}
// System.Void AnyThinkAds.Api.ATNativeAd::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATNativeAd__cctor_m404482E8144304469CC5656AA2239B64723A928A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ATNativeAd_t2015F7596076CA06AF4B5854E81CEA0BD7E1B2FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ATNativeAd instance = new ATNativeAd();
		ATNativeAd_t2015F7596076CA06AF4B5854E81CEA0BD7E1B2FB* L_0 = (ATNativeAd_t2015F7596076CA06AF4B5854E81CEA0BD7E1B2FB*)il2cpp_codegen_object_new(ATNativeAd_t2015F7596076CA06AF4B5854E81CEA0BD7E1B2FB_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ATNativeAd__ctor_m87494718B200DC48F14CEA528D1E59F8C50D2487(L_0, NULL);
		((ATNativeAd_t2015F7596076CA06AF4B5854E81CEA0BD7E1B2FB_StaticFields*)il2cpp_codegen_static_fields_for(ATNativeAd_t2015F7596076CA06AF4B5854E81CEA0BD7E1B2FB_il2cpp_TypeInfo_var))->___instance_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ATNativeAd_t2015F7596076CA06AF4B5854E81CEA0BD7E1B2FB_StaticFields*)il2cpp_codegen_static_fields_for(ATNativeAd_t2015F7596076CA06AF4B5854E81CEA0BD7E1B2FB_il2cpp_TypeInfo_var))->___instance_0), (void*)L_0);
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
// System.Void AnyThinkAds.Api.ATNativeAdView::.ctor(AnyThinkAds.Api.ATNativeConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATNativeAdView__ctor_m98B3B96E70601E7034D24849A71E5219AD8C94D1 (ATNativeAdView_tBBD4CA9EBDE5D330CC866EB249E872D5C287F18C* __this, ATNativeConfig_t1C2488BAA15F3BE2BF56F58A95F48B386B9E9D1A* ___config0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A0638EF431254803510AEEF4E30E0DCB0C2E12D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46EBAC5E8BDA7E4F7044E37E0C769312169C651B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral483DFA9A614472DBFD4B58265DDE1C943D92F756);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C9820D0000A8721F54710F1ABFB2EDBFC71FDE8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6697CDCB0762971428BEAB2CC086B115C9E38187);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC7B4D926EF9532A71B25AEC040A33D52C926425F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE88DB00CE4B2E2DC6AB5DCD8BBEB39289B25168);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF042A4C30146DF9FD9D245912DCA96150741EF5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string parentKey = "parent";
		__this->___parentKey_1 = _stringLiteral483DFA9A614472DBFD4B58265DDE1C943D92F756;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parentKey_1), (void*)_stringLiteral483DFA9A614472DBFD4B58265DDE1C943D92F756);
		// private string appIconKey = "appIcon";
		__this->___appIconKey_2 = _stringLiteralEF042A4C30146DF9FD9D245912DCA96150741EF5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___appIconKey_2), (void*)_stringLiteralEF042A4C30146DF9FD9D245912DCA96150741EF5);
		// private string mainImageKey = "mainImage";
		__this->___mainImageKey_3 = _stringLiteralEE88DB00CE4B2E2DC6AB5DCD8BBEB39289B25168;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mainImageKey_3), (void*)_stringLiteralEE88DB00CE4B2E2DC6AB5DCD8BBEB39289B25168);
		// private string titleKey = "title";
		__this->___titleKey_4 = _stringLiteralC7B4D926EF9532A71B25AEC040A33D52C926425F;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___titleKey_4), (void*)_stringLiteralC7B4D926EF9532A71B25AEC040A33D52C926425F);
		// private string descKey = "desc";
		__this->___descKey_5 = _stringLiteral46EBAC5E8BDA7E4F7044E37E0C769312169C651B;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___descKey_5), (void*)_stringLiteral46EBAC5E8BDA7E4F7044E37E0C769312169C651B);
		// private string adLogoKey = "adLogo";
		__this->___adLogoKey_6 = _stringLiteral3A0638EF431254803510AEEF4E30E0DCB0C2E12D;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___adLogoKey_6), (void*)_stringLiteral3A0638EF431254803510AEEF4E30E0DCB0C2E12D);
		// private string ctaButtonKey = "cta";
		__this->___ctaButtonKey_7 = _stringLiteral4C9820D0000A8721F54710F1ABFB2EDBFC71FDE8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ctaButtonKey_7), (void*)_stringLiteral4C9820D0000A8721F54710F1ABFB2EDBFC71FDE8);
		// private string dislikeButtonKey = "dislike";
		__this->___dislikeButtonKey_8 = _stringLiteral6697CDCB0762971428BEAB2CC086B115C9E38187;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dislikeButtonKey_8), (void*)_stringLiteral6697CDCB0762971428BEAB2CC086B115C9E38187);
		// public ATNativeAdView(ATNativeConfig config)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.config = config;
		ATNativeConfig_t1C2488BAA15F3BE2BF56F58A95F48B386B9E9D1A* L_0 = ___config0;
		__this->___config_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___config_0), (void*)L_0);
		// }
		return;
	}
}
// System.String AnyThinkAds.Api.ATNativeAdView::toJSON()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ATNativeAdView_toJSON_m8AF47D7371236AD952DAB49C118A0D1BD524A8B4 (ATNativeAdView_tBBD4CA9EBDE5D330CC866EB249E872D5C287F18C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		// StringBuilder builder = new StringBuilder();
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		// builder.Append("{");
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_1, _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A, NULL);
		// if(config.parentProperty != null)
		ATNativeConfig_t1C2488BAA15F3BE2BF56F58A95F48B386B9E9D1A* L_3 = __this->___config_0;
		NullCheck(L_3);
		ATNativeItemProperty_t58B41E7E5AB08D343652315D7CF53AD2EBB2349A* L_4 = L_3->___parentProperty_0;
		if (!L_4)
		{
			goto IL_006f;
		}
	}
	{
		// builder.Append("\"").Append(parentKey).Append("\"");
		StringBuilder_t* L_5 = V_0;
		NullCheck(L_5);
		StringBuilder_t* L_6;
		L_6 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_5, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, NULL);
		String_t* L_7 = __this->___parentKey_1;
		NullCheck(L_6);
		StringBuilder_t* L_8;
		L_8 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_6, L_7, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_9;
		L_9 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, NULL);
		// builder.Append(":");
		StringBuilder_t* L_10 = V_0;
		NullCheck(L_10);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_10, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D, NULL);
		// builder.Append(JsonUtility.ToJson(config.parentProperty));
		StringBuilder_t* L_12 = V_0;
		ATNativeConfig_t1C2488BAA15F3BE2BF56F58A95F48B386B9E9D1A* L_13 = __this->___config_0;
		NullCheck(L_13);
		ATNativeItemProperty_t58B41E7E5AB08D343652315D7CF53AD2EBB2349A* L_14 = L_13->___parentProperty_0;
		String_t* L_15;
		L_15 = JsonUtility_ToJson_m28CC6843B9D3723D88AD13EA3829B71FDE7826BA(L_14, NULL);
		NullCheck(L_12);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_12, L_15, NULL);
		// builder.Append(",");
		StringBuilder_t* L_17 = V_0;
		NullCheck(L_17);
		StringBuilder_t* L_18;
		L_18 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, NULL);
	}

IL_006f:
	{
		// if(config.appIconProperty != null){
		ATNativeConfig_t1C2488BAA15F3BE2BF56F58A95F48B386B9E9D1A* L_19 = __this->___config_0;
		NullCheck(L_19);
		ATNativeItemProperty_t58B41E7E5AB08D343652315D7CF53AD2EBB2349A* L_20 = L_19->___appIconProperty_1;
		if (!L_20)
		{
			goto IL_00cc;
		}
	}
	{
		// builder.Append("\"").Append(appIconKey).Append("\"");
		StringBuilder_t* L_21 = V_0;
		NullCheck(L_21);
		StringBuilder_t* L_22;
		L_22 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_21, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, NULL);
		String_t* L_23 = __this->___appIconKey_2;
		NullCheck(L_22);
		StringBuilder_t* L_24;
		L_24 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_22, L_23, NULL);
		NullCheck(L_24);
		StringBuilder_t* L_25;
		L_25 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_24, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, NULL);
		// builder.Append(":");
		StringBuilder_t* L_26 = V_0;
		NullCheck(L_26);
		StringBuilder_t* L_27;
		L_27 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_26, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D, NULL);
		// builder.Append(JsonUtility.ToJson(config.appIconProperty));
		StringBuilder_t* L_28 = V_0;
		ATNativeConfig_t1C2488BAA15F3BE2BF56F58A95F48B386B9E9D1A* L_29 = __this->___config_0;
		NullCheck(L_29);
		ATNativeItemProperty_t58B41E7E5AB08D343652315D7CF53AD2EBB2349A* L_30 = L_29->___appIconProperty_1;
		String_t* L_31;
		L_31 = JsonUtility_ToJson_m28CC6843B9D3723D88AD13EA3829B71FDE7826BA(L_30, NULL);
		NullCheck(L_28);
		StringBuilder_t* L_32;
		L_32 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_28, L_31, NULL);
		// builder.Append(",");
		StringBuilder_t* L_33 = V_0;
		NullCheck(L_33);
		StringBuilder_t* L_34;
		L_34 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_33, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, NULL);
	}

IL_00cc:
	{
		// if(config.mainImageProperty != null)
		ATNativeConfig_t1C2488BAA15F3BE2BF56F58A95F48B386B9E9D1A* L_35 = __this->___config_0;
		NullCheck(L_35);
		ATNativeItemProperty_t58B41E7E5AB08D343652315D7CF53AD2EBB2349A* L_36 = L_35->___mainImageProperty_2;
		if (!L_36)
		{
			goto IL_0129;
		}
	}
	{
		// builder.Append("\"").Append(mainImageKey).Append("\"");
		StringBuilder_t* L_37 = V_0;
		NullCheck(L_37);
		StringBuilder_t* L_38;
		L_38 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_37, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, NULL);
		String_t* L_39 = __this->___mainImageKey_3;
		NullCheck(L_38);
		StringBuilder_t* L_40;
		L_40 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_38, L_39, NULL);
		NullCheck(L_40);
		StringBuilder_t* L_41;
		L_41 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_40, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, NULL);
		// builder.Append(":");
		StringBuilder_t* L_42 = V_0;
		NullCheck(L_42);
		StringBuilder_t* L_43;
		L_43 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_42, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D, NULL);
		// builder.Append(JsonUtility.ToJson(config.mainImageProperty));
		StringBuilder_t* L_44 = V_0;
		ATNativeConfig_t1C2488BAA15F3BE2BF56F58A95F48B386B9E9D1A* L_45 = __this->___config_0;
		NullCheck(L_45);
		ATNativeItemProperty_t58B41E7E5AB08D343652315D7CF53AD2EBB2349A* L_46 = L_45->___mainImageProperty_2;
		String_t* L_47;
		L_47 = JsonUtility_ToJson_m28CC6843B9D3723D88AD13EA3829B71FDE7826BA(L_46, NULL);
		NullCheck(L_44);
		StringBuilder_t* L_48;
		L_48 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_44, L_47, NULL);
		// builder.Append(",");
		StringBuilder_t* L_49 = V_0;
		NullCheck(L_49);
		StringBuilder_t* L_50;
		L_50 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_49, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, NULL);
	}

IL_0129:
	{
		// if(config.titleProperty != null)
		ATNativeConfig_t1C2488BAA15F3BE2BF56F58A95F48B386B9E9D1A* L_51 = __this->___config_0;
		NullCheck(L_51);
		ATNativeItemProperty_t58B41E7E5AB08D343652315D7CF53AD2EBB2349A* L_52 = L_51->___titleProperty_3;
		if (!L_52)
		{
			goto IL_0186;
		}
	}
	{
		// builder.Append("\"").Append(titleKey).Append("\"");
		StringBuilder_t* L_53 = V_0;
		NullCheck(L_53);
		StringBuilder_t* L_54;
		L_54 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_53, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, NULL);
		String_t* L_55 = __this->___titleKey_4;
		NullCheck(L_54);
		StringBuilder_t* L_56;
		L_56 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_54, L_55, NULL);
		NullCheck(L_56);
		StringBuilder_t* L_57;
		L_57 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_56, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, NULL);
		// builder.Append(":");
		StringBuilder_t* L_58 = V_0;
		NullCheck(L_58);
		StringBuilder_t* L_59;
		L_59 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_58, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D, NULL);
		// builder.Append(JsonUtility.ToJson(config.titleProperty));
		StringBuilder_t* L_60 = V_0;
		ATNativeConfig_t1C2488BAA15F3BE2BF56F58A95F48B386B9E9D1A* L_61 = __this->___config_0;
		NullCheck(L_61);
		ATNativeItemProperty_t58B41E7E5AB08D343652315D7CF53AD2EBB2349A* L_62 = L_61->___titleProperty_3;
		String_t* L_63;
		L_63 = JsonUtility_ToJson_m28CC6843B9D3723D88AD13EA3829B71FDE7826BA(L_62, NULL);
		NullCheck(L_60);
		StringBuilder_t* L_64;
		L_64 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_60, L_63, NULL);
		// builder.Append(",");
		StringBuilder_t* L_65 = V_0;
		NullCheck(L_65);
		StringBuilder_t* L_66;
		L_66 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_65, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, NULL);
	}

IL_0186:
	{
		// if(config.descProperty != null)
		ATNativeConfig_t1C2488BAA15F3BE2BF56F58A95F48B386B9E9D1A* L_67 = __this->___config_0;
		NullCheck(L_67);
		ATNativeItemProperty_t58B41E7E5AB08D343652315D7CF53AD2EBB2349A* L_68 = L_67->___descProperty_4;
		if (!L_68)
		{
			goto IL_01e3;
		}
	}
	{
		// builder.Append("\"").Append(descKey).Append("\"");
		StringBuilder_t* L_69 = V_0;
		NullCheck(L_69);
		StringBuilder_t* L_70;
		L_70 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_69, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, NULL);
		String_t* L_71 = __this->___descKey_5;
		NullCheck(L_70);
		StringBuilder_t* L_72;
		L_72 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_70, L_71, NULL);
		NullCheck(L_72);
		StringBuilder_t* L_73;
		L_73 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_72, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, NULL);
		// builder.Append(":");
		StringBuilder_t* L_74 = V_0;
		NullCheck(L_74);
		StringBuilder_t* L_75;
		L_75 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_74, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D, NULL);
		// builder.Append(JsonUtility.ToJson(config.descProperty));
		StringBuilder_t* L_76 = V_0;
		ATNativeConfig_t1C2488BAA15F3BE2BF56F58A95F48B386B9E9D1A* L_77 = __this->___config_0;
		NullCheck(L_77);
		ATNativeItemProperty_t58B41E7E5AB08D343652315D7CF53AD2EBB2349A* L_78 = L_77->___descProperty_4;
		String_t* L_79;
		L_79 = JsonUtility_ToJson_m28CC6843B9D3723D88AD13EA3829B71FDE7826BA(L_78, NULL);
		NullCheck(L_76);
		StringBuilder_t* L_80;
		L_80 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_76, L_79, NULL);
		// builder.Append(",");
		StringBuilder_t* L_81 = V_0;
		NullCheck(L_81);
		StringBuilder_t* L_82;
		L_82 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_81, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, NULL);
	}

IL_01e3:
	{
		// if(config.adLogoProperty != null)
		ATNativeConfig_t1C2488BAA15F3BE2BF56F58A95F48B386B9E9D1A* L_83 = __this->___config_0;
		NullCheck(L_83);
		ATNativeItemProperty_t58B41E7E5AB08D343652315D7CF53AD2EBB2349A* L_84 = L_83->___adLogoProperty_5;
		if (!L_84)
		{
			goto IL_0240;
		}
	}
	{
		// builder.Append("\"").Append(adLogoKey).Append("\"");
		StringBuilder_t* L_85 = V_0;
		NullCheck(L_85);
		StringBuilder_t* L_86;
		L_86 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_85, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, NULL);
		String_t* L_87 = __this->___adLogoKey_6;
		NullCheck(L_86);
		StringBuilder_t* L_88;
		L_88 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_86, L_87, NULL);
		NullCheck(L_88);
		StringBuilder_t* L_89;
		L_89 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_88, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, NULL);
		// builder.Append(":");
		StringBuilder_t* L_90 = V_0;
		NullCheck(L_90);
		StringBuilder_t* L_91;
		L_91 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_90, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D, NULL);
		// builder.Append(JsonUtility.ToJson(config.adLogoProperty));
		StringBuilder_t* L_92 = V_0;
		ATNativeConfig_t1C2488BAA15F3BE2BF56F58A95F48B386B9E9D1A* L_93 = __this->___config_0;
		NullCheck(L_93);
		ATNativeItemProperty_t58B41E7E5AB08D343652315D7CF53AD2EBB2349A* L_94 = L_93->___adLogoProperty_5;
		String_t* L_95;
		L_95 = JsonUtility_ToJson_m28CC6843B9D3723D88AD13EA3829B71FDE7826BA(L_94, NULL);
		NullCheck(L_92);
		StringBuilder_t* L_96;
		L_96 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_92, L_95, NULL);
		// builder.Append(",");
		StringBuilder_t* L_97 = V_0;
		NullCheck(L_97);
		StringBuilder_t* L_98;
		L_98 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_97, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, NULL);
	}

IL_0240:
	{
		// if(config.ctaButtonProperty != null)
		ATNativeConfig_t1C2488BAA15F3BE2BF56F58A95F48B386B9E9D1A* L_99 = __this->___config_0;
		NullCheck(L_99);
		ATNativeItemProperty_t58B41E7E5AB08D343652315D7CF53AD2EBB2349A* L_100 = L_99->___ctaButtonProperty_6;
		if (!L_100)
		{
			goto IL_029d;
		}
	}
	{
		// builder.Append("\"").Append(ctaButtonKey).Append("\"");
		StringBuilder_t* L_101 = V_0;
		NullCheck(L_101);
		StringBuilder_t* L_102;
		L_102 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_101, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, NULL);
		String_t* L_103 = __this->___ctaButtonKey_7;
		NullCheck(L_102);
		StringBuilder_t* L_104;
		L_104 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_102, L_103, NULL);
		NullCheck(L_104);
		StringBuilder_t* L_105;
		L_105 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_104, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, NULL);
		// builder.Append(":");
		StringBuilder_t* L_106 = V_0;
		NullCheck(L_106);
		StringBuilder_t* L_107;
		L_107 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_106, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D, NULL);
		// builder.Append(JsonUtility.ToJson(config.ctaButtonProperty));
		StringBuilder_t* L_108 = V_0;
		ATNativeConfig_t1C2488BAA15F3BE2BF56F58A95F48B386B9E9D1A* L_109 = __this->___config_0;
		NullCheck(L_109);
		ATNativeItemProperty_t58B41E7E5AB08D343652315D7CF53AD2EBB2349A* L_110 = L_109->___ctaButtonProperty_6;
		String_t* L_111;
		L_111 = JsonUtility_ToJson_m28CC6843B9D3723D88AD13EA3829B71FDE7826BA(L_110, NULL);
		NullCheck(L_108);
		StringBuilder_t* L_112;
		L_112 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_108, L_111, NULL);
		// builder.Append(",");
		StringBuilder_t* L_113 = V_0;
		NullCheck(L_113);
		StringBuilder_t* L_114;
		L_114 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_113, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, NULL);
	}

IL_029d:
	{
		// if(config.dislikeButtonProperty != null)
		ATNativeConfig_t1C2488BAA15F3BE2BF56F58A95F48B386B9E9D1A* L_115 = __this->___config_0;
		NullCheck(L_115);
		ATNativeItemProperty_t58B41E7E5AB08D343652315D7CF53AD2EBB2349A* L_116 = L_115->___dislikeButtonProperty_7;
		if (!L_116)
		{
			goto IL_02ee;
		}
	}
	{
		// builder.Append("\"").Append(dislikeButtonKey).Append("\"");
		StringBuilder_t* L_117 = V_0;
		NullCheck(L_117);
		StringBuilder_t* L_118;
		L_118 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_117, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, NULL);
		String_t* L_119 = __this->___dislikeButtonKey_8;
		NullCheck(L_118);
		StringBuilder_t* L_120;
		L_120 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_118, L_119, NULL);
		NullCheck(L_120);
		StringBuilder_t* L_121;
		L_121 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_120, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, NULL);
		// builder.Append(":");
		StringBuilder_t* L_122 = V_0;
		NullCheck(L_122);
		StringBuilder_t* L_123;
		L_123 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_122, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D, NULL);
		// builder.Append(JsonUtility.ToJson(config.dislikeButtonProperty));
		StringBuilder_t* L_124 = V_0;
		ATNativeConfig_t1C2488BAA15F3BE2BF56F58A95F48B386B9E9D1A* L_125 = __this->___config_0;
		NullCheck(L_125);
		ATNativeItemProperty_t58B41E7E5AB08D343652315D7CF53AD2EBB2349A* L_126 = L_125->___dislikeButtonProperty_7;
		String_t* L_127;
		L_127 = JsonUtility_ToJson_m28CC6843B9D3723D88AD13EA3829B71FDE7826BA(L_126, NULL);
		NullCheck(L_124);
		StringBuilder_t* L_128;
		L_128 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_124, L_127, NULL);
	}

IL_02ee:
	{
		// string temp = builder.ToString();
		StringBuilder_t* L_129 = V_0;
		NullCheck(L_129);
		String_t* L_130;
		L_130 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_129);
		V_1 = L_130;
		// if (temp.EndsWith(","))
		String_t* L_131 = V_1;
		NullCheck(L_131);
		bool L_132;
		L_132 = String_EndsWith_mCD3754F5401E19CE7821CD398986E4EAA6AD87DC(L_131, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, NULL);
		if (!L_132)
		{
			goto IL_0312;
		}
	}
	{
		// temp = temp.Substring(0, temp.Length - 1);
		String_t* L_133 = V_1;
		String_t* L_134 = V_1;
		NullCheck(L_134);
		int32_t L_135;
		L_135 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_134, NULL);
		NullCheck(L_133);
		String_t* L_136;
		L_136 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_133, 0, ((int32_t)il2cpp_codegen_subtract(L_135, 1)), NULL);
		V_1 = L_136;
	}

IL_0312:
	{
		// temp = temp + "}";
		String_t* L_137 = V_1;
		String_t* L_138;
		L_138 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_137, _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30, NULL);
		V_1 = L_138;
		// return temp;
		String_t* L_139 = V_1;
		return L_139;
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
// System.Void AnyThinkAds.Api.ATNativeBannerAdShowingExtra::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATNativeBannerAdShowingExtra__ctor_mD5BE5E8E5FADE92478A619C631B3C4E72D3953EE (ATNativeBannerAdShowingExtra_t0FE66289975CC9B69EDA88DB3846C945A42185A1* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void AnyThinkAds.Api.ATNativeBannerAdShowingExtra::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATNativeBannerAdShowingExtra__cctor_mC2FD924038D90CF2423EB7946CCA98A755600F19 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ATNativeBannerAdShowingExtra_t0FE66289975CC9B69EDA88DB3846C945A42185A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0BABBCE95BCD478A1457643796BE96B9ACA4E6C2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1084E0508EC132638288C6F0A8F166242775D100);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral10CFCF3EBD4D77E7A54DFD0926B0796496169AB9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E52B4BC35C1F9068E8AD23DC9937D65194A5135);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6464580B4BA3FBA5EE5A3A1A31C35F8B2BB42CB9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83A97723F7E5BDE036330459FB667402C7C32740);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral988090910866A3AC43E431323DD6916C60B1A59A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA76A1FBB5BDCCBC5DBCEDB47C87027870724AC3E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB714933B91F72FB57380135D2B50660975351E49);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC0048E68AAA6E10064F62D278CB090D1AAE69DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE6D13D8B5CAB7B6CF611C5B25BC71DE7AA04FD5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEDCC39ACE1BE3A6CCC4D73DEDA17B26E795EF1D3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly string kATNativeBannerAdShowingExtraBackgroundColor = "background_color";
		((ATNativeBannerAdShowingExtra_t0FE66289975CC9B69EDA88DB3846C945A42185A1_StaticFields*)il2cpp_codegen_static_fields_for(ATNativeBannerAdShowingExtra_t0FE66289975CC9B69EDA88DB3846C945A42185A1_il2cpp_TypeInfo_var))->___kATNativeBannerAdShowingExtraBackgroundColor_0 = _stringLiteral0BABBCE95BCD478A1457643796BE96B9ACA4E6C2;
		Il2CppCodeGenWriteBarrier((void**)(&((ATNativeBannerAdShowingExtra_t0FE66289975CC9B69EDA88DB3846C945A42185A1_StaticFields*)il2cpp_codegen_static_fields_for(ATNativeBannerAdShowingExtra_t0FE66289975CC9B69EDA88DB3846C945A42185A1_il2cpp_TypeInfo_var))->___kATNativeBannerAdShowingExtraBackgroundColor_0), (void*)_stringLiteral0BABBCE95BCD478A1457643796BE96B9ACA4E6C2);
		// public static readonly string kATNativeBannerAdShowingExtraAutorefreshInterval = "autorefresh_interval";
		((ATNativeBannerAdShowingExtra_t0FE66289975CC9B69EDA88DB3846C945A42185A1_StaticFields*)il2cpp_codegen_static_fields_for(ATNativeBannerAdShowingExtra_t0FE66289975CC9B69EDA88DB3846C945A42185A1_il2cpp_TypeInfo_var))->___kATNativeBannerAdShowingExtraAutorefreshInterval_1 = _stringLiteralA76A1FBB5BDCCBC5DBCEDB47C87027870724AC3E;
		Il2CppCodeGenWriteBarrier((void**)(&((ATNativeBannerAdShowingExtra_t0FE66289975CC9B69EDA88DB3846C945A42185A1_StaticFields*)il2cpp_codegen_static_fields_for(ATNativeBannerAdShowingExtra_t0FE66289975CC9B69EDA88DB3846C945A42185A1_il2cpp_TypeInfo_var))->___kATNativeBannerAdShowingExtraAutorefreshInterval_1), (void*)_stringLiteralA76A1FBB5BDCCBC5DBCEDB47C87027870724AC3E);
		// public static readonly string kATNativeBannerAdShowingExtraHideCloseButtonFlag = "hide_close_button_flag";
		((ATNativeBannerAdShowingExtra_t0FE66289975CC9B69EDA88DB3846C945A42185A1_StaticFields*)il2cpp_codegen_static_fields_for(ATNativeBannerAdShowingExtra_t0FE66289975CC9B69EDA88DB3846C945A42185A1_il2cpp_TypeInfo_var))->___kATNativeBannerAdShowingExtraHideCloseButtonFlag_2 = _stringLiteralEDCC39ACE1BE3A6CCC4D73DEDA17B26E795EF1D3;
		Il2CppCodeGenWriteBarrier((void**)(&((ATNativeBannerAdShowingExtra_t0FE66289975CC9B69EDA88DB3846C945A42185A1_StaticFields*)il2cpp_codegen_static_fields_for(ATNativeBannerAdShowingExtra_t0FE66289975CC9B69EDA88DB3846C945A42185A1_il2cpp_TypeInfo_var))->___kATNativeBannerAdShowingExtraHideCloseButtonFlag_2), (void*)_stringLiteralEDCC39ACE1BE3A6CCC4D73DEDA17B26E795EF1D3);
		// public static readonly string kATNativeBannerAdShowingExtraCTAButtonBackgroundColor = "cta_button_background_color";
		((ATNativeBannerAdShowingExtra_t0FE66289975CC9B69EDA88DB3846C945A42185A1_StaticFields*)il2cpp_codegen_static_fields_for(ATNativeBannerAdShowingExtra_t0FE66289975CC9B69EDA88DB3846C945A42185A1_il2cpp_TypeInfo_var))->___kATNativeBannerAdShowingExtraCTAButtonBackgroundColor_3 = _stringLiteralB714933B91F72FB57380135D2B50660975351E49;
		Il2CppCodeGenWriteBarrier((void**)(&((ATNativeBannerAdShowingExtra_t0FE66289975CC9B69EDA88DB3846C945A42185A1_StaticFields*)il2cpp_codegen_static_fields_for(ATNativeBannerAdShowingExtra_t0FE66289975CC9B69EDA88DB3846C945A42185A1_il2cpp_TypeInfo_var))->___kATNativeBannerAdShowingExtraCTAButtonBackgroundColor_3), (void*)_stringLiteralB714933B91F72FB57380135D2B50660975351E49);
		// public static readonly string kATNativeBannerAdShowingExtraCTATextColor = "cta_button_title_color";//of type string, example:#3e2f10
		((ATNativeBannerAdShowingExtra_t0FE66289975CC9B69EDA88DB3846C945A42185A1_StaticFields*)il2cpp_codegen_static_fields_for(ATNativeBannerAdShowingExtra_t0FE66289975CC9B69EDA88DB3846C945A42185A1_il2cpp_TypeInfo_var))->___kATNativeBannerAdShowingExtraCTATextColor_4 = _stringLiteral1084E0508EC132638288C6F0A8F166242775D100;
		Il2CppCodeGenWriteBarrier((void**)(&((ATNativeBannerAdShowingExtra_t0FE66289975CC9B69EDA88DB3846C945A42185A1_StaticFields*)il2cpp_codegen_static_fields_for(ATNativeBannerAdShowingExtra_t0FE66289975CC9B69EDA88DB3846C945A42185A1_il2cpp_TypeInfo_var))->___kATNativeBannerAdShowingExtraCTATextColor_4), (void*)_stringLiteral1084E0508EC132638288C6F0A8F166242775D100);
		// public static readonly string kATNativeBannerAdShowingExtraCTATextFont = "cta_text_font";//of type double
		((ATNativeBannerAdShowingExtra_t0FE66289975CC9B69EDA88DB3846C945A42185A1_StaticFields*)il2cpp_codegen_static_fields_for(ATNativeBannerAdShowingExtra_t0FE66289975CC9B69EDA88DB3846C945A42185A1_il2cpp_TypeInfo_var))->___kATNativeBannerAdShowingExtraCTATextFont_5 = _stringLiteral10CFCF3EBD4D77E7A54DFD0926B0796496169AB9;
		Il2CppCodeGenWriteBarrier((void**)(&((ATNativeBannerAdShowingExtra_t0FE66289975CC9B69EDA88DB3846C945A42185A1_StaticFields*)il2cpp_codegen_static_fields_for(ATNativeBannerAdShowingExtra_t0FE66289975CC9B69EDA88DB3846C945A42185A1_il2cpp_TypeInfo_var))->___kATNativeBannerAdShowingExtraCTATextFont_5), (void*)_stringLiteral10CFCF3EBD4D77E7A54DFD0926B0796496169AB9);
		// public static readonly string kATNativeBannerAdShowingExtraTitleColor = "title_color";
		((ATNativeBannerAdShowingExtra_t0FE66289975CC9B69EDA88DB3846C945A42185A1_StaticFields*)il2cpp_codegen_static_fields_for(ATNativeBannerAdShowingExtra_t0FE66289975CC9B69EDA88DB3846C945A42185A1_il2cpp_TypeInfo_var))->___kATNativeBannerAdShowingExtraTitleColor_6 = _stringLiteralDE6D13D8B5CAB7B6CF611C5B25BC71DE7AA04FD5;
		Il2CppCodeGenWriteBarrier((void**)(&((ATNativeBannerAdShowingExtra_t0FE66289975CC9B69EDA88DB3846C945A42185A1_StaticFields*)il2cpp_codegen_static_fields_for(ATNativeBannerAdShowingExtra_t0FE66289975CC9B69EDA88DB3846C945A42185A1_il2cpp_TypeInfo_var))->___kATNativeBannerAdShowingExtraTitleColor_6), (void*)_stringLiteralDE6D13D8B5CAB7B6CF611C5B25BC71DE7AA04FD5);
		// public static readonly string kATNativeBannerAdShowingExtraTitleFont = "title_font";
		((ATNativeBannerAdShowingExtra_t0FE66289975CC9B69EDA88DB3846C945A42185A1_StaticFields*)il2cpp_codegen_static_fields_for(ATNativeBannerAdShowingExtra_t0FE66289975CC9B69EDA88DB3846C945A42185A1_il2cpp_TypeInfo_var))->___kATNativeBannerAdShowingExtraTitleFont_7 = _stringLiteral6464580B4BA3FBA5EE5A3A1A31C35F8B2BB42CB9;
		Il2CppCodeGenWriteBarrier((void**)(&((ATNativeBannerAdShowingExtra_t0FE66289975CC9B69EDA88DB3846C945A42185A1_StaticFields*)il2cpp_codegen_static_fields_for(ATNativeBannerAdShowingExtra_t0FE66289975CC9B69EDA88DB3846C945A42185A1_il2cpp_TypeInfo_var))->___kATNativeBannerAdShowingExtraTitleFont_7), (void*)_stringLiteral6464580B4BA3FBA5EE5A3A1A31C35F8B2BB42CB9);
		// public static readonly string kATNativeBannerAdShowingExtraTextColor = "text_color";
		((ATNativeBannerAdShowingExtra_t0FE66289975CC9B69EDA88DB3846C945A42185A1_StaticFields*)il2cpp_codegen_static_fields_for(ATNativeBannerAdShowingExtra_t0FE66289975CC9B69EDA88DB3846C945A42185A1_il2cpp_TypeInfo_var))->___kATNativeBannerAdShowingExtraTextColor_8 = _stringLiteral83A97723F7E5BDE036330459FB667402C7C32740;
		Il2CppCodeGenWriteBarrier((void**)(&((ATNativeBannerAdShowingExtra_t0FE66289975CC9B69EDA88DB3846C945A42185A1_StaticFields*)il2cpp_codegen_static_fields_for(ATNativeBannerAdShowingExtra_t0FE66289975CC9B69EDA88DB3846C945A42185A1_il2cpp_TypeInfo_var))->___kATNativeBannerAdShowingExtraTextColor_8), (void*)_stringLiteral83A97723F7E5BDE036330459FB667402C7C32740);
		// public static readonly string kATNativeBannerAdShowingExtraTextFont = "text_font";
		((ATNativeBannerAdShowingExtra_t0FE66289975CC9B69EDA88DB3846C945A42185A1_StaticFields*)il2cpp_codegen_static_fields_for(ATNativeBannerAdShowingExtra_t0FE66289975CC9B69EDA88DB3846C945A42185A1_il2cpp_TypeInfo_var))->___kATNativeBannerAdShowingExtraTextFont_9 = _stringLiteral988090910866A3AC43E431323DD6916C60B1A59A;
		Il2CppCodeGenWriteBarrier((void**)(&((ATNativeBannerAdShowingExtra_t0FE66289975CC9B69EDA88DB3846C945A42185A1_StaticFields*)il2cpp_codegen_static_fields_for(ATNativeBannerAdShowingExtra_t0FE66289975CC9B69EDA88DB3846C945A42185A1_il2cpp_TypeInfo_var))->___kATNativeBannerAdShowingExtraTextFont_9), (void*)_stringLiteral988090910866A3AC43E431323DD6916C60B1A59A);
		// public static readonly string kATNativeBannerAdShowingExtraAdvertiserTextFont = "sponsor_text_font";
		((ATNativeBannerAdShowingExtra_t0FE66289975CC9B69EDA88DB3846C945A42185A1_StaticFields*)il2cpp_codegen_static_fields_for(ATNativeBannerAdShowingExtra_t0FE66289975CC9B69EDA88DB3846C945A42185A1_il2cpp_TypeInfo_var))->___kATNativeBannerAdShowingExtraAdvertiserTextFont_10 = _stringLiteralBC0048E68AAA6E10064F62D278CB090D1AAE69DF;
		Il2CppCodeGenWriteBarrier((void**)(&((ATNativeBannerAdShowingExtra_t0FE66289975CC9B69EDA88DB3846C945A42185A1_StaticFields*)il2cpp_codegen_static_fields_for(ATNativeBannerAdShowingExtra_t0FE66289975CC9B69EDA88DB3846C945A42185A1_il2cpp_TypeInfo_var))->___kATNativeBannerAdShowingExtraAdvertiserTextFont_10), (void*)_stringLiteralBC0048E68AAA6E10064F62D278CB090D1AAE69DF);
		// public static readonly string kATNativeBannerAdShowingExtraAdvertiserTextColor = "spnosor_text_color";
		((ATNativeBannerAdShowingExtra_t0FE66289975CC9B69EDA88DB3846C945A42185A1_StaticFields*)il2cpp_codegen_static_fields_for(ATNativeBannerAdShowingExtra_t0FE66289975CC9B69EDA88DB3846C945A42185A1_il2cpp_TypeInfo_var))->___kATNativeBannerAdShowingExtraAdvertiserTextColor_11 = _stringLiteral2E52B4BC35C1F9068E8AD23DC9937D65194A5135;
		Il2CppCodeGenWriteBarrier((void**)(&((ATNativeBannerAdShowingExtra_t0FE66289975CC9B69EDA88DB3846C945A42185A1_StaticFields*)il2cpp_codegen_static_fields_for(ATNativeBannerAdShowingExtra_t0FE66289975CC9B69EDA88DB3846C945A42185A1_il2cpp_TypeInfo_var))->___kATNativeBannerAdShowingExtraAdvertiserTextColor_11), (void*)_stringLiteral2E52B4BC35C1F9068E8AD23DC9937D65194A5135);
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
// System.Void AnyThinkAds.Api.ATNativeBannerAd::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATNativeBannerAd__ctor_m2B334A6D47425C7B2F8171950299AA57C02CB598 (ATNativeBannerAd_tE58854FA0A73E26146A20E25FF3F3D937203AFEC* __this, const RuntimeMethod* method) 
{
	{
		// public ATNativeBannerAd() {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// client = GetATNativeBannerAdClient();
		RuntimeObject* L_0;
		L_0 = ATNativeBannerAd_GetATNativeBannerAdClient_mC1C8967325B4670DCC85ACFD3E9E108439BA1155(__this, NULL);
		__this->___client_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___client_1), (void*)L_0);
		// }
		return;
	}
}
// AnyThinkAds.Api.ATNativeBannerAd AnyThinkAds.Api.ATNativeBannerAd::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ATNativeBannerAd_tE58854FA0A73E26146A20E25FF3F3D937203AFEC* ATNativeBannerAd_get_Instance_m3B03E351D7C09FC59880CEFBF3748AC738C3953A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ATNativeBannerAd_tE58854FA0A73E26146A20E25FF3F3D937203AFEC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return instance;
		il2cpp_codegen_runtime_class_init_inline(ATNativeBannerAd_tE58854FA0A73E26146A20E25FF3F3D937203AFEC_il2cpp_TypeInfo_var);
		ATNativeBannerAd_tE58854FA0A73E26146A20E25FF3F3D937203AFEC* L_0 = ((ATNativeBannerAd_tE58854FA0A73E26146A20E25FF3F3D937203AFEC_StaticFields*)il2cpp_codegen_static_fields_for(ATNativeBannerAd_tE58854FA0A73E26146A20E25FF3F3D937203AFEC_il2cpp_TypeInfo_var))->___instance_0;
		return L_0;
	}
}
// System.Void AnyThinkAds.Api.ATNativeBannerAd::loadAd(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATNativeBannerAd_loadAd_m37A1CD9D30333347A917E3AFE0D204F4A12DC109 (ATNativeBannerAd_tE58854FA0A73E26146A20E25FF3F3D937203AFEC* __this, String_t* ___placementId0, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___pairs1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IATNativeBannerAdClient_tDA9467756C97EA5831BDDBB0ECB6E91396CBD294_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t6C02C11E5758BFDB34AD6A5F41ABBFC7FAB2E598_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA29C31BF1A1235E83B36C818C313368D6188CA1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("ATNativeBannerAd::loadAd(" + placementId + ")");
		String_t* L_0 = ___placementId0;
		String_t* L_1;
		L_1 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralDA29C31BF1A1235E83B36C818C313368D6188CA1, L_0, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_1, NULL);
		// client.loadAd(placementId, JsonMapper.ToJson(pairs));
		RuntimeObject* L_2 = __this->___client_1;
		String_t* L_3 = ___placementId0;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_4 = ___pairs1;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t6C02C11E5758BFDB34AD6A5F41ABBFC7FAB2E598_il2cpp_TypeInfo_var);
		String_t* L_5;
		L_5 = JsonMapper_ToJson_m640303EB0458D6FC503ACB6AFECB29F3EAC84336(L_4, NULL);
		NullCheck(L_2);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(0 /* System.Void AnyThinkAds.Common.IATNativeBannerAdClient::loadAd(System.String,System.String) */, IATNativeBannerAdClient_tDA9467756C97EA5831BDDBB0ECB6E91396CBD294_il2cpp_TypeInfo_var, L_2, L_3, L_5);
		// }
		return;
	}
}
// System.Boolean AnyThinkAds.Api.ATNativeBannerAd::adReady(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ATNativeBannerAd_adReady_m646F568B7A0FBE06C3608C46B50FEB1EEC9031CB (ATNativeBannerAd_tE58854FA0A73E26146A20E25FF3F3D937203AFEC* __this, String_t* ___placementId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IATNativeBannerAdClient_tDA9467756C97EA5831BDDBB0ECB6E91396CBD294_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral292BD63800E4D7AB03958C97F752AA04D34A681B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("ATNativeBannerAd::adReady(" + placementId + ")");
		String_t* L_0 = ___placementId0;
		String_t* L_1;
		L_1 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral292BD63800E4D7AB03958C97F752AA04D34A681B, L_0, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_1, NULL);
		// return client.adReady(placementId);
		RuntimeObject* L_2 = __this->___client_1;
		String_t* L_3 = ___placementId0;
		NullCheck(L_2);
		bool L_4;
		L_4 = InterfaceFuncInvoker1< bool, String_t* >::Invoke(1 /* System.Boolean AnyThinkAds.Common.IATNativeBannerAdClient::adReady(System.String) */, IATNativeBannerAdClient_tDA9467756C97EA5831BDDBB0ECB6E91396CBD294_il2cpp_TypeInfo_var, L_2, L_3);
		return L_4;
	}
}
// System.Void AnyThinkAds.Api.ATNativeBannerAd::setListener(AnyThinkAds.Api.ATNativeBannerAdListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATNativeBannerAd_setListener_m6C8F196F6AAFBF80338BBA1CAFEC768905D1DF7A (ATNativeBannerAd_tE58854FA0A73E26146A20E25FF3F3D937203AFEC* __this, RuntimeObject* ___listener0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IATNativeBannerAdClient_tDA9467756C97EA5831BDDBB0ECB6E91396CBD294_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64ECDAF6849D3AB5BFABD37685135C6123A23CC3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("ATNativeBannerAd::setListener");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral64ECDAF6849D3AB5BFABD37685135C6123A23CC3, NULL);
		// client.setListener(listener);
		RuntimeObject* L_0 = __this->___client_1;
		RuntimeObject* L_1 = ___listener0;
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(2 /* System.Void AnyThinkAds.Common.IATNativeBannerAdClient::setListener(AnyThinkAds.Api.ATNativeBannerAdListener) */, IATNativeBannerAdClient_tDA9467756C97EA5831BDDBB0ECB6E91396CBD294_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void AnyThinkAds.Api.ATNativeBannerAd::showAd(System.String,AnyThinkAds.Api.ATRect,System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATNativeBannerAd_showAd_m7F95777594524B1F1313EF12D9D902C449706B35 (ATNativeBannerAd_tE58854FA0A73E26146A20E25FF3F3D937203AFEC* __this, String_t* ___placementId0, ATRect_tBBC85FAC20A1E12B1EB9F3CE00870B793834C7C2* ___rect1, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___pairs2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IATNativeBannerAdClient_tDA9467756C97EA5831BDDBB0ECB6E91396CBD294_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7AFF5DCE6B762488699DFA749CC45116752C6045);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("ATNativeBannerAd::showAd");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral7AFF5DCE6B762488699DFA749CC45116752C6045, NULL);
		// client.showAd(placementId, rect, pairs);
		RuntimeObject* L_0 = __this->___client_1;
		String_t* L_1 = ___placementId0;
		ATRect_tBBC85FAC20A1E12B1EB9F3CE00870B793834C7C2* L_2 = ___rect1;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_3 = ___pairs2;
		NullCheck(L_0);
		InterfaceActionInvoker3< String_t*, ATRect_tBBC85FAC20A1E12B1EB9F3CE00870B793834C7C2*, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* >::Invoke(3 /* System.Void AnyThinkAds.Common.IATNativeBannerAdClient::showAd(System.String,AnyThinkAds.Api.ATRect,System.Collections.Generic.Dictionary`2<System.String,System.String>) */, IATNativeBannerAdClient_tDA9467756C97EA5831BDDBB0ECB6E91396CBD294_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3);
		// }
		return;
	}
}
// System.Void AnyThinkAds.Api.ATNativeBannerAd::removeAd(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATNativeBannerAd_removeAd_m022A800D606E892948698C5AF703FE7EC0DAEBF9 (ATNativeBannerAd_tE58854FA0A73E26146A20E25FF3F3D937203AFEC* __this, String_t* ___placementId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IATNativeBannerAdClient_tDA9467756C97EA5831BDDBB0ECB6E91396CBD294_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral10D904031D0D73164858E9561BEBF8188F164AF6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("ATNativeBannerAd::removeAd");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral10D904031D0D73164858E9561BEBF8188F164AF6, NULL);
		// client.removeAd(placementId);
		RuntimeObject* L_0 = __this->___client_1;
		String_t* L_1 = ___placementId0;
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(4 /* System.Void AnyThinkAds.Common.IATNativeBannerAdClient::removeAd(System.String) */, IATNativeBannerAdClient_tDA9467756C97EA5831BDDBB0ECB6E91396CBD294_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// AnyThinkAds.Common.IATNativeBannerAdClient AnyThinkAds.Api.ATNativeBannerAd::GetATNativeBannerAdClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ATNativeBannerAd_GetATNativeBannerAdClient_mC1C8967325B4670DCC85ACFD3E9E108439BA1155 (ATNativeBannerAd_tE58854FA0A73E26146A20E25FF3F3D937203AFEC* __this, const RuntimeMethod* method) 
{
	{
		// return AnyThinkAds.ATAdsClientFactory.BuildNativeBannerAdClient();
		RuntimeObject* L_0;
		L_0 = ATAdsClientFactory_BuildNativeBannerAdClient_m2AE4C998D94CD271CCFD1F8443E9F8C9B79DAEBC(NULL);
		return L_0;
	}
}
// System.Void AnyThinkAds.Api.ATNativeBannerAd::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATNativeBannerAd__cctor_m5F145C0DF42E44EB6EFC97E46D17B742E17553A7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ATNativeBannerAd_tE58854FA0A73E26146A20E25FF3F3D937203AFEC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ATNativeBannerAd instance = new ATNativeBannerAd();
		ATNativeBannerAd_tE58854FA0A73E26146A20E25FF3F3D937203AFEC* L_0 = (ATNativeBannerAd_tE58854FA0A73E26146A20E25FF3F3D937203AFEC*)il2cpp_codegen_object_new(ATNativeBannerAd_tE58854FA0A73E26146A20E25FF3F3D937203AFEC_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ATNativeBannerAd__ctor_m2B334A6D47425C7B2F8171950299AA57C02CB598(L_0, NULL);
		((ATNativeBannerAd_tE58854FA0A73E26146A20E25FF3F3D937203AFEC_StaticFields*)il2cpp_codegen_static_fields_for(ATNativeBannerAd_tE58854FA0A73E26146A20E25FF3F3D937203AFEC_il2cpp_TypeInfo_var))->___instance_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ATNativeBannerAd_tE58854FA0A73E26146A20E25FF3F3D937203AFEC_StaticFields*)il2cpp_codegen_static_fields_for(ATNativeBannerAd_tE58854FA0A73E26146A20E25FF3F3D937203AFEC_il2cpp_TypeInfo_var))->___instance_0), (void*)L_0);
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
// System.Void AnyThinkAds.Api.ATNativeConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATNativeConfig__ctor_m9DB58A9BD8A73593CBBCECC4575C4DE2159D9BFC (ATNativeConfig_t1C2488BAA15F3BE2BF56F58A95F48B386B9E9D1A* __this, const RuntimeMethod* method) 
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
// System.Void AnyThinkAds.Api.ATNativeItemProperty::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.String,System.String,System.Int32,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATNativeItemProperty__ctor_m6D8F5268F0BBA34E0D15E3AD8406295D5E8EE407 (ATNativeItemProperty_t58B41E7E5AB08D343652315D7CF53AD2EBB2349A* __this, int32_t ___x0, int32_t ___y1, int32_t ___width2, int32_t ___height3, String_t* ___backgroundColor4, String_t* ___textColor5, int32_t ___textSize6, bool ___usesPixel7, bool ___isCustomClick8, const RuntimeMethod* method) 
{
	{
		// public ATNativeItemProperty(int x, int y, int width, int height, string backgroundColor, string textColor, int textSize, bool usesPixel, bool isCustomClick)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.x = x;
		int32_t L_0 = ___x0;
		__this->___x_0 = L_0;
		// this.y = y;
		int32_t L_1 = ___y1;
		__this->___y_1 = L_1;
		// this.width = width;
		int32_t L_2 = ___width2;
		__this->___width_2 = L_2;
		// this.height = height;
		int32_t L_3 = ___height3;
		__this->___height_3 = L_3;
		// this.usesPixel = usesPixel;
		bool L_4 = ___usesPixel7;
		__this->___usesPixel_4 = L_4;
		// this.backgroundColor = backgroundColor;
		String_t* L_5 = ___backgroundColor4;
		__this->___backgroundColor_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___backgroundColor_5), (void*)L_5);
		// this.textColor = textColor;
		String_t* L_6 = ___textColor5;
		__this->___textColor_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___textColor_6), (void*)L_6);
		// this.textSize = textSize;
		int32_t L_7 = ___textSize6;
		__this->___textSize_7 = L_7;
		// this.isCustomClick = isCustomClick;
		bool L_8 = ___isCustomClick8;
		__this->___isCustomClick_8 = L_8;
		// }
		return;
	}
}
// System.Void AnyThinkAds.Api.ATNativeItemProperty::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.String,System.String,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATNativeItemProperty__ctor_m0F2B619C249E2E042AF4043C27EE1E2473E55DAA (ATNativeItemProperty_t58B41E7E5AB08D343652315D7CF53AD2EBB2349A* __this, int32_t ___x0, int32_t ___y1, int32_t ___width2, int32_t ___height3, String_t* ___backgroundColor4, String_t* ___textColor5, int32_t ___textSize6, bool ___usesPixel7, const RuntimeMethod* method) 
{
	{
		// public ATNativeItemProperty(int x, int y, int width, int height, string backgroundColor, string textColor, int textSize, bool usesPixel)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.x = x;
		int32_t L_0 = ___x0;
		__this->___x_0 = L_0;
		// this.y = y;
		int32_t L_1 = ___y1;
		__this->___y_1 = L_1;
		// this.width = width;
		int32_t L_2 = ___width2;
		__this->___width_2 = L_2;
		// this.height = height;
		int32_t L_3 = ___height3;
		__this->___height_3 = L_3;
		// this.usesPixel = usesPixel;
		bool L_4 = ___usesPixel7;
		__this->___usesPixel_4 = L_4;
		// this.backgroundColor = backgroundColor;
		String_t* L_5 = ___backgroundColor4;
		__this->___backgroundColor_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___backgroundColor_5), (void*)L_5);
		// this.textColor = textColor;
		String_t* L_6 = ___textColor5;
		__this->___textColor_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___textColor_6), (void*)L_6);
		// this.textSize = textSize;
		int32_t L_7 = ___textSize6;
		__this->___textSize_7 = L_7;
		// }
		return;
	}
}
// System.Void AnyThinkAds.Api.ATNativeItemProperty::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATNativeItemProperty__ctor_m31EEF326EAE5DAC02309791CDF66AF3280C2AB02 (ATNativeItemProperty_t58B41E7E5AB08D343652315D7CF53AD2EBB2349A* __this, int32_t ___x0, int32_t ___y1, int32_t ___width2, int32_t ___height3, String_t* ___backgroundColor4, String_t* ___textColor5, int32_t ___textSize6, const RuntimeMethod* method) 
{
	{
		// public ATNativeItemProperty(int x,int y,int width,int height,string backgroundColor,string textColor,int textSize){
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.x = x;
		int32_t L_0 = ___x0;
		__this->___x_0 = L_0;
		// this.y = y;
		int32_t L_1 = ___y1;
		__this->___y_1 = L_1;
		// this.width = width;
		int32_t L_2 = ___width2;
		__this->___width_2 = L_2;
		// this.height = height;
		int32_t L_3 = ___height3;
		__this->___height_3 = L_3;
		// this.usesPixel = false;
		__this->___usesPixel_4 = (bool)0;
		// this.backgroundColor = backgroundColor;
		String_t* L_4 = ___backgroundColor4;
		__this->___backgroundColor_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___backgroundColor_5), (void*)L_4);
		// this.textColor = textColor;
		String_t* L_5 = ___textColor5;
		__this->___textColor_6 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___textColor_6), (void*)L_5);
		// this.textSize = textSize;
		int32_t L_6 = ___textSize6;
		__this->___textSize_7 = L_6;
		// }
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
// System.Void AnyThinkAds.Api.ATRect::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATRect__ctor_mEAD6FA64BCE76E86CECC579BF03B8E3F5024B3F5 (ATRect_tBBC85FAC20A1E12B1EB9F3CE00870B793834C7C2* __this, int32_t ___x0, int32_t ___y1, int32_t ___width2, int32_t ___height3, bool ___usesPixel4, const RuntimeMethod* method) 
{
	{
		// public ATRect(int x, int y, int width, int height, bool usesPixel)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.x = x;
		int32_t L_0 = ___x0;
		__this->___x_0 = L_0;
		// this.y = y;
		int32_t L_1 = ___y1;
		__this->___y_1 = L_1;
		// this.width = width;
		int32_t L_2 = ___width2;
		__this->___width_2 = L_2;
		// this.height = height;
		int32_t L_3 = ___height3;
		__this->___height_3 = L_3;
		// this.usesPixel = usesPixel;
		bool L_4 = ___usesPixel4;
		__this->___usesPixel_4 = L_4;
		// }
		return;
	}
}
// System.Void AnyThinkAds.Api.ATRect::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATRect__ctor_m0011BEF1691B6799DACB4326FC3E15B64D9E7C7F (ATRect_tBBC85FAC20A1E12B1EB9F3CE00870B793834C7C2* __this, int32_t ___x0, int32_t ___y1, int32_t ___width2, int32_t ___height3, const RuntimeMethod* method) 
{
	{
		// public ATRect(int x, int y, int width, int height)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.x = x;
		int32_t L_0 = ___x0;
		__this->___x_0 = L_0;
		// this.y = y;
		int32_t L_1 = ___y1;
		__this->___y_1 = L_1;
		// this.width = width;
		int32_t L_2 = ___width2;
		__this->___width_2 = L_2;
		// this.height = height;
		int32_t L_3 = ___height3;
		__this->___height_3 = L_3;
		// this.usesPixel = false;
		__this->___usesPixel_4 = (bool)0;
		// }
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
// System.Void AnyThinkAds.Api.ATSize::.ctor(System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATSize__ctor_mE16151C14472CC1A868424ABFA4AE6A35BB09639 (ATSize_tB526AFFCD84BA3CC54C85D8125F2B279B6C3588D* __this, int32_t ___width0, int32_t ___height1, bool ___usesPixel2, const RuntimeMethod* method) 
{
	{
		// public ATSize(int width, int height, bool usesPixel)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.width = width;
		int32_t L_0 = ___width0;
		__this->___width_0 = L_0;
		// this.height = height;
		int32_t L_1 = ___height1;
		__this->___height_1 = L_1;
		// this.usesPixel = usesPixel;
		bool L_2 = ___usesPixel2;
		__this->___usesPixel_2 = L_2;
		// }
		return;
	}
}
// System.Void AnyThinkAds.Api.ATSize::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATSize__ctor_m7C82519D054C5610E1C7686C0D44185492B5C1DA (ATSize_tB526AFFCD84BA3CC54C85D8125F2B279B6C3588D* __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method) 
{
	{
		// public ATSize(int width, int height)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.width = width;
		int32_t L_0 = ___width0;
		__this->___width_0 = L_0;
		// this.height = height;
		int32_t L_1 = ___height1;
		__this->___height_1 = L_1;
		// this.usesPixel = false;
		__this->___usesPixel_2 = (bool)0;
		// }
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
// System.Void AnyThinkAds.Api.ATRewardedAutoVideo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATRewardedAutoVideo__ctor_m9777C43E623BB3F67D3A771999635555138DED42 (ATRewardedAutoVideo_t186A232BB8A51374EC69B092A3AE1E678BC0DE36* __this, const RuntimeMethod* method) 
{
	{
		// private ATRewardedAutoVideo()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// client = GetATRewardedClient();
		RuntimeObject* L_0;
		L_0 = ATRewardedAutoVideo_GetATRewardedClient_mDF7F88190674E801D86A79F892FD238E10F07566(__this, NULL);
		__this->___client_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___client_1), (void*)L_0);
		// }
		return;
	}
}
// AnyThinkAds.Api.ATRewardedAutoVideo AnyThinkAds.Api.ATRewardedAutoVideo::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ATRewardedAutoVideo_t186A232BB8A51374EC69B092A3AE1E678BC0DE36* ATRewardedAutoVideo_get_Instance_m588AD6DE117B18AB9C173B1359F4E08A64FB494F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ATRewardedAutoVideo_t186A232BB8A51374EC69B092A3AE1E678BC0DE36_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return instance;
		il2cpp_codegen_runtime_class_init_inline(ATRewardedAutoVideo_t186A232BB8A51374EC69B092A3AE1E678BC0DE36_il2cpp_TypeInfo_var);
		ATRewardedAutoVideo_t186A232BB8A51374EC69B092A3AE1E678BC0DE36* L_0 = ((ATRewardedAutoVideo_t186A232BB8A51374EC69B092A3AE1E678BC0DE36_StaticFields*)il2cpp_codegen_static_fields_for(ATRewardedAutoVideo_t186A232BB8A51374EC69B092A3AE1E678BC0DE36_il2cpp_TypeInfo_var))->___instance_0;
		return L_0;
	}
}
// System.Void AnyThinkAds.Api.ATRewardedAutoVideo::addAutoLoadAdPlacementID(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATRewardedAutoVideo_addAutoLoadAdPlacementID_mB337B3A965548CF7D34BDF902BE8EB67856ED7FA (ATRewardedAutoVideo_t186A232BB8A51374EC69B092A3AE1E678BC0DE36* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___placementIDList0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IATRewardedVideoAdClient_t35B9B560532A6BE76B3EBACE8DEC4FD62C4496A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// client.addAutoLoadAdPlacementID(placementIDList);
		RuntimeObject* L_0 = __this->___client_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___placementIDList0;
		NullCheck(L_0);
		InterfaceActionInvoker1< StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* >::Invoke(8 /* System.Void AnyThinkAds.Common.IATRewardedVideoAdClient::addAutoLoadAdPlacementID(System.String[]) */, IATRewardedVideoAdClient_t35B9B560532A6BE76B3EBACE8DEC4FD62C4496A9_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void AnyThinkAds.Api.ATRewardedAutoVideo::removeAutoLoadAdPlacementID(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATRewardedAutoVideo_removeAutoLoadAdPlacementID_mEC63071353AB0C213F2B0F8530A1DEBAE28486C2 (ATRewardedAutoVideo_t186A232BB8A51374EC69B092A3AE1E678BC0DE36* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___placementIDList0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IATRewardedVideoAdClient_t35B9B560532A6BE76B3EBACE8DEC4FD62C4496A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t6C02C11E5758BFDB34AD6A5F41ABBFC7FAB2E598_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DA44B4B2555A4BCF3589D4EC74EB1AB1ACD9912);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral71C17B3684796D88DD17328DF65F347A856EAF31);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// if (placementIDList != null && placementIDList.Length > 0)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___placementIDList0;
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___placementIDList0;
		NullCheck(L_1);
		if (!(((RuntimeArray*)L_1)->max_length))
		{
			goto IL_002b;
		}
	}
	{
		// string placementIDListString = JsonMapper.ToJson(placementIDList);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = ___placementIDList0;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t6C02C11E5758BFDB34AD6A5F41ABBFC7FAB2E598_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = JsonMapper_ToJson_m640303EB0458D6FC503ACB6AFECB29F3EAC84336((RuntimeObject*)L_2, NULL);
		V_0 = L_3;
		// client.removeAutoLoadAdPlacementID(placementIDListString);
		RuntimeObject* L_4 = __this->___client_1;
		String_t* L_5 = V_0;
		NullCheck(L_4);
		InterfaceActionInvoker1< String_t* >::Invoke(9 /* System.Void AnyThinkAds.Common.IATRewardedVideoAdClient::removeAutoLoadAdPlacementID(System.String) */, IATRewardedVideoAdClient_t35B9B560532A6BE76B3EBACE8DEC4FD62C4496A9_il2cpp_TypeInfo_var, L_4, L_5);
		// Debug.Log("removeAutoLoadAdPlacementID, placementIDList === " + placementIDListString);
		String_t* L_6 = V_0;
		String_t* L_7;
		L_7 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral71C17B3684796D88DD17328DF65F347A856EAF31, L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_7, NULL);
		return;
	}

IL_002b:
	{
		// Debug.Log("removeAutoLoadAdPlacementID, placementIDList = null");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral0DA44B4B2555A4BCF3589D4EC74EB1AB1ACD9912, NULL);
		// }
		return;
	}
}
// System.Boolean AnyThinkAds.Api.ATRewardedAutoVideo::autoLoadRewardedVideoReadyForPlacementID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ATRewardedAutoVideo_autoLoadRewardedVideoReadyForPlacementID_m69533C9A3A3414BD3F4E80603F410E717BEECB90 (ATRewardedAutoVideo_t186A232BB8A51374EC69B092A3AE1E678BC0DE36* __this, String_t* ___placementId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IATRewardedVideoAdClient_t35B9B560532A6BE76B3EBACE8DEC4FD62C4496A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return client.autoLoadRewardedVideoReadyForPlacementID(placementId);
		RuntimeObject* L_0 = __this->___client_1;
		String_t* L_1 = ___placementId0;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, String_t* >::Invoke(10 /* System.Boolean AnyThinkAds.Common.IATRewardedVideoAdClient::autoLoadRewardedVideoReadyForPlacementID(System.String) */, IATRewardedVideoAdClient_t35B9B560532A6BE76B3EBACE8DEC4FD62C4496A9_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.String AnyThinkAds.Api.ATRewardedAutoVideo::getAutoValidAdCaches(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ATRewardedAutoVideo_getAutoValidAdCaches_mC6A51560F1A330E53BFD45DA5AED21014861993D (ATRewardedAutoVideo_t186A232BB8A51374EC69B092A3AE1E678BC0DE36* __this, String_t* ___placementId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IATRewardedVideoAdClient_t35B9B560532A6BE76B3EBACE8DEC4FD62C4496A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return client.getAutoValidAdCaches(placementId);
		RuntimeObject* L_0 = __this->___client_1;
		String_t* L_1 = ___placementId0;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(11 /* System.String AnyThinkAds.Common.IATRewardedVideoAdClient::getAutoValidAdCaches(System.String) */, IATRewardedVideoAdClient_t35B9B560532A6BE76B3EBACE8DEC4FD62C4496A9_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.String AnyThinkAds.Api.ATRewardedAutoVideo::checkAutoAdStatus(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ATRewardedAutoVideo_checkAutoAdStatus_m65CD0428BB72E64228197B96E28C353597EA8B78 (ATRewardedAutoVideo_t186A232BB8A51374EC69B092A3AE1E678BC0DE36* __this, String_t* ___placementId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IATRewardedVideoAdClient_t35B9B560532A6BE76B3EBACE8DEC4FD62C4496A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return client.checkAutoAdStatus(placementId);
		RuntimeObject* L_0 = __this->___client_1;
		String_t* L_1 = ___placementId0;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(7 /* System.String AnyThinkAds.Common.IATRewardedVideoAdClient::checkAutoAdStatus(System.String) */, IATRewardedVideoAdClient_t35B9B560532A6BE76B3EBACE8DEC4FD62C4496A9_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Void AnyThinkAds.Api.ATRewardedAutoVideo::setAutoLocalExtra(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATRewardedAutoVideo_setAutoLocalExtra_m60F670E2EECAEFA9E11B4BEF0F7EAAA23B3A83FD (ATRewardedAutoVideo_t186A232BB8A51374EC69B092A3AE1E678BC0DE36* __this, String_t* ___placementId0, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___pairs1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IATRewardedVideoAdClient_t35B9B560532A6BE76B3EBACE8DEC4FD62C4496A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t6C02C11E5758BFDB34AD6A5F41ABBFC7FAB2E598_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// client.setAutoLocalExtra(placementId, JsonMapper.ToJson(pairs));
		RuntimeObject* L_0 = __this->___client_1;
		String_t* L_1 = ___placementId0;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_2 = ___pairs1;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t6C02C11E5758BFDB34AD6A5F41ABBFC7FAB2E598_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = JsonMapper_ToJson_m640303EB0458D6FC503ACB6AFECB29F3EAC84336(L_2, NULL);
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(12 /* System.Void AnyThinkAds.Common.IATRewardedVideoAdClient::setAutoLocalExtra(System.String,System.String) */, IATRewardedVideoAdClient_t35B9B560532A6BE76B3EBACE8DEC4FD62C4496A9_il2cpp_TypeInfo_var, L_0, L_1, L_3);
		// }
		return;
	}
}
// System.Void AnyThinkAds.Api.ATRewardedAutoVideo::entryAutoAdScenarioWithPlacementID(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATRewardedAutoVideo_entryAutoAdScenarioWithPlacementID_m7656633EF91217BBD555A308342A86290DB6641A (ATRewardedAutoVideo_t186A232BB8A51374EC69B092A3AE1E678BC0DE36* __this, String_t* ___placementId0, String_t* ___scenarioID1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IATRewardedVideoAdClient_t35B9B560532A6BE76B3EBACE8DEC4FD62C4496A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// client.entryAutoAdScenarioWithPlacementID(placementId, scenarioID);
		RuntimeObject* L_0 = __this->___client_1;
		String_t* L_1 = ___placementId0;
		String_t* L_2 = ___scenarioID1;
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(13 /* System.Void AnyThinkAds.Common.IATRewardedVideoAdClient::entryAutoAdScenarioWithPlacementID(System.String,System.String) */, IATRewardedVideoAdClient_t35B9B560532A6BE76B3EBACE8DEC4FD62C4496A9_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		// }
		return;
	}
}
// System.Void AnyThinkAds.Api.ATRewardedAutoVideo::showAutoAd(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATRewardedAutoVideo_showAutoAd_m7EEE6C140D7495164B7D1047F48E4E7995EA067B (ATRewardedAutoVideo_t186A232BB8A51374EC69B092A3AE1E678BC0DE36* __this, String_t* ___placementId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IATRewardedVideoAdClient_t35B9B560532A6BE76B3EBACE8DEC4FD62C4496A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t6C02C11E5758BFDB34AD6A5F41ABBFC7FAB2E598_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// client.showAutoAd(placementId, JsonMapper.ToJson(new Dictionary<string, string>()));
		RuntimeObject* L_0 = __this->___client_1;
		String_t* L_1 = ___placementId0;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_2 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_2, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t6C02C11E5758BFDB34AD6A5F41ABBFC7FAB2E598_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = JsonMapper_ToJson_m640303EB0458D6FC503ACB6AFECB29F3EAC84336(L_2, NULL);
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(14 /* System.Void AnyThinkAds.Common.IATRewardedVideoAdClient::showAutoAd(System.String,System.String) */, IATRewardedVideoAdClient_t35B9B560532A6BE76B3EBACE8DEC4FD62C4496A9_il2cpp_TypeInfo_var, L_0, L_1, L_3);
		// }
		return;
	}
}
// System.Void AnyThinkAds.Api.ATRewardedAutoVideo::showAutoAd(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATRewardedAutoVideo_showAutoAd_mB3D0782C6CA4CB38CA63C85551BA0547DDF959FD (ATRewardedAutoVideo_t186A232BB8A51374EC69B092A3AE1E678BC0DE36* __this, String_t* ___placementId0, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___pairs1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IATRewardedVideoAdClient_t35B9B560532A6BE76B3EBACE8DEC4FD62C4496A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t6C02C11E5758BFDB34AD6A5F41ABBFC7FAB2E598_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// client.showAutoAd(placementId, JsonMapper.ToJson(pairs));
		RuntimeObject* L_0 = __this->___client_1;
		String_t* L_1 = ___placementId0;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_2 = ___pairs1;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t6C02C11E5758BFDB34AD6A5F41ABBFC7FAB2E598_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = JsonMapper_ToJson_m640303EB0458D6FC503ACB6AFECB29F3EAC84336(L_2, NULL);
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(14 /* System.Void AnyThinkAds.Common.IATRewardedVideoAdClient::showAutoAd(System.String,System.String) */, IATRewardedVideoAdClient_t35B9B560532A6BE76B3EBACE8DEC4FD62C4496A9_il2cpp_TypeInfo_var, L_0, L_1, L_3);
		// }
		return;
	}
}
// AnyThinkAds.Common.IATRewardedVideoAdClient AnyThinkAds.Api.ATRewardedAutoVideo::GetATRewardedClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ATRewardedAutoVideo_GetATRewardedClient_mDF7F88190674E801D86A79F892FD238E10F07566 (ATRewardedAutoVideo_t186A232BB8A51374EC69B092A3AE1E678BC0DE36* __this, const RuntimeMethod* method) 
{
	{
		// return AnyThinkAds.ATAdsClientFactory.BuildRewardedVideoAdClient();
		RuntimeObject* L_0;
		L_0 = ATAdsClientFactory_BuildRewardedVideoAdClient_m6DE6B8A9057F9081333F5BC2E3A3A2DA18958BBB(NULL);
		return L_0;
	}
}
// System.Void AnyThinkAds.Api.ATRewardedAutoVideo::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATRewardedAutoVideo__cctor_m2016FDB1026E87DF9D79CA53D5CE172A357CAE2B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ATRewardedAutoVideo_t186A232BB8A51374EC69B092A3AE1E678BC0DE36_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ATRewardedAutoVideo instance = new ATRewardedAutoVideo();
		ATRewardedAutoVideo_t186A232BB8A51374EC69B092A3AE1E678BC0DE36* L_0 = (ATRewardedAutoVideo_t186A232BB8A51374EC69B092A3AE1E678BC0DE36*)il2cpp_codegen_object_new(ATRewardedAutoVideo_t186A232BB8A51374EC69B092A3AE1E678BC0DE36_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ATRewardedAutoVideo__ctor_m9777C43E623BB3F67D3A771999635555138DED42(L_0, NULL);
		((ATRewardedAutoVideo_t186A232BB8A51374EC69B092A3AE1E678BC0DE36_StaticFields*)il2cpp_codegen_static_fields_for(ATRewardedAutoVideo_t186A232BB8A51374EC69B092A3AE1E678BC0DE36_il2cpp_TypeInfo_var))->___instance_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ATRewardedAutoVideo_t186A232BB8A51374EC69B092A3AE1E678BC0DE36_StaticFields*)il2cpp_codegen_static_fields_for(ATRewardedAutoVideo_t186A232BB8A51374EC69B092A3AE1E678BC0DE36_il2cpp_TypeInfo_var))->___instance_0), (void*)L_0);
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
// System.Void AnyThinkAds.Api.ATRewardedVideo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATRewardedVideo__ctor_mC1740A24437B415D0FE589D663F3F0874F5CDADD (ATRewardedVideo_tFF1F706884EA5B4FFF4DA6829157F6150DABFB97* __this, const RuntimeMethod* method) 
{
	{
		// private ATRewardedVideo()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// client = GetATRewardedClient();
		RuntimeObject* L_0;
		L_0 = ATRewardedVideo_GetATRewardedClient_m6AD500ECAA75AA0D99E6A59E9B530614EC8FE1D2(__this, NULL);
		__this->___client_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___client_1), (void*)L_0);
		// }
		return;
	}
}
// AnyThinkAds.Api.ATRewardedVideo AnyThinkAds.Api.ATRewardedVideo::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ATRewardedVideo_tFF1F706884EA5B4FFF4DA6829157F6150DABFB97* ATRewardedVideo_get_Instance_m7B2AFA4121B0DC19574B46F728E650FBD75C4BB4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ATRewardedVideo_tFF1F706884EA5B4FFF4DA6829157F6150DABFB97_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return instance;
		il2cpp_codegen_runtime_class_init_inline(ATRewardedVideo_tFF1F706884EA5B4FFF4DA6829157F6150DABFB97_il2cpp_TypeInfo_var);
		ATRewardedVideo_tFF1F706884EA5B4FFF4DA6829157F6150DABFB97* L_0 = ((ATRewardedVideo_tFF1F706884EA5B4FFF4DA6829157F6150DABFB97_StaticFields*)il2cpp_codegen_static_fields_for(ATRewardedVideo_tFF1F706884EA5B4FFF4DA6829157F6150DABFB97_il2cpp_TypeInfo_var))->___instance_0;
		return L_0;
	}
}
// System.Void AnyThinkAds.Api.ATRewardedVideo::loadVideoAd(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATRewardedVideo_loadVideoAd_m7E6F5226094F7DE52F53ABA2D4C0BD51B520C677 (ATRewardedVideo_tFF1F706884EA5B4FFF4DA6829157F6150DABFB97* __this, String_t* ___placementId0, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___pairs1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IATRewardedVideoAdClient_t35B9B560532A6BE76B3EBACE8DEC4FD62C4496A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t6C02C11E5758BFDB34AD6A5F41ABBFC7FAB2E598_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// client.loadVideoAd(placementId, JsonMapper.ToJson(pairs));
		RuntimeObject* L_0 = __this->___client_1;
		String_t* L_1 = ___placementId0;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_2 = ___pairs1;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t6C02C11E5758BFDB34AD6A5F41ABBFC7FAB2E598_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = JsonMapper_ToJson_m640303EB0458D6FC503ACB6AFECB29F3EAC84336(L_2, NULL);
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(0 /* System.Void AnyThinkAds.Common.IATRewardedVideoAdClient::loadVideoAd(System.String,System.String) */, IATRewardedVideoAdClient_t35B9B560532A6BE76B3EBACE8DEC4FD62C4496A9_il2cpp_TypeInfo_var, L_0, L_1, L_3);
		// }
		return;
	}
}
// System.Boolean AnyThinkAds.Api.ATRewardedVideo::hasAdReady(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ATRewardedVideo_hasAdReady_m2D10A6B6D155B132D61E5901EC459A3E74C919A1 (ATRewardedVideo_tFF1F706884EA5B4FFF4DA6829157F6150DABFB97* __this, String_t* ___placementId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IATRewardedVideoAdClient_t35B9B560532A6BE76B3EBACE8DEC4FD62C4496A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return client.hasAdReady(placementId);
		RuntimeObject* L_0 = __this->___client_1;
		String_t* L_1 = ___placementId0;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, String_t* >::Invoke(2 /* System.Boolean AnyThinkAds.Common.IATRewardedVideoAdClient::hasAdReady(System.String) */, IATRewardedVideoAdClient_t35B9B560532A6BE76B3EBACE8DEC4FD62C4496A9_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Void AnyThinkAds.Api.ATRewardedVideo::entryScenarioWithPlacementID(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATRewardedVideo_entryScenarioWithPlacementID_m8612F7AD969FCEF06C33A5D60591F7443D913C35 (ATRewardedVideo_tFF1F706884EA5B4FFF4DA6829157F6150DABFB97* __this, String_t* ___placementId0, String_t* ___scenarioID1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IATRewardedVideoAdClient_t35B9B560532A6BE76B3EBACE8DEC4FD62C4496A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// client.entryScenarioWithPlacementID(placementId,scenarioID);
		RuntimeObject* L_0 = __this->___client_1;
		String_t* L_1 = ___placementId0;
		String_t* L_2 = ___scenarioID1;
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(6 /* System.Void AnyThinkAds.Common.IATRewardedVideoAdClient::entryScenarioWithPlacementID(System.String,System.String) */, IATRewardedVideoAdClient_t35B9B560532A6BE76B3EBACE8DEC4FD62C4496A9_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		// }
		return;
	}
}
// System.String AnyThinkAds.Api.ATRewardedVideo::checkAdStatus(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ATRewardedVideo_checkAdStatus_m4BFCCE95869FC70ADC09E915399EAA853564A3D4 (ATRewardedVideo_tFF1F706884EA5B4FFF4DA6829157F6150DABFB97* __this, String_t* ___placementId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IATRewardedVideoAdClient_t35B9B560532A6BE76B3EBACE8DEC4FD62C4496A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return client.checkAdStatus(placementId);
		RuntimeObject* L_0 = __this->___client_1;
		String_t* L_1 = ___placementId0;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(3 /* System.String AnyThinkAds.Common.IATRewardedVideoAdClient::checkAdStatus(System.String) */, IATRewardedVideoAdClient_t35B9B560532A6BE76B3EBACE8DEC4FD62C4496A9_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.String AnyThinkAds.Api.ATRewardedVideo::getValidAdCaches(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ATRewardedVideo_getValidAdCaches_m411B2D68C294CB1C1BED1BD217B703BE00EFD40A (ATRewardedVideo_tFF1F706884EA5B4FFF4DA6829157F6150DABFB97* __this, String_t* ___placementId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IATRewardedVideoAdClient_t35B9B560532A6BE76B3EBACE8DEC4FD62C4496A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return client.getValidAdCaches(placementId);
		RuntimeObject* L_0 = __this->___client_1;
		String_t* L_1 = ___placementId0;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(5 /* System.String AnyThinkAds.Common.IATRewardedVideoAdClient::getValidAdCaches(System.String) */, IATRewardedVideoAdClient_t35B9B560532A6BE76B3EBACE8DEC4FD62C4496A9_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Void AnyThinkAds.Api.ATRewardedVideo::showAd(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATRewardedVideo_showAd_m8D3F1348AB73304ECAAEBE73E5A220235EDC28F3 (ATRewardedVideo_tFF1F706884EA5B4FFF4DA6829157F6150DABFB97* __this, String_t* ___placementId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IATRewardedVideoAdClient_t35B9B560532A6BE76B3EBACE8DEC4FD62C4496A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t6C02C11E5758BFDB34AD6A5F41ABBFC7FAB2E598_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// client.showAd(placementId, JsonMapper.ToJson(new Dictionary<string, string>()));
		RuntimeObject* L_0 = __this->___client_1;
		String_t* L_1 = ___placementId0;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_2 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_2, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t6C02C11E5758BFDB34AD6A5F41ABBFC7FAB2E598_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = JsonMapper_ToJson_m640303EB0458D6FC503ACB6AFECB29F3EAC84336(L_2, NULL);
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(4 /* System.Void AnyThinkAds.Common.IATRewardedVideoAdClient::showAd(System.String,System.String) */, IATRewardedVideoAdClient_t35B9B560532A6BE76B3EBACE8DEC4FD62C4496A9_il2cpp_TypeInfo_var, L_0, L_1, L_3);
		// }
		return;
	}
}
// System.Void AnyThinkAds.Api.ATRewardedVideo::showAd(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATRewardedVideo_showAd_m4414BADFBF8DFF98D0B0C8C2F8917C088037FEA0 (ATRewardedVideo_tFF1F706884EA5B4FFF4DA6829157F6150DABFB97* __this, String_t* ___placementId0, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___pairs1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IATRewardedVideoAdClient_t35B9B560532A6BE76B3EBACE8DEC4FD62C4496A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t6C02C11E5758BFDB34AD6A5F41ABBFC7FAB2E598_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// client.showAd(placementId, JsonMapper.ToJson(pairs));
		RuntimeObject* L_0 = __this->___client_1;
		String_t* L_1 = ___placementId0;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_2 = ___pairs1;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t6C02C11E5758BFDB34AD6A5F41ABBFC7FAB2E598_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = JsonMapper_ToJson_m640303EB0458D6FC503ACB6AFECB29F3EAC84336(L_2, NULL);
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(4 /* System.Void AnyThinkAds.Common.IATRewardedVideoAdClient::showAd(System.String,System.String) */, IATRewardedVideoAdClient_t35B9B560532A6BE76B3EBACE8DEC4FD62C4496A9_il2cpp_TypeInfo_var, L_0, L_1, L_3);
		// }
		return;
	}
}
// AnyThinkAds.Common.IATRewardedVideoAdClient AnyThinkAds.Api.ATRewardedVideo::GetATRewardedClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ATRewardedVideo_GetATRewardedClient_m6AD500ECAA75AA0D99E6A59E9B530614EC8FE1D2 (ATRewardedVideo_tFF1F706884EA5B4FFF4DA6829157F6150DABFB97* __this, const RuntimeMethod* method) 
{
	{
		// return AnyThinkAds.ATAdsClientFactory.BuildRewardedVideoAdClient();
		RuntimeObject* L_0;
		L_0 = ATAdsClientFactory_BuildRewardedVideoAdClient_m6DE6B8A9057F9081333F5BC2E3A3A2DA18958BBB(NULL);
		return L_0;
	}
}
// System.Void AnyThinkAds.Api.ATRewardedVideo::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATRewardedVideo__cctor_m45D485A48D4B52B98EF72B750DDAC24C9C07E9AD (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ATRewardedVideo_tFF1F706884EA5B4FFF4DA6829157F6150DABFB97_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ATRewardedVideo instance = new ATRewardedVideo();
		ATRewardedVideo_tFF1F706884EA5B4FFF4DA6829157F6150DABFB97* L_0 = (ATRewardedVideo_tFF1F706884EA5B4FFF4DA6829157F6150DABFB97*)il2cpp_codegen_object_new(ATRewardedVideo_tFF1F706884EA5B4FFF4DA6829157F6150DABFB97_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ATRewardedVideo__ctor_mC1740A24437B415D0FE589D663F3F0874F5CDADD(L_0, NULL);
		((ATRewardedVideo_tFF1F706884EA5B4FFF4DA6829157F6150DABFB97_StaticFields*)il2cpp_codegen_static_fields_for(ATRewardedVideo_tFF1F706884EA5B4FFF4DA6829157F6150DABFB97_il2cpp_TypeInfo_var))->___instance_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ATRewardedVideo_tFF1F706884EA5B4FFF4DA6829157F6150DABFB97_StaticFields*)il2cpp_codegen_static_fields_for(ATRewardedVideo_tFF1F706884EA5B4FFF4DA6829157F6150DABFB97_il2cpp_TypeInfo_var))->___instance_0), (void*)L_0);
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
// System.Void AnyThinkAds.Api.ATSDKAPI::initSDK(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATSDKAPI_initSDK_mC6C1934C881DA785B0FE2A85F66F92AFDF85700D (String_t* ___appId0, String_t* ___appKey1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IATSDKAPIClient_tC0FECACCA46F6FA8F6FEF3A5A112BBA10245A01B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// client.initSDK(appId, appKey);
		il2cpp_codegen_runtime_class_init_inline(ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_StaticFields*)il2cpp_codegen_static_fields_for(ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var))->___client_31;
		String_t* L_1 = ___appId0;
		String_t* L_2 = ___appKey1;
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(0 /* System.Void AnyThinkAds.Common.IATSDKAPIClient::initSDK(System.String,System.String) */, IATSDKAPIClient_tC0FECACCA46F6FA8F6FEF3A5A112BBA10245A01B_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		// }
		return;
	}
}
// System.Void AnyThinkAds.Api.ATSDKAPI::initSDK(System.String,System.String,AnyThinkAds.Api.ATSDKInitListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATSDKAPI_initSDK_mBB46ED803FA714695DBE398B46284427921750C9 (String_t* ___appId0, String_t* ___appKey1, RuntimeObject* ___listener2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IATSDKAPIClient_tC0FECACCA46F6FA8F6FEF3A5A112BBA10245A01B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// client.initSDK(appId, appKey, listener);
		il2cpp_codegen_runtime_class_init_inline(ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_StaticFields*)il2cpp_codegen_static_fields_for(ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var))->___client_31;
		String_t* L_1 = ___appId0;
		String_t* L_2 = ___appKey1;
		RuntimeObject* L_3 = ___listener2;
		NullCheck(L_0);
		InterfaceActionInvoker3< String_t*, String_t*, RuntimeObject* >::Invoke(1 /* System.Void AnyThinkAds.Common.IATSDKAPIClient::initSDK(System.String,System.String,AnyThinkAds.Api.ATSDKInitListener) */, IATSDKAPIClient_tC0FECACCA46F6FA8F6FEF3A5A112BBA10245A01B_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3);
		// }
		return;
	}
}
// System.Void AnyThinkAds.Api.ATSDKAPI::setGDPRLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATSDKAPI_setGDPRLevel_mD31E83C9913CAD7026B00CC98541E9CE0F3692C2 (int32_t ___level0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IATSDKAPIClient_tC0FECACCA46F6FA8F6FEF3A5A112BBA10245A01B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// client.setGDPRLevel(level);
		il2cpp_codegen_runtime_class_init_inline(ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_StaticFields*)il2cpp_codegen_static_fields_for(ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var))->___client_31;
		int32_t L_1 = ___level0;
		NullCheck(L_0);
		InterfaceActionInvoker1< int32_t >::Invoke(3 /* System.Void AnyThinkAds.Common.IATSDKAPIClient::setGDPRLevel(System.Int32) */, IATSDKAPIClient_tC0FECACCA46F6FA8F6FEF3A5A112BBA10245A01B_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void AnyThinkAds.Api.ATSDKAPI::getUserLocation(AnyThinkAds.Api.ATGetUserLocationListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATSDKAPI_getUserLocation_m126BC81D65B6DF960CDCFEE7299C4A335AEFA1C1 (RuntimeObject* ___listener0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IATSDKAPIClient_tC0FECACCA46F6FA8F6FEF3A5A112BBA10245A01B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// client.getUserLocation(listener);
		il2cpp_codegen_runtime_class_init_inline(ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_StaticFields*)il2cpp_codegen_static_fields_for(ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var))->___client_31;
		RuntimeObject* L_1 = ___listener0;
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(2 /* System.Void AnyThinkAds.Common.IATSDKAPIClient::getUserLocation(AnyThinkAds.Api.ATGetUserLocationListener) */, IATSDKAPIClient_tC0FECACCA46F6FA8F6FEF3A5A112BBA10245A01B_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Int32 AnyThinkAds.Api.ATSDKAPI::getGDPRLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ATSDKAPI_getGDPRLevel_m46535B3062300B6F1EB432444F77706EF5868B4D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IATSDKAPIClient_tC0FECACCA46F6FA8F6FEF3A5A112BBA10245A01B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return client.getGDPRLevel();
		il2cpp_codegen_runtime_class_init_inline(ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_StaticFields*)il2cpp_codegen_static_fields_for(ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var))->___client_31;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(11 /* System.Int32 AnyThinkAds.Common.IATSDKAPIClient::getGDPRLevel() */, IATSDKAPIClient_tC0FECACCA46F6FA8F6FEF3A5A112BBA10245A01B_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Boolean AnyThinkAds.Api.ATSDKAPI::isEUTraffic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ATSDKAPI_isEUTraffic_m7F75526B3F23FCAD0860748435F6AE2CD3764C99 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IATSDKAPIClient_tC0FECACCA46F6FA8F6FEF3A5A112BBA10245A01B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return client.isEUTraffic();
		il2cpp_codegen_runtime_class_init_inline(ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_StaticFields*)il2cpp_codegen_static_fields_for(ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var))->___client_31;
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(12 /* System.Boolean AnyThinkAds.Common.IATSDKAPIClient::isEUTraffic() */, IATSDKAPIClient_tC0FECACCA46F6FA8F6FEF3A5A112BBA10245A01B_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void AnyThinkAds.Api.ATSDKAPI::setChannel(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATSDKAPI_setChannel_m627CD3E8C90B54EECA6C71D1FDD908C4EAE9A414 (String_t* ___channel0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IATSDKAPIClient_tC0FECACCA46F6FA8F6FEF3A5A112BBA10245A01B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// client.setChannel(channel);
		il2cpp_codegen_runtime_class_init_inline(ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_StaticFields*)il2cpp_codegen_static_fields_for(ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var))->___client_31;
		String_t* L_1 = ___channel0;
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(6 /* System.Void AnyThinkAds.Common.IATSDKAPIClient::setChannel(System.String) */, IATSDKAPIClient_tC0FECACCA46F6FA8F6FEF3A5A112BBA10245A01B_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void AnyThinkAds.Api.ATSDKAPI::setSubChannel(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATSDKAPI_setSubChannel_m49C64A1D68C12E28D2CA74BB6C166C70BAEDC93E (String_t* ___subChannel0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IATSDKAPIClient_tC0FECACCA46F6FA8F6FEF3A5A112BBA10245A01B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// client.setSubChannel(subChannel);
		il2cpp_codegen_runtime_class_init_inline(ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_StaticFields*)il2cpp_codegen_static_fields_for(ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var))->___client_31;
		String_t* L_1 = ___subChannel0;
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(7 /* System.Void AnyThinkAds.Common.IATSDKAPIClient::setSubChannel(System.String) */, IATSDKAPIClient_tC0FECACCA46F6FA8F6FEF3A5A112BBA10245A01B_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void AnyThinkAds.Api.ATSDKAPI::initCustomMap(System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATSDKAPI_initCustomMap_mCA0256359643C990B50DC1BF8A1B9C1657852B68 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___customMap0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IATSDKAPIClient_tC0FECACCA46F6FA8F6FEF3A5A112BBA10245A01B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t6C02C11E5758BFDB34AD6A5F41ABBFC7FAB2E598_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// client.initCustomMap(JsonMapper.ToJson(customMap));
		il2cpp_codegen_runtime_class_init_inline(ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_StaticFields*)il2cpp_codegen_static_fields_for(ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var))->___client_31;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_1 = ___customMap0;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t6C02C11E5758BFDB34AD6A5F41ABBFC7FAB2E598_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = JsonMapper_ToJson_m640303EB0458D6FC503ACB6AFECB29F3EAC84336(L_1, NULL);
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(8 /* System.Void AnyThinkAds.Common.IATSDKAPIClient::initCustomMap(System.String) */, IATSDKAPIClient_tC0FECACCA46F6FA8F6FEF3A5A112BBA10245A01B_il2cpp_TypeInfo_var, L_0, L_2);
		// }
		return;
	}
}
// System.Void AnyThinkAds.Api.ATSDKAPI::setCustomDataForPlacementID(System.Collections.Generic.Dictionary`2<System.String,System.String>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATSDKAPI_setCustomDataForPlacementID_m44CCA5F8AB1E4AF09511FBEE1DA2401ADD1757C5 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___customData0, String_t* ___placementID1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IATSDKAPIClient_tC0FECACCA46F6FA8F6FEF3A5A112BBA10245A01B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t6C02C11E5758BFDB34AD6A5F41ABBFC7FAB2E598_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// client.setCustomDataForPlacementID(JsonMapper.ToJson(customData), placementID);
		il2cpp_codegen_runtime_class_init_inline(ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_StaticFields*)il2cpp_codegen_static_fields_for(ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var))->___client_31;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_1 = ___customData0;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t6C02C11E5758BFDB34AD6A5F41ABBFC7FAB2E598_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = JsonMapper_ToJson_m640303EB0458D6FC503ACB6AFECB29F3EAC84336(L_1, NULL);
		String_t* L_3 = ___placementID1;
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(9 /* System.Void AnyThinkAds.Common.IATSDKAPIClient::setCustomDataForPlacementID(System.String,System.String) */, IATSDKAPIClient_tC0FECACCA46F6FA8F6FEF3A5A112BBA10245A01B_il2cpp_TypeInfo_var, L_0, L_2, L_3);
		// }
		return;
	}
}
// System.Void AnyThinkAds.Api.ATSDKAPI::showGDPRAuth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATSDKAPI_showGDPRAuth_mC6D97AD32A28E6ECEA171F8A8D1974FE7859DC9E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IATSDKAPIClient_tC0FECACCA46F6FA8F6FEF3A5A112BBA10245A01B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// client.showGDPRAuth();
		il2cpp_codegen_runtime_class_init_inline(ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_StaticFields*)il2cpp_codegen_static_fields_for(ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var))->___client_31;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(4 /* System.Void AnyThinkAds.Common.IATSDKAPIClient::showGDPRAuth() */, IATSDKAPIClient_tC0FECACCA46F6FA8F6FEF3A5A112BBA10245A01B_il2cpp_TypeInfo_var, L_0);
		// }
		return;
	}
}
// System.Void AnyThinkAds.Api.ATSDKAPI::setLogDebug(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATSDKAPI_setLogDebug_m4B2FEEA8804FEA048E0E298CEAAA29987F987FE9 (bool ___isDebug0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IATSDKAPIClient_tC0FECACCA46F6FA8F6FEF3A5A112BBA10245A01B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// client.setLogDebug(isDebug);
		il2cpp_codegen_runtime_class_init_inline(ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_StaticFields*)il2cpp_codegen_static_fields_for(ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var))->___client_31;
		bool L_1 = ___isDebug0;
		NullCheck(L_0);
		InterfaceActionInvoker1< bool >::Invoke(10 /* System.Void AnyThinkAds.Common.IATSDKAPIClient::setLogDebug(System.Boolean) */, IATSDKAPIClient_tC0FECACCA46F6FA8F6FEF3A5A112BBA10245A01B_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void AnyThinkAds.Api.ATSDKAPI::addNetworkGDPRInfo(System.Int32,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATSDKAPI_addNetworkGDPRInfo_m9FBD67F927C7DE6A559195342AA2E05EA0F5FD41 (int32_t ___networkType0, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___dictionary1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IATSDKAPIClient_tC0FECACCA46F6FA8F6FEF3A5A112BBA10245A01B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t6C02C11E5758BFDB34AD6A5F41ABBFC7FAB2E598_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// client.addNetworkGDPRInfo(networkType, JsonMapper.ToJson(dictionary));
		il2cpp_codegen_runtime_class_init_inline(ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_StaticFields*)il2cpp_codegen_static_fields_for(ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var))->___client_31;
		int32_t L_1 = ___networkType0;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_2 = ___dictionary1;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t6C02C11E5758BFDB34AD6A5F41ABBFC7FAB2E598_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = JsonMapper_ToJson_m640303EB0458D6FC503ACB6AFECB29F3EAC84336(L_2, NULL);
		NullCheck(L_0);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(5 /* System.Void AnyThinkAds.Common.IATSDKAPIClient::addNetworkGDPRInfo(System.Int32,System.String) */, IATSDKAPIClient_tC0FECACCA46F6FA8F6FEF3A5A112BBA10245A01B_il2cpp_TypeInfo_var, L_0, L_1, L_3);
		// }
		return;
	}
}
// System.Void AnyThinkAds.Api.ATSDKAPI::deniedUploadDeviceInfo(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATSDKAPI_deniedUploadDeviceInfo_m55B4EA3CA58AEE81BBBE927BC63C062A760F8E23 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___deniedInfo0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IATSDKAPIClient_tC0FECACCA46F6FA8F6FEF3A5A112BBA10245A01B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t6C02C11E5758BFDB34AD6A5F41ABBFC7FAB2E598_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral03B000D2C4DAFF596116BD3AC596F41D96CFF5B9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6CC49087803A7B2C8D0F9B2626880FF8EC4FF94C);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// if (deniedInfo != null && deniedInfo.Length > 0)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___deniedInfo0;
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___deniedInfo0;
		NullCheck(L_1);
		if (!(((RuntimeArray*)L_1)->max_length))
		{
			goto IL_002a;
		}
	}
	{
		// string deniedString = JsonMapper.ToJson(deniedInfo);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = ___deniedInfo0;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t6C02C11E5758BFDB34AD6A5F41ABBFC7FAB2E598_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = JsonMapper_ToJson_m640303EB0458D6FC503ACB6AFECB29F3EAC84336((RuntimeObject*)L_2, NULL);
		V_0 = L_3;
		// client.deniedUploadDeviceInfo(deniedString);
		il2cpp_codegen_runtime_class_init_inline(ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var);
		RuntimeObject* L_4 = ((ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_StaticFields*)il2cpp_codegen_static_fields_for(ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var))->___client_31;
		String_t* L_5 = V_0;
		NullCheck(L_4);
		InterfaceActionInvoker1< String_t* >::Invoke(13 /* System.Void AnyThinkAds.Common.IATSDKAPIClient::deniedUploadDeviceInfo(System.String) */, IATSDKAPIClient_tC0FECACCA46F6FA8F6FEF3A5A112BBA10245A01B_il2cpp_TypeInfo_var, L_4, L_5);
		// Debug.Log("deniedUploadDeviceInfo, deniedInfo === " + deniedString);
		String_t* L_6 = V_0;
		String_t* L_7;
		L_7 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral03B000D2C4DAFF596116BD3AC596F41D96CFF5B9, L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_7, NULL);
		return;
	}

IL_002a:
	{
		// Debug.Log("deniedUploadDeviceInfo, deniedInfo = null");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral6CC49087803A7B2C8D0F9B2626880FF8EC4FF94C, NULL);
		// }
		return;
	}
}
// AnyThinkAds.Common.IATSDKAPIClient AnyThinkAds.Api.ATSDKAPI::GetATSDKAPIClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ATSDKAPI_GetATSDKAPIClient_mC07322C0D667CF517304DF23CEFE5DB4B9A56FD9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9042595A1005F3694F667150D68011E6E1B221D7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("GetATSDKAPIClient");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral9042595A1005F3694F667150D68011E6E1B221D7, NULL);
		// return AnyThinkAds.ATAdsClientFactory.BuildSDKAPIClient();
		RuntimeObject* L_0;
		L_0 = ATAdsClientFactory_BuildSDKAPIClient_m5E785FB8DD24EE905E3350F0BBFBEC9BAA5F3863(NULL);
		return L_0;
	}
}
// System.Void AnyThinkAds.Api.ATSDKAPI::setExcludeBundleIdArray(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATSDKAPI_setExcludeBundleIdArray_m9449CB1F3A647B2B917E9751341CC6D67E86F5A7 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___bundleIds0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IATSDKAPIClient_tC0FECACCA46F6FA8F6FEF3A5A112BBA10245A01B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t6C02C11E5758BFDB34AD6A5F41ABBFC7FAB2E598_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral90777CC080B8210DFA568244B6C673ACA06D9BFF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5AEAC59DFAF8098FFEBA846B955A932F758E831);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// if (bundleIds != null && bundleIds.Length > 0)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___bundleIds0;
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___bundleIds0;
		NullCheck(L_1);
		if (!(((RuntimeArray*)L_1)->max_length))
		{
			goto IL_002a;
		}
	}
	{
		// string bundleIdsString = JsonMapper.ToJson(bundleIds);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = ___bundleIds0;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t6C02C11E5758BFDB34AD6A5F41ABBFC7FAB2E598_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = JsonMapper_ToJson_m640303EB0458D6FC503ACB6AFECB29F3EAC84336((RuntimeObject*)L_2, NULL);
		V_0 = L_3;
		// Debug.Log("setExcludeBundleIdArray, bundleIdsString === " + bundleIdsString);
		String_t* L_4 = V_0;
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralC5AEAC59DFAF8098FFEBA846B955A932F758E831, L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_5, NULL);
		// client.setExcludeBundleIdArray(bundleIdsString);
		il2cpp_codegen_runtime_class_init_inline(ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var);
		RuntimeObject* L_6 = ((ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_StaticFields*)il2cpp_codegen_static_fields_for(ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var))->___client_31;
		String_t* L_7 = V_0;
		NullCheck(L_6);
		InterfaceActionInvoker1< String_t* >::Invoke(14 /* System.Void AnyThinkAds.Common.IATSDKAPIClient::setExcludeBundleIdArray(System.String) */, IATSDKAPIClient_tC0FECACCA46F6FA8F6FEF3A5A112BBA10245A01B_il2cpp_TypeInfo_var, L_6, L_7);
		return;
	}

IL_002a:
	{
		// Debug.Log("setExcludeBundleIdArray, bundleIdsString = null");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral90777CC080B8210DFA568244B6C673ACA06D9BFF, NULL);
		// }
		return;
	}
}
// System.Void AnyThinkAds.Api.ATSDKAPI::setExcludeAdSourceIdArrayForPlacementID(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATSDKAPI_setExcludeAdSourceIdArrayForPlacementID_mEFA44CB389A03788DF08D04E3145BB58DB5AE972 (String_t* ___placementID0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___adSourceIds1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IATSDKAPIClient_tC0FECACCA46F6FA8F6FEF3A5A112BBA10245A01B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t6C02C11E5758BFDB34AD6A5F41ABBFC7FAB2E598_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral171032605001E1912A8A0600431BF07A1726537F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D1EFCF52A4E0FA49E30A3DE65058928ACB5EF13);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// if (adSourceIds != null && adSourceIds.Length > 0)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___adSourceIds1;
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___adSourceIds1;
		NullCheck(L_1);
		if (!(((RuntimeArray*)L_1)->max_length))
		{
			goto IL_002b;
		}
	}
	{
		// string adSourceIdsString = JsonMapper.ToJson(adSourceIds);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = ___adSourceIds1;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t6C02C11E5758BFDB34AD6A5F41ABBFC7FAB2E598_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = JsonMapper_ToJson_m640303EB0458D6FC503ACB6AFECB29F3EAC84336((RuntimeObject*)L_2, NULL);
		V_0 = L_3;
		// Debug.Log("setExcludeAdSourceIdArrayForPlacementID, adSourceIdsString === " + adSourceIdsString);
		String_t* L_4 = V_0;
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral1D1EFCF52A4E0FA49E30A3DE65058928ACB5EF13, L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_5, NULL);
		// client.setExcludeAdSourceIdArrayForPlacementID(placementID, adSourceIdsString);
		il2cpp_codegen_runtime_class_init_inline(ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var);
		RuntimeObject* L_6 = ((ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_StaticFields*)il2cpp_codegen_static_fields_for(ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var))->___client_31;
		String_t* L_7 = ___placementID0;
		String_t* L_8 = V_0;
		NullCheck(L_6);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(15 /* System.Void AnyThinkAds.Common.IATSDKAPIClient::setExcludeAdSourceIdArrayForPlacementID(System.String,System.String) */, IATSDKAPIClient_tC0FECACCA46F6FA8F6FEF3A5A112BBA10245A01B_il2cpp_TypeInfo_var, L_6, L_7, L_8);
		return;
	}

IL_002b:
	{
		// Debug.Log("setExcludeAdSourceIdArrayForPlacementID, adSourceIdsString = null");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral171032605001E1912A8A0600431BF07A1726537F, NULL);
		// }
		return;
	}
}
// System.Void AnyThinkAds.Api.ATSDKAPI::setSDKArea(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATSDKAPI_setSDKArea_mDC4BFB3B88E905AF591A393167C3E4AC5D056166 (int32_t ___area0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IATSDKAPIClient_tC0FECACCA46F6FA8F6FEF3A5A112BBA10245A01B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// client.setSDKArea(area);
		il2cpp_codegen_runtime_class_init_inline(ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_StaticFields*)il2cpp_codegen_static_fields_for(ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var))->___client_31;
		int32_t L_1 = ___area0;
		NullCheck(L_0);
		InterfaceActionInvoker1< int32_t >::Invoke(16 /* System.Void AnyThinkAds.Common.IATSDKAPIClient::setSDKArea(System.Int32) */, IATSDKAPIClient_tC0FECACCA46F6FA8F6FEF3A5A112BBA10245A01B_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void AnyThinkAds.Api.ATSDKAPI::getArea(AnyThinkAds.Api.ATGetAreaListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATSDKAPI_getArea_m09DFF923A58F015CD534C61B269320C3EFBB5E89 (RuntimeObject* ___listener0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IATSDKAPIClient_tC0FECACCA46F6FA8F6FEF3A5A112BBA10245A01B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// client.getArea(listener);
		il2cpp_codegen_runtime_class_init_inline(ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_StaticFields*)il2cpp_codegen_static_fields_for(ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var))->___client_31;
		RuntimeObject* L_1 = ___listener0;
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(17 /* System.Void AnyThinkAds.Common.IATSDKAPIClient::getArea(AnyThinkAds.Api.ATGetAreaListener) */, IATSDKAPIClient_tC0FECACCA46F6FA8F6FEF3A5A112BBA10245A01B_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void AnyThinkAds.Api.ATSDKAPI::setWXStatus(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATSDKAPI_setWXStatus_m6762BDD83EAAEF3D762902BC1E804BD0B6ABC494 (bool ___install0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IATSDKAPIClient_tC0FECACCA46F6FA8F6FEF3A5A112BBA10245A01B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// client.setWXStatus(install);
		il2cpp_codegen_runtime_class_init_inline(ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_StaticFields*)il2cpp_codegen_static_fields_for(ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var))->___client_31;
		bool L_1 = ___install0;
		NullCheck(L_0);
		InterfaceActionInvoker1< bool >::Invoke(18 /* System.Void AnyThinkAds.Common.IATSDKAPIClient::setWXStatus(System.Boolean) */, IATSDKAPIClient_tC0FECACCA46F6FA8F6FEF3A5A112BBA10245A01B_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void AnyThinkAds.Api.ATSDKAPI::setLocation(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATSDKAPI_setLocation_mBA2FBDCA15C3DFAB6927BAF93DBB083EA8C768F0 (double ___longitude0, double ___latitude1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IATSDKAPIClient_tC0FECACCA46F6FA8F6FEF3A5A112BBA10245A01B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// client.setLocation(longitude, latitude);
		il2cpp_codegen_runtime_class_init_inline(ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_StaticFields*)il2cpp_codegen_static_fields_for(ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var))->___client_31;
		double L_1 = ___longitude0;
		double L_2 = ___latitude1;
		NullCheck(L_0);
		InterfaceActionInvoker2< double, double >::Invoke(19 /* System.Void AnyThinkAds.Common.IATSDKAPIClient::setLocation(System.Double,System.Double) */, IATSDKAPIClient_tC0FECACCA46F6FA8F6FEF3A5A112BBA10245A01B_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		// }
		return;
	}
}
// System.Void AnyThinkAds.Api.ATSDKAPI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATSDKAPI__ctor_m57CBB46BD9926BDDBB612BD8B34D8EEE069D63A5 (ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void AnyThinkAds.Api.ATSDKAPI::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATSDKAPI__cctor_m1120A5262C6CE40D946F2C8043916990579AB105 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16AE29D4982527C4C7A6AF3EB4314E66EAD38294);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral170AD99AD2A9FB6605C713D5E03E562C7D968B69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1745ECCF09CB581FB30F96360D0D0E8B3E0AD134);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral19A4DD21BBFD4F7063C65CBD5B8DEB0688B58B10);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2512497A38103E878C0A6145651B419DEE131154);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral25705477E232DDE539315FA572A0CE775D407106);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2FCC894C8E31955BBEE1DA8D542825C6EFA4CC19);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral33F6758AC1777DAA0016096F040CBC13B8AB090F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral486C5E022B623208CEC796B9BCD2F72E31E8A072);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral778F4B6769BD76BEA1B6F935EF09DAE5B686E017);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DD4F702FB1B016670C03544EB428F980A55531C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8769D5429AA71436D34F062199813C43C7D11E01);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA56563187CE402C2D214D1D438FAEFE383069121);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA582AFCA1811C5E0A07C5B63E7A046DFA7087D1A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5B0B11BB35DDF1357AB0D80F47D1B74FAA4E9A8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBFB810260B3D8BC7FC286E1DFC7D03ED191A782B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB95AC6F5DAF4F3EB9438A7F55847FF126519704);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCC1F7052057A1EC518E41F548AA4C5A4BA47C59D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE652D195EED39893D696733B289E29130B7D0A52);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF18D9351ADB98D1E281ABDAE06CD78D7EA630828);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF455F86FAE600437E02E61A410A984183EB8EC54);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA590547E6EFCCA8DA15CB0A84030B57AFDE8FA4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFCEC1331B0ED56283A557BB3EE79406A80D474CC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly int kATUserLocationUnknown = 0;
		((ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_StaticFields*)il2cpp_codegen_static_fields_for(ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var))->___kATUserLocationUnknown_0 = 0;
		// public static readonly int kATUserLocationInEU = 1;
		((ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_StaticFields*)il2cpp_codegen_static_fields_for(ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var))->___kATUserLocationInEU_1 = 1;
		// public static readonly int kATUserLocationOutOfEU = 2;
		((ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_StaticFields*)il2cpp_codegen_static_fields_for(ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var))->___kATUserLocationOutOfEU_2 = 2;
		// public static readonly int PERSONALIZED = 0;
		((ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_StaticFields*)il2cpp_codegen_static_fields_for(ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var))->___PERSONALIZED_3 = 0;
		// public static readonly int NONPERSONALIZED = 1;
		((ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_StaticFields*)il2cpp_codegen_static_fields_for(ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var))->___NONPERSONALIZED_4 = 1;
		// public static readonly int UNKNOWN = 2;
		((ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_StaticFields*)il2cpp_codegen_static_fields_for(ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var))->___UNKNOWN_5 = 2;
		// public static readonly int AREA_GLOBAL = 0;
		((ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_StaticFields*)il2cpp_codegen_static_fields_for(ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var))->___AREA_GLOBAL_6 = 0;
		// public static readonly int AREA_CHINESE_MAINLAND = 1;
		((ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_StaticFields*)il2cpp_codegen_static_fields_for(ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var))->___AREA_CHINESE_MAINLAND_7 = 1;
		// public static readonly string OS_VERSION_NAME = "os_vn";
		((ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_StaticFields*)il2cpp_codegen_static_fields_for(ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var))->___OS_VERSION_NAME_8 = _stringLiteralA5B0B11BB35DDF1357AB0D80F47D1B74FAA4E9A8;
		Il2CppCodeGenWriteBarrier((void**)(&((ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_StaticFields*)il2cpp_codegen_static_fields_for(ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var))->___OS_VERSION_NAME_8), (void*)_stringLiteralA5B0B11BB35DDF1357AB0D80F47D1B74FAA4E9A8);
		// public static readonly string OS_VERSION_CODE = "os_vc";
		((ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_StaticFields*)il2cpp_codegen_static_fields_for(ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var))->___OS_VERSION_CODE_9 = _stringLiteralBFB810260B3D8BC7FC286E1DFC7D03ED191A782B;
		Il2CppCodeGenWriteBarrier((void**)(&((ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_StaticFields*)il2cpp_codegen_static_fields_for(ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var))->___OS_VERSION_CODE_9), (void*)_stringLiteralBFB810260B3D8BC7FC286E1DFC7D03ED191A782B);
		// public static readonly string APP_PACKAGE_NAME = "package_name";
		((ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_StaticFields*)il2cpp_codegen_static_fields_for(ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var))->___APP_PACKAGE_NAME_10 = _stringLiteralA56563187CE402C2D214D1D438FAEFE383069121;
		Il2CppCodeGenWriteBarrier((void**)(&((ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_StaticFields*)il2cpp_codegen_static_fields_for(ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var))->___APP_PACKAGE_NAME_10), (void*)_stringLiteralA56563187CE402C2D214D1D438FAEFE383069121);
		// public static readonly string APP_VERSION_NAME = "app_vn";
		((ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_StaticFields*)il2cpp_codegen_static_fields_for(ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var))->___APP_VERSION_NAME_11 = _stringLiteral16AE29D4982527C4C7A6AF3EB4314E66EAD38294;
		Il2CppCodeGenWriteBarrier((void**)(&((ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_StaticFields*)il2cpp_codegen_static_fields_for(ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var))->___APP_VERSION_NAME_11), (void*)_stringLiteral16AE29D4982527C4C7A6AF3EB4314E66EAD38294);
		// public static readonly string APP_VERSION_CODE = "app_vc";
		((ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_StaticFields*)il2cpp_codegen_static_fields_for(ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var))->___APP_VERSION_CODE_12 = _stringLiteralA582AFCA1811C5E0A07C5B63E7A046DFA7087D1A;
		Il2CppCodeGenWriteBarrier((void**)(&((ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_StaticFields*)il2cpp_codegen_static_fields_for(ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var))->___APP_VERSION_CODE_12), (void*)_stringLiteralA582AFCA1811C5E0A07C5B63E7A046DFA7087D1A);
		// public static readonly string BRAND = "brand";
		((ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_StaticFields*)il2cpp_codegen_static_fields_for(ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var))->___BRAND_13 = _stringLiteral2FCC894C8E31955BBEE1DA8D542825C6EFA4CC19;
		Il2CppCodeGenWriteBarrier((void**)(&((ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_StaticFields*)il2cpp_codegen_static_fields_for(ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var))->___BRAND_13), (void*)_stringLiteral2FCC894C8E31955BBEE1DA8D542825C6EFA4CC19);
		// public static readonly string MODEL = "model";
		((ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_StaticFields*)il2cpp_codegen_static_fields_for(ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var))->___MODEL_14 = _stringLiteralCB95AC6F5DAF4F3EB9438A7F55847FF126519704;
		Il2CppCodeGenWriteBarrier((void**)(&((ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_StaticFields*)il2cpp_codegen_static_fields_for(ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var))->___MODEL_14), (void*)_stringLiteralCB95AC6F5DAF4F3EB9438A7F55847FF126519704);
		// public static readonly string DEVICE_SCREEN_SIZE = "screen";
		((ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_StaticFields*)il2cpp_codegen_static_fields_for(ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var))->___DEVICE_SCREEN_SIZE_15 = _stringLiteral33F6758AC1777DAA0016096F040CBC13B8AB090F;
		Il2CppCodeGenWriteBarrier((void**)(&((ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_StaticFields*)il2cpp_codegen_static_fields_for(ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var))->___DEVICE_SCREEN_SIZE_15), (void*)_stringLiteral33F6758AC1777DAA0016096F040CBC13B8AB090F);
		// public static readonly string MNC = "mnc";
		((ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_StaticFields*)il2cpp_codegen_static_fields_for(ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var))->___MNC_16 = _stringLiteral1745ECCF09CB581FB30F96360D0D0E8B3E0AD134;
		Il2CppCodeGenWriteBarrier((void**)(&((ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_StaticFields*)il2cpp_codegen_static_fields_for(ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var))->___MNC_16), (void*)_stringLiteral1745ECCF09CB581FB30F96360D0D0E8B3E0AD134);
		// public static readonly string MCC = "mcc";
		((ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_StaticFields*)il2cpp_codegen_static_fields_for(ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var))->___MCC_17 = _stringLiteralFCEC1331B0ED56283A557BB3EE79406A80D474CC;
		Il2CppCodeGenWriteBarrier((void**)(&((ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_StaticFields*)il2cpp_codegen_static_fields_for(ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var))->___MCC_17), (void*)_stringLiteralFCEC1331B0ED56283A557BB3EE79406A80D474CC);
		// public static readonly string LANGUAGE = "language";
		((ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_StaticFields*)il2cpp_codegen_static_fields_for(ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var))->___LANGUAGE_18 = _stringLiteralCC1F7052057A1EC518E41F548AA4C5A4BA47C59D;
		Il2CppCodeGenWriteBarrier((void**)(&((ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_StaticFields*)il2cpp_codegen_static_fields_for(ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var))->___LANGUAGE_18), (void*)_stringLiteralCC1F7052057A1EC518E41F548AA4C5A4BA47C59D);
		// public static readonly string TIMEZONE = "timezone";
		((ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_StaticFields*)il2cpp_codegen_static_fields_for(ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var))->___TIMEZONE_19 = _stringLiteralF18D9351ADB98D1E281ABDAE06CD78D7EA630828;
		Il2CppCodeGenWriteBarrier((void**)(&((ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_StaticFields*)il2cpp_codegen_static_fields_for(ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var))->___TIMEZONE_19), (void*)_stringLiteralF18D9351ADB98D1E281ABDAE06CD78D7EA630828);
		// public static readonly string USER_AGENT = "ua";
		((ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_StaticFields*)il2cpp_codegen_static_fields_for(ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var))->___USER_AGENT_20 = _stringLiteral19A4DD21BBFD4F7063C65CBD5B8DEB0688B58B10;
		Il2CppCodeGenWriteBarrier((void**)(&((ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_StaticFields*)il2cpp_codegen_static_fields_for(ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var))->___USER_AGENT_20), (void*)_stringLiteral19A4DD21BBFD4F7063C65CBD5B8DEB0688B58B10);
		// public static readonly string ORIENTATION = "orient";
		((ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_StaticFields*)il2cpp_codegen_static_fields_for(ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var))->___ORIENTATION_21 = _stringLiteral8769D5429AA71436D34F062199813C43C7D11E01;
		Il2CppCodeGenWriteBarrier((void**)(&((ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_StaticFields*)il2cpp_codegen_static_fields_for(ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var))->___ORIENTATION_21), (void*)_stringLiteral8769D5429AA71436D34F062199813C43C7D11E01);
		// public static readonly string NETWORK_TYPE = "network_type";
		((ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_StaticFields*)il2cpp_codegen_static_fields_for(ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var))->___NETWORK_TYPE_22 = _stringLiteral25705477E232DDE539315FA572A0CE775D407106;
		Il2CppCodeGenWriteBarrier((void**)(&((ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_StaticFields*)il2cpp_codegen_static_fields_for(ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var))->___NETWORK_TYPE_22), (void*)_stringLiteral25705477E232DDE539315FA572A0CE775D407106);
		// public static readonly string INSTALLER = "it_src";
		((ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_StaticFields*)il2cpp_codegen_static_fields_for(ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var))->___INSTALLER_23 = _stringLiteralFA590547E6EFCCA8DA15CB0A84030B57AFDE8FA4;
		Il2CppCodeGenWriteBarrier((void**)(&((ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_StaticFields*)il2cpp_codegen_static_fields_for(ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var))->___INSTALLER_23), (void*)_stringLiteralFA590547E6EFCCA8DA15CB0A84030B57AFDE8FA4);
		// public static readonly string ANDROID_ID = "android_id";
		((ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_StaticFields*)il2cpp_codegen_static_fields_for(ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var))->___ANDROID_ID_24 = _stringLiteral7DD4F702FB1B016670C03544EB428F980A55531C;
		Il2CppCodeGenWriteBarrier((void**)(&((ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_StaticFields*)il2cpp_codegen_static_fields_for(ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var))->___ANDROID_ID_24), (void*)_stringLiteral7DD4F702FB1B016670C03544EB428F980A55531C);
		// public static readonly string GAID = "gaid";
		((ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_StaticFields*)il2cpp_codegen_static_fields_for(ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var))->___GAID_25 = _stringLiteral2512497A38103E878C0A6145651B419DEE131154;
		Il2CppCodeGenWriteBarrier((void**)(&((ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_StaticFields*)il2cpp_codegen_static_fields_for(ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var))->___GAID_25), (void*)_stringLiteral2512497A38103E878C0A6145651B419DEE131154);
		// public static readonly string MAC = "mac";
		((ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_StaticFields*)il2cpp_codegen_static_fields_for(ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var))->___MAC_26 = _stringLiteral778F4B6769BD76BEA1B6F935EF09DAE5B686E017;
		Il2CppCodeGenWriteBarrier((void**)(&((ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_StaticFields*)il2cpp_codegen_static_fields_for(ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var))->___MAC_26), (void*)_stringLiteral778F4B6769BD76BEA1B6F935EF09DAE5B686E017);
		// public static readonly string IMEI = "imei";
		((ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_StaticFields*)il2cpp_codegen_static_fields_for(ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var))->___IMEI_27 = _stringLiteralF455F86FAE600437E02E61A410A984183EB8EC54;
		Il2CppCodeGenWriteBarrier((void**)(&((ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_StaticFields*)il2cpp_codegen_static_fields_for(ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var))->___IMEI_27), (void*)_stringLiteralF455F86FAE600437E02E61A410A984183EB8EC54);
		// public static readonly string OAID = "oaid";
		((ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_StaticFields*)il2cpp_codegen_static_fields_for(ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var))->___OAID_28 = _stringLiteralE652D195EED39893D696733B289E29130B7D0A52;
		Il2CppCodeGenWriteBarrier((void**)(&((ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_StaticFields*)il2cpp_codegen_static_fields_for(ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var))->___OAID_28), (void*)_stringLiteralE652D195EED39893D696733B289E29130B7D0A52);
		// public static readonly string IDFA = "idfa";
		((ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_StaticFields*)il2cpp_codegen_static_fields_for(ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var))->___IDFA_29 = _stringLiteral486C5E022B623208CEC796B9BCD2F72E31E8A072;
		Il2CppCodeGenWriteBarrier((void**)(&((ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_StaticFields*)il2cpp_codegen_static_fields_for(ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var))->___IDFA_29), (void*)_stringLiteral486C5E022B623208CEC796B9BCD2F72E31E8A072);
		// public static readonly string IDFV = "idfv";
		((ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_StaticFields*)il2cpp_codegen_static_fields_for(ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var))->___IDFV_30 = _stringLiteral170AD99AD2A9FB6605C713D5E03E562C7D968B69;
		Il2CppCodeGenWriteBarrier((void**)(&((ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_StaticFields*)il2cpp_codegen_static_fields_for(ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var))->___IDFV_30), (void*)_stringLiteral170AD99AD2A9FB6605C713D5E03E562C7D968B69);
		// private static readonly IATSDKAPIClient client = GetATSDKAPIClient();
		RuntimeObject* L_0;
		L_0 = ATSDKAPI_GetATSDKAPIClient_mC07322C0D667CF517304DF23CEFE5DB4B9A56FD9(NULL);
		((ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_StaticFields*)il2cpp_codegen_static_fields_for(ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var))->___client_31 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_StaticFields*)il2cpp_codegen_static_fields_for(ATSDKAPI_t4CE0C8E765865404AA542212BE9927D72159C7C6_il2cpp_TypeInfo_var))->___client_31), (void*)L_0);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
