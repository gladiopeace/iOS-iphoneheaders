/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:29 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSCH3DResource.h>
#import <iWorkImport/TSCHUnretainedParent.h>
#import <iWorkImport/TSCH3DOptimizedTextureResource.h>

@class TSCH3DTexture, NSNumber;

@interface TSCH3DTextureResource : TSCH3DResource <TSCHUnretainedParent, TSCH3DOptimizedTextureResource> {

	TSCH3DTexture* mParent;
	NSNumber* mCachedHash;

}
-(void)clearParent;
-(bool)canLoadCachedFullMipmapBufferForDataCache:(id)arg1 ;
-(id)optimizedMipmapBuffer;
-(id)databufferForDataCache:(id)arg1 ;
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)get;
-(id)initWithParent:(id)arg1 ;
@end

