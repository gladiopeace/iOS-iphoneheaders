/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:03 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol SearchAddressBookOperationDelegate;
@class NSString;

@interface SearchAddressBookOperation : NSOperation {

	void* _addressBook;
	NSString* _searchQuery;
	BOOL _abAllowed;
	<SearchAddressBookOperationDelegate>* delegate;

}

@property (assign,nonatomic,__weak) <SearchAddressBookOperationDelegate> * delegate; 
-(id)initWithSearchQuery:(id)arg1 addressBook:(void*)arg2 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)main;
-(void).cxx_destruct;
@end

