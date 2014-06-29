/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:53 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTaskGroup.h>
#import <CoreDAV/CoreDAVPropPatchTaskDelegate.h>
#import <CoreDAV/CoreDAVTaskGroupDelegate.h>

@class NSSet;

@interface CalDAVUpdateGrantedDelegatesTaskGroup : CoreDAVTaskGroup <CoreDAVPropPatchTaskDelegate, CoreDAVTaskGroupDelegate> {

	int _state;
	NSSet* _addWriteURLs;
	NSSet* _addReadURLs;
	NSSet* _removeURLs;
	NSSet* _updatedWriteURLs;
	NSSet* _updatedReadURLs;

}

@property (assign) int state;                             //@synthesize state=_state - In the implementation block
@property (retain) NSSet * addWriteURLs;                  //@synthesize addWriteURLs=_addWriteURLs - In the implementation block
@property (retain) NSSet * addReadURLs;                   //@synthesize addReadURLs=_addReadURLs - In the implementation block
@property (retain) NSSet * removeURLs;                    //@synthesize removeURLs=_removeURLs - In the implementation block
@property (retain) NSSet * updatedWriteURLs;              //@synthesize updatedWriteURLs=_updatedWriteURLs - In the implementation block
@property (retain) NSSet * updatedReadURLs;               //@synthesize updatedReadURLs=_updatedReadURLs - In the implementation block
-(void)dealloc;
-(int)state;
-(void)setState:(int)arg1 ;
-(void)setAddWriteURLs:(id)arg1 ;
-(void)setAddReadURLs:(id)arg1 ;
-(void)setRemoveURLs:(id)arg1 ;
-(id)updatedWriteURLs;
-(id)updatedReadURLs;
-(id)addWriteURLs;
-(id)addReadURLs;
-(id)removeURLs;
-(void)setUpdatedWriteURLs:(id)arg1 ;
-(void)setUpdatedReadURLs:(id)arg1 ;
-(void)_fetchExistingGrantedDelegates;
-(void)_populateUpdatesFromFetched:(id)arg1 allowWrite:(bool)arg2 ;
-(void)_updateDelegatesWithAllowWrite:(bool)arg1 ;
-(id)initWithAccountInfoProvider:(id)arg1 addWriteURLs:(id)arg2 addReadURLs:(id)arg3 removeURLs:(id)arg4 taskManager:(id)arg5 ;
-(void)startTaskGroup;
-(void)taskGroup:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)propPatchTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3 ;
-(void)_finishWithError:(id)arg1 state:(int)arg2 ;
@end

