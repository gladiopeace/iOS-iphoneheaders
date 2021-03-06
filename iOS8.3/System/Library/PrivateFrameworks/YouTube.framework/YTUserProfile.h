/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:27:11 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface YTUserProfile : NSObject {

	NSString* _username;
	int _age;
	int _maxUploadDuration;

}

@property (nonatomic,readonly) NSString * username;                //@synthesize username=_username - In the implementation block
@property (nonatomic,readonly) int age;                            //@synthesize age=_age - In the implementation block
@property (nonatomic,readonly) int maxUploadDuration;              //@synthesize maxUploadDuration=_maxUploadDuration - In the implementation block
-(NSString *)username;
-(int)age;
-(id)initWithUsername:(id)arg1 age:(int)arg2 maxUploadDuration:(int)arg3 ;
-(int)maxUploadDuration;
@end

