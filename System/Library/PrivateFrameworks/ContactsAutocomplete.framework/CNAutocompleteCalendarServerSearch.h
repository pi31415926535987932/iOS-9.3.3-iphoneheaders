/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:04 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNAutocompleteSearch.h>

@class EKEventStore, CNAutocompleteCalendarServerOperationFactory, CNStringTokenizer, NSString;

@interface CNAutocompleteCalendarServerSearch : NSObject <CNAutocompleteSearch> {

	EKEventStore* _eventStore;
	CNAutocompleteCalendarServerOperationFactory* _operationFactory;
	CNStringTokenizer* _tokenizer;

}

@property (nonatomic,readonly) EKEventStore * eventStore;                                                    //@synthesize eventStore=_eventStore - In the implementation block
@property (nonatomic,readonly) CNAutocompleteCalendarServerOperationFactory * operationFactory;              //@synthesize operationFactory=_operationFactory - In the implementation block
@property (nonatomic,retain) CNStringTokenizer * tokenizer;                                                  //@synthesize tokenizer=_tokenizer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(CNStringTokenizer *)tokenizer;
-(id)executeRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithEventStore:(id)arg1 operationFactory:(id)arg2 ;
-(id)queryForFetchRequest:(id)arg1 ;
-(id)runQuery:(id)arg1 forSource:(id)arg2 resultsFactory:(id)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(CNAutocompleteCalendarServerOperationFactory *)operationFactory;
-(/*^block*/id)resultTransformWithFactory:(id)arg1 ;
-(void)setTokenizer:(CNStringTokenizer *)arg1 ;
-(EKEventStore *)eventStore;
@end

