/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:45 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Message/Message-Structs.h>
#import <Message/MFMessageIterationFilter.h>

@class NSIndexSet;

@interface MFMailboxMessageIterationFilter : NSObject <MFMessageIterationFilter> {

	NSIndexSet* _mailboxes;

}
-(void)dealloc;
-(bool)filterMessageWithStatement:(sqlite3_stmtRef)arg1 ;
-(id)initWithMailboxes:(id)arg1 ;
@end

