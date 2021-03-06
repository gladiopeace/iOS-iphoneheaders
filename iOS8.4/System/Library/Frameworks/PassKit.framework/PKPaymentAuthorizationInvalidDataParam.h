/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:27 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKit/PKPaymentAuthorizationParam.h>

@class NSError;

@interface PKPaymentAuthorizationInvalidDataParam : PKPaymentAuthorizationParam {

	BOOL _animated;
	long long _dataType;
	long long _status;
	NSError* _error;

}

@property (assign,nonatomic) long long dataType;              //@synthesize dataType=_dataType - In the implementation block
@property (assign,nonatomic) long long status;                //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) NSError * error;                 //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) BOOL animated;                   //@synthesize animated=_animated - In the implementation block
-(long long)dataType;
-(void)setDataType:(long long)arg1 ;
-(BOOL)animated;
-(void)setAnimated:(BOOL)arg1 ;
-(long long)status;
-(void)setStatus:(long long)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
@end

