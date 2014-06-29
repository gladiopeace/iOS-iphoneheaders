/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:42 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface SLService : NSObject
+(id)availableServices;
+(id)serviceForServiceType:(id)arg1 ;
+(id)allServices;
-(bool)isAvailable;
-(void)addExtraParameters:(id)arg1 forRequest:(id)arg2 ;
-(bool)isFirstClassService;
-(bool)isSheetAccessPermitted;
-(bool)isServiceTypeSupportedByConfiguration;
-(long long)maximumVideoDataSize;
-(long long)maximumVideoTimeLimit;
-(id)connectionName;
-(id)shareSheetHostingBundleIdentifier;
-(id)shareSheetClassName;
-(bool)supportsImageURL:(id)arg1 ;
-(bool)supportsVideoURL:(id)arg1 ;
-(id)composeViewController;
-(id)activityTitle;
-(id)activityImage;
-(long long)maximumImageDataSize;
-(long long)maximumURLCount;
-(long long)maximumImageCount;
-(long long)maximumVideoCount;
-(id)serviceType;
-(id)accountType;
-(bool)hasAccounts;
@end

