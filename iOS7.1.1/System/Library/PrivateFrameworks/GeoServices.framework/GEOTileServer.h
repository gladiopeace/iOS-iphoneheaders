/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 4:04:05 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/geod
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <geod/geod-Structs.h>
#import <geod/GEOServer.h>
#import <geod/GEOTileLoaderInternalDelegate.h>

@interface GEOTileServer : GEOServer <GEOTileLoaderInternalDelegate>
+(id)identifier;
-(void)daemonWillTerminateWithReason:(int)arg1 ;
-(void)peerDidConnect:(id)arg1 ;
-(BOOL)canHandleIncomingMessage:(id)arg1 ;
-(void)handleIncomingMessage:(id)arg1 fromPeer:(id)arg2 ;
-(void)peerDidDisconnect:(id)arg1 ;
-(BOOL)_otherPeerIsPreloading:(id)arg1 ;
-(void)_receivedTile:(id)arg1 error:(id)arg2 info:(id)arg3 forKey:(const GEOTileKey*)arg4 forPeer:(id)arg5 ;
-(void)_loadTiles:(id)arg1 fromPeer:(id)arg2 ;
-(void)_cancel:(id)arg1 fromPeer:(id)arg2 ;
-(void)_shrinkDB:(id)arg1 fromPeer:(id)arg2 ;
-(void)_corrupt:(id)arg1 fromPeer:(id)arg2 ;
-(void)_beginPreload:(id)arg1 fromPeer:(id)arg2 ;
-(void)_endPreload:(id)arg1 fromPeer:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)tileLoader:(id)arg1 submittedTilesToNetwork:(id)arg2 forClient:(id)arg3 ;
@end

