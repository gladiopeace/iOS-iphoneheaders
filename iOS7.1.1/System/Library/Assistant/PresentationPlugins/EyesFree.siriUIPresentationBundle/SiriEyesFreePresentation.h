/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:09 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Assistant/PresentationPlugins/EyesFree.siriUIPresentationBundle/EyesFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CarDisplay/SiriUIPresentation.h>

@protocol SiriUIPresentationDataSource, SiriUIPresentationDelegate;
@interface SiriEyesFreePresentation : NSObject <SiriUIPresentation> {

	<SiriUIPresentationDataSource>* _dataSource;
	<SiriUIPresentationDelegate>* _delegate;

}

@property (assign,nonatomic,__weak) <SiriUIPresentationDataSource> * dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) <SiriUIPresentationDelegate> * delegate;                  //@synthesize delegate=_delegate - In the implementation block
-(void)_didPresentItemsAtIndexPaths:(id)arg1 ;
-(double)idleTimerInterval;
-(bool)shouldDismissForIdling;
-(void)setDataSource:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)dataSource;
-(id)delegate;
-(void)insertItemsAtIndexPaths:(id)arg1 ;
-(long long)options;
-(void).cxx_destruct;
-(void)reloadItemsAtIndexPaths:(id)arg1 ;
-(void)siriDidActivateFromSource:(long long)arg1 ;
-(void)siriDidDeactivate;
@end

