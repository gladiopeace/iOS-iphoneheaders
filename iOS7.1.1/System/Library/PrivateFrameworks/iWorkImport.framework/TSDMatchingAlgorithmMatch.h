/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:42 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol TSDMatchingAlgorithmMatch
@property (nonatomic,readonly) long long matchCost; 
@property (nonatomic,readonly) id incomingMatchObject; 
@property (nonatomic,readonly) id outgoingMatchObject; 
@required
-(long long)matchCost;
-(long long)compareToMatch:(id)arg1;
-(bool)conflictsWithMatch:(id)arg1;
-(id)incomingMatchObject;
-(id)outgoingMatchObject;
@end

