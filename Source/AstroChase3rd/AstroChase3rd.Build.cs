// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class AstroChase3rd : ModuleRules
{
	public AstroChase3rd(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
