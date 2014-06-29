/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:23 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol VCCallSessionDelegate
@required
-(void)session:(id)arg1 withCallID:(unsigned)arg2 videoIsDegraded:(bool)arg3 isRemote:(bool)arg4;
-(void)session:(id)arg1 remoteMediaStalled:(bool)arg2;
-(void)session:(id)arg1 receivedNoPacketsForSeconds:(double)arg2;
-(void)session:(id)arg1 packMeters:(char*)arg2 withLength:(char*)arg3;
-(void)didChangeLocalVariablesForSession:(id)arg1;
-(void)session:(id)arg1 sendRelayResponse:(id)arg2;
-(int)currentCameraID;
-(void)session:(id)arg1 sendIPChangeRequest:(id)arg2 withCallID:(unsigned)arg3;
-(void)session:(id)arg1 cancelRelayRequest:(id)arg2;
-(void)session:(id)arg1 withCallID:(unsigned)arg2 networkHint:(bool)arg3;
-(void)session:(id)arg1 didStart:(bool)arg2 connectionType:(unsigned)arg3 localUseCell:(unsigned)arg4 remoteUseCell:(unsigned)arg5 error:(id)arg6;
-(void)session:(id)arg1 didStopWithError:(id)arg2;
-(void)session:(id)arg1 didStopWithDelay:(long long)arg2 error:(id)arg3;
-(void)remoteVideoDidPause:(bool)arg1 callID:(unsigned)arg2;
-(void)remoteAudioDidPause:(bool)arg1 callID:(unsigned)arg2;
-(void)session:(id)arg1 didChangeRemoteScreenAttributes:(id)arg2;
-(bool)session:(id)arg1 startVideoIO:(id*)arg2 captureRule:(id)arg3 isUnpausing:(bool)arg4;
-(bool)stopVideoIO:(bool)arg1 error:(id*)arg2;
-(bool)didDetectBandwidth:(bool)arg1 upstreamBandwidth:(int)arg2 downstreamBandwidth:(int)arg3;
-(void)session:(id)arg1 inititiateRelayRequest:(id)arg2;
-(void)setBWEOptions:(bool)arg1 UseNewBWEMode:(bool)arg2 FakeLargeFrameMode:(bool)arg3 ProbingSenderLog:(bool)arg4;
-(void)session:(id)arg1 didReceiveARPLData:(id)arg2 fromCallID:(unsigned)arg3;
-(void)session:(id)arg1 didChangeVideoRule:(id)arg2;
-(bool)session:(id)arg1 receivedRemoteFrame:(CVBufferRef)arg2 atTime:(SCD_Struct_VC16)arg3 withScreenAttributes:(id)arg4 videoAttributes:(id)arg5 isFirstFrame:(bool)arg6;
-(void)session:(id)arg1 didSeeThermalChange:(double)arg2;
@end

