/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:26:57 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface SoftwareUpdateBulletinInfo : NSObject {

	NSMutableArray* _readTitles;
	NSMutableArray* _unreadTitles;

}

@property (nonatomic,readonly) char hasUnreadTitles; 
-(void)addReadTitle:(id)arg1 ;
-(void)addUnreadTitle:(id)arg1 ;
-(id)newBulletin;
-(char)hasUnreadTitles;
-(void)dealloc;
-(id)description;
@end

