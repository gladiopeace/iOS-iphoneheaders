/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:40 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLContainerChangeNotification.h>

@class NSDictionary, PLGenericAlbum;

@interface PLInvitationRecordsChangeNotification : PLContainerChangeNotification {

	BOOL _invitationRecordsDidChange;
	NSDictionary* _userInfo;

}

@property (nonatomic,retain,readonly) PLGenericAlbum * album; 
@property (nonatomic,readonly) BOOL invitationRecordsDidChange; 
+(id)notificationWithAlbum:(id)arg1 snapshot:(id)arg2 ;
-(id)name;
-(id)userInfo;
-(void)_calculateDiffs;
-(PLGenericAlbum *)album;
-(BOOL)invitationRecordsDidChange;
@end
