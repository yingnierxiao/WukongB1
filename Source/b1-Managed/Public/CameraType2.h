#pragma once
#include "CoreMinimal.h"
#include "CameraType2.generated.h"

UENUM(BlueprintType)
enum class CameraType : uint8 {
    None,
    Normal,
    Cine,
    Rail,
    Crane,
};

