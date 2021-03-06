//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSString, _HKDimension, _HKFactorization;

@interface HKUnit : NSObject <NSSecureCoding>
{
    long _reduceToken;
    _HKFactorization *_dimensionReduction;
    _HKFactorization *_baseUnitReduction;
    double _reducedProportionalSize;
    double _scaleOffset;
}

+ (BOOL)supportsSecureCoding;
+ (BOOL)_isValidUnitString:(id)arg1;
+ (id)_nullUnit;
+ (int)energyFormatterUnitFromUnit:(id)arg1;
+ (id)unitFromEnergyFormatterUnit:(int)arg1;
+ (int)lengthFormatterUnitFromUnit:(id)arg1;
+ (id)unitFromLengthFormatterUnit:(int)arg1;
+ (int)massFormatterUnitFromUnit:(id)arg1;
+ (id)unitFromMassFormatterUnit:(int)arg1;
+ (id)unitFromString:(id)arg1;
+ (id)percentUnit;
+ (id)countUnit;
+ (id)siemenUnit;
+ (id)siemenUnitWithMetricPrefix:(int)arg1;
+ (id)degreeFahrenheitUnit;
+ (id)degreeCelsiusUnit;
+ (id)kelvinUnit;
+ (id)kilocalorieUnit;
+ (id)calorieUnit;
+ (id)kilojoulesUnit;
+ (id)jouleUnit;
+ (id)jouleUnitWithMetricPrefix:(int)arg1;
+ (id)dayUnit;
+ (id)hourUnit;
+ (id)minuteUnit;
+ (id)milliseconds;
+ (id)secondUnit;
+ (id)secondUnitWithMetricPrefix:(int)arg1;
+ (id)atmosphereUnit;
+ (id)centimeterOfWaterUnit;
+ (id)millimeterOfMercuryUnit;
+ (id)pascalUnit;
+ (id)pascalUnitWithMetricPrefix:(int)arg1;
+ (id)pintImperialUnit;
+ (id)pintUSUnit;
+ (id)fluidOunceImperialUnit;
+ (id)fluidOunceUSUnit;
+ (id)literUnit;
+ (id)literUnitWithMetricPrefix:(int)arg1;
+ (id)inchUnit;
+ (id)footUnit;
+ (id)mileUnit;
+ (id)meterUnit;
+ (id)meterUnitWithMetricPrefix:(int)arg1;
+ (id)_moles;
+ (id)moleUnitWithMolarMass:(double)arg1;
+ (id)moleUnitWithMetricPrefix:(int)arg1 molarMass:(double)arg2;
+ (id)stoneUnit;
+ (id)ounceUnit;
+ (id)poundUnit;
+ (id)gramUnit;
+ (id)gramUnitWithMetricPrefix:(int)arg1;
+ (id)_prefixStringForMetricPrefix:(int)arg1;
+ (id)_foodEnergyUnitForLocale:(id)arg1;
+ (id)_temperatureUnitForLocale:(id)arg1;
+ (id)_personMassUnitForLocale:(id)arg1;
+ (id)_distanceUnitForLocale:(id)arg1;
+ (id)_heightUnitForLocale:(id)arg1;
@property(readonly, nonatomic) double scaleOffset; // @synthesize scaleOffset=_scaleOffset;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (double)_reducedProportionalSize;
- (id)_baseUnitReduction;
- (id)_baseUnitReductionAndProportionalSize:(out double *)arg1 withCycleSet:(id)arg2;
- (void)_reduceIfNecessaryWithCycleSet:(id)arg1;
- (id)_computeBaseUnitReductionAndProportionalSize:(out double *)arg1 withCycleSet:(id)arg2;
@property(readonly, nonatomic) _HKFactorization *_baseUnits;
- (id)_dimensionReduction;
- (BOOL)_isCompatibleWithDimension:(id)arg1;
- (BOOL)_isCompatibleWithUnit:(id)arg1;
- (double)_valueByConvertingValue:(double)arg1 toUnit:(id)arg2;
- (BOOL)isNull;
- (id)description;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) _HKDimension *dimension;
@property(readonly) NSString *unitString;
- (id)reciprocalUnit;
- (id)unitRaisedToPower:(int)arg1;
- (id)unitDividedByUnit:(id)arg1;
- (id)unitMultipliedByUnit:(id)arg1;
- (id)_init;
- (id)init;

@end

