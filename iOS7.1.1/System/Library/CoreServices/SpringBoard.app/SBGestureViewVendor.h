/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:57:54 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CPLRUDictionary;

@interface SBGestureViewVendor : NSObject {

	CPLRUDictionary* m_cache;

}
+(id)sharedInstance;
-(void)clearCacheForReason:(id)arg1 ;
-(void)clearCacheForApp:(id)arg1 reason:(id)arg2 ;
-(id)viewForApp:(id)arg1 gestureType:(unsigned)arg2 includeStatusBar:(BOOL)arg3 ;
-(id)viewForApp:(id)arg1 gestureType:(unsigned)arg2 includeStatusBar:(BOOL)arg3 decodeImage:(BOOL)arg4 ;
-(void)maskViewIfNeeded:(id)arg1 gestureType:(unsigned)arg2 viewType:(int)arg3 contextHostViewRequester:(id)arg4 app:(id)arg5 ;
-(void)dealloc;
-(id)init;
@end

