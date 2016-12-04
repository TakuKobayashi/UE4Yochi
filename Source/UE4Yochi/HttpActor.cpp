// Fill out your copyright notice in the Description page of Project Settings.

#include "UE4Yochi.h"
#include "HttpActor.h"


// Sets default values
AHttpActor::AHttpActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AHttpActor::BeginPlay()
{
	Super::BeginPlay();
    UE_LOG(LogTemp, Warning, TEXT("output : %s"), L"HttpActorログの内容");
}

// Called every frame
void AHttpActor::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

