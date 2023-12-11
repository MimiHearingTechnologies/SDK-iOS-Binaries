//
//  MimiHTE.h
//  MimiHTE
//
//  Created by Merrick Sapsford on 09/10/2018.
//  Copyright © 2018 Mimi Hearing Technologies GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MimiHTEKit/MimiAmbientMonitor.h>
#import <MimiHTEKit/MimiAudioSession.h>
#import <MimiHTEKit/MimiHTETestType.h>
#import <MimiHTEKit/MimiHTEStatus.h>
#import <MimiHTEKit/MimiHTEar.h>
#import <MimiHTEKit/MimiHTEInteractionMode.h>

//! Project version number for MimiHTE.
FOUNDATION_EXPORT double MimiHTEVersionNumber;

//! Project version string for MimiHTE.
FOUNDATION_EXPORT const unsigned char MimiHTEVersionString[];

NS_ASSUME_NONNULL_BEGIN

@class MimiHTE;

@protocol MimiHTEDelegate <NSObject>

/// Test Engine updated the status of the currently active test.
/// @param engine Test Engine.
/// @param testStatus New test status.
- (void)mimiHTE:(nonnull MimiHTE *)engine didUpdateTestStatus:(MimiHTETestStatus)testStatus;

/// Test Engine updated the status of its current state.
/// @param engine Test Engine.
/// @param engineStatus New test engine status.
- (void)mimiHTE:(nonnull MimiHTE *)engine didUpdateEngineStatus:(MimiHTEEngineStatus)engineStatus;

/// Test Engine updated the progress of the currently active test.
/// @param engine Test Engine.
/// @param progress Current progress.
- (void)mimiHTE:(nonnull MimiHTE *)engine didUpdateProgress:(float)progress;

@optional

/// Test Engine updated the current ambient loudness level.
/// @param engine Test Engine
/// @param loudnessLevel loudness level value, between 0 and 1.
- (void)mimiHTE:(nonnull MimiHTE *)engine didUpdateLoudnessLevel:(float)loudnessLevel;

/// Test Engine updated the current ambient loudness rating
/// @param engine Test Engine
/// @param loudnessRating loudness rating, one of MimiAmbientLoudnessRating.
- (void)mimiHTE:(nonnull MimiHTE *)engine didUpdateLoudnessRating:(MimiAmbientLoudnessRating)loudnessRating;

@end

/// Audio Engine which can be used to perform Hearing Tests.
@interface MimiHTE : NSObject

/// Object that acts as a dekegate to the Test Engine.
@property (nonatomic, weak) id<MimiHTEDelegate> delegate;

/**
 The ear that the engine is testing.
 */
@property (nonatomic, assign, readonly) MimiHTEar ear;
@property (nonatomic, assign, readonly) double frequency;
/**
 Current status of the engine.
 */
@property (nonatomic, assign, readonly) MimiHTEEngineStatus engineStatus;
/**
 Current status of the test.
 */
@property (nonatomic, assign, readonly) MimiHTETestStatus testStatus;
/**
 Current progress of the active test.
 */
@property (nonatomic, assign, readonly) float progress;
/**
 Whether the user is currently responding to the test.
 
 This should be set to true when the user hears the test tone.
 */
@property (nonatomic, assign) BOOL isResponding;
/**
 The results of the test.
 */
@property (nonatomic, copy, nullable) NSData* measurements;
/**
 The reports the ambient monitor has recorded.
 */
@property (nonatomic, copy, nullable) NSData* ambientMonitorReports;
/**
 The sample rate that is used in the audio processing
 */
@property (nonatomic, assign, readonly) double sampleRate;
/**
 Version number of the HTE.
 */
@property(nonatomic, copy, readonly) NSString *version DEPRECATED_MSG_ATTRIBUTE("use MimiHTE.version.");
/**
 Initialize HTE for a new test.

 @param ear Ear to test.
 @param frequency Frequency to test.
 @return HTE instance.
 */
- (instancetype)initWithEar:(MimiHTEar)ear frequency:(double)frequency;

/**
 Set up the engine.
 
 This needs to be called before starting a test.

 @param testType Type of Hearing Test to execute.
 @param monitorEnabled set to YES if there is mic access and environmental monitoring should be enabled, otherwise NO
 @return Whether set up was successful.
 */
- (BOOL)setUpFor:(MimiHTETestType)testType ambientMonitorEnabled:(BOOL)monitorEnabled;

/**
 Tear down the engine.
 
 This needs to be called to successfully destroy the engine after a test.
 */
- (void)tearDown;
/**
 Start running the test.

 @return Whether the test could be started.
 */
- (BOOL)start;
/**
 Stop the active test.
 */
- (void)stop;
/**
 Reset the active test.
 */
- (void)reset;
/**
 Set the interaction mode for the active test.
 
 @param interactionMode - Interaction mode to set.
 */
- (void)setInteractionMode:(id<MimiHTEInteractionMode>)interactionMode;

/// Engine version number.
+ (NSString *)version;

@end

NS_ASSUME_NONNULL_END
