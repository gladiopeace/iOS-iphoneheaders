/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:30 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface _MPRemoteCommandTarget : NSObject {

	/*^block*/ id _block;

}

@property (nonatomic,copy) id block;              //@synthesize block=_block - In the implementation block
-(id)initWithTargetBlock:(/*^block*/ id)arg1 ;
-(long long)invokeWithRemoteCommandEvent:(id)arg1 ;
-(void).cxx_destruct;
-(/*^block*/ id)block;
-(void)setBlock:(/*^block*/ id)arg1 ;
@end

