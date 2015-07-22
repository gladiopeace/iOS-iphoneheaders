/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:27:25 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSKApplicationDelegate.h>

@protocol TSADownloadDelegate;
@class TSADocumentRoot, NSString, NSArray;

@interface TSABaseApplicationDelegate : TSKApplicationDelegate {

	TSADocumentRoot* mDocumentRoot;
	id<TSADownloadDelegate> _downloadDelegate;

}

@property (assign,nonatomic) TSADocumentRoot * documentRoot; 
@property (nonatomic,readonly) NSString * nativeDocumentType; 
@property (nonatomic,readonly) NSString * nativeDocumentExtension; 
@property (nonatomic,readonly) NSString * templateDocumentType; 
@property (nonatomic,readonly) NSString * templateSFFDocumentType; 
@property (nonatomic,readonly) NSString * templateDocumentExtension; 
@property (nonatomic,readonly) NSString * tangierEditingFormatDocumentType; 
@property (nonatomic,readonly) NSString * nativeSFFDocumentType; 
@property (nonatomic,readonly) NSArray * readableDocumentTypes; 
@property (nonatomic,readonly) NSArray * importableDocumentTypes; 
@property (nonatomic,readonly) NSArray * applicationTemplateVariants; 
@property (nonatomic,retain) id<TSADownloadDelegate> downloadDelegate;                   //@synthesize downloadDelegate=_downloadDelegate - In the implementation block
@property (nonatomic,readonly) NSString * collaboratorPersonID; 
+(void)resetSharedConfigurations;
+(id)sharedDelegate;
-(void)registerDefaults;
-(NSString *)nativeDocumentType;
-(NSString *)templateDocumentType;
-(NSString *)templateSFFDocumentType;
-(NSString *)tangierEditingFormatDocumentType;
-(NSString *)nativeSFFDocumentType;
-(NSArray *)importableDocumentTypes;
-(NSArray *)readableDocumentTypes;
-(id)applicationTemplateVariantsForLocale:(CFLocaleRef)arg1 ;
-(id)invalidURLSchemes;
-(id)iCloudPreferencesForDocumentShareID:(id)arg1 ;
-(id)collaboratorPersonIDKey;
-(id)stringForICloudPreferenceKey:(id)arg1 defaultValueGenerator:(/*^block*/id)arg2 ;
-(NSString *)collaboratorPersonID;
-(id)iCloudPreferenceKeys;
-(id)keyPathForICloudPreferenceKey:(id)arg1 ;
-(id)documentPreferenceKeyPrefix;
-(id)iCloudDocumentPreferenceKeyForDocumentShareID:(id)arg1 isMatchingKey:(BOOL*)arg2 ;
-(id)iWorkAuthorName;
-(Class)documentRootClass;
-(void)wakeUpDownloadManager;
-(void)persistenceError:(id)arg1 ;
-(NSString *)nativeDocumentExtension;
-(NSString *)templateDocumentExtension;
-(BOOL)isReadableDocumentType:(id)arg1 ;
-(NSArray *)applicationTemplateVariants;
-(double)mimimumAspectRatioForPreviewImage;
-(double)maximumAspectRatioForPreviewImage;
-(BOOL)URLIsValidForImportedHyperlink:(id)arg1 ;
-(id)existingNestedDocumentPathForPath:(id)arg1 ;
-(BOOL)shouldShowLogMenu;
-(void)registerICloudPreferences;
-(id)collaboratorNameForDocumentShareID:(id)arg1 ;
-(void)setICloudPreferences:(id)arg1 forDocumentShareID:(id)arg2 ;
-(void)setIWorkAuthorName:(id)arg1 ;
-(BOOL)hasIWorkAuthorName;
-(unsigned long long)iWorkAuthorColorIndex;
-(void)setIWorkAuthorColorIndex:(unsigned long long)arg1 ;
-(id)init;
-(BOOL)openURL:(id)arg1 ;
-(void)setDownloadDelegate:(id<TSADownloadDelegate>)arg1 ;
-(TSADocumentRoot *)documentRoot;
-(void)setDocumentRoot:(TSADocumentRoot *)arg1 ;
-(id<TSADownloadDelegate>)downloadDelegate;
-(void)ubiquitousKeyValueStoreDidChange:(id)arg1 ;
@end
