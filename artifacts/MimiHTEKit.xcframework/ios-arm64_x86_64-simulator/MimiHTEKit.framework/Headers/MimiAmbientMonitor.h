//
//  MimiAmbientMonitor.h
//  MimiHTE-iOS
//
//  Created by Volker Duemke on 21.11.18.
//  Copyright © 2018 Mimi Hearing Technologies GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MimiHTEKit/MimiAmbientLoudnessRating.h>

NS_ASSUME_NONNULL_BEGIN

@class MimiAmbientMonitor;

@protocol MimiAmbientMonitorDelegate <NSObject>

/**
 This method gets called repeatedly at a specific rate.
 @param loudnessLevel a float value between 0 and 1
 */
- (void)ambientMonitor:(nonnull MimiAmbientMonitor *)monitor didUpdateLoudnessLevel:(float)loudnessLevel;

/**
 This method gets called repeatedly at a specific rate.
 @param loudnessRating the current loudness rating, one of MimiAmbientLoudnessRating(Quiet, Ok, Loud)
 */
- (void)ambientMonitor:(nonnull MimiAmbientMonitor *)monitor didUpdateLoudnessRating:(MimiAmbientLoudnessRating)loudnessRating;

@optional

/**
 This method gets called repeatedly at a specific rate.
 @param currentRmsDb the current rms value in Db scale
*/
- (void)ambientMonitor:(MimiAmbientMonitor *)monitor didUpdateCurrentRmsDb:(float)currentRmsDb;

/**
This method gets called repeatedly at a specific rate.
@param averageRmsDb the average rms value in Db scale
*/
- (void)ambientMonitor:(nonnull MimiAmbientMonitor *)monitor didUpdateAverageRmsDb:(float)averageRmsDb;

/**
This method gets called repeatedly at a specific rate.
@param dbSpl the average spl value in Db scale, you must provide the micSensitivityOffset for this value to be correct
*/
- (void)ambientMonitor:(nonnull MimiAmbientMonitor *)monitor didUpdateAverageDbSpl:(float)dbSpl;

@end

@interface MimiAmbientMonitor : NSObject

/**
 The delegate you must register for to be able to receive updates about the current loudness situation.
 */
@property (nonatomic, weak) id<MimiAmbientMonitorDelegate> delegate;

/**
  * Get the ambient monitor reports, stopRecording needs to be called before.
  * @returns a json object containing the report, can be null if something went wrong
  */
@property (nonatomic, copy, nullable) NSDictionary *reports;

/**
 Create the ambient monitor
 @param micSensitivityOffset float value to adjust for the mic sensitivity of the actual device, this is needed to calculate the average DbSpl value
 */
- (instancetype)initWithMicSensitivityOffset:(float)micSensitivityOffset;

/**
 Set up the ambient monitor. This needs to be called before starting the test.
 */
- (void)setUp;

/**
 Tear down the ambient monitor. This needs to be called to destroy the ambient monitor after usage.
 */
- (void)tearDown;

/**
 Start Monitoring
 */
- (void)startMonitoring;

/**
 Stop Monitoring
 */
- (void)stopMonitoring;

/**
 Start Recording, startMonitoring needs to be called before
 */
- (void)startRecording;

/**
 Stop Recording
 */
- (void)stopRecording;

/**
 Clear Reports, stopRecording needs to be called before
 */
- (void)clearReports;

/// Ambient Monitor version number.
+ (NSString *)version;

@end

NS_ASSUME_NONNULL_END
