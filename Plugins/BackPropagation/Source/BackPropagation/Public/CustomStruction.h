// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CustomStruction.generated.h"

USTRUCT(BlueprintType)
struct FLine2D
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Line2D")
	float M;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Line2D")
	float B;

	void Reset()
	{
		M = 0.f;
		B = 0.f;
	}
};