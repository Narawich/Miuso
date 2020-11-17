// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RhythmGamePlugin/Public/SongReader.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSongReader() {}
// Cross Module References
	RHYTHMGAMEPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FLaneData();
	UPackage* Z_Construct_UPackage__Script_RhythmGamePlugin();
	RHYTHMGAMEPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FContinuousBeat();
	RHYTHMGAMEPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSongData();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequence_NoRegister();
	RHYTHMGAMEPLUGIN_API UClass* Z_Construct_UClass_ASongReader_NoRegister();
	RHYTHMGAMEPLUGIN_API UClass* Z_Construct_UClass_ASongReader();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
// End Cross Module References
class UScriptStruct* FLaneData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern RHYTHMGAMEPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FLaneData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLaneData, Z_Construct_UPackage__Script_RhythmGamePlugin(), TEXT("LaneData"), sizeof(FLaneData), Get_Z_Construct_UScriptStruct_FLaneData_Hash());
	}
	return Singleton;
}
template<> RHYTHMGAMEPLUGIN_API UScriptStruct* StaticStruct<FLaneData>()
{
	return FLaneData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLaneData(FLaneData::StaticStruct, TEXT("/Script/RhythmGamePlugin"), TEXT("LaneData"), false, nullptr, nullptr);
static struct FScriptStruct_RhythmGamePlugin_StaticRegisterNativesFLaneData
{
	FScriptStruct_RhythmGamePlugin_StaticRegisterNativesFLaneData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LaneData")),new UScriptStruct::TCppStructOps<FLaneData>);
	}
} ScriptStruct_RhythmGamePlugin_StaticRegisterNativesFLaneData;
	struct Z_Construct_UScriptStruct_FLaneData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_listOfContinuousBeats_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_listOfContinuousBeats;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_listOfContinuousBeats_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_listOfSingleBeats_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_listOfSingleBeats;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_listOfSingleBeats_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLaneData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SongReader.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLaneData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLaneData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLaneData_Statics::NewProp_listOfContinuousBeats_MetaData[] = {
		{ "Category", "LaneData" },
		{ "ModuleRelativePath", "Public/SongReader.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLaneData_Statics::NewProp_listOfContinuousBeats = { "listOfContinuousBeats", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLaneData, listOfContinuousBeats), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLaneData_Statics::NewProp_listOfContinuousBeats_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLaneData_Statics::NewProp_listOfContinuousBeats_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLaneData_Statics::NewProp_listOfContinuousBeats_Inner = { "listOfContinuousBeats", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FContinuousBeat, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLaneData_Statics::NewProp_listOfSingleBeats_MetaData[] = {
		{ "Category", "LaneData" },
		{ "ModuleRelativePath", "Public/SongReader.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLaneData_Statics::NewProp_listOfSingleBeats = { "listOfSingleBeats", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLaneData, listOfSingleBeats), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLaneData_Statics::NewProp_listOfSingleBeats_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLaneData_Statics::NewProp_listOfSingleBeats_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLaneData_Statics::NewProp_listOfSingleBeats_Inner = { "listOfSingleBeats", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLaneData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLaneData_Statics::NewProp_listOfContinuousBeats,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLaneData_Statics::NewProp_listOfContinuousBeats_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLaneData_Statics::NewProp_listOfSingleBeats,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLaneData_Statics::NewProp_listOfSingleBeats_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLaneData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RhythmGamePlugin,
		nullptr,
		&NewStructOps,
		"LaneData",
		sizeof(FLaneData),
		alignof(FLaneData),
		Z_Construct_UScriptStruct_FLaneData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLaneData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLaneData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLaneData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLaneData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLaneData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_RhythmGamePlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LaneData"), sizeof(FLaneData), Get_Z_Construct_UScriptStruct_FLaneData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLaneData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLaneData_Hash() { return 1667994029U; }
class UScriptStruct* FContinuousBeat::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern RHYTHMGAMEPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FContinuousBeat_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FContinuousBeat, Z_Construct_UPackage__Script_RhythmGamePlugin(), TEXT("ContinuousBeat"), sizeof(FContinuousBeat), Get_Z_Construct_UScriptStruct_FContinuousBeat_Hash());
	}
	return Singleton;
}
template<> RHYTHMGAMEPLUGIN_API UScriptStruct* StaticStruct<FContinuousBeat>()
{
	return FContinuousBeat::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FContinuousBeat(FContinuousBeat::StaticStruct, TEXT("/Script/RhythmGamePlugin"), TEXT("ContinuousBeat"), false, nullptr, nullptr);
static struct FScriptStruct_RhythmGamePlugin_StaticRegisterNativesFContinuousBeat
{
	FScriptStruct_RhythmGamePlugin_StaticRegisterNativesFContinuousBeat()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ContinuousBeat")),new UScriptStruct::TCppStructOps<FContinuousBeat>);
	}
} ScriptStruct_RhythmGamePlugin_StaticRegisterNativesFContinuousBeat;
	struct Z_Construct_UScriptStruct_FContinuousBeat_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_endTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_endTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_startTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_startTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContinuousBeat_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SongReader.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FContinuousBeat_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FContinuousBeat>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContinuousBeat_Statics::NewProp_endTime_MetaData[] = {
		{ "Category", "ContinuousBeat" },
		{ "ModuleRelativePath", "Public/SongReader.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FContinuousBeat_Statics::NewProp_endTime = { "endTime", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FContinuousBeat, endTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FContinuousBeat_Statics::NewProp_endTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContinuousBeat_Statics::NewProp_endTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContinuousBeat_Statics::NewProp_startTime_MetaData[] = {
		{ "Category", "ContinuousBeat" },
		{ "ModuleRelativePath", "Public/SongReader.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FContinuousBeat_Statics::NewProp_startTime = { "startTime", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FContinuousBeat, startTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FContinuousBeat_Statics::NewProp_startTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContinuousBeat_Statics::NewProp_startTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FContinuousBeat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContinuousBeat_Statics::NewProp_endTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContinuousBeat_Statics::NewProp_startTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FContinuousBeat_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RhythmGamePlugin,
		nullptr,
		&NewStructOps,
		"ContinuousBeat",
		sizeof(FContinuousBeat),
		alignof(FContinuousBeat),
		Z_Construct_UScriptStruct_FContinuousBeat_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContinuousBeat_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FContinuousBeat_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContinuousBeat_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FContinuousBeat()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FContinuousBeat_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_RhythmGamePlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ContinuousBeat"), sizeof(FContinuousBeat), Get_Z_Construct_UScriptStruct_FContinuousBeat_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FContinuousBeat_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FContinuousBeat_Hash() { return 2018454015U; }
class UScriptStruct* FSongData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern RHYTHMGAMEPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FSongData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSongData, Z_Construct_UPackage__Script_RhythmGamePlugin(), TEXT("SongData"), sizeof(FSongData), Get_Z_Construct_UScriptStruct_FSongData_Hash());
	}
	return Singleton;
}
template<> RHYTHMGAMEPLUGIN_API UScriptStruct* StaticStruct<FSongData>()
{
	return FSongData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSongData(FSongData::StaticStruct, TEXT("/Script/RhythmGamePlugin"), TEXT("SongData"), false, nullptr, nullptr);
static struct FScriptStruct_RhythmGamePlugin_StaticRegisterNativesFSongData
{
	FScriptStruct_RhythmGamePlugin_StaticRegisterNativesFSongData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SongData")),new UScriptStruct::TCppStructOps<FSongData>);
	}
} ScriptStruct_RhythmGamePlugin_StaticRegisterNativesFSongData;
	struct Z_Construct_UScriptStruct_FSongData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_songSequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_songSequence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_manualBPM_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_manualBPM;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_autoCalculateBPM_MetaData[];
