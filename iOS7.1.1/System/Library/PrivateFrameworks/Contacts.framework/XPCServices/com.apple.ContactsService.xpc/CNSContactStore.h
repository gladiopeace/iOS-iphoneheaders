/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 3:46:18 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/Contacts.framework/XPCServices/com.apple.ContactsService.xpc/com.apple.ContactsService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Contacts/CNXContactStore.h>
#import <MobileCoreServices/NSXPCListenerDelegate.h>

@interface CNSContactStore : NSObject <CNXContactStore, NSXPCListenerDelegate>
+(id)sharedStore;
-(id)_valuesForProperty:(int)arg1 record:(void*)arg2 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)allContacts:(/*^block*/ id)arg1 ;
@end

