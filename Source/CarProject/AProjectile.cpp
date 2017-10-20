// Fill out your copyright notice in the Description page of Project Settings.

#include "AProjectile.h"


// Sets default values
AAProjectile::AAProjectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	// Use a sphere as a simple collision representation.
	CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
	CollisionComponent->BodyInstance.SetCollisionProfileName(TEXT("Projectile"));
	CollisionComponent->OnComponentHit.AddDynamic(this, &AAProjectile::OnHit);
	// Set the sphere's collision radius.
	CollisionComponent->InitSphereRadius(10.0f);
	// Set the root component to be the collision component.
	RootComponent = CollisionComponent;

	// Use this component to drive this projectile's movement.
	ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovementComponent"));
	ProjectileMovementComponent->SetUpdatedComponent(CollisionComponent);

	// Die after 3 seconds.
	InitialLifeSpan = 3.0f;

	this->Type = "default";
	InitializeDefaults(Type);
}

void AAProjectile::InitializeDefaults(FString type_str)
{
	if (type_str == "default")
	{
		ProjectileMovementComponent->InitialSpeed = 3000.0f;
		ProjectileMovementComponent->MaxSpeed = 3000.0f;
		ProjectileMovementComponent->bRotationFollowsVelocity = true;
		ProjectileMovementComponent->bShouldBounce = false;
		//ProjectileMovementComponent->Bounciness = 0.3f;
		this->Damage = 10;
	}
}

// Called when the game starts or when spawned
void AAProjectile::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Function that initializes the projectile's velocity in the shoot direction.
void AAProjectile::FireInDirection(const FVector& ShootDirection)
{
	ProjectileMovementComponent->Velocity = ShootDirection * ProjectileMovementComponent->InitialSpeed;
}


// Function that is called when the projectile hits something.
void AAProjectile::OnHit(UPrimitiveComponent* HitComp, AActor* Actor, UPrimitiveComponent* Other, FVector Impulse, const FHitResult & HitResult)
{
	if (Actor != this && Other->IsSimulatingPhysics())
	{
		Other->AddImpulseAtLocation(ProjectileMovementComponent->Velocity * 100.0f, HitResult.ImpactPoint);
		
	}
}

