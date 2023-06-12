// Fill out your copyright notice in the Description page of Project Settings.


#include "HUDWidgetTest.h"
#include "SectionWidget.h"
#include "Components/VerticalBox.h"

void UHUDWidgetTest::AddSectionWidgetToHUD(USectionWidget* SectionWidget)
{
	if (SectionWidget && SectionBox)
	{
		SectionBox->AddChild(SectionWidget);
	}
}