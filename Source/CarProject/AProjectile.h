// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine.h"
#include "GameFramework/Actor.h"
#include "Components/SphereComponent.h"
#include "AProjectile.generated.h"

UCLASS()
class CARPROJECT_API AAProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAProjectile();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleDefaultsOnly, Category = Projectile)
		USphereComponent* CollisionComponent;

	// Projectile movement component.
	UPROPERTY(VisibleAnywhere, Category = Movement)
		UProjectileMovementComponent* ProjectileMovementComponent;

	// Determines how much damage a projectile will do when collding with another actor
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Projectile)
		FVector Damage;

	//How fast the projectile goes
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Projectile)
		FVector Speed;

	// The type of projectile. Will effect its appearance/damage/speed etc.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Projectile)
		FVector Type;

	// Function that initializes the projectile's velocity in the shoot direction.
	void FireInDirection(const FVector& ShootDirection);

	//void OnHit(AActor * OtherActor, UPrimitiveComponent * OtherComponent, FVector NormalImpulse, const FHitResult & Hit);
	UFUNCTION()
		void OnHit(UPrimitiveComponent* HitComp, AActor* Actor, UPrimitiveComponent* Other, FVector Impulse, const FHitResult & HitResult);
	
	
};
