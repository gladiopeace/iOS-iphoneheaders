/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:59 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/NanoSystemSettings.framework/NanoSystemSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NanoSystemSettings/NSSecureCoding.h>

@class NSString, NSArray;

@interface NSSUsageBundle : NSObject <NSSecureCoding> {

	BOOL _purgeable;
	NSString* _name;
	NSString* _bundleIdentifier;
	NSArray* _categories;
	unsigned long long _totalSize;

}

@property (nonatomic,retain) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * bundleIdentifier;                    //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,retain) NSArray * categories;                           //@synthesize categories=_categories - In the implementation block
@property (assign,nonatomic) unsigned long long totalSize;                   //@synthesize totalSize=_totalSize - In the implementation block
@property (assign,getter=isPurgeable,nonatomic) BOOL purgeable;              //@synthesize purgeable=_purgeable - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isPurgeable;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)bundleIdentifier;
-(NSArray *)categories;
-(unsigned long long)totalSize;
-(void)setTotalSize:(unsigned long long)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setPurgeable:(BOOL)arg1 ;
-(void)setCategories:(NSArray *)arg1 ;
@end

