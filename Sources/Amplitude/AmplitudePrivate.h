//
//  AmplitudePrivate.h
//  Amplitude
//
//  Created by Hao Liu on 3/15/20.
//  Copyright © 2020 Amplitude. All rights reserved.
//

#import "Amplitude.h"
#import "AMPServerZone.h"

@interface Amplitude ()

@property (nonatomic, copy, readwrite) NSString *apiKey;
@property (nonatomic, copy, readwrite) NSString *instanceName;
@property (nonatomic, readonly) AMPServerZone serverZone;

@end
