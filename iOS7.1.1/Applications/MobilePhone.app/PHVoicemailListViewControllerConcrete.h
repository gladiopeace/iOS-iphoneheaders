/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:09 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobilePhone.app/MobilePhone
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PHVoicemailListViewControllerConcrete <PHVoicemailCellConfigurationDelegate>
@property (readonly) NSString * navigationBarText; 
@property (readonly) NSString * folderName; 
@property (readonly) unsigned flagsToHave; 
@property (readonly) unsigned flagsNotToHave; 
@property (readonly) BOOL popOffIfEmpty; 
@property (readonly) NSString * tableViewDestructiveActionText; 
@property (readonly) NSString * navigationBarTextWithCountFormat; 
@property (readonly) NSArray * childListControllers; 
@optional
-(void)willShowVoicemails:(id)arg1;
-(id)childListControllers;
-(id)navigationBarTextWithCountFormat;

@required
-(unsigned)flagsToHave;
-(unsigned)flagsNotToHave;
-(void)performTableViewDestructiveActionForVoicemail:(id)arg1;
-(id)navigationBarText;
-(BOOL)popOffIfEmpty;
-(id)tableViewDestructiveActionText;
-(id)folderName;
@end

