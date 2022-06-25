// Fill out your copyright notice in the Description page of Project Settings.


#include "Playing/PlayingGameModeBase.h"
#include "Playing/PlayingMyPlayerController.h"
#include "Playing/PlayingMyCharacter.h"

APlayingGameModeBase::APlayingGameModeBase()
{
    DefaultPawnClass= APlayingMyCharacter::StaticClass();
    PlayerControllerClass= APlayingMyPlayerController::StaticClass();

}