/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:59:43 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>

@class _AddBookmarkViewController, SearchResult, NSString;

@interface AddBookmarkViewController : UINavigationController {

	_AddBookmarkViewController* _controller;
	SearchResult* _bookmark;
	NSString* _bookmarkTitle;

}

@property (assign,nonatomic) <AddBookmarkViewControllerDelegate> * addBookmarkDelegate; 
@property (nonatomic,retain) SearchResult * bookmark;                                                //@synthesize bookmark=_bookmark - In the implementation block
@property (nonatomic,copy) NSString * bookmarkTitle;                                                 //@synthesize bookmarkTitle=_bookmarkTitle - In the implementation block
@property (nonatomic,retain) id controller;                                                          //@synthesize controller=_controller - In the implementation block
-(id)bookmarkTitle;
-(void)setBookmarkTitle:(id)arg1 ;
-(id)addBookmarkDelegate;
-(void)setAddBookmarkDelegate:(id)arg1 ;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)controller;
-(void)setController:(id)arg1 ;
-(id)bookmark;
-(void)setBookmark:(id)arg1 ;
@end

