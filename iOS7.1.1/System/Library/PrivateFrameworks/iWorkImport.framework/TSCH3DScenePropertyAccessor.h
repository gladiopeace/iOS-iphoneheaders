/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:27 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSCHUnretainedParent.h>

@class TSCH3DScene;

@interface TSCH3DScenePropertyAccessor : NSObject <TSCHUnretainedParent> {

	TSCH3DScene* mScene;

}

@property (nonatomic,readonly) TSCH3DScene * scene; 
+(id)accessorWithScene:(id)arg1 ;
-(void)clearParent;
-(id)initWithScene:(id)arg1 ;
-(id)scene;
-(void)dealloc;
@end

