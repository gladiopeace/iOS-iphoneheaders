/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:43 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PSStorageReporting;
@class NSString, NSArray;

@interface PSUsageBundleApp : NSObject {

	float _totalSize;
	NSString* _name;
	NSString* _bundleIdentifier;
	NSArray* _categories;
	<PSStorageReporting>* _usageBundleStorageReporter;

}

@property (nonatomic,retain) NSString * name;                                                //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * bundleIdentifier;                                    //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,retain) NSArray * categories;                                           //@synthesize categories=_categories - In the implementation block
@property (assign,nonatomic) float totalSize;                                                //@synthesize totalSize=_totalSize - In the implementation block
@property (nonatomic,retain) <PSStorageReporting> * usageBundleStorageReporter;              //@synthesize usageBundleStorageReporter=_usageBundleStorageReporter - In the implementation block
+(id)usageBundleAppForBundleWithIdentifier:(id)arg1 withTotalSize:(float)arg2 andCategories:(id)arg3 ;
+(id)usageBundleAppForBundleWithIdentifier:(id)arg1 withTotalSize:(float)arg2 ;
-(id)description;
-(id)bundleIdentifier;
-(void)setName:(id)arg1 ;
-(id)name;
-(id)categories;
-(void)setCategories:(id)arg1 ;
-(void)setUsageBundleStorageReporter:(id)arg1 ;
-(void)setTotalSize:(float)arg1 ;
-(id)usageBundleStorageReporter;
-(float)totalSize;
-(void)setBundleIdentifier:(id)arg1 ;
@end