#endif
		static void NewProp_autoCalculateBPM_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_autoCalculateBPM;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSongData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SongReader.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSongData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSongData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSongData_Statics::NewProp_songSequence_MetaData[] = {
		{ "Category", "SongData" },
		{ "ModuleRelativePath", "Public/SongReader.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSongData_Statics::NewProp_songSequence = { "songSequence", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSongData, songSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSongData_Statics::NewProp_songSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSongData_Statics::NewProp_songSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSongData_Statics::NewProp_manualBPM_MetaData[] = {
		{ "Category", "SongData" },
		{ "ModuleRelativePath", "Public/SongReader.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSongData_Statics::NewProp_manualBPM = { "manualBPM", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSongData, manualBPM), METADATA_PARAMS(Z_Construct_UScriptStruct_FSongData_Statics::NewProp_manualBPM_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSongData_Statics::NewProp_manualBPM_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSongData_Statics::NewProp_autoCalculateBPM_MetaData[] = {
		{ "Category", "SongData" },
		{ "ModuleRelativePath", "Public/SongReader.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSongData_Statics::NewProp_autoCalculateBPM_SetBit(void* Obj)
	{
		((FSongData*)Obj)->autoCalculateBPM = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSongData_Statics::NewProp_autoCalculateBPM = { "autoCalculateBPM", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSongData), &Z_Construct_UScriptStruct_FSongData_Statics::NewProp_autoCalculateBPM_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSongData_Statics::NewProp_autoCalculateBPM_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSongData_Statics::NewProp_autoCalculateBPM_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSongData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSongData_Statics::NewProp_songSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSongData_Statics::NewProp_manualBPM,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSongData_Statics::NewProp_autoCalculateBPM,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSongData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RhythmGamePlugin,
		nullptr,
		&NewStructOps,
		"SongData",
		sizeof(FSongData),
		alignof(FSongData),
		Z_Construct_UScriptStruct_FSongData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSongData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSongData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSongData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSongData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSongData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_RhythmGamePlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SongData"), sizeof(FSongData), Get_Z_Construct_UScriptStruct_FSongData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSongData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSongData_Hash() { return 1260659011U; }
	DEFINE_FUNCTION(ASongReader::execSetSongPitch)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_pitch);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSongPitch(Z_Param_pitch);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASongReader::execSetSongVolume)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_volume);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSongVolume(Z_Param_volume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASongReader::execGetSong)
	{
		P_GET_STRUCT(FSongData,Z_Param_songData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USoundBase**)Z_Param__Result=P_THIS->GetSong(Z_Param_songData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASongReader::execGetLaneData)
	{
		P_GET_STRUCT(FSongData,Z_Param_songData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FLaneData>*)Z_Param__Result=P_THIS->GetLaneData(Z_Param_songData);
		P_NATIVE_END;
	}
	void ASongReader::StaticRegisterNativesASongReader()
	{
		UClass* Class = ASongReader::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLaneData", &ASongReader::execGetLaneData },
			{ "GetSong", &ASongReader::execGetSong },
			{ "SetSongPitch", &ASongReader::execSetSongPitch },
			{ "SetSongVolume", &ASongReader::execSetSongVolume },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASongReader_GetLaneData_Statics
	{
		struct SongReader_eventGetLaneData_Parms
		{
			FSongData songData;
			TArray<FLaneData> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_songData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASongReader_GetLaneData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SongReader_eventGetLaneData_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASongReader_GetLaneData_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLaneData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASongReader_GetLaneData_Statics::NewProp_songData = { "songData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SongReader_eventGetLaneData_Parms, songData), Z_Construct_UScriptStruct_FSongData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASongReader_GetLaneData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASongReader_GetLaneData_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASongReader_GetLaneData_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASongReader_GetLaneData_Statics::NewProp_songData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASongReader_GetLaneData_Statics::Function_MetaDataParams[] = {
		{ "Category", "SongReader" },
		{ "Keywords", "SongReader" },
		{ "ModuleRelativePath", "Public/SongReader.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASongReader_GetLaneData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASongReader, nullptr, "GetLaneData", nullptr, nullptr, sizeof(SongReader_eventGetLaneData_Parms), Z_Construct_UFunction_ASongReader_GetLaneData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASongReader_GetLaneData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASongReader_GetLaneData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASongReader_GetLaneData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASongReader_GetLaneData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASongReader_GetLaneData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASongReader_GetSong_Statics
	{
		struct SongReader_eventGetSong_Parms
		{
			FSongData songData;
			USoundBase* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_songData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASongReader_GetSong_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SongReader_eventGetSong_Parms, ReturnValue), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASongReader_GetSong_Statics::NewProp_songData = { "songData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SongReader_eventGetSong_Parms, songData), Z_Construct_UScriptStruct_FSongData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASongReader_GetSong_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASongReader_GetSong_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASongReader_GetSong_Statics::NewProp_songData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASongReader_GetSong_Statics::Function_MetaDataParams[] = {
		{ "Category", "SongReader" },
		{ "Keywords", "SongReader" },
		{ "ModuleRelativePath", "Public/SongReader.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASongReader_GetSong_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASongReader, nullptr, "GetSong", nullptr, nullptr, sizeof(SongReader_eventGetSong_Parms), Z_Construct_UFunction_ASongReader_GetSong_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASongReader_GetSong_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASongReader_GetSong_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASongReader_GetSong_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASongReader_GetSong()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASongReader_GetSong_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASongReader_SetSongPitch_Statics
	{
		struct SongReader_eventSetSongPitch_Parms
		{
			float pitch;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_pitch;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASongReader_SetSongPitch_Statics::NewProp_pitch = { "pitch", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SongReader_eventSetSongPitch_Parms, pitch), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASongReader_SetSongPitch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASongReader_SetSongPitch_Statics::NewProp_pitch,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASongReader_SetSongPitch_Statics::Function_MetaDataParams[] = {
		{ "Category", "SongReader" },
		{ "Keywords", "SongReader" },
		{ "ModuleRelativePath", "Public/SongReader.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASongReader_SetSongPitch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASongReader, nullptr, "SetSongPitch", nullptr, nullptr, sizeof(SongReader_eventSetSongPitch_Parms), Z_Construct_UFunction_ASongReader_SetSongPitch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASongReader_SetSongPitch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASongReader_SetSongPitch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASongReader_SetSongPitch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASongReader_SetSongPitch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASongReader_SetSongPitch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASongReader_SetSongVolume_Statics
	{
		struct SongReader_eventSetSongVolume_Parms
		{
			float volume;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_volume;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASongReader_SetSongVolume_Statics::NewProp_volume = { "volume", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SongReader_eventSetSongVolume_Parms, volume), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASongReader_SetSongVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASongReader_SetSongVolume_Statics::NewProp_volume,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASongReader_SetSongVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "SongReader" },
		{ "Keywords", "SongReader" },
		{ "ModuleRelativePath", "Public/SongReader.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASongReader_SetSongVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASongReader, nullptr, "SetSongVolume", nullptr, nullptr, sizeof(SongReader_eventSetSongVolume_Parms), Z_Construct_UFunction_ASongReader_SetSongVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASongReader_SetSongVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASongReader_SetSongVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASongReader_SetSongVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASongReader_SetSongVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASongReader_SetSongVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASongReader_NoRegister()
	{
		return ASongReader::StaticClass();
	}
	struct Z_Construct_UClass_ASongReader_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_song_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_song;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_autoBPM_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_autoBPM;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_listOfSongs_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_listOfSongs;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_listOfSongs_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_listOfSongs_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASongReader_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_RhythmGamePlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASongReader_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASongReader_GetLaneData, "GetLaneData" }, // 3023222151
		{ &Z_Construct_UFunction_ASongReader_GetSong, "GetSong" }, // 2558999881
		{ &Z_Construct_UFunction_ASongReader_SetSongPitch, "SetSongPitch" }, // 134312367
		{ &Z_Construct_UFunction_ASongReader_SetSongVolume, "SetSongVolume" }, // 1903699358
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASongReader_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SongReader.h" },
		{ "ModuleRelativePath", "Public/SongReader.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASongReader_Statics::NewProp_song_MetaData[] = {
		{ "Category", "SongReader" },
		{ "ModuleRelativePath", "Public/SongReader.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASongReader_Statics::NewProp_song = { "song", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASongReader, song), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASongReader_Statics::NewProp_song_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASongReader_Statics::NewProp_song_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASongReader_Statics::NewProp_autoBPM_MetaData[] = {
		{ "Category", "SongReader" },
		{ "ModuleRelativePath", "Public/SongReader.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASongReader_Statics::NewProp_autoBPM = { "autoBPM", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASongReader, autoBPM), METADATA_PARAMS(Z_Construct_UClass_ASongReader_Statics::NewProp_autoBPM_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASongReader_Statics::NewProp_autoBPM_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASongReader_Statics::NewProp_listOfSongs_MetaData[] = {
		{ "Category", "SongReader" },
		{ "ModuleRelativePath", "Public/SongReader.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ASongReader_Statics::NewProp_listOfSongs = { "listOfSongs", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASongReader, listOfSongs), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASongReader_Statics::NewProp_listOfSongs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASongReader_Statics::NewProp_listOfSongs_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ASongReader_Statics::NewProp_listOfSongs_Key_KeyProp = { "listOfSongs_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASongReader_Statics::NewProp_listOfSongs_ValueProp = { "listOfSongs", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSongData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASongReader_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASongReader_Statics::NewProp_song,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASongReader_Statics::NewProp_autoBPM,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASongReader_Statics::NewProp_listOfSongs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASongReader_Statics::NewProp_listOfSongs_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASongReader_Statics::NewProp_listOfSongs_ValueProp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASongReader_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASongReader>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASongReader_Statics::ClassParams = {
		&ASongReader::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASongReader_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASongReader_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASongReader_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASongReader_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASongReader()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASongReader_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASongReader, 923032626);
	template<> RHYTHMGAMEPLUGIN_API UClass* StaticClass<ASongReader>()
	{
		return ASongReader::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASongReader(Z_Construct_UClass_ASongReader, &ASongReader::StaticClass, TEXT("/Script/RhythmGamePlugin"), TEXT("ASongReader"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASongReader);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
