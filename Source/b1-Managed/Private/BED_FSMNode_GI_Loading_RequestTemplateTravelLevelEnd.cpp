#include "BED_FSMNode_GI_Loading_RequestTemplateTravelLevelEnd.h"

UBED_FSMNode_GI_Loading_RequestTemplateTravelLevelEnd::UBED_FSMNode_GI_Loading_RequestTemplateTravelLevelEnd() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_RequestTemplateTravelLevelEnd::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_RequestTemplateTravelLevelEnd::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


