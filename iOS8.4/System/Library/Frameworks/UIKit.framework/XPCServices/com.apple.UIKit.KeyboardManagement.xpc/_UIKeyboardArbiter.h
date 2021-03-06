/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:19:23 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/XPCServices/com.apple.UIKit.KeyboardManagement.xpc/com.apple.UIKit.KeyboardManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <com.apple.UIKit.KeyboardManagement/NSXPCListenerDelegate.h>
#import <com.apple.UIKit.KeyboardManagement/FBSWorkspaceDelegate.h>
#import <com.apple.UIKit.KeyboardManagement/FBSSceneDelegate.h>

@class NSXPCListener, NSMutableArray, _UIKeyboardArbiterHandle, FBSWorkspace, FBSScene, FBSSceneContext, _UIKeyboardChangedInformation, NSString;

@interface _UIKeyboardArbiter : NSObject <NSXPCListenerDelegate, FBSWorkspaceDelegate, FBSSceneDelegate> {

	NSXPCListener* _listener;
	NSMutableArray* _clients;
	_UIKeyboardArbiterHandle* _activeHandle;
	FBSWorkspace* _workspace;
	FBSScene* _scene;
	FBSSceneContext* _context;
	unsigned _contextID;
	BOOL _shouldAttach;
	_UIKeyboardChangedInformation* _lastUpdate;

}

@property (nonatomic,retain) _UIKeyboardChangedInformation * lastUpdate;              //@synthesize lastUpdate=_lastUpdate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedKeyboardArbiter;
-(void)setLastUpdate:(_UIKeyboardChangedInformation *)arg1 ;
-(id)proxyForClient:(id)arg1 ;
-(void)updateKeyboardStatus:(id)arg1 fromHandler:(id)arg2 ;
-(void)queueUpdateKeyboardStatus:(id)arg1 fromHandler:(id)arg2 ;
-(_UIKeyboardChangedInformation *)lastUpdate;
-(void)_configureSceneForContextID:(unsigned)arg1 attached:(BOOL)arg2 ;
-(void)newClientConnected:(id)arg1 withExpectedState:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)scene:(id)arg1 didUpdateWithDiff:(id)arg2 transitionContext:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)workspaceDidBeginTransaction:(id)arg1 ;
-(void)workspaceDidEndTransaction:(id)arg1 ;
-(void)workspace:(id)arg1 didCreateScene:(id)arg2 withTransitionContext:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)workspace:(id)arg1 willDestroyScene:(id)arg2 withTransitionContext:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)workspace:(id)arg1 didReceiveActions:(id)arg2 ;
-(void)scene:(id)arg1 didReceiveActions:(id)arg2 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
@end

