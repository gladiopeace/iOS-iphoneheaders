/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:33:07 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/ABSearchOperation.h>
#import <EventKit/ABSearchOperationDelegate.h>

@class NSMutableArray;

@interface GKAddressBookSearchOperation : ABSearchOperation <ABSearchOperationDelegate> {

	NSMutableArray* _matches;
	/*^block*/ id _handler;

}

@property (nonatomic,readonly) NSMutableArray * matches;              //@synthesize matches=_matches - In the implementation block
@property (nonatomic,copy) id handler;                                //@synthesize handler=_handler - In the implementation block
-(void)searchOperation:(id)arg1 didFindMatches:(id)arg2 moreComing:(BOOL)arg3 ;
-(id)matches;
-(void)dealloc;
-(id)init;
-(void)setHandler:(/*^block*/ id)arg1 ;
-(/*^block*/ id)handler;
@end

