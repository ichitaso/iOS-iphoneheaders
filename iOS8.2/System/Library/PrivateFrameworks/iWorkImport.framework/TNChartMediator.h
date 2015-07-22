/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:22 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHChartMediator.h>
#import <iWorkImport/TSCECalculationEngineRegistration.h>
#import <iWorkImport/TSCEFormulaOwning.h>

@class TNChartFormulaStorage, NSMutableArray, TSCEFormulaRewriteSpec, TNMutableChartFormulaStorage, NSCondition, TSUIntToIntDictionary, TSCECalculationEngine, NSString;

@interface TNChartMediator : TSCHChartMediator <TSCECalculationEngineRegistration, TSCEFormulaOwning> {

	CFUUIDRef mEntityId;
	TNChartFormulaStorage* mFormulaStorage;
	NSMutableArray* mFormulasToRewrite;
	NSMutableArray* mFormulasToRecalculate;
	TSCEFormulaRewriteSpec* mInFlightRewriteSpec;
	int mScatterFormat;
	char mIsRegisteredWithCalcEngine;
	char mIsEditing;
	char mEditingHasIsPhantomOverride;
	char mEditingIsPhantomOverride;
	TNChartFormulaStorage* mEditingStorageOverride;
	TNMutableChartFormulaStorage* mEditingAccumulatedFormulas;
	TNMutableChartFormulaStorage* mEditingActiveFormulas;
	NSCondition* mImportUpgradeCondition;
	char mHasBlittedSinceConditionVarSet;
	char mShouldFixAreaFormula;
	TSUIntToIntDictionary* mFormulaIndexToGridIndex;

}

