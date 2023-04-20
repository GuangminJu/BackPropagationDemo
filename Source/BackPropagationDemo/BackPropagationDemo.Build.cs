// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class BackPropagationDemo : ModuleRules
{
	public BackPropagationDemo(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}
