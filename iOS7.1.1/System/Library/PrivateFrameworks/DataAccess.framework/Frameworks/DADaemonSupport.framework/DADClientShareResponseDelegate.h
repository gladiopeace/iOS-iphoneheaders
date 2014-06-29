/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:15 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DADaemonSupport.framework/DADaemonSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DADaemonSupport/DADClientDelegate.h>
#import <DADaemonSupport/DAEventsCalendarSharingResponseConsumer.h>

@class NSString;

@interface DADClientShareResponseDelegate : DADClientDelegate <DAEventsCalendarSharingResponseConsumer> {

	int _response;
	NSString* _calendarID;
	NSString* _shareID;

}
-(void)finishWithError:(id)arg1 ;
-(void)dealloc;
-(void)shareResponseFinishedWithError:(id)arg1 ;
-(id)initWithAccountID:(id)arg1 client:(id)arg2 response:(int)arg3 calendarID:(id)arg4 ;
-(void)respondToShareRequest;
@end