@property (nonatomic,readonly) CFUUIDRef entityID; 
@property (nonatomic,readonly) int scatterFormat; 
@property (nonatomic,readonly) TSCECalculationEngine * calculationEngine; 
@property (nonatomic,readonly) int direction; 
@property (nonatomic,readonly) char labelFormulasAreAllStatic; 
@property (nonatomic,readonly) char seriesLabelFormulasAreAllStatic; 
@property (nonatomic,readonly) char categoryLabelFormulasAreAllStatic; 
@property (assign,nonatomic) char isEditing; 
@property (nonatomic,readonly) char hasBlittedSinceConditionVarSet; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)propertiesThatInvalidateMediator;
-(void)saveToArchive:(ChartMediatorArchive*)arg1 archiver:(id)arg2 ;
-(void)releaseForCalculationEngine:(id)arg1 ;
-(void)retainForCalculationEngine:(id)arg1 ;
-(void)beginRewriteForCalculationEngine:(id)arg1 spec:(id)arg2 ;
-(void)rewriteForCalculationEngine:(id)arg1 formulaID:(SCD_Struct_TS282)arg2 rewriteSpec:(id)arg3 ;
-(id)endRewriteForCalculationEngine:(id)arg1 spec:(id)arg2 ;
-(char)serializeCalculations;
-(void)registerWithCalculationEngineForDocumentLoad:(id)arg1 ;
-(void)unregisterFromCalculationEngine:(id)arg1 ;
-(char)registerLast;
-(id)objectToArchiveInDependencyTracker;
-(SCD_Struct_TS317)recalculateForCalculationEngine:(id)arg1 formulaID:(SCD_Struct_TS282)arg2 isInCycle:(char)arg3 hasCalculatedPrecedents:(char)arg4 ;
-(void)writeResultsForCalculationEngine:(id)arg1 ;
-(void)invalidateForCalculationEngine:(id)arg1 ;
-(TSCECalculationEngine *)calculationEngine;
-(id)initWithChartInfo:(id)arg1 ;
-(id)dataFormatterForAxis:(id)arg1 documentRoot:(id)arg2 ;
-(int)scatterFormat;
-(char)isPhantom;
-(id)commandSetSeriesName:(id)arg1 forSeriesIndex:(unsigned)arg2 ;
-(id)commandSetCategoryName:(id)arg1 forCategoryIndex:(unsigned)arg2 ;
-(id)seriesNameFormulaForSeriesIndex:(unsigned)arg1 ;
-(id)commandToSetSeriesNameFormula:(id)arg1 seriesIndex:(unsigned)arg2 ;
-(void)invalidateAndSynchronizeMediator;
-(id)commandToSetChartGridDirection:(int)arg1 documentRoot:(id)arg2 ;
-(id)dataFormatterForSeries:(id)arg1 index:(unsigned)arg2 axisType:(int)arg3 documentRoot:(id)arg4 ;
-(id)categoryLabelFormulas;
-(id)commandToChangeCategoryLabelFormulas:(id)arg1 ;
-(id)commandToSetErrorBarCustomFormula:(id)arg1 seriesIndex:(unsigned)arg2 dataType:(int)arg3 ;
-(id)errorBarCustomFormulaForSeriesIndex:(unsigned)arg1 dataType:(int)arg2 ;
-(id)commandToSetSeriesDataFormula:(id)arg1 seriesDimension:(id)arg2 ;
-(id)seriesDataFormulaForSeriesDimension:(id)arg1 ;
-(id)commandToSetNewSeriesIndex:(unsigned)arg1 forSeriesIndex:(unsigned)arg2 ;
-(id)initFromArchive:(const ChartMediatorArchive*)arg1 unarchiver:(id)arg2 ;
-(void)wasAddedToDocumentRoot:(id)arg1 context:(id)arg2 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg1 ;
-(id)formulaStorageFromTable:(id)arg1 selection:(id)arg2 direction:(int)arg3 ;
-(id)initWithChartInfo:(id)arg1 withTable:(id)arg2 selection:(id)arg3 direction:(int)arg4 ;
-(id)formulaStorage;
-(char)labelFormulasAreAllStaticInFormulaStorage:(id)arg1 ;
-(id)p_untitledLabelWithIndex:(unsigned)arg1 ;
-(void)p_copyValuesIntoChartModelFromPair:(id)arg1 ;
-(void)p_copyValuesIntoToChartModel:(id)arg1 formulaMap:(id)arg2 ;
-(void)synchronizeModelFromFormulaStorage;
-(char)p_isScatterOrBubble;
-(unsigned)formulaIndexForSeriesDimension:(id)arg1 ;
-(id)labelFormulasForType:(int)arg1 ;
-(void)p_hackSetCalcEngineLegacyGlobalID;
-(id)commandToChangeLabelFormulas:(id)arg1 forType:(int)arg2 ;
-(int)p_formulaTypeFromDataType:(int)arg1 ;
-(id)p_tstFormulaFromForumulaWrapper:(id)arg1 ;
-(id)p_formulaWrapperFromTSTFormula:(id)arg1 ;
-(void)p_unregisterAllFormulaeFromCalcEngine:(id)arg1 ;
-(void)p_registerFormulaeWithCalcEngine:(id)arg1 ;
-(void)setFormulaStorage:(id)arg1 doRegistration:(char)arg2 ;
-(void)synchronizeModelFromFormulaStorage:(id)arg1 ;
-(id)referencedEntities;
-(void)p_registerAreaFormulaForMap:(id)arg1 withCalcEngine:(id)arg2 ;
-(void)p_registerHubFormulaWithCalcEngine:(id)arg1 ;
-(char)p_tabularCategoryLabelsAppearRegularInMap:(id)arg1 ;
-(void)p_detectAndRepairDeletedFormulas:(id)arg1 forRewriteSpec:(id)arg2 ;
-(void)p_detectAndRepairInsertedCategoryConditionFromPreviousState:(id)arg1 andEditingState:(id)arg2 forTectonicShift:(id)arg3 ;
-(void)p_detectAndRepairInsertedSeriesConditionFromPreviousState:(id)arg1 andEditingState:(id)arg2 forTectonicShift:(id)arg3 ;
-(void)p_transposeSeriesAndCategoryLabelsInMap:(id)arg1 ;
-(void)repairMissingSeriesLabelsInMap:(id)arg1 ;
-(void)repairMissingCategoryLabelsInMap:(id)arg1 ;
-(void)p_reregister:(char)arg1 withCalculationEngine:(id)arg2 ;
-(id)p_commandToSetSeriesNameFormulaWrapper:(id)arg1 seriesIndex:(unsigned)arg2 ;
-(unsigned)p_labelIndexForSeriesNameSeriesIndex:(unsigned)arg1 ;
-(id)p_newStaticNameForCategoryAvoidingExistingNames:(id)arg1 runningCount:(unsigned*)arg2 ;
-(char)p_labelsAreStaticInMap:(id)arg1 ofType:(int)arg2 ;
-(char)p_tableHasRange:(SCD_Struct_TS275*)arg1 withCalcEngine:(id)arg2 ;
-(void)p_disconnectLabelsInMap:(id)arg1 ofType:(int)arg2 ;
-(void)p_repairMissingTabularCategoryLabelsIrregularInMap:(id)arg1 ;
-(void)p_repairMissingStaticCategoryLabelsInMap:(id)arg1 ;
-(void)p_repairMissingTabularCategoryLabelsRegularInMap:(id)arg1 ;
-(void)p_repairMissingCategoryLabelsInMap:(id)arg1 ;
-(void)repairMissingCategoryLabelsInMap:(id)arg1 ignoringNonVisibleLabels:(char)arg2 ;
-(id)referencedEntitiesInMap:(id)arg1 ;
-(void)replaceReferencesInFormulas:(id)arg1 withOwnerIDMap:(id)arg2 ;
-(void)setFormulaStorage:(id)arg1 ;
-(id)initWithChartInfo:(id)arg1 withTable:(id)arg2 direction:(int)arg3 ;
-(char)labelFormulasAreAllStatic;
-(char)seriesLabelFormulasAreAllStatic;
-(char)categoryLabelFormulasAreAllStatic;
-(void)setEditingIsPhantomOverride:(char)arg1 ;
-(void)clearEditingIsPhantomOverride;
-(void)setEditingStorageOverride:(id)arg1 ;
-(id)seriesDimensionForFormulaIndex:(unsigned)arg1 ;
-(void)copyValuesIntoChartModelOutOfBandUsingCalcEngine:(id)arg1 formulaMap:(id)arg2 ;
-(void)setImportUpgradeCondition:(id)arg1 ;
-(id)expandSingleRangeForProposedCategoryLabels:(SCD_Struct_TS275*)arg1 ;
-(char)p_tableHasCell:(SCD_Struct_TS281*)arg1 withCalcEngine:(id)arg2 ;
-(void)replaceReferencesInFormulasWithOwnerIDMap:(id)arg1 ;
-(id)dataFormulas;
-(int)formulasDirection;
-(id)rowFormulas;
-(id)columnFormulas;
-(id)customPosFormulas;
-(id)customNegFormulas;
-(id)customPosScatterXFormulas;
-(id)customNegScatterXFormulas;
-(void)localizeFormulaLiteralsWithBundle:(id)arg1 ;
-(char)hasBlittedSinceConditionVarSet;
-(void)setIsEditing:(char)arg1 ;
-(CFUUIDRef)entityID;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)direction;
-(char)isEditing;
@end
