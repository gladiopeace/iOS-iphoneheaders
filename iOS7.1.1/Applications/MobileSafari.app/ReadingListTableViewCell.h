/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:10 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class NSString, UILabel;

@interface ReadingListTableViewCell : UITableViewCell {

	BOOL _hasImage;
	unsigned _bookmarkID;
	NSString* _siteName;
	NSString* _previewText;
	UILabel* _siteNameTextLabel;
	NSString* _fetchingStatusText;

}

@property (nonatomic,readonly) unsigned bookmarkID;                    //@synthesize bookmarkID=_bookmarkID - In the implementation block
@property (nonatomic,copy) NSString * siteName;                        //@synthesize siteName=_siteName - In the implementation block
@property (nonatomic,copy) NSString * previewText;                     //@synthesize previewText=_previewText - In the implementation block
@property (nonatomic,retain) UILabel * siteNameTextLabel;              //@synthesize siteNameTextLabel=_siteNameTextLabel - In the implementation block
@property (nonatomic,readonly) BOOL hasImage;                          //@synthesize hasImage=_hasImage - In the implementation block
@property (nonatomic,copy) NSString * fetchingStatusText;              //@synthesize fetchingStatusText=_fetchingStatusText - In the implementation block
-(unsigned)bookmarkID;
-(void)_setFetchingStatusTextForBookmark:(id)arg1 ;
-(void)setFetchingStatusText:(id)arg1 ;
-(void)setBookmark:(id)arg1 isArchiving:(BOOL)arg2 ;
-(id)siteNameTextLabel;
-(void)setSiteNameTextLabel:(id)arg1 ;
-(id)fetchingStatusText;
-(void)dealloc;
-(id)previewText;
-(BOOL)hasImage;
-(void)setBookmark:(id)arg1 ;
-(void)setPreviewText:(id)arg1 ;
-(id)siteName;
-(void)setSiteName:(id)arg1 ;
@end

