/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:19 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSArray;

@interface TSUSharedLocale : NSObject {

	CFLocaleRef mCurrentLocale;
	NSArray* mObserverObjects;

}
+(id)allocWithZone:(NSZone)arg1 ;
+(id)_singletonAlloc;
+(id)sharedLocale;
-(oneway void)release;
-(id)retain;
-(void)dealloc;
-(id)init;
-(id)autorelease;
-(unsigned long long)retainCount;
-(id)copyWithZone:(NSZone)arg1 ;
-(CFLocaleRef)currentLocale;
-(void)datePreferencesChanged:(id)arg1 ;
@end

