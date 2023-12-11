//
//  MimiHTE+Private.h
//  MimiHTE
//
//  Created by Merrick Sapsford on 04/12/2019.
//  Copyright © 2019 Mimi Hearing Technologies GmbH. All rights reserved.
//

#import <QuartzCore/QuartzCore.h>

#import "MimiHTE.h"
#import "HearingTestEngine.h"
#import "MimiAudioController.h"
#import "HearingTestTypes.h"
#import "AmbientMonitor.h"
#import "MimiUtility.h"

@interface MimiHTE () {
    std::shared_ptr<mimi::HearingTestEngine> engine;
    std::shared_ptr<mimi::AmbientMonitor> ambientMonitor;
}

@property (nonatomic, strong) MimiAudioController *audioController;
@property (nonatomic, strong) CADisplayLink *displayLink;

- (void)setUpEngineStatusObservers;

@end
