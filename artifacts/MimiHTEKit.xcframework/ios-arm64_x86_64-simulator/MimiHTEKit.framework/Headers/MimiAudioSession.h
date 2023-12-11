//
//  MimiAudioSession.h
//  MimiHTE-iOS
//
//  Created by Merrick Sapsford on 18/12/2018.
//  Copyright © 2018 Mimi Hearing Technologies GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 Represents any active Audio Session that will be used by Mimi HTE.
 
 This must be active before audio can be used with MimiHTE. Once activated,
 you are also responsible for deactivating and cleaning up the session.
 */
@interface MimiAudioSession : NSObject

/**
 The session.

 @return Mimi Audio Session.
 */
+ (instancetype)sharedSession;
+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;
    
/**
 Configure and activates the session so that it can be used.
 This needs to be called before the engine and the test is setup
 @return Error if session could not be started.
 */
- (nullable NSError *)start;
/**
 Deactivates and restores the inital session.
 Call this when done with the tests.

 @return Error if session could not be stopped.
 */
- (nullable NSError *)stop;

@end

NS_ASSUME_NONNULL_END
