/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:29 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSMutableArray, TSCH3DTextureAtlasTextureResource;

@interface TSCH3DTextureAtlasTexture : NSObject {

	tvec2<int> mSize;
	float mSamples;
	NSMutableArray* mLabels;
	vector<glm::detail::tvec2<int>, std::__1::allocator<glm::detail::tvec2<int> > >* mPositions;
	long long mCurrentxpos;
	long long mCurrentypos;
	long long mCurrentheight;
	TSCH3DTextureAtlasTextureResource* mResource;

}

@property (nonatomic,readonly) tvec2<int> size; 
-(void)p_invalidateResource;
-(id)getTextureDataBuffer;
-(tvec2<int>)addLabel:(id)arg1 ;
-(void)dealloc;
-(tvec2<int>)size;
-(id)initWithSize:(tvec2<int>)arg1 ;
-(id).cxx_construct;
-(void).cxx_destruct;
-(id)resource;
@end

