// Fill out your copyright notice in the Description page of Project Settings.

#include "UE4Yochi.h"
#include "WSActor.h"


// Sets default values
AWSActor::AWSActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AWSActor::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("output : %s"), L"WSActorログの内容");
}

// Called every frame
void AWSActor::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

