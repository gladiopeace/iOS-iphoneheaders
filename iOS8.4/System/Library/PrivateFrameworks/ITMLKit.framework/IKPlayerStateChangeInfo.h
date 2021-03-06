/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:12 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary;

@interface IKPlayerStateChangeInfo : NSObject {

	NSDictionary* _jsonValue;
	long long _state;
	long long _oldState;

}

@property (nonatomic,copy) NSDictionary * jsonValue;              //@synthesize jsonValue=_jsonValue - In the implementation block
@property (nonatomic,readonly) long long state;                   //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) long long oldState;                //@synthesize oldState=_oldState - In the implementation block
@property (assign,nonatomic) double duration; 
@property (assign,nonatomic) double elapsedTime; 
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(long long)state;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(double)elapsedTime;
-(id)initWithState:(long long)arg1 ;
-(id)_stateNameForState:(long long)arg1 ;
-(NSDictionary *)jsonValue;
-(void)setJsonValue:(NSDictionary *)arg1 ;
-(id)initWithState:(long long)arg1 oldState:(long long)arg2 ;
-(long long)oldState;
-(void)setElapsedTime:(double)arg1 ;
@end

