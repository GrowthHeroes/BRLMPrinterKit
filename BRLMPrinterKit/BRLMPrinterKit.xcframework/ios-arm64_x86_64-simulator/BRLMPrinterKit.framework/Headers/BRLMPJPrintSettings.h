// ------------------------------------------------------
//  BRLMPJPrintSettings.h
//  BRLMPrinterKit
//
//  Copyright © 2020 Brother Industries, Ltd. All rights reserved.
// ------------------------------------------------------

#import <BRLMPrinterKit/BRLMPrintSettingsProtocol.h>
#import <BRLMPrinterKit/BRLMPrintImageSettings.h>

#import <BRLMPrinterKit/BRLMPJPrintSettingsPaperSize.h>

typedef float BRLMPrintSettingsLengthScale;


typedef NS_ENUM(NSInteger, BRLMPJPrintSettingsPrintSpeed) {
    BRLMPJPrintSettingsPrintSpeedHighSpeed,
    BRLMPJPrintSettingsPrintSpeedMediumHighSpeed,
    BRLMPJPrintSettingsPrintSpeedMediumLowSpeed,
    BRLMPJPrintSettingsPrintSpeedLowSpeed,
    BRLMPJPrintSettingsPrintSpeedFast_DraftQuality,
    BRLMPJPrintSettingsPrintSpeedFast_LineConversion,
    BRLMPJPrintSettingsPrintSpeedUsePrinterSetting,
    BRLMPJPrintSettingsPrintSpeed2_5inchPerSec,
    BRLMPJPrintSettingsPrintSpeed1_9inchPerSec,
    BRLMPJPrintSettingsPrintSpeed1_6inchPerSec,
    BRLMPJPrintSettingsPrintSpeed1_1inchPerSec,
};

typedef NS_ENUM(NSInteger, BRLMPJPrintSettingsDensity) {
    BRLMPJPrintSettingsDensityWeakLevel5,
    BRLMPJPrintSettingsDensityWeakLevel4,
    BRLMPJPrintSettingsDensityWeakLevel3,
    BRLMPJPrintSettingsDensityWeakLevel2,
    BRLMPJPrintSettingsDensityWeakLevel1,
    BRLMPJPrintSettingsDensityNeutral,
    BRLMPJPrintSettingsDensityStrongLevel1,
    BRLMPJPrintSettingsDensityStrongLevel2,
    BRLMPJPrintSettingsDensityStrongLevel3,
    BRLMPJPrintSettingsDensityStrongLevel4,
    BRLMPJPrintSettingsDensityStrongLevel5,
    BRLMPJPrintSettingsDensityUsePrinterSetting,
};


typedef NS_ENUM(NSInteger, BRLMPJPrintSettingsFeedMode) {
    BRLMPJPrintSettingsFeedModeNoFeed,
    BRLMPJPrintSettingsFeedModeFixedPage,
    BRLMPJPrintSettingsFeedModeEndOfPage,
    BRLMPJPrintSettingsFeedModeEndOfPageRetract,
};


typedef NS_ENUM(NSInteger, BRLMPJPrintSettingsPaperInsertionPosition) {
    BRLMPJPrintSettingsPaperInsertionPositionLeft,
    BRLMPJPrintSettingsPaperInsertionPositionCenter,
    BRLMPJPrintSettingsPaperInsertionPositionRight,
};

typedef NS_ENUM(NSInteger, BRLMPJPrintSettingsPaperType) {
    BRLMPJPrintSettingsPaperTypeRoll,
    BRLMPJPrintSettingsPaperTypeCutSheet,
    BRLMPJPrintSettingsPaperTypePerforatedRoll,
};

typedef NS_ENUM(NSInteger, BRLMPJPrintSettingsRollCase) {
    BRLMPJPrintSettingsRollCaseNone,
    BRLMPJPrintSettingsRollCasePARC001_NoAntiCurl,
    BRLMPJPrintSettingsRollCasePARC001,
    BRLMPJPrintSettingsRollCasePARC001_ShortFeed,
    BRLMPJPrintSettingsRollCaseKeepPrinterSetting,
};


NS_ASSUME_NONNULL_BEGIN

@interface BRLMPJPrintSettings : NSObject <NSCoding, BRLMPrintSettingsProtocol, BRLMPrintImageSettings>


@property (nonatomic, retain) BRLMPJPrintSettingsPaperSize* paperSize;
@property (nonatomic) BRLMPJPrintSettingsPaperType paperType;
@property (nonatomic) BRLMPJPrintSettingsPaperInsertionPosition paperInsertionPosition;
@property (nonatomic) BRLMPJPrintSettingsFeedMode feedMode;
@property (nonatomic) NSUInteger extraFeedDots;
@property (nonatomic) BRLMPJPrintSettingsDensity density;
@property (nonatomic) BRLMPJPrintSettingsRollCase rollCase;
@property (nonatomic) BRLMPJPrintSettingsPrintSpeed printSpeed;
@property (nonatomic) BOOL usingCarbonCopyPaper;
@property (nonatomic) BOOL printDashLine;
@property (nonatomic) NSUInteger forceStretchPrintableArea;

// override
- (nullable instancetype)initDefaultPrintSettingsWithPrinterModel:(BRLMPrinterModel)model;
- (nullable instancetype)copyWithPrinterModel:(BRLMPrinterModel)model;
@end


NS_ASSUME_NONNULL_END
