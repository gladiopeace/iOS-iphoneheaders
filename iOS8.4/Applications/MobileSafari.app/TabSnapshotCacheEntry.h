/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:56 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class UIImage;

@interface TabSnapshotCacheEntry : NSObject {

	char _updatingState;
	char _stateUpdateCancelled;
	UIImage* _snapshot;
	int _state;
	unsigned _decodedSize;

}

@property (nonatomic,retain) UIImage * snapshot;                                     //@synthesize snapshot=_snapshot - In the implementation block
@property (assign,nonatomic) int state;                                              //@synthesize state=_state - In the implementation block
@property (assign,getter=isUpdatingState,nonatomic) char updatingState;              //@synthesize updatingState=_updatingState - In the implementation block
@property (assign,nonatomic) char stateUpdateCancelled;                              //@synthesize stateUpdateCancelled=_stateUpdateCancelled - In the implementation block
@property (assign,nonatomic) unsigned decodedSize;                                   //@synthesize decodedSize=_decodedSize - In the implementation block
-(char)isUpdatingState;
-(void)setUpdatingState:(char)arg1 ;
-(char)stateUpdateCancelled;
-(void)setStateUpdateCancelled:(char)arg1 ;
-(unsigned)decodedSize;
-(void)setDecodedSize:(unsigned)arg1 ;
-(id)init;
-(int)state;
-(void)setState:(int)arg1 ;
-(UIImage *)snapshot;
-(void)setSnapshot:(UIImage *)arg1 ;
@end

