/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:07 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <OfficeImport/EDImmutableObject.h>

@class NSString, EDRunsCollection, EDPhoneticInfo;

@interface EDString : NSObject <NSCopying, EDImmutableObject> {

	NSString* mString;
	EDRunsCollection* mRuns;
	EDPhoneticInfo* mPhoneticInfo;
	bool mDoNotModify;

}
+(id)string;
+(id)edStringWithString:(id)arg1 ;
+(id)edStringWithString:(id)arg1 runs:(id)arg2 ;
-(bool)isEmpty;
-(bool)areThereRuns;
-(id)firstRunFont;
-(void)dealloc;
-(bool)isEqualToString:(id)arg1 ;
-(id)init;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)string;
-(id)initWithString:(id)arg1 ;
-(void)setString:(id)arg1 ;
-(id)runs;
-(void)setRuns:(id)arg1 ;
-(id)phoneticInfo;
-(void)setDoNotModify:(bool)arg1 ;
-(id)initWithString:(id)arg1 runs:(id)arg2 ;
-(bool)isEqualToEDString:(id)arg1 ;
-(void)setPhoneticInfo:(id)arg1 ;
@end
