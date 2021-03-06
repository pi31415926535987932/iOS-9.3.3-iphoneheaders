/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:23 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/Agents/useractivityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UACornerActionManager;


@protocol UACornerActionItemConnectorProtocol <NSObject>
@property (copy,readonly) UACornerActionManager * cornerActionManager; 
@required
-(BOOL)acceptsItem:(id)arg1;
-(void)itemChanged:(id)arg1;
-(UACornerActionManager *)cornerActionManager;
-(void)flush;
-(void)suspend;
-(void)removeItem:(id)arg1;
-(id)items;
-(void)resume;
-(void)addItem:(id)arg1;
-(id)initWithManager:(id)arg1;
-(id)statusString;
-(void)terminate;

@end

