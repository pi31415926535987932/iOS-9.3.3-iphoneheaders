/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:34 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Assistant/UIPlugins/Stocks.siriUIBundle/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class StocksAssistantStockSnippetController, Stock;

@interface StocksAssistantStockCell : UITableViewCell {

	StocksAssistantStockSnippetController* _snippetController;
	Stock* _stock;
	unsigned long long _requestType;

}

@property (assign,nonatomic,__weak) StocksAssistantStockSnippetController * snippetController;              //@synthesize snippetController=_snippetController - In the implementation block
@property (nonatomic,retain) Stock * stock;                                                                 //@synthesize stock=_stock - In the implementation block
@property (assign,nonatomic) unsigned long long requestType;                                                //@synthesize requestType=_requestType - In the implementation block
+(id)infoAttributes;
-(StocksAssistantStockSnippetController *)snippetController;
-(void)setSnippetController:(StocksAssistantStockSnippetController *)arg1 ;
-(void)setStockObject:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id)valueForAttribute:(unsigned long long)arg1 ;
-(void)setRequestType:(unsigned long long)arg1 ;
-(unsigned long long)requestType;
-(Stock *)stock;
-(void)setStock:(Stock *)arg1 ;
@end

