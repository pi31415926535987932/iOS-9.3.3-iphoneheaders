/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:01 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class PKPrinter;

@interface UIPrinterSetupDisplayPINViewController : UIViewController {

	PKPrinter* _printer;

}

@property (nonatomic,retain) PKPrinter * printer;              //@synthesize printer=_printer - In the implementation block
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(PKPrinter *)printer;
-(void)setPrinter:(PKPrinter *)arg1 ;
-(id)initWithPrinter:(id)arg1 ;
-(void)enterPIN;
-(void)showDisplayMessage:(long long)arg1 ;
@end

