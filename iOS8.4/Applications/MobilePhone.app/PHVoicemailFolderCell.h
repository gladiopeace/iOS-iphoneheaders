/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:51 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobilePhone.app/MobilePhone
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@protocol PHVoicemailListViewControllerConcrete;
@class UILabel, PHVoicemailListViewController, NSString;

@interface PHVoicemailFolderCell : UITableViewCell {

	UILabel* _folderLabel;
	UILabel* _countLabel;
	PHVoicemailListViewController*<PHVoicemailListViewControllerConcrete> _viewController;

}

@property (nonatomic,readonly) NSString * deletedText; 
@property (nonatomic,retain) PHVoicemailListViewController*<PHVoicemailListViewControllerConcrete> viewController;              //@synthesize viewController=_viewController - In the implementation block
-(void)_handleContentSizeDidChange:(id)arg1 ;
-(void)_handleStoreChanged:(id)arg1 ;
-(void)_updateCount;
-(NSString *)deletedText;
-(void)_updateFonts;
-(void)dealloc;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)prepareForReuse;
-(void)setViewController:(PHVoicemailListViewController*<PHVoicemailListViewControllerConcrete>)arg1 ;
-(PHVoicemailListViewController*<PHVoicemailListViewControllerConcrete>)viewController;
@end

