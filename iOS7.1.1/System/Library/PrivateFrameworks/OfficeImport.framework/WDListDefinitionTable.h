/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:18 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSMutableArray, WDDocument, WDListDefinition;

@interface WDListDefinitionTable : NSObject {

	NSMutableArray* mListDefinitions;
	CFDictionaryRef mListDefinitionMap;
	unsigned mNextIdIndex;
	WDDocument* mDocument;
	WDListDefinition* mLastKnownGoodListDefinition;

}
-(int)nextId;
-(void)setLastKnowGoodListDefinition:(id)arg1 ;
-(void)dealloc;
-(id)document;
-(id)initWithDocument:(id)arg1 ;
-(id)addDefinition:(long long)arg1 ;
-(id)definitionWithId:(long long)arg1 ;
-(unsigned long long)definitionCount;
-(id)definitionAt:(unsigned long long)arg1 ;
-(id)addDefinition;
@end

