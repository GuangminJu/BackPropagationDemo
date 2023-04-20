// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CustomStruction.h"
#include "UObject/Object.h"
#include "BackPropagationMath.generated.h"

/**
 * 
 */
UCLASS()
class BACKPROPAGATION_API UBackPropagationMath : public UObject
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, Category = "BackPropagation")
	static void LinearRegression(const FLine2D& InLine, FLine2D& OutLine, const TArray<FVector2D>& InPoints,
	                                float InMLearningRate, float InBLearningRate);
};
