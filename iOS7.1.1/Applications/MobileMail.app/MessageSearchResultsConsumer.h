/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:08 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Message/MessageConsumer.h>

@class SearchOperation, NSMutableArray;

@interface MessageSearchResultsConsumer : NSObject <MessageConsumer> {

	SearchOperation* _operation;
	unsigned _sentBatchCount;
	unsigned _nextBatchSize;
	NSMutableArray* _pendingMessages;

}
-(id)initWithOperation:(id)arg1 ;
-(void)_sendForcibly:(BOOL)arg1 ;
-(void)dealloc;
-(void)done;
-(BOOL)shouldCancel;
-(void)newMessagesAvailable:(id)arg1 ;
@end
