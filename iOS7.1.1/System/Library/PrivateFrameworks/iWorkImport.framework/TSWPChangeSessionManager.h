/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:50 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol TSWPChangeSessionManager
@property (nonatomic,readonly) bool isTrackingChanges; 
@required
-(id)changeSessionAuthorCreatedWithCommand:(id*)arg1;
-(void)startNewChangeSessionIfNecessaryGettingInsertAuthorCommand:(id*)arg1;
-(bool)isTrackingChanges;
@end

