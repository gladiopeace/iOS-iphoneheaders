/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:30 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSDictionary;

@interface MPStoreCompletionOfferResponse : NSObject {

	NSObject<OS_dispatch_queue>* _queue;
	NSMutableDictionary* _itemsByVariant;
	NSDictionary* _responseDictionary;

}

@property (nonatomic,readonly) NSDictionary * responseDictionary;              //@synthesize responseDictionary=_responseDictionary - In the implementation block
-(id)responseDictionary;
-(id)initWithResponseDictionary:(id)arg1 ;
-(id)mediaItemsWithStoreOfferVariant:(long long)arg1 ;
-(void).cxx_destruct;
@end

