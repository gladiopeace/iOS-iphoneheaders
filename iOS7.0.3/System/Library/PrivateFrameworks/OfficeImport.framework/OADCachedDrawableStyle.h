/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:24 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@interface OADCachedDrawableStyle : NSObject {

	int mFillCategory;
	unsigned mFillIndex;
	unsigned mStrokeIndex;
	unsigned mShadowIndex;
	unsigned char mReflectionOpacity;
	unsigned mTextStyleIndex;

}

@property (nonatomic,readonly) int fillCategory; 
@property (nonatomic,readonly) unsigned fillIndex; 
@property (nonatomic,readonly) unsigned strokeIndex; 
@property (nonatomic,readonly) unsigned shadowIndex; 
@property (nonatomic,readonly) unsigned char reflectionOpacity; 
@property (nonatomic,readonly) unsigned textStyleIndex; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(unsigned)fillIndex;
-(id)initWithFillCategory:(int)arg1 mFillIndex:(unsigned)arg2 strokeIndex:(unsigned)arg3 shadowIndex:(unsigned)arg4 reflectionOpacity:(unsigned char)arg5 textStyleIndex:(unsigned)arg6 ;
-(int)fillCategory;
-(unsigned)strokeIndex;
-(unsigned)shadowIndex;
-(unsigned char)reflectionOpacity;
-(unsigned)textStyleIndex;
@end

