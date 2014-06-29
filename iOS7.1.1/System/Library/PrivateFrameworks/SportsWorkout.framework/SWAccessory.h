/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:07 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, SWVicFileLogger;

@interface SWAccessory : NSObject {

	NSString* _transportType;
	NSString* _serialNumber;
	NSString* _linkState;
	NSString* _searchState;
	SWVicFileLogger* _vicFileLogger;

}

@property (nonatomic,readonly) NSString * transportType;                   //@synthesize transportType=_transportType - In the implementation block
@property (nonatomic,readonly) NSString * serialNumber;                    //@synthesize serialNumber=_serialNumber - In the implementation block
@property (nonatomic,readonly) NSString * linkState;                       //@synthesize linkState=_linkState - In the implementation block
@property (nonatomic,readonly) NSString * searchState;                     //@synthesize searchState=_searchState - In the implementation block
@property (nonatomic,retain) SWVicFileLogger * vicFileLogger;              //@synthesize vicFileLogger=_vicFileLogger - In the implementation block
-(id)linkState;
-(void)beginLinking;
-(void)cancelLinking;
-(void)cancelSearching;
-(void)unlink;
-(id)searchState;
-(id)vicFileLogger;
-(void)setVicFileLogger:(id)arg1 ;
-(void)beginSearching;
-(void)dealloc;
-(id)init;
-(void)deactivate;
-(id)transportType;
-(id)serialNumber;
@end

