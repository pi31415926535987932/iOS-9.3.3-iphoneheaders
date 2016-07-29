/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:32 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Assistant/UIPlugins/Maps.siriUIBundle/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIControl.h>

@class SALocalSearchMapItem, MKMapItem, CLLocation, SiriUIKeyline, NSMutableArray, UILabel, SiriUIStarsView;

@interface MAResultView : UIControl {

	SALocalSearchMapItem* _mapItem;
	MKMapItem* _placeDataMapItem;
	CLLocation* _referenceLocation;
	BOOL _alwaysUsesBusinessLayout;
	int _layoutType;
	SiriUIKeyline* _bottomKeyline;
	NSMutableArray* _resultViewConstraints;
	id _notificationHandler;
	BOOL _forceTallerLayout;
	BOOL _hideBottomKeyline;
	UILabel* _nameLabel;
	UILabel* _streetLabel;
	UILabel* _reviewsLabel;
	UILabel* _distanceLabel;
	SiriUIStarsView* _starsView;
	double _fallbackDistance;

}

@property (nonatomic,retain) SALocalSearchMapItem * mapItem; 
@property (nonatomic,retain) CLLocation * referenceLocation; 
@property (assign,nonatomic) double fallbackDistance;                     //@synthesize fallbackDistance=_fallbackDistance - In the implementation block
@property (assign,nonatomic) BOOL alwaysUsesBusinessLayout;               //@synthesize alwaysUsesBusinessLayout=_alwaysUsesBusinessLayout - In the implementation block
@property (nonatomic,readonly) double preferredHeight; 
@property (assign,nonatomic) BOOL forceTallerLayout;                      //@synthesize forceTallerLayout=_forceTallerLayout - In the implementation block
@property (assign,nonatomic) BOOL hideBottomKeyline;                      //@synthesize hideBottomKeyline=_hideBottomKeyline - In the implementation block
@property (nonatomic,retain) UILabel * nameLabel;                         //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,retain) UILabel * streetLabel;                       //@synthesize streetLabel=_streetLabel - In the implementation block
@property (nonatomic,retain) UILabel * reviewsLabel;                      //@synthesize reviewsLabel=_reviewsLabel - In the implementation block
@property (nonatomic,retain) UILabel * distanceLabel;                     //@synthesize distanceLabel=_distanceLabel - In the implementation block
@property (nonatomic,retain) SiriUIStarsView * starsView;                 //@synthesize starsView=_starsView - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
-(BOOL)hideBottomKeyline;
-(BOOL)forceTallerLayout;
-(UILabel *)distanceLabel;
-(void)setForceTallerLayout:(BOOL)arg1 ;
-(void)setStreetLabel:(UILabel *)arg1 ;
-(void)setStarsView:(SiriUIStarsView *)arg1 ;
-(SiriUIStarsView *)starsView;
-(void)_updateLayoutForGeneric;
-(void)_updateLayoutForBusiness;
-(UILabel *)streetLabel;
-(void)setUpConstraints;
-(void)setReviewsLabel:(UILabel *)arg1 ;
-(void)setDistanceLabel:(UILabel *)arg1 ;
-(void)setHideBottomKeyline:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(CGSize)intrinsicContentSize;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(double)preferredHeight;
-(CLLocation *)referenceLocation;
-(double)fallbackDistance;
-(void)setFallbackDistance:(double)arg1 ;
-(UILabel *)nameLabel;
-(void)setReferenceLocation:(CLLocation *)arg1 ;
-(void)setNameLabel:(UILabel *)arg1 ;
-(BOOL)alwaysUsesBusinessLayout;
-(void)updateSubviews;
-(void)setAlwaysUsesBusinessLayout:(BOOL)arg1 ;
-(UILabel *)reviewsLabel;
-(SALocalSearchMapItem *)mapItem;
-(void)setMapItem:(SALocalSearchMapItem *)arg1 ;
@end
