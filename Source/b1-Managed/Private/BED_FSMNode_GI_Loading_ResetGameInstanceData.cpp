#include "BED_FSMNode_GI_Loading_ResetGameInstanceData.h"

UBED_FSMNode_GI_Loading_ResetGameInstanceData::UBED_FSMNode_GI_Loading_ResetGameInstanceData() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_ResetGameInstanceData::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_ResetGameInstanceData::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


