/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:25 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface DeferredFrameworkLoader : NSObject {

	NSString* _path;
	void* _frameworkHandle;
	long long _frameworkLoadedToken;

}

@property (nonatomic,retain) NSString * path;                             //@synthesize path=_path - In the implementation block
@property (assign,nonatomic) void* frameworkHandle;                       //@synthesize frameworkHandle=_frameworkHandle - In the implementation block
@property (assign,nonatomic) long long frameworkLoadedToken;              //@synthesize frameworkLoadedToken=_frameworkLoadedToken - In the implementation block
+(id)PhotosUIFrameworkPath;
-(void)dealloc;
-(id)path;
-(void)setPath:(id)arg1 ;
-(id)initWithPath:(id)arg1 ;
-(Class)classFromString:(id)arg1 ;
-(void*)frameworkHandle;
-(void)setFrameworkHandle:(void*)arg1 ;
-(long long)frameworkLoadedToken;
-(void)setFrameworkLoadedToken:(long long)arg1 ;
@end

