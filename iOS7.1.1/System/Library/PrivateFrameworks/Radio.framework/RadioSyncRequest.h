/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:46 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Radio/RadioRequest.h>

@protocol OS_dispatch_queue;
@class NSObject, SSURLConnectionRequest, NSDictionary, NSString;

@interface RadioSyncRequest : RadioRequest {

	NSObject<OS_dispatch_queue>* _artworkQueue;
	unsigned long long _globalVersion;
	SSURLConnectionRequest* _request;
	NSDictionary* _responseDictionary;
	bool _disableArtworkLoading;
	bool _includeCleanTracksOnly;
	bool _isAutomaticUpdate;
	NSString* _referer;
	NSDictionary* _resultingOverrideBagDictionary;

}

@property (assign,nonatomic) bool disableArtworkLoading;                                   //@synthesize disableArtworkLoading=_disableArtworkLoading - In the implementation block
@property (assign,nonatomic) bool includeCleanTracksOnly;                                  //@synthesize includeCleanTracksOnly=_includeCleanTracksOnly - In the implementation block
@property (assign,nonatomic) bool isAutomaticUpdate;                                       //@synthesize isAutomaticUpdate=_isAutomaticUpdate - In the implementation block
@property (nonatomic,copy) NSString * referer;                                             //@synthesize referer=_referer - In the implementation block
@property (nonatomic,readonly) NSDictionary * resultingOverrideBagDictionary;              //@synthesize resultingOverrideBagDictionary=_resultingOverrideBagDictionary - In the implementation block
-(void)setIncludeCleanTracksOnly:(bool)arg1 ;
-(void)startWithCompletionHandler:(/*^block*/ id)arg1 ;
-(id)responseDictionary;
-(id)init;
-(void)cancel;
-(void).cxx_destruct;
-(id)initWithGlobalVersion:(unsigned long long)arg1 ;
-(id)changeList;
-(id)matchDictionary;
-(id)_sortedChangesByType:(id)arg1 ;
-(id)_stationSortOrderForChanges:(id)arg1 ;
-(id)_updateModel:(id)arg1 withChangeDictionary:(id)arg2 changeType:(long long*)arg3 loadArtworkSynchronously:(bool)arg4 ;
-(void)setDisableArtworkLoading:(bool)arg1 ;
-(bool)disableArtworkLoading;
-(bool)includeCleanTracksOnly;
-(bool)isAutomaticUpdate;
-(void)setIsAutomaticUpdate:(bool)arg1 ;
-(id)referer;
-(void)setReferer:(id)arg1 ;
-(id)resultingOverrideBagDictionary;
@end

