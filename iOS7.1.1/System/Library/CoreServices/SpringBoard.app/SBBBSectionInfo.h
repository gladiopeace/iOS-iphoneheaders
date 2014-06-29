/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:58:02 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBBBItemInfo.h>

@class SBBulletinListSection, NSString;

@interface SBBBSectionInfo : SBBBItemInfo {

	int _sectionCategory;

}

@property (nonatomic,readonly) int sectionCategory; 
@property (getter=isWidgetSection,nonatomic,readonly) BOOL widgetSection; 
@property (nonatomic,readonly) SBBulletinListSection * representedListSection; 
@property (nonatomic,readonly) NSString * listSectionIdentifier; 
-(BOOL)isWidgetSection;
-(id)representedListSection;
-(id)listSectionIdentifier;
-(id)identifier;
-(int)sectionCategory;
@end

