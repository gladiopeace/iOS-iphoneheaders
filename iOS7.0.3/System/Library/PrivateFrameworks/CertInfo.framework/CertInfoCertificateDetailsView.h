/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:25 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <CertInfo/CertInfo-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITableViewDataSource.h>

@class UITableView, NSMutableArray;

@interface CertInfoCertificateDetailsView : UIView <UITableViewDataSource> {

	UITableView* _tableView;
	NSMutableArray* _tableSections;

}
-(void)dealloc;
-(void)layoutSubviews;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(void)appendInfoFromCertView:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 certificateProperties:(id)arg2 ;
-(id)_cellInfosForSection:(id)arg1 ;
-(id)_sectionInfoForCertSection:(id)arg1 title:(id)arg2 ;
-(id)_sectionsFromProperties:(id)arg1 ;
-(id)_titleForIndexPath:(id)arg1 ;
-(id)_detailForIndexPath:(id)arg1 ;
@end

