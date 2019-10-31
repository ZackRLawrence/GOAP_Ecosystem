// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class GOAP_EcosystemEditorTarget : TargetRules
{
	public GOAP_EcosystemEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;

		ExtraModuleNames.AddRange( new string[] { "GOAP_Ecosystem" } );
	}
}
