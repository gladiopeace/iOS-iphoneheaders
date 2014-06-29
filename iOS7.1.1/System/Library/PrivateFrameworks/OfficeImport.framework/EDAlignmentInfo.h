/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:06 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <OfficeImport/EDImmutableObject.h>

@interface EDAlignmentInfo : NSObject <NSCopying, EDImmutableObject> {

	int mHorizontalAlignment;
	int mVerticalAlignment;
	int mIndent;
	int mTextRotation;
	bool mTextWrapped;
	bool mHorizontalAlignOverridden;
	bool mVerticalAlignOverridden;
	bool mIndentOverridden;
	bool mTextWrappedOveridden;
	bool mDoNotModify;

}
+(id)alignmentInfo;
-(id)init;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone)arg1 ;
-(bool)isVerticalAlignOverridden;
-(int)verticalAlignment;
-(void)setIndent:(int)arg1 ;
-(bool)isHorizontalAlignOverridden;
-(int)horizontalAlignment;
-(bool)isTextWrapped;
-(int)textRotation;
-(int)indent;
-(bool)isTextWrappedOverridden;
-(bool)isIndentOverridden;
-(void)setHorizontalAlignment:(int)arg1 ;
-(void)setVerticalAlignment:(int)arg1 ;
-(void)setTextWrapped:(bool)arg1 ;
-(void)setTextRotation:(int)arg1 ;
-(bool)isEqualToAlignmentInfo:(id)arg1 ;
-(void)setDoNotModify:(bool)arg1 ;
@end

