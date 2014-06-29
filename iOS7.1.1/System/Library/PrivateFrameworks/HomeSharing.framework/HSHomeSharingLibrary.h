/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:31 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, NSObject;
@class NSObject, NSString, NSURL, HSConnection;

@interface HSHomeSharingLibrary : NSObject {

	NSObject<OS_dispatch_queue>* _connectionAccessQueue;
	bool _requiresPassword;
	bool _available;
	bool __hasPendingUpdateRequest;
	unsigned _version;
	NSString* _name;
	NSString* _uniqueIdentifier;
	NSString* _homeSharingGroupID;
	NSURL* _baseURL;
	<NSObject>* _context;
	long long _connectionType;
	HSConnection* _connection;

}

@property (nonatomic,readonly) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * uniqueIdentifier;                    //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned version;                               //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) bool requiresPassword;                          //@synthesize requiresPassword=_requiresPassword - In the implementation block
@property (nonatomic,readonly) NSString * homeSharingGroupID;                  //@synthesize homeSharingGroupID=_homeSharingGroupID - In the implementation block
@property (nonatomic,readonly) NSURL * baseURL;                                //@synthesize baseURL=_baseURL - In the implementation block
@property (getter=isAvailable,nonatomic,readonly) bool available;              //@synthesize available=_available - In the implementation block
@property (nonatomic,retain) <NSObject> * context;                             //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) unsigned databaseID; 
@property (nonatomic,readonly) unsigned basePlaylistContainerID; 
@property (nonatomic,readonly) long long connectionType;                       //@synthesize connectionType=_connectionType - In the implementation block
@property (nonatomic,readonly) long long connectionState; 
@property (nonatomic,readonly) NSString * deviceGUID; 
@property (nonatomic,retain) HSConnection * connection;                        //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) bool _hasPendingUpdateRequest;                    //@synthesize _hasPendingUpdateRequest=__hasPendingUpdateRequest - In the implementation block
-(bool)isAvailable;
-(void)connectWithCompletionHandler:(/*^block*/ id)arg1 ;
-(bool)requiresPassword;
-(id)homeSharingGroupID;
-(long long)connectionState;
-(unsigned)databaseID;
-(void)sendRequest:(id)arg1 withResponseHandler:(/*^block*/ id)arg2 ;
-(id)urlForRequest:(id)arg1 ;
-(id)deviceGUID;
-(id)securityInfoForURL:(id)arg1 ;
-(void)dealloc;
-(id)context;
-(id)name;
-(void)setContext:(id)arg1 ;
-(id)baseURL;
-(unsigned)version;
-(id)uniqueIdentifier;
-(id)connection;
-(void)disconnect;
-(void)setConnection:(id)arg1 ;
-(long long)connectionType;
-(unsigned)basePlaylistContainerID;
-(id)initWithName:(id)arg1 uniqueIdentifier:(id)arg2 version:(unsigned)arg3 baseURL:(id)arg4 homeSharingGroupID:(id)arg5 connectionType:(long long)arg6 ;
-(void)_sendUpdateRequest;
-(void)_onQueue_ensureConnection;
-(void)set_hasPendingUpdateRequest:(bool)arg1 ;
-(bool)_hasPendingUpdateRequest;
@end

