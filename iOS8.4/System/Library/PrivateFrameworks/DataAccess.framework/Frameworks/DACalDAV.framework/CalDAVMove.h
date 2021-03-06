/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:57 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface CalDAVMove : NSObject {

	int _sourceCalendarID;
	int _itemID;
	int _changeID;
	int _entityType;
	NSString* _oldExternalID;

}

@property (assign,nonatomic) int sourceCalendarID;                  //@synthesize sourceCalendarID=_sourceCalendarID - In the implementation block
@property (assign,nonatomic) int itemID;                            //@synthesize itemID=_itemID - In the implementation block
@property (nonatomic,retain) NSString * oldExternalID;              //@synthesize oldExternalID=_oldExternalID - In the implementation block
@property (assign,nonatomic) int changeID;                          //@synthesize changeID=_changeID - In the implementation block
@property (assign,nonatomic) int entityType;                        //@synthesize entityType=_entityType - In the implementation block
-(int)entityType;
-(int)itemID;
-(void)setChangeID:(int)arg1 ;
-(int)changeID;
-(void)setItemID:(int)arg1 ;
-(id)initWithSourceCalendarID:(int)arg1 itemID:(int)arg2 oldExternalID:(id)arg3 changeID:(int)arg4 entityType:(int)arg5 ;
-(NSString *)oldExternalID;
-(int)sourceCalendarID;
-(void)setSourceCalendarID:(int)arg1 ;
-(void)setOldExternalID:(NSString *)arg1 ;
-(void)setEntityType:(int)arg1 ;
@end

