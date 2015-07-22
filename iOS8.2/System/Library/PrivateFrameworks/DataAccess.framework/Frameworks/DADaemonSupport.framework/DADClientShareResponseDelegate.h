/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:57 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
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

@property (assign,nonatomic) int response;                          //@synthesize response=_response - In the implementation block
@property (nonatomic,retain) NSString * calendarID;                 //@synthesize calendarID=_calendarID - In the implementation block
@property (nonatomic,retain) NSString * shareID;                    //@synthesize shareID=_shareID - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(int)response;
-(void)finishWithError:(id)arg1 ;
-(void)setResponse:(int)arg1 ;
-(NSString *)shareID;
-(void)setShareID:(NSString *)arg1 ;
-(void)shareResponseFinishedWithError:(id)arg1 ;
-(id)initWithAccountID:(id)arg1 client:(id)arg2 response:(int)arg3 calendarID:(id)arg4 ;
-(void)respondToShareRequest;
-(void)setCalendarID:(NSString *)arg1 ;
-(NSString *)calendarID;
@end
