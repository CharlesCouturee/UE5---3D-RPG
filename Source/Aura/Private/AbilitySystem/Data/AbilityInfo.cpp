// Copyright Druid Mechanics


#include "AbilitySystem/Data/AbilityInfo.h"
#include "Aura\AuraLogChannels.h"


FAuraAbilityInfo UAbilityInfo::FindAbilityInforForTag(FGameplayTag& AbilityTag, bool bLogNotFound)
{
	for (const FAuraAbilityInfo& Info : AbilityInformation)
	{
		if (Info.AbilityTag == AbilityTag)
		{
			return Info;
		}
	}

	if (bLogNotFound)
	{
		UE_LOG(LogAura, Error, TEXT("Can't find info for AbilityTag %s for AbilityInfo %s"), *AbilityTag.ToString(), *GetNameSafe(this));
	}

	return FAuraAbilityInfo();
}
