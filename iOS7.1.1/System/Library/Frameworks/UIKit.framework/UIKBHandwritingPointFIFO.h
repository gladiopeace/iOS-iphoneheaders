/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:08 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@interface UIKBHandwritingPointFIFO : NSObject {

	UIKBHandwritingPointFIFO* _nextFIFO;

}

@property (nonatomic,retain) UIKBHandwritingPointFIFO * nextFIFO;              //@synthesize nextFIFO=_nextFIFO - In the implementation block
-(void)dealloc;
-(void)flush;
-(void)clear;
-(void)addPoint:(CGPoint)arg1 ;
-(id)initWithFIFO:(id)arg1 ;
-(void)setNextFIFO:(id)arg1 ;
-(id)nextFIFO;
-(void)emitPoint:(CGPoint)arg1 ;
@end

