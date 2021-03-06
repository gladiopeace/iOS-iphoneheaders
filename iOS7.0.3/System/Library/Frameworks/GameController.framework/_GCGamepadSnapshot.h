/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:25 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <GameController/_GCGamepad.h>
#import <GameController/_GCSnapshot.h>

@class NSData;

@interface _GCGamepadSnapshot : _GCGamepad <_GCSnapshot> {

	NSData* _snapshotData;

}

@property (copy) NSData * snapshotData;              //@synthesize snapshotData=_snapshotData - In the implementation block
-(void)setSnapshotData:(id)arg1 ;
-(id)initWithController:(id)arg1 snapshotData:(id)arg2 ;
-(id)snapshotData;
-(id)initWithSnapshotData:(id)arg1 ;
-(void).cxx_destruct;
@end

