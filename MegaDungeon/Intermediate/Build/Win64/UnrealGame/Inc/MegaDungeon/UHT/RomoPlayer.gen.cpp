// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MegaDungeon/Public/RomoPlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRomoPlayer() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	MEGADUNGEON_API UClass* Z_Construct_UClass_ARomoPlayer();
	MEGADUNGEON_API UClass* Z_Construct_UClass_ARomoPlayer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MegaDungeon();
// End Cross Module References
	void ARomoPlayer::StaticRegisterNativesARomoPlayer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARomoPlayer);
	UClass* Z_Construct_UClass_ARomoPlayer_NoRegister()
	{
		return ARomoPlayer::StaticClass();
	}
	struct Z_Construct_UClass_ARomoPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARomoPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_MegaDungeon,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARomoPlayer_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARomoPlayer_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "RomoPlayer.h" },
		{ "ModuleRelativePath", "Public/RomoPlayer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARomoPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARomoPlayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARomoPlayer_Statics::ClassParams = {
		&ARomoPlayer::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARomoPlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_ARomoPlayer_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ARomoPlayer()
	{
		if (!Z_Registration_Info_UClass_ARomoPlayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARomoPlayer.OuterSingleton, Z_Construct_UClass_ARomoPlayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARomoPlayer.OuterSingleton;
	}
	template<> MEGADUNGEON_API UClass* StaticClass<ARomoPlayer>()
	{
		return ARomoPlayer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARomoPlayer);
	ARomoPlayer::~ARomoPlayer() {}
	struct Z_CompiledInDeferFile_FID_Users_black_Documents_UNIAT_6_Semestre_TallerVideojuegosII_Taller2P1_MegaDungeon_Source_MegaDungeon_Public_RomoPlayer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_black_Documents_UNIAT_6_Semestre_TallerVideojuegosII_Taller2P1_MegaDungeon_Source_MegaDungeon_Public_RomoPlayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARomoPlayer, ARomoPlayer::StaticClass, TEXT("ARomoPlayer"), &Z_Registration_Info_UClass_ARomoPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARomoPlayer), 3118783485U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_black_Documents_UNIAT_6_Semestre_TallerVideojuegosII_Taller2P1_MegaDungeon_Source_MegaDungeon_Public_RomoPlayer_h_447770667(TEXT("/Script/MegaDungeon"),
		Z_CompiledInDeferFile_FID_Users_black_Documents_UNIAT_6_Semestre_TallerVideojuegosII_Taller2P1_MegaDungeon_Source_MegaDungeon_Public_RomoPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_black_Documents_UNIAT_6_Semestre_TallerVideojuegosII_Taller2P1_MegaDungeon_Source_MegaDungeon_Public_RomoPlayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
