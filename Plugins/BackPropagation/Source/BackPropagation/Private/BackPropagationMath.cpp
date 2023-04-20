// Fill out your copyright notice in the Description page of Project Settings.


#include "BackPropagationMath.h"

void UBackPropagationMath::LinearRegression(const FLine2D& InLine, FLine2D& OutLine,
                                            const TArray<FVector2D>& InPoints, float InMLearningRate,
                                            float InBLearningRate)
{
	float B = 0;
	float M = 0;

	const int32 InPointsNumber = InPoints.Num();
	for (int32 i = 0; i < InPointsNumber; i++)
	{
		const float X = InPoints[i].X;
		const float Y = InPoints[i].Y;
		B += -(2.f / static_cast<float>(InPointsNumber)) * (Y - ((InLine.M * X) + InLine.B));
		M += -(2.f / static_cast<float>(InPointsNumber)) * X * (Y - ((InLine.M * X) + InLine.B));
	}

	OutLine.B = InLine.B - InBLearningRate * B;
	OutLine.M = InLine.M - InMLearningRate * M;
}
