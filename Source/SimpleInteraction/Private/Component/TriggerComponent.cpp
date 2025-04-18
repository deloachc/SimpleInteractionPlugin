// Fill out your copyright notice in the Description page of Project Settings.


#include "Component/TriggerComponent.h"
#include "Component/TriggerableActionComponent.h"
#include "GameFramework/Actor.h"


// Sets default values for this component's properties
UTriggerComponent::UTriggerComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

void UTriggerComponent::ExecuteTriggers()
{
	for (const AActor* Actor : ActorsToTrigger)
	{
		UTriggerableActionComponent* TriggerableActionComponent = Actor->FindComponentByClass<UTriggerableActionComponent>();
		if (TriggerableActionComponent)
		{
			TriggerableActionComponent->TriggerAction();
		}
		else
		{
			//const FString DebugMessage = FString("No TriggerableActionComponent found on ") + Actor->GetHumanReadableName();
			//GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Yellow, DebugMessage);
		}
	}
}
