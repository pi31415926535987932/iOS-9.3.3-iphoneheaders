/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:38 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/AppleIDAuthAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXMLParserDelegate.h>

@class NSMutableArray, NSString;

@interface XMLRPCEventBasedParserDelegate : NSObject <NSXMLParserDelegate> {

	XMLRPCEventBasedParserDelegate* myParent;
	NSMutableArray* myChildren;
	int myElementType;
	NSString* myElementKey;
	id myElementValue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isDictionaryElementType:(int)arg1 ;
-(id)parseInteger:(id)arg1 ;
-(id)parseDouble:(id)arg1 ;
-(id)parseBoolean:(id)arg1 ;
-(void)addElementValueToParent;
-(id)parseDateString:(id)arg1 withFormat:(id)arg2 ;
-(id)parseData:(id)arg1 ;
-(id)parseString:(id)arg1 ;
-(id)parseDate:(id)arg1 ;
-(void)parser:(id)arg1 foundCharacters:(id)arg2 ;
-(void)parser:(id)arg1 parseErrorOccurred:(id)arg2 ;
-(void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 ;
-(void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5 ;
-(void)setElementKey:(id)arg1 ;
-(id)elementKey;
-(void)setElementValue:(id)arg1 ;
-(id)elementValue;
-(void)dealloc;
-(int)elementType;
-(void)setElementType:(int)arg1 ;
-(id)initWithParent:(id)arg1 ;
-(id)parent;
-(void)setParent:(id)arg1 ;
@end
