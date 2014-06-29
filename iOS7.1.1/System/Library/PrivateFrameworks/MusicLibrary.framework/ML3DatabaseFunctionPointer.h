/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:53 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MusicLibrary/ML3DatabaseFunction.h>

@interface ML3DatabaseFunctionPointer : ML3DatabaseFunction {

	/*function pointer*/ void* _functionPointer;
	void* _userData;

}

@property (assign,nonatomic) /*function pointer*/ void* functionPointer;              //@synthesize functionPointer=_functionPointer - In the implementation block
@property (assign,nonatomic) void* userData;                                          //@synthesize userData=_userData - In the implementation block
-(void*)userData;
-(void)setUserData:(void*)arg1 ;
-(bool)registerWithConnection:(id)arg1 ;
-(/*function pointer*/ void*)functionPointer;
-(void)setFunctionPointer:(/*function pointer*/ void*)arg1 ;
@end

