/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:33 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class _IDSConnection, IDSAccount;

@interface IDSConnection : NSObject {

	_IDSConnection* _internal;

}

@property (nonatomic,readonly) IDSAccount * account; 
@property (nonatomic,readonly) bool isActive; 
@property (nonatomic,readonly) _IDSConnection * _internal; 
-(id)_internal;
-(void)dealloc;
-(bool)isActive;
-(void)addDelegate:(id)arg1 queue:(id)arg2 ;
-(void)requestKeepAlive;
-(id)initWithAccount:(id)arg1 commands:(id)arg2 ;
-(bool)sendMessage:(id)arg1 toDestinations:(id)arg2 priority:(long long)arg3 options:(id)arg4 identifier:(id*)arg5 error:(id*)arg6 ;
-(id)_initWithAccount:(id)arg1 commands:(id)arg2 ;
-(bool)sendMessage:(id)arg1 toDestinations:(id)arg2 options:(id)arg3 identifier:(id*)arg4 error:(id*)arg5 ;
-(id)account;
-(id)initWithAccount:(id)arg1 ;
-(void)removeDelegate:(id)arg1 ;
@end

