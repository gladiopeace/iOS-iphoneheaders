/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:04 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIActivityViewController.h>
#import <UIKit/UIActivityViewControllerDelegate.h>

@protocol MUActivityViewControllerDelegate;
@class CNContact, SearchResult, MNRoute;

@interface MUActivityViewController : UIActivityViewController <UIActivityViewControllerDelegate> {

	<MUActivityViewControllerDelegate>* _activityDelegate;
	CNContact* _contact;
	SearchResult* _searchResult;
	MNRoute* _route;

}

@property (assign,nonatomic,__weak) <MUActivityViewControllerDelegate> * activityDelegate;              //@synthesize activityDelegate=_activityDelegate - In the implementation block
@property (nonatomic,retain) CNContact * contact;                                                       //@synthesize contact=_contact - In the implementation block
@property (nonatomic,retain) SearchResult * searchResult;                                               //@synthesize searchResult=_searchResult - In the implementation block
@property (nonatomic,retain) MNRoute * route;                                                           //@synthesize route=_route - In the implementation block
-(void)setSearchResult:(id)arg1 ;
-(id)initWithSearchResult:(id)arg1 ;
-(id)initWithSearchResult:(id)arg1 contact:(id)arg2 print:(BOOL)arg3 ;
-(/*^block*/ id)_activityHandler;
-(id)contact;
-(void)setContact:(id)arg1 ;
-(id)activityDelegate;
-(void)setActivityDelegate:(id)arg1 ;
-(void)setRoute:(id)arg1 ;
-(id)route;
-(void)dealloc;
-(/*^block*/ id)_completionHandler;
-(void).cxx_destruct;
-(void)_prepareActivity:(id)arg1 ;
-(void)activityViewControllerDidFinishAirdropTransfer:(id)arg1 ;
-(id)searchResult;
-(id)initWithRoute:(id)arg1 ;
@end

