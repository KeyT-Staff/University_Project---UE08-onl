// Copyright Epic Games, Inc. All Rights Reserved.

#include "University_ProjectCameraManager.h"

AUniversity_ProjectCameraManager::AUniversity_ProjectCameraManager()
{
	// set the min/max pitch
	ViewPitchMin = -65.0f;
	ViewPitchMax = 80.0f;

	//Установил область клиппинга камеры
	ViewTarget.POV.PerspectiveNearClipPlane = 4.0;
}