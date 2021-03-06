/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:41:14 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSFilePresenter.h>

@class NSURL, PFUbiquityLocation, NSString, NSOperationQueue;

@interface PFUbiquityMetadataFactoryFilePresenter : NSObject <NSFilePresenter> {

	NSURL* _presentedItemURL;
	PFUbiquityLocation* _presentedItemLocation;

}

@property (copy,readonly) NSURL * presentedItemURL;                                      //@synthesize presentedItemURL=_presentedItemURL - In the implementation block
@property (nonatomic,readonly) PFUbiquityLocation * presentedItemLocation;               //@synthesize presentedItemLocation=_presentedItemLocation - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain,readonly) NSOperationQueue * presentedItemOperationQueue; 
@property (copy,readonly) NSURL * primaryPresentedItemURL; 
+(void)initialize;
-(id)initWithMetadataStoreFileLocation:(id)arg1 ;
-(PFUbiquityLocation *)presentedItemLocation;
-(void)dealloc;
-(id)init;
-(void)relinquishPresentedItemToReader:(/*^block*/id)arg1 ;
-(void)relinquishPresentedItemToWriter:(/*^block*/id)arg1 ;
-(void)savePresentedItemChangesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)accommodatePresentedItemDeletionWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSURL *)presentedItemURL;
-(NSOperationQueue *)presentedItemOperationQueue;
@end

