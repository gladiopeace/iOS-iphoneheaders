/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:15 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/SiriViewService.app/SiriViewService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface SVSConversationStore : NSObject {

	NSMutableDictionary* _conversationsByIdentifier;

}

@property (getter=_conversationsByIdentifier,nonatomic,readonly) NSMutableDictionary * conversationsByIdentifier;              //@synthesize conversationsByIdentifier=_conversationsByIdentifier - In the implementation block
-(BOOL)getConversation:(id*)arg1 withIdentifier:(id)arg2 error:(id*)arg3 ;
-(BOOL)removeConversationWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(BOOL)saveConversation:(id)arg1 identifier:(id)arg2 error:(id*)arg3 ;
-(id)_conversationsByIdentifier;
-(void)_registerConversation:(id)arg1 withIdentifier:(id)arg2 ;
-(id)init;
-(void).cxx_destruct;
@end

