/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:53 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <WebKitLegacy/WebKitLegacy-Structs.h>
@class WebBackForwardListPrivate, WebHistoryItem;

@interface WebBackForwardList : NSObject {

	WebBackForwardListPrivate* _private;

}

@property (nonatomic,readonly) WebHistoryItem * backItem; 
@property (nonatomic,readonly) WebHistoryItem * currentItem; 
@property (nonatomic,readonly) WebHistoryItem * forwardItem; 
@property (assign,nonatomic) int capacity; 
@property (nonatomic,readonly) int backListCount; 
@property (nonatomic,readonly) int forwardListCount; 
+(void)initialize;
-(id)initWithBackForwardList:(PassRefPtr<WebCore::BackForwardList>*)arg1 ;
-(void)setCapacity:(int)arg1 ;
-(void)setPageCacheSize:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(WebHistoryItem *)backItem;
-(WebHistoryItem *)currentItem;
-(void)addItem:(id)arg1 ;
-(void)removeItem:(id)arg1 ;
-(void)goBack;
-(void)goForward;
-(id)dictionaryRepresentation;
-(void)setToMatchDictionaryRepresentation:(id)arg1 ;
-(WebHistoryItem *)forwardItem;
-(void)_close;
-(id)itemAtIndex:(int)arg1 ;
-(int)capacity;
-(void)finalize;
-(BOOL)containsItem:(id)arg1 ;
-(void)goToItem:(id)arg1 ;
-(id)backListWithLimit:(int)arg1 ;
-(id)forwardListWithLimit:(int)arg1 ;
-(unsigned long long)pageCacheSize;
-(int)backListCount;
-(int)forwardListCount;
@end

