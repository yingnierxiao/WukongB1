#include "BED_FSMNode_Condition_GI_Loading_IsStandAlone.h"

UBED_FSMNode_Condition_GI_Loading_IsStandAlone::UBED_FSMNode_Condition_GI_Loading_IsStandAlone() {
    this->Category = TEXT("GI_Loading Condition");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(2);
}

FString UBED_FSMNode_Condition_GI_Loading_IsStandAlone::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


