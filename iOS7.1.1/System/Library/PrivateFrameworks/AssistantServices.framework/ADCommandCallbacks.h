/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 3:35:06 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/assistantd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSArray, SARequestCompleted;

@interface ADCommandCallbacks : NSObject {

	NSString* _aceId;
	NSArray* _callbacks;
	SARequestCompleted* _requestCompleted;

}

@property (nonatomic,copy) NSString * aceId;                                     //@synthesize aceId=_aceId - In the implementation block
@property (nonatomic,copy) NSArray * callbacks;                                  //@synthesize callbacks=_callbacks - In the implementation block
@property (nonatomic,retain) SARequestCompleted * requestCompleted;              //@synthesize requestCompleted=_requestCompleted - In the implementation block
-(void)setRequestCompleted:(id)arg1 ;
-(BOOL)hasCommands;
-(void).cxx_destruct;
-(id)requestCompleted;
-(id)aceId;
-(void)setAceId:(id)arg1 ;
-(id)callbacks;
-(void)setCallbacks:(id)arg1 ;
@end

