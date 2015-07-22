/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:13:29 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CoreRecents.framework/recentsd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreRecents/CRRecentContactsLibrary.h>
#import <recentsd/CRDRecentContactsLibraryProtocol.h>

@class CRDClient, _CRRecentsLibrary, NSString;

@interface CRDRecentContactsLibrary : CRRecentContactsLibrary <CRDRecentContactsLibraryProtocol> {

	CRDClient* _client;
	_CRRecentsLibrary* _library;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)start;
-(void)searchRecentsUsingQuery:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)recordContactEvents:(id)arg1 domain:(id)arg2 sendingAddress:(id)arg3 source:(id)arg4 ;
-(void)removeRecentContactsWithRecentIDs:(id)arg1 syncKeys:(id)arg2 domain:(id)arg3 ;
-(id)_remoteLibraryWithErrorHandler:(/*^block*/id)arg1 ;
-(id)initWithClient:(id)arg1 ;
@end
