/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:07 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UILabel, UIImageView;

@interface MailboxGroupedPickerTableCell : UITableViewCell {

	UILabel* _mailboxText;
	UIImageView* _mailboxIcon;
	unsigned _level;
	unsigned _disabled : 1;
	unsigned _rootMailbox : 1;

}
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(float)fontSize;
-(void)setCurrentMailbox:(BOOL)arg1 ;
-(void)setMailboxType:(int)arg1 ;
-(BOOL)isCellEnabled;
-(int)levelForMailbox:(id)arg1 ;
-(id)_mailboxFontForSize:(float)arg1 ;
-(void)_setupMailboxIconForImage:(id)arg1 ;
-(id)nameForMailbox:(id)arg1 ;
-(float)horizontalContentOffset;
-(void)setMailbox:(id)arg1 ;
-(void)setCellEnabled:(BOOL)arg1 ;
@end

