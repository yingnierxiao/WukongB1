#include "BED_FSMNode_GI_Loading_PostSeamlessLevelTravel.h"

UBED_FSMNode_GI_Loading_PostSeamlessLevelTravel::UBED_FSMNode_GI_Loading_PostSeamlessLevelTravel() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_PostSeamlessLevelTravel::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_PostSeamlessLevelTravel::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


