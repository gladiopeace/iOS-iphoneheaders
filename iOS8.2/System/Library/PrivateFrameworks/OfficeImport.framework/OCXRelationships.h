/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:37 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSMutableArray, NSMutableDictionary;

@interface OCXRelationships : NSObject {

	NSString* mPath;
	NSMutableArray* mRelationships;
	NSMutableDictionary* mRelationshipMap;
	unsigned mNextId;

}
-(void)dealloc;
-(id)path;
-(char)isEmpty;
-(id)initWithPath:(id)arg1 ;
-(id)addRelationshipForKey:(id)arg1 type:(id)arg2 target:(id)arg3 external:(char)arg4 ;
-(id)addRelationshipForKey:(id)arg1 type:(id)arg2 target:(id)arg3 ;
-(id)idForKey:(id)arg1 ;
-(void)writeRelationshipsToFilename:(id)arg1 stream:(id)arg2 ;
@end
