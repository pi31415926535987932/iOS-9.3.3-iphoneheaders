/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:40 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBStarkSessionConfiguring.h>

@class AVExternalDevice, FBSDisplay, UIScreen, UITraitCollection, NSSet, CRVehicleInformation, NSString;

@interface SBStarkSessionConfiguration : NSObject <SBStarkSessionConfiguring> {

	CRVehicleInformation* _vehicleInformation;
	AVExternalDevice* _device;
	unsigned long long _interactionAffordances;
	long long _layoutJustification;
	FBSDisplay* _display;
	UIScreen* _screen;
	double _screenScale;
	UITraitCollection* _traitCollection;
	BOOL _connectedWirelessly;
	BOOL _geoSupported;
	BOOL _knownVehicle;
	BOOL _OEMIconVisible;
	BOOL _pairedVehicle;
	NSSet* _protocols;
	BOOL _acBackSupported;

}

@property (assign,getter=isACBackSupported,nonatomic) BOOL acBackSupported;                                      //@synthesize acBackSupported=_acBackSupported - In the implementation block
@property (assign,getter=isGeoSupported,nonatomic) BOOL geoSupported; 
@property (assign,getter=isKnownVehicle,nonatomic) BOOL knownVehicle; 
@property (assign,getter=isPairedVehicle,nonatomic) BOOL pairedVehicle; 
@property (nonatomic,copy) NSSet * sessionProtocols; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) AVExternalDevice * device; 
@property (nonatomic,readonly) unsigned long long interactionAffordances; 
@property (nonatomic,readonly) long long layoutJustification; 
@property (nonatomic,readonly) FBSDisplay * display; 
@property (nonatomic,readonly) UIScreen * screen; 
@property (nonatomic,readonly) double screenScale; 
@property (nonatomic,copy,readonly) UITraitCollection * traitCollection; 
@property (getter=isAmbientBrightnessNighttime,nonatomic,readonly) BOOL ambientBrightnessNighttime; 
@property (getter=isConnectedWirelessly,nonatomic,readonly) BOOL connectedWirelessly; 
@property (getter=isOEMIconVisible,nonatomic,readonly) BOOL OEMIconVisible; 
+(id)configurationForSettingsLayout;
-(BOOL)isPairedVehicle;
-(NSSet *)sessionProtocols;
-(BOOL)isGeoSupported;
-(unsigned long long)interactionAffordances;
-(long long)layoutJustification;
-(BOOL)isACBackSupported;
-(BOOL)isAmbientBrightnessNighttime;
-(BOOL)isKnownVehicle;
-(BOOL)isOEMIconVisible;
-(id)initWithVehicleInformation:(id)arg1 device:(id)arg2 screen:(id)arg3 ;
-(void)setGeoSupported:(BOOL)arg1 ;
-(void)setKnownVehicle:(BOOL)arg1 ;
-(void)setPairedVehicle:(BOOL)arg1 ;
-(void)setSessionProtocols:(NSSet *)arg1 ;
-(void)setAcBackSupported:(BOOL)arg1 ;
-(UITraitCollection *)traitCollection;
-(id)_init;
-(UIScreen *)screen;
-(FBSDisplay *)display;
-(double)screenScale;
-(BOOL)isConnectedWirelessly;
-(AVExternalDevice *)device;
@end

