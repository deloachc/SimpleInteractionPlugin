// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InteractionComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnInteractionSignature);

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class SIMPLEINTERACTION_API UInteractionComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UInteractionComponent();

	UPROPERTY(BlueprintAssignable, Category = "Interaction")
	FOnInteractionSignature OnInteractionDelegate;

	void DoInteraction();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Interaction")
	FString PromptString = FString("Interact");
};
