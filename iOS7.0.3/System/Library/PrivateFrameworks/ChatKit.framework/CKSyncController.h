/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:29 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@interface CKSyncController : NSObject {

	int _restoreStateChangedToken;
	int _attachmentRestoredToken;
	BOOL _restoring;

}

@property (assign,getter=isRestoring,nonatomic) BOOL restoring;              //@synthesize restoring=_restoring - In the implementation block
+(id)sharedInstance;
-(id)init;
-(BOOL)isRestoring;
-(void)prioritizeAttachmentAtPath:(id)arg1 ;
-(void)attachmentRestored;
-(void)updateRestoreState;
-(void)setRestoring:(BOOL)arg1 ;
-(void)postAttachmentRestored;
@end
