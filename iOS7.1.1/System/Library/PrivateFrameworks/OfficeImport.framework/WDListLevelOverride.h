/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:18 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class WDListLevel, WDDocument;

@interface WDListLevelOverride : NSObject {

	WDListLevel* mListLevel;
	WDDocument* mDocument;
	unsigned char mLevel;
	long long mStartNumber;
	bool mStartNumberOverridden;

}
-(void)dealloc;
-(void)setLevel:(unsigned char)arg1 ;
-(unsigned char)level;
-(id)document;
-(id)initWithDocument:(id)arg1 ;
-(bool)isListLevelOverridden;
-(id)listLevel;
-(long long)startNumber;
-(void)setStartNumber:(long long)arg1 ;
-(id)mutableListLevel;
-(bool)isStartNumberOverridden;
@end

