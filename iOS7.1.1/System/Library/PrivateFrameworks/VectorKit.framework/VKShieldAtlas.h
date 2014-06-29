/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:42 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMapTable, VKPShieldPack, VKObjectPool;

@interface VKShieldAtlas : NSObject {

	NSMapTable* _atlasToImages;
	VKPShieldPack* _shieldPack;
	VKObjectPool* _artworkPool;

}
-(void)dealloc;
-(void)purge;
-(id)initWithShieldPack:(id)arg1 ;
-(id)artworkForShieldIdentifier:(id)arg1 textLength:(unsigned long long)arg2 contentScale:(double)arg3 extraScale:(double)arg4 size:(long long)arg5 numberOfLines:(unsigned long long)arg6 ;
@end

