/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:34:29 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/routined
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSSecureCoding.h>

@class RTStateModelLocation, RTStateModelEntryExit;

@interface RTStateModelOneVisit : NSObject <NSSecureCoding> {

	RTStateModelLocation* _location;
	RTStateModelEntryExit* _EntryExit_s;
	int _numOfDataPts;

}

@property (nonatomic,retain) RTStateModelLocation * location;                  //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) RTStateModelEntryExit * EntryExit_s;              //@synthesize EntryExit_s=_EntryExit_s - In the implementation block
@property (assign,nonatomic) int numOfDataPts;                                 //@synthesize numOfDataPts=_numOfDataPts - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithLocatin:(id)arg1 oneEntryExit:(id)arg2 andNumOfDataPts:(int)arg3 ;
-(void)setNumOfDataPts:(int)arg1 ;
-(int)numOfDataPts;
-(id)EntryExit_s;
-(void)setEntryExit_s:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)location;
-(void).cxx_destruct;
-(void)setLocation:(id)arg1 ;
@end

