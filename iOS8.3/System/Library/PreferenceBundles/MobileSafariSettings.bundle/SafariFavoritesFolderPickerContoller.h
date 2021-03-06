/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:02:33 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PreferenceBundles/MobileSafariSettings.bundle/MobileSafariSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileSafariSettings/SafariSettingsListController.h>

@class WebBookmarkCollection, FolderPickerTableViewCellLayoutManager;

@interface SafariFavoritesFolderPickerContoller : SafariSettingsListController {

	WebBookmarkCollection* _bookmarkCollection;
	FolderPickerTableViewCellLayoutManager* _cellLayoutManager;

}
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)_webBookmarksDidReload:(id)arg1 ;
-(id)_tintedFolderImage;
-(id)specifiers;
-(void)willBecomeActive;
@end

