/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:34:29 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <sharingd/sharingd-Structs.h>
#import <sharingd/SDSharePointBrowserDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_source, SDNodeBrowserDelegate;
@class NSString, NSArray, NSObject, SDStatusMonitor, NSMutableSet, SDAutoFSBrowser, SDDomainBrowser, SDManagedBrowser, SDConnectedBrowser, SDWorkgroupBrowser, SDSharePointBrowser, NSMutableDictionary;

@interface SDNodeBrowser : NSObject <SDSharePointBrowserDelegate> {

	NSString* _kind;
	SFNodeRef _parent;
	NSArray* _protocols;
	NSString* _protocol;
	long _mode;
	int _error;
	BOOL _combineWorkgroups;
	NSObject<OS_dispatch_queue>* _queue;
	NSObject<OS_dispatch_source>* _timer;
	SDStatusMonitor* _monitor;
	NSMutableSet* _odiskDomains;
	NSMutableSet* _airDropDomains;
	NSMutableSet* _bonjourDomains;
	NSMutableSet* _windowsWorkgroups;
	SDAutoFSBrowser* _autofsBrowser;
	SDDomainBrowser* _domainBrowser;
	SDManagedBrowser* _managedBrowser;
	SDConnectedBrowser* _connectedBrowser;
	SDWorkgroupBrowser* _workgroupBrowser;
	SDSharePointBrowser* _sharePointBrowser;
	NSMutableDictionary* _managedURLTable;
	NSMutableDictionary* _commentHashTable;
	NSString* _bundleID;
	<SDNodeBrowserDelegate>* _delegate;

}

@property (assign) long mode; 
@property (copy) NSString * bundleID;                               //@synthesize bundleID=_bundleID - In the implementation block
@property (readonly) NSArray * nodes; 
@property (readonly) NSArray * sidebarNodes; 
@property (__weak) <SDNodeBrowserDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)notifyClient:(double)arg1 ;
-(id)odiskNodes;
-(id)airDropNodes;
-(id)initWithNode:(SFNodeRef)arg1 protocol:(id)arg2 flags:(unsigned long)arg3 kind:(id)arg4 ;
-(id)sidebarNodes;
-(void)loadWindows;
-(void)takeActionOnServerChanged:(id)arg1 neighborhood:(id)arg2 ;
-(void)notifyClientAboutWorkgroups;
-(void)serversChanged:(id)arg1 ;
-(void)domainsChanged:(id)arg1 ;
-(void)workgroupsChanged:(id)arg1 ;
-(void)autofsChanged:(id)arg1 ;
-(void)connectedChanged:(id)arg1 ;
-(void)managedChanged:(id)arg1 ;
-(void)sidebarPrefsChanged:(id)arg1 ;
-(void)copyOverBonjourInfo:(SFNodeRef)arg1 source:(SFNodeRef)arg2 ;
-(id)domainChildren;
-(id)workgroupChildren;
-(void)addBonjourChildrenFromCache:(id)arg1 ;
-(void)addConnectedChildrenFromCache:(id)arg1 ;
-(void)loadBonjour;
-(void)loadDomains;
-(void)loadSharePoints;
-(void)loadWorkgroups;
-(void)loadAutoFS;
-(void)loadConnected;
-(void)loadManaged;
-(void)loadODisk;
-(void)loadAirDrop;
-(void)loadSidebarPrefsMonitor;
-(void)unloadBonjour;
-(void)unloadWindows;
-(void)unloadDomains;
-(void)unloadSharePoints;
-(void)unloadWorkgroups;
-(void)unloadAutoFS;
-(void)unloadConnected;
-(void)unloadManaged;
-(void)unloadODisk;
-(void)unloadAirDrop;
-(void)unloadSidebarPrefsMonitor;
-(id)autoFSNodes;
-(id)neighborhoodNodes;
-(void)addWindowsChildrenFromCache:(id)arg1 ;
-(void)addManagedChildrenFromCache:(id)arg1 ;
-(id)sidebarNodesFromServerNodes:(id)arg1 nonServerCount:(unsigned)arg2 addAllNode:(BOOL*)arg3 ;
-(id)sharePointNodes;
-(void)appendAllNode:(id)arg1 ;
-(id)nodesInternal:(BOOL)arg1 ;
-(void)sharePointBrowser:(id)arg1 nodesDidChangeWithError:(int)arg2 ;
-(BOOL)onlySupportsADisk:(id)arg1 ;
-(void)setError:(int)arg1 ;
-(id)bundleID;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)setMode:(long)arg1 ;
-(long)mode;
-(void)start;
-(void).cxx_destruct;
-(void)stop;
-(void)setConnectionState:(int)arg1 ;
-(void)setUserName:(id)arg1 ;
-(id)nodes;
-(int)addNode:(SFNodeRef)arg1 ;
-(int)removeNode:(SFNodeRef)arg1 ;
-(void)setBundleID:(id)arg1 ;
@end

