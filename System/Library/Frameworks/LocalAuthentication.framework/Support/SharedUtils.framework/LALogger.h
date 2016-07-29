/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:21 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/SharedUtils.framework/SharedUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface LALogger : NSObject {

	BOOL _loggingEnabled;
	BOOL _logOriginator;

}

@property (getter=isLoggingEnabled,nonatomic,readonly) BOOL loggingEnabled;              //@synthesize loggingEnabled=_loggingEnabled - In the implementation block
@property (nonatomic,readonly) BOOL logOriginator;                                       //@synthesize logOriginator=_logOriginator - In the implementation block
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(BOOL)logOriginator;
-(BOOL)isLoggingEnabled;
-(void)readPreferences;
@end
