#include "BED_FSMNode_GI_Loading_GSGShowWXlogin.h"

UBED_FSMNode_GI_Loading_GSGShowWXlogin::UBED_FSMNode_GI_Loading_GSGShowWXlogin() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_GSGShowWXlogin::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_GSGShowWXlogin::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


