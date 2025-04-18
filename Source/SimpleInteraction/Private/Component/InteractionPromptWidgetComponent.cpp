// Fill out your copyright notice in the Description page of Project Settings.


#include "Component/InteractionPromptWidgetComponent.h"

#include "UI/InteractionPromptWidget.h"


// Sets default values for this component's properties
UInteractionPromptWidgetComponent::UInteractionPromptWidgetComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	
	SetWidgetSpace(EWidgetSpace::Screen);
	SetDrawAtDesiredSize(true);
	SetVisibility(false);
}

void UInteractionPromptWidgetComponent::UpdatePromptText(const FString& PromptText)
{
	if (PromptWidget == nullptr) return;
	
	PromptWidget->UpdatePromptText(PromptText);
}


// Called when the game starts
void UInteractionPromptWidgetComponent::BeginPlay()
{
	Super::BeginPlay();

	PromptWidget = Cast<UInteractionPromptWidget>(GetWidget());
}
