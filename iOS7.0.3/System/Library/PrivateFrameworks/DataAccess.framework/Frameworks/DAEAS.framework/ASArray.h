/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:54 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <DAEAS/ASItem.h>
#import <DAEAS/ASParsingWithSubItems.h>
#import <DAEAS/ASParsingFrontingBasicType.h>

@class NSMutableArray, NSDictionary;

@interface ASArray : ASItem <ASParsingWithSubItems, ASParsingFrontingBasicType> {

	NSMutableArray* _items;
	NSDictionary* _subclassRuleSet;

}
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
-(void)dealloc;
-(id)description;
-(void)addItem:(id)arg1 ;
-(id)initWithSubclassRuleSet:(id)arg1 ;
-(id)commonValue;
-(id)asParseRules;
@end

