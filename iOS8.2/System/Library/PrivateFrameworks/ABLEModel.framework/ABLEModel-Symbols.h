-[ABLEBONDirect initBonDirectWithArray:]
-[ABLEBONDirect initWithJsonResource:]
+[ABLEBONDirect bonDirect]
+[ABLEBONDirect bonDirectWithArray:]
-[ABLEBONDirect lookupForBatteryLevel:]
-[ABLEBONDirect bonArray]
-[ABLEBONDirect bonDoubleMap]
-[ABLEBONDirect setBonDoubleMap:]
-[ABLEBONDirect .cxx_destruct]
+[ABLEWindow windowIn:from:to:]
+[ABLEWindow windowForKey:in:from:to:]
-[NSArray(ABLETable) getTableColumn:]
+[NSArray(ABLETable) arrayTableWithColumnsFromDictionary:]
+[NSArray(ABLETable) arrayTableWithKeys:andLength:]
+[NSArray(ABLETable) arrayTableWithLength:]
-[NSArray(ABLETable) setTableColumn:withValues:]
-[NSArray(ABLETable) setTableColumnWithColumnsFromDictionary:]
+[ABLEDateSorter sortDuetByCreationDate:]
-[ABLEVectorModel initWithFilter:]
+[ABLEVectorModel modelWithFilter:]
-[ABLEVectorModel predictSequence:forTimes:]
-[ABLEVectorModel predictSingle:]
-[ABLEVectorModel predictSingle:forOffset:]
-[ABLEVectorModel predictAll:]
-[ABLEVectorModel filter]
-[ABLEVectorModel .cxx_destruct]
-[ABLEZeroAvoid initWithDecayRatePerEntry:minimumLevel:maximumLevel:]
-[ABLEZeroAvoid zeroAvoid:]
___27-[ABLEZeroAvoid zeroAvoid:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
___27-[ABLEZeroAvoid zeroAvoid:]_block_invoke9
___copy_helper_block_16
___destroy_helper_block_17
-[ABLEZeroAvoid decayRate]
-[ABLEZeroAvoid minimumLevel]
-[ABLEZeroAvoid maximumLevel]
_ABLEDataHygiene_notNaN_block_invoke
-[ABLEDataHygiene initWithHygieneTest:]
-[ABLEDataHygiene checkArray:]
___30-[ABLEDataHygiene checkArray:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
___30-[ABLEDataHygiene checkArray:]_block_invoke30
___copy_helper_block_31
___destroy_helper_block_32
+[ABLEDataHygiene hygieneNaN]
-[ABLEDataHygiene validIndexSet]
-[ABLEDataHygiene setValidIndexSet:]
-[ABLEDataHygiene predicate]
-[ABLEDataHygiene length]
-[ABLEDataHygiene setLength:]
-[ABLEDataHygiene .cxx_destruct]
-[NSDictionary(ABLEFunctional) map:]
___36-[NSDictionary(ABLEFunctional) map:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[NSDictionary(ABLEFunctional) keyMap:]
-[NSDictionary(ABLEFunctional) reduce:withInitialValue:]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___56-[NSDictionary(ABLEFunctional) reduce:withInitialValue:]_block_invoke
___copy_helper_block_16
___destroy_helper_block_17
-[NSDictionary(ABLEFunctional) dictionaryByAddingEntriesFromDictionary:]
-[ABLEStaticMapInclusiveDomainVectorRange initWithDomainVector:domainMin:domainMax:]
-[ABLEStaticMapInclusiveDomainVectorRange initWithJSONDomainVector:domainMin:domainMax:]
-[ABLEStaticMapInclusiveDomainVectorRange map:]
-[ABLEStaticMapInclusiveDomainVectorRange domainVector]
-[ABLEStaticMapInclusiveDomainVectorRange domainMin]
-[ABLEStaticMapInclusiveDomainVectorRange domainMax]
-[ABLEStaticMapInclusiveDomainVectorRange .cxx_destruct]
+[ABLEApprox approximateMissingValuesByRightFlowInTable:forField:]
+[ABLEApprox approximateMissingValuesInVector:]
+[ABLESmoother smoothData:]
+[ABLESmoother chargeData:]
-[ABLEGradient initWithCurve:minDecay:maxDecay:]
-[ABLEGradient initWithCurveAndMinDecay:andMaxDecay:]
-[ABLEGradient initWithMinDecay:andMaxDecay:]
-[ABLEGradient calculateHourlyDecayRate:]
-[ABLEGradient calculateHourlyDecayRateFromTable:]
-[ABLEGradient calculateBON:]
-[ABLEGradient calculateBONfromTable:]
-[ABLEGradient calculateLinearBONfromDrainRate:]
-[ABLEGradient calculateBONfromDrainRate:]
-[ABLEGradient minDecay]
-[ABLEGradient maxDecay]
-[ABLEGradient drainMap]
-[ABLEGradient .cxx_destruct]
+[ABLEDateArrayRoundTrim trimTable:withPeriod:]
+[ABLEDateArrayRoundTrim indexSetForDateArray:fromDate:toDate:]
___63+[ABLEDateArrayRoundTrim indexSetForDateArray:fromDate:toDate:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
+[ABLEDateArrayRoundTrim indexSetForDateArray:trimmedWithPeriod:]
-[ABLEBONPrediction initWithArray:]
-[ABLEBONPrediction initWithJsonResource:]
+[ABLEBONPrediction bonPredict]
+[ABLEBONPrediction bonPredictWithArray:]
-[ABLEBONPrediction lookupForPredicted:andBatteryLevel:]
-[ABLEBONPrediction bonDoubleMap]
-[ABLEBONPrediction setBonDoubleMap:]
-[ABLEBONPrediction .cxx_destruct]
-[ABLEBONPostAdjust initBonPostAdjustWithArray:]
-[ABLEBONPostAdjust initBonPostAdjustWithDoubleMap:]
-[ABLEBONPostAdjust initBonPostAdjustWithJSONResource:]
+[ABLEBONPostAdjust bonPostAdjustWithJSONResource:]
+[ABLEBONPostAdjust bonPostAdjust]
+[ABLEBONPostAdjust bonPostAdjustWithArray:]
-[ABLEBONPostAdjust adjustBON:forLevel:]
-[ABLEBONPostAdjust bonPostAdjustDoubleMap]
-[ABLEBONPostAdjust setBonPostAdjustDoubleMap:]
-[ABLEBONPostAdjust .cxx_destruct]
-[NSMutableArray(ABLEQueue) enqueue:]
-[NSMutableArray(ABLEQueue) dequeue]
-[NSMutableArray(ABLEQueue) empty]
+[ABLEBucketer bucketBatteryLevel:fromDate:toDate:withPeriod:]
+[ABLEBucketer bucketBatteryLevel:withPeriod:]
+[ABLEBucketer oldBucketBatteryLevel:]
+[ABLEBucketer oldBucketBatteryLevel:forDates:]
___47+[ABLEBucketer oldBucketBatteryLevel:forDates:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
+[ABLEBucketer bucketBatteryLevel:forDates:withPeriod:]
-[NSArray(ABLEFunctional) objectsInRangeFromIndex:withLength:]
-[NSArray(ABLEFunctional) map:]
___31-[NSArray(ABLEFunctional) map:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[NSArray(ABLEFunctional) mapAtIndices:withBlock:]
___50-[NSArray(ABLEFunctional) mapAtIndices:withBlock:]_block_invoke
___copy_helper_block_12
___destroy_helper_block_13
-[NSArray(ABLEFunctional) mapDouble:]
___37-[NSArray(ABLEFunctional) mapDouble:]_block_invoke
___copy_helper_block_22
___destroy_helper_block_23
-[NSArray(ABLEFunctional) reduce:withInitialValue:]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___51-[NSArray(ABLEFunctional) reduce:withInitialValue:]_block_invoke
___copy_helper_block_25
___destroy_helper_block_26
-[NSArray(ABLEFunctional) reduceDouble:withInitialValue:]
___57-[NSArray(ABLEFunctional) reduceDouble:withInitialValue:]_block_invoke
___copy_helper_block_28
___destroy_helper_block_29
-[NSArray(ABLEFunctional) dictionaryOfResultsFromBlock:]
-[NSArray(ABLEFunctional) nonePassPredicate:]
-[NSArray(ABLEFunctional) anyPassPredicate:]
+[ABLEDateSeq dateSequenceStarting:Ending:withPeriod:]
+[ABLEDateSeq dateSequenceStarting:EndingBefore:withPeriod:]
+[ABLEDateSeq dateSequenceStarting:count:withPeriod:]
+[ABLEDateSeq dateSequenceStartingWithTimeIntervalSinceReferenceDate:count:withPeriod:]
+[ABLESummary doubleSummary:]
+[ABLESummary dateSummary:]
+[ABLEArrayDictWriter toCSV:]
-[ABLETimeSeriesModel initWithPeriod:andFilter:]
+[ABLETimeSeriesModel modelWithPeriod:andFilter:]
-[ABLETimeSeriesModel predictSingle:]
-[ABLETimeSeriesModel predictAll:]
-[ABLETimeSeriesModel filter]
-[ABLETimeSeriesModel period]
-[ABLETimeSeriesModel vectorModel]
-[ABLETimeSeriesModel .cxx_destruct]
-[NSArray(ABLESoftIndex) objectOrNilAtIndex:]
+[ABLEVectorSumSquare sumSquare:]
+[ABLEVectorSumSquare rSquareOfResponse:andRegression:]
+[ABLEVectorSumSquare sumSquareOfX:andY:]
+[ABLEVectorSumSquare covarianceOfX:andY:]
+[ABLEVectorSumSquare corellationOfX:andY:]
+[ABLEVectorSumSquare sum:]
+[ABLEVectorSumSquare productOfX:andY:]
+[ABLEVectorSumSquare mean:]
-[NSArray(ABLEIndexes) indexSet]
+[ABLEFilterKernelGenerator createDenseFilterFromSparseFilterWithOffsets:andCoefficients:]
+[ABLEBatteryLevelGenerators generateSampleBucketedIncreasingDataFrom:withCount:]
+[ABLEBatteryLevelGenerators generateSampleBucketedIncreasingDataFrom:withCount:startsWith:]
+[ABLEBatteryLevelGenerators generateSampleBucketedDataFrom:withCount:usingBlock:]
-[NSIndexSet(ABLEOps) intersect:]
___33-[NSIndexSet(ABLEOps) intersect:]_block_invoke
___33-[NSIndexSet(ABLEOps) intersect:]_block_invoke_2
___copy_helper_block_
___destroy_helper_block_
-[NSDate(ABLERound) dateWithFloorForAlignment:]
-[NSDate(ABLERound) dateWithCeilingForAlignment:]
-[ABLEStaticMap map:]
+[ABLEDiff diffDates:]
+[ABLEDiff diffDoubles:]
+[ABLELagExtractor extractLaggedVectorsFrom:forLags:]
___53+[ABLELagExtractor extractLaggedVectorsFrom:forLags:]_block_invoke
___53+[ABLELagExtractor extractLaggedVectorsFrom:forLags:]_block_invoke_2
___copy_helper_block_
___destroy_helper_block_
-[ABLEDateValueQueue addDate:value:]
-[ABLEDateValueQueue burnForAgeLimitMinimum:]
___45-[ABLEDateValueQueue burnForAgeLimitMinimum:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[ABLEDateValueQueue extent]
-[ABLEDateValueQueue first]
-[ABLEDateValueQueue last]
-[ABLEDateValueQueue queue]
-[ABLEDateValueQueue setQueue:]
-[ABLEDateValueQueue .cxx_destruct]
-[ABLEBONDrain initWithArray:domainMin:domainMax:rangeMin:rangeMax:]
-[ABLEBONDrain initWithJsonResource:domainMin:domainMax:rangeMin:rangeMax:]
+[ABLEBONDrain bonDrainWithDomainMin:domainMax:rangeMin:rangeMax:]
+[ABLEBONDrain bonDrainWithArray:domainMin:domainMax:rangeMin:rangeMax:]
-[ABLEBONDrain lookupForDrainRate:]
-[ABLEBONDrain bonArray]
-[ABLEBONDrain bonDoubleMap]
-[ABLEBONDrain setBonDoubleMap:]
-[ABLEBONDrain domainMin]
-[ABLEBONDrain setDomainMin:]
-[ABLEBONDrain domainMax]
-[ABLEBONDrain setDomainMax:]
-[ABLEBONDrain rangeMin]
-[ABLEBONDrain setRangeMin:]
-[ABLEBONDrain rangeMax]
-[ABLEBONDrain setRangeMax:]
-[ABLEBONDrain .cxx_destruct]
_objc_autoreleaseReturnValue$shim
_objc_getProperty$shim
_objc_setProperty_atomic$shim
_objc_storeStrong$shim
_objc_msgSend$shim
_objc_release$shim
_objc_retain$shim
__Block_object_assign$shim
_lround$shim
 stub helpers
GCC_except_table5
GCC_except_table13
GCC_except_table19
___block_descriptor_tmp
___block_descriptor_tmp19
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp15
___block_descriptor_tmp33
___block_descriptor_tmp
___block_descriptor_tmp18
___block_descriptor_tmp
___block_descriptor_tmp
___block_descriptor_tmp
___block_descriptor_tmp14
___block_descriptor_tmp24
___block_descriptor_tmp27
___block_descriptor_tmp30
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp6
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp15
___block_descriptor_tmp
_OBJC_IVAR_$_ABLEBONDirect._bonDoubleMap
_OBJC_IVAR_$_ABLEBONDirect._bonArray
_OBJC_IVAR_$_ABLEVectorModel._filter
_OBJC_IVAR_$_ABLEZeroAvoid._decayRate
_OBJC_IVAR_$_ABLEZeroAvoid._minimumLevel
_OBJC_IVAR_$_ABLEZeroAvoid._maximumLevel
_OBJC_IVAR_$_ABLEDataHygiene._predicate
_OBJC_IVAR_$_ABLEDataHygiene._length
_OBJC_IVAR_$_ABLEDataHygiene._validIndexSet
_OBJC_IVAR_$_ABLEStaticMapInclusiveDomainVectorRange._domainVector
_OBJC_IVAR_$_ABLEStaticMapInclusiveDomainVectorRange._domainMin
_OBJC_IVAR_$_ABLEStaticMapInclusiveDomainVectorRange._domainMax
_OBJC_IVAR_$_ABLEGradient._drainMap
_OBJC_IVAR_$_ABLEGradient._minDecay
_OBJC_IVAR_$_ABLEGradient._maxDecay
_OBJC_IVAR_$_ABLEBONPrediction._bonDoubleMap
_OBJC_IVAR_$_ABLEBONPostAdjust._bonPostAdjustDoubleMap
_OBJC_IVAR_$_ABLETimeSeriesModel._filter
_OBJC_IVAR_$_ABLETimeSeriesModel._period
_OBJC_IVAR_$_ABLETimeSeriesModel._vectorModel
_OBJC_IVAR_$_ABLEDateValueQueue._queue
_OBJC_IVAR_$_ABLEBONDrain._domainMin
_OBJC_IVAR_$_ABLEBONDrain._domainMax
_OBJC_IVAR_$_ABLEBONDrain._rangeMin
_OBJC_IVAR_$_ABLEBONDrain._rangeMax
_OBJC_IVAR_$_ABLEBONDrain._bonDoubleMap
_OBJC_IVAR_$_ABLEBONDrain._bonArray
_ABLEDataHygiene_notNaN
_OBJC_CLASS_$_ABLEApprox
_OBJC_CLASS_$_ABLEArrayDictWriter
_OBJC_CLASS_$_ABLEBONDirect
_OBJC_CLASS_$_ABLEBONDrain
_OBJC_CLASS_$_ABLEBONPostAdjust
_OBJC_CLASS_$_ABLEBONPrediction
_OBJC_CLASS_$_ABLEBatteryLevelGenerators
_OBJC_CLASS_$_ABLEBucketer
_OBJC_CLASS_$_ABLEDataHygiene
_OBJC_CLASS_$_ABLEDateArrayRoundTrim
_OBJC_CLASS_$_ABLEDateSeq
_OBJC_CLASS_$_ABLEDateSorter
_OBJC_CLASS_$_ABLEDateValueQueue
_OBJC_CLASS_$_ABLEDiff
_OBJC_CLASS_$_ABLEFilterKernelGenerator
_OBJC_CLASS_$_ABLEGradient
_OBJC_CLASS_$_ABLELagExtractor
_OBJC_CLASS_$_ABLESmoother
_OBJC_CLASS_$_ABLEStaticMap
_OBJC_CLASS_$_ABLEStaticMapInclusiveDomainVectorRange
_OBJC_CLASS_$_ABLESummary
_OBJC_CLASS_$_ABLETimeSeriesModel
_OBJC_CLASS_$_ABLEVectorModel
_OBJC_CLASS_$_ABLEVectorSumSquare
_OBJC_CLASS_$_ABLEWindow
_OBJC_CLASS_$_ABLEZeroAvoid
_OBJC_METACLASS_$_ABLEApprox
_OBJC_METACLASS_$_ABLEArrayDictWriter
_OBJC_METACLASS_$_ABLEBONDirect
_OBJC_METACLASS_$_ABLEBONDrain
_OBJC_METACLASS_$_ABLEBONPostAdjust
_OBJC_METACLASS_$_ABLEBONPrediction
_OBJC_METACLASS_$_ABLEBatteryLevelGenerators
_OBJC_METACLASS_$_ABLEBucketer
_OBJC_METACLASS_$_ABLEDataHygiene
_OBJC_METACLASS_$_ABLEDateArrayRoundTrim
_OBJC_METACLASS_$_ABLEDateSeq
_OBJC_METACLASS_$_ABLEDateSorter
_OBJC_METACLASS_$_ABLEDateValueQueue
_OBJC_METACLASS_$_ABLEDiff
_OBJC_METACLASS_$_ABLEFilterKernelGenerator
_OBJC_METACLASS_$_ABLEGradient
_OBJC_METACLASS_$_ABLELagExtractor
_OBJC_METACLASS_$_ABLESmoother
_OBJC_METACLASS_$_ABLEStaticMap
_OBJC_METACLASS_$_ABLEStaticMapInclusiveDomainVectorRange
_OBJC_METACLASS_$_ABLESummary
_OBJC_METACLASS_$_ABLETimeSeriesModel
_OBJC_METACLASS_$_ABLEVectorModel
_OBJC_METACLASS_$_ABLEVectorSumSquare
_OBJC_METACLASS_$_ABLEWindow
_OBJC_METACLASS_$_ABLEZeroAvoid
_ceilDate
_floorDate
_NSLog
_OBJC_CLASS_$_NSArray
_OBJC_CLASS_$_NSBundle
_OBJC_CLASS_$_NSData
_OBJC_CLASS_$_NSDate
_OBJC_CLASS_$_NSDictionary
_OBJC_CLASS_$_NSException
_OBJC_CLASS_$_NSIndexSet
_OBJC_CLASS_$_NSJSONSerialization
_OBJC_CLASS_$_NSMutableArray
_OBJC_CLASS_$_NSMutableDictionary
_OBJC_CLASS_$_NSMutableIndexSet
_OBJC_CLASS_$_NSNumber
_OBJC_CLASS_$_NSObject
_OBJC_CLASS_$_NSPredicate
_OBJC_CLASS_$_NSSortDescriptor
_OBJC_METACLASS_$_NSObject
__Block_object_assign
__Block_object_dispose
__NSConcreteGlobalBlock
__NSConcreteStackBlock
__Unwind_SjLj_Register
__Unwind_SjLj_Resume
__Unwind_SjLj_Unregister
___CFConstantStringClassReference
___fixunsdfdi
___floatundidf
___objc_personality_v0
___stack_chk_fail
___stack_chk_guard
___umoddi3
__objc_empty_cache
_lround
_lroundf
_objc_autorelease
_objc_autoreleaseReturnValue
_objc_copyStruct
_objc_enumerationMutation
_objc_exception_throw
_objc_getProperty
_objc_msgSend
_objc_msgSendSuper2
_objc_release
_objc_retain
_objc_retainAutorelease
_objc_retainAutoreleaseReturnValue
_objc_retainAutoreleasedReturnValue
_objc_retainBlock
_objc_setProperty_atomic
_objc_storeStrong
_round
dyld_stub_binder
