/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:23:13 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/AppleIDAuthAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface XMLRPCResponse : NSObject {

	NSString* myBody;
	id myObject;
	char isFault;

}
-(id)faultCode;
-(id)faultString;
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(id)object;
-(id)body;
-(char)isFault;
@end

