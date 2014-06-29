/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:18 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, WDDocument;

@interface WDRevisionAuthorTable : NSObject {

	NSMutableArray* mAuthors;
	WDDocument* mDocument;

}
-(void)dealloc;
-(id)initWithDocument:(id)arg1 ;
-(id)authors;
-(unsigned long long)authorCount;
-(id)authorAt:(unsigned long long)arg1 ;
-(unsigned long long)authorAddLookup:(id)arg1 ;
-(void)addAuthor:(id)arg1 ;
@end

