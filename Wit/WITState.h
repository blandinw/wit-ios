//
//  WITState.h
//  Wit
//
//  Created by Willy Blandin on 12. 10. 29..
//  Copyright (c) 2012년 Willy Blandin. All rights reserved.
//

#import "WITUploader.h"
#import "WITRecorder.h"

@interface WITState : NSObject
@property (nonatomic, copy) NSString* resourcePath;
@property (nonatomic, strong) WITRecorder* recorder;
@property (nonatomic, strong) WITUploader* uploader;
@property (nonatomic, copy) NSString *accessToken;
@property (nonatomic, strong) NSMutableDictionary *context;

+ (WITState *)sharedInstance;
+ (NSString *)UUID;
+ (NSBundle *)frameworkBundle;
@end
