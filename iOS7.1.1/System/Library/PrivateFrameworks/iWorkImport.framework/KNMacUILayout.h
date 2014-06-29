/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:55 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSMutableCopying.h>

@interface KNMacUILayout : NSObject <NSCopying, NSMutableCopying> {

	bool mShowingSidebar;
	bool mShowingNavigatorViewInSidebar;
	bool mShowingPresenterNotes;
	bool mShowingLightTable;
	bool mShowingInspectorPane;
	bool mShowingMasterSlides;
	long long mInspectorPaneViewMode;

}

@property (getter=isShowingSidebar,nonatomic,readonly) bool showingSidebar; 
@property (nonatomic,readonly) long long sidebarViewMode; 
@property (getter=isShowingLightTable,nonatomic,readonly) bool showingLightTable; 
@property (getter=isShowingPresenterNotes,nonatomic,readonly) bool showingPresenterNotes; 
@property (getter=isShowingInspectorPane,nonatomic,readonly) bool showingInspectorPane; 
@property (nonatomic,readonly) long long inspectorPaneViewMode; 
@property (getter=isShowingMasterSlides,nonatomic,readonly) bool showingMasterSlides; 
@property (getter=p_isShowingNavigatorViewInSidebar,nonatomic,readonly) bool p_showingNavigatorViewInSidebar; 
+(id)uiLayoutFromArchive:(const DesktopUILayoutArchive*)arg1 unarchiver:(id)arg2 context:(id)arg3 ;
-(void)saveToArchive:(DesktopUILayoutArchive*)arg1 archiver:(id)arg2 ;
-(id)archivedUILayoutInContext:(id)arg1 ;
-(bool)isShowingSidebar;
-(long long)sidebarViewMode;
-(bool)isShowingPresenterNotes;
-(bool)isShowingLightTable;
-(bool)isShowingInspectorPane;
-(long long)inspectorPaneViewMode;
-(bool)p_isShowingNavigatorViewInSidebar;
-(bool)isShowingMasterSlides;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)mutableCopyWithZone:(NSZone)arg1 ;
@end

