/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:11 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Reminders.app/Reminders
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Reminders/Reminders-Structs.h>
#import <UIKit/UIView.h>

@class UIButton, UISearchBar, UIView;

@interface RemindersSearchView : UIView {

	UIButton* _scheduleCardButton;
	int _idiom;
	UISearchBar* _searchBar;
	UIView* _searchResultsView;
	/*^block*/id _showScheduleCardHandler;

}

@property (nonatomic,readonly) UISearchBar * searchBar;              //@synthesize searchBar=_searchBar - In the implementation block
@property (retain) UIView * searchResultsView;                       //@synthesize searchResultsView=_searchResultsView - In the implementation block
@property (nonatomic,copy) id showScheduleCardHandler;               //@synthesize showScheduleCardHandler=_showScheduleCardHandler - In the implementation block
-(void)useInterfaceIdiom:(int)arg1 ;
-(void)setShowScheduleCardHandler:(id)arg1 ;
-(void)deactivateSearchBar;
-(void)activateSearchBar;
-(void)setSearchResultsView:(UIView *)arg1 ;
-(id)showScheduleCardHandler;
-(void)_scheduledCardButtonTapped:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UISearchBar *)searchBar;
-(UIView *)searchResultsView;
@end

