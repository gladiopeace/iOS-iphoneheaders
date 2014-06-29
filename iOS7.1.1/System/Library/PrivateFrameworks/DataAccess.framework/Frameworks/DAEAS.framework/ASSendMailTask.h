/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:17 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DAEAS/ASTask.h>

@class NSData, NSString;

@interface ASSendMailTask : ASTask {

	NSData* _mimeMessage;
	NSString* _messageID;

}
-(void)finishWithError:(id)arg1 ;
-(id)command;
-(void)dealloc;
-(int)taskStatusForExchangeStatus:(int)arg1 ;
-(int)commandCode;
-(id)requestBody;
-(bool)getTopLevelToken:(char*)arg1 outStatusCodePage:(char*)arg2 outStatusToken:(char*)arg3 ;
-(bool)processContext:(id)arg1 ;
-(id)parameterData;
-(id)initWithMessage:(id)arg1 messageID:(id)arg2 ;
-(id)requestBodyStreamOutKnownSize:(int*)arg1 ;
-(id)contentType;
@end

