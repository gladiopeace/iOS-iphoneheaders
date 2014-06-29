/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:00 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIActivity.h>
#import <Maps/AddBookmarkViewControllerDelegate.h>

@class AddBookmarkViewController, SearchResult, NSString;

@interface MUAddBookmarkActivity : UIActivity <AddBookmarkViewControllerDelegate> {

	AddBookmarkViewController* _addBookmarkViewController;
	SearchResult* _searchResult;
	NSString* _title;

}

@property (nonatomic,retain) SearchResult * searchResult;              //@synthesize searchResult=_searchResult - In the implementation block
@property (nonatomic,copy) NSString * title;                           //@synthesize title=_title - In the implementation block
-(void)setSearchResult:(id)arg1 ;
-(id)initWithSearchResult:(id)arg1 ;
-(void)addBookmarkControllerCancelled:(id)arg1 ;
-(void)addBookmarkControllerSaved:(id)arg1 ;
-(void)setTitle:(id)arg1 ;
-(id)title;
-(id)activityTitle;
-(id)activityType;
-(void).cxx_destruct;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(id)activityImage;
-(id)activityViewController;
-(void)prepareWithActivityItems:(id)arg1 ;
-(id)_embeddedActivityViewController;
-(id)searchResult;
@end

