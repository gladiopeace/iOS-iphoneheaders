/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:16 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADClient.h>
#import <OfficeImport/OADImageRecolorInfoClient.h>

@class OADImageRecolorInfo, PDPlaceholder, PDAnimationInfo;

@interface PDOfficeArtClient : NSObject <OADClient, OADImageRecolorInfoClient> {

	OADImageRecolorInfo* mImageRecolorInfo;
	PDPlaceholder* mPlaceholder;
	bool mIsComment;
	PDAnimationInfo* mAnimationInfo;
	bool mHasOleChart;
	int mInheritedTextStylePlaceholderType;

}

@property (assign,nonatomic) int inheritedTextStylePlaceholderType; 
-(void)dealloc;
-(CGRect)bounds;
-(id)init;
-(void)setPlaceholder:(id)arg1 ;
-(id)placeholder;
-(bool)hasBounds;
-(bool)hasPlaceholder;
-(bool)hasAnimationInfo;
-(void)setAnimationInfo:(id)arg1 ;
-(void)setInheritedTextStylePlaceholderType:(int)arg1 ;
-(void)setImageRecolorInfo:(id)arg1 ;
-(void)setHasOleChart:(bool)arg1 ;
-(bool)hasOleChart;
-(id)imageRecolorInfo;
-(bool)isComment;
-(void)setIsComment:(bool)arg1 ;
-(id)animationInfo;
-(int)inheritedTextStylePlaceholderType;
@end

