//
//  MimiHTEStatus.h
//  MimiHTE
//
//  Created by Merrick Sapsford on 17/10/2018.
//  Copyright © 2018 Mimi Hearing Technologies GmbH. All rights reserved.
//

#ifndef MimiHTEStatus_h
#define MimiHTEStatus_h

typedef NS_ENUM(NSUInteger, MimiHTETestStatus) {
    MimiHTETestStatusUnknown,
    MimiHTETestStatusReady,
    MimiHTETestStatusRunning,
    MimiHTETestStatusStopped,
    MimiHTETestStatusFinished,
    MimiHTETestStatusFailed,
    MimiHTETestStatusInactiveSoft, //The user is currently inactive but doesn't require a full stop of the test.
    MimiHTETestStatusInactiveHard, //The user is currently inactive and requires a full stop of the test.
    MimiHTETestStatusTooFast // The user is currently responding too fast to reversals in the test.
};

typedef NS_ENUM(NSUInteger, MimiHTEEngineStatus) {
    MimiHTEEngineStatusUnknown,
    MimiHTEEngineStatusReady,
    MimiHTEEngineStatusRunning,
    MimiHTEEngineStatusStopped,
    MimiHTEEngineStatusFailed,
};

#endif /* MimiHTEStatus_h */
