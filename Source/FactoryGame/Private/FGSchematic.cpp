// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGSchematic.h"

#if WITH_EDITOR
void UFGSchematic::PreSave(const  ITargetPlatform* targetPlatform){ }
#endif 
#if WITH_EDITOR
void UFGSchematic::AddRecipe(TSubclassOf< UFGSchematic > inClass, TSubclassOf<  UFGRecipe > recipe){ }
UFUNCTION(BlueprintCallable, Category = "Editor|Schematic")
#endif 
#if WITH_EDITOR
void UFGSchematic::UpdateAssetBundleData(){ }
#endif 
#if WITH_EDITORONLY_DATA
void UFGSchematic::MigrateDataToNewSchematicCategory(){ }
#endif 
UFGSchematic::UFGSchematic(){ }
ESchematicType UFGSchematic::GetType(TSubclassOf< UFGSchematic > inClass){return inClass.GetDefaultObject()->mType;}
FText UFGSchematic::GetSchematicDisplayName(TSubclassOf< UFGSchematic > inClass){ return inClass.GetDefaultObject()->mDisplayName;}
TSubclassOf< class UFGSchematicCategory > UFGSchematic::GetSchematicCategory(TSubclassOf< UFGSchematic > inClass){ return inClass.GetDefaultObject()->mSchematicCategory; }
void UFGSchematic::GetSubCategories(TSubclassOf< UFGSchematic > inClass,  TArray< TSubclassOf<  UFGSchematicCategory > >& out_subCategories){out_subCategories = inClass.GetDefaultObject()->mSubCategories;}
TArray< FItemAmount > UFGSchematic::GetCost(TSubclassOf< UFGSchematic > inClass){ return inClass.GetDefaultObject()->mCost;}
TArray< UFGUnlock* > UFGSchematic::GetUnlocks(TSubclassOf< UFGSchematic > inClass){ return inClass.GetDefaultObject()->mUnlocks; }
int32 UFGSchematic::GetTechTier(TSubclassOf< UFGSchematic > inClass){ return inClass.GetDefaultObject()->mTechTier;}
float UFGSchematic::GetTimeToComplete(TSubclassOf< UFGSchematic > inClass){ return inClass.GetDefaultObject()->mTimeToComplete; }
FSlateBrush UFGSchematic::GetItemIcon(TSubclassOf< UFGSchematic > inClass){ return FSlateBrush(); }
TSubclassOf< UFGSchematic > UFGSchematic::GetDependentOnSchematic(TSubclassOf< UFGSchematic > inClass){ return TSubclassOf<UFGSchematic>(); }
TArray< TSubclassOf< UFGSchematic > > UFGSchematic::GetAdditionalSchematicDependencies(TSubclassOf< UFGSchematic > inClass){ return TArray<TSubclassOf<UFGSchematic> >(); }
bool UFGSchematic::IsRepeatPurchasesAllowed(TSubclassOf< UFGSchematic > inClass){ return bool(); }
bool UFGSchematic::IsIncludedInBuild(TSubclassOf< UFGSchematic > inClass){ return bool(); }
void UFGSchematic::PostLoad(){ Super::PostLoad(); }
void UFGSchematic::Serialize(FArchive& ar){ Super::Serialize(ar); }
FPrimaryAssetId UFGSchematic::GetPrimaryAssetId() const{ return FPrimaryAssetId(); }
