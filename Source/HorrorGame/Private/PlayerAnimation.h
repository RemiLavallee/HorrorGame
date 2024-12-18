#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "HorrorGame/HorrorGameCharacter.h"
#include "PlayerAnimation.generated.h"

UCLASS()
class UPlayerAnimation : public UAnimInstance
{
	GENERATED_BODY()

public:
	
	UPlayerAnimation();

	virtual void NativeUpdateAnimation(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animation)
	float Speed;

	UPROPERTY(BlueprintReadOnly, Category = "Character Animation")
	bool IsCrouching;

protected:

	UPROPERTY(BlueprintReadOnly, Category = "Character")
	AHorrorGameCharacter* PlayerCharacter;

	virtual void NativeBeginPlay() override;
};
