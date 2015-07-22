/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:19:26 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <WebKit/NSCopying.h>

@class NSURL, NSArray;

@interface _WKProcessPoolConfiguration : NSObject <NSCopying> {

	RetainPtr<NSURL>* _injectedBundleURL;
	RetainPtr<NSArray>* _cachePartitionedURLSchemes;
	unsigned long long _maximumProcessCount;

}

@property (nonatomic,copy) NSURL * injectedBundleURL; 
@property (assign,nonatomic) unsigned long long maximumProcessCount;              //@synthesize maximumProcessCount=_maximumProcessCount - In the implementation block
@property (nonatomic,copy) NSArray * cachePartitionedURLSchemes; 
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)maximumProcessCount;
-(void)setMaximumProcessCount:(unsigned long long)arg1 ;
-(NSURL *)injectedBundleURL;
-(void)setInjectedBundleURL:(NSURL *)arg1 ;
-(NSArray *)cachePartitionedURLSchemes;
-(void)setCachePartitionedURLSchemes:(NSArray *)arg1 ;
@end
