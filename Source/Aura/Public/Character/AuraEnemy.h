// Copyright Druid Mechanics

#pragma once

#include "CoreMinimal.h"
#include "Character/AuraCharacterBase.h"
#include "AuraEnemy.generated.h"
#include "Interaction/EnemyInteface.h"

/**
 * 
 */
UCLASS()
class AURA_API AAuraEnemy : public AAuraCharacterBase, public IEnemyInteface
{
	GENERATED_BODY()

public:
	virtual void HighlightActor() override;
	virtual void UnHighlight() override;
	
};
