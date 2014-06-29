/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:13 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString, SUScriptError;

@interface SUScriptFacebookResponse : SUScriptObject {

	NSString* _bodyData;
	SUScriptError* _error;
	long long _statusCode;

}

@property (readonly) NSString * bodyData; 
@property (readonly) SUScriptError * error; 
@property (readonly) long long HTTPStatusCode; 
+(void)initialize;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(id)bodyData;
-(void)dealloc;
-(id)error;
-(id)attributeKeys;
-(id)scriptAttributeKeys;
-(id)_className;
-(id)initWithData:(id)arg1 response:(id)arg2 error:(id)arg3 ;
-(long long)HTTPStatusCode;
@end

