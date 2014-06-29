/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:38 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSDGLLayerContext.h>

@class EAGLContext;

@interface TSDGLLayerContext : NSObject <TSDGLLayerContext> {

	EAGLContext* mContext;
	unsigned mRenderbuffer;
	unsigned mFramebuffer;

}
-(bool)createFramebufferFromLayer:(id)arg1 ;
-(void)presentRenderbuffer;
-(bool)makeCurrentContext;
-(void)dealloc;
-(id)init;
-(bool)isValid;
-(void)lock;
-(void)unlock;
-(void)teardown;
@end
