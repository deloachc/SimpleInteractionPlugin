// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TriggerableActionComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnTriggerActionSignature);

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class SIMPLEINTERACTION_API UTriggerableActionComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UTriggerableActionComponent();

	UPROPERTY(BlueprintAssignable, Category = "Interaction")
	FOnTriggerActionSignature OnTriggerActionDelegate;

	void TriggerAction();
};
