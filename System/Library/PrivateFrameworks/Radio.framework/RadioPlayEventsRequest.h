/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:42 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Radio/RadioRequest.h>

@class SSURLConnectionRequest, RadioPlayEventCollection;

@interface RadioPlayEventsRequest : RadioRequest {

	SSURLConnectionRequest* _request;
	RadioPlayEventCollection* _playEventCollection;

}

@property (nonatomic,copy,readonly) RadioPlayEventCollection * playEventCollection;              //@synthesize playEventCollection=_playEventCollection - In the implementation block
-(id)init;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setDeviceName:(id)arg1 ;
-(RadioPlayEventCollection *)playEventCollection;
-(id)initWithStationHash:(id)arg1 stationID:(long long)arg2 playEvents:(id)arg3 ;
-(id)initWithStation:(id)arg1 playEvents:(id)arg2 ;
-(id)initWithPlayEventCollection:(id)arg1 ;
-(id)deviceName;
@end

