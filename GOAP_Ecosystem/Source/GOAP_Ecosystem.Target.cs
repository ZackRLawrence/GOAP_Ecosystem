// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class GOAP_EcosystemTarget : TargetRules
{
	public GOAP_EcosystemTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "GOAP_Ecosystem" } );
	}
}
