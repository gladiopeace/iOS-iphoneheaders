/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:46 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Radio/Radio-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreData/NSFetchedResultsSectionInfo.h>
#import <CoreFoundation/NSMutableCopying.h>

@class NSString, NSArray;

@interface RadioTrackHistorySectionInfo : NSObject <NSCopying, NSFetchedResultsSectionInfo, NSMutableCopying> {

	NSString* _indexTitle;
	NSString* _name;
	unsigned long long _numberOfObjects;
	NSArray* _objects;

}

@property (nonatomic,readonly) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * indexTitle;                           //@synthesize indexTitle=_indexTitle - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfObjects;              //@synthesize numberOfObjects=_numberOfObjects - In the implementation block
@property (nonatomic,readonly) NSArray * objects;                               //@synthesize objects=_objects - In the implementation block
-(id)indexTitle;
-(unsigned long long)numberOfObjects;
-(id)objects;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)name;
-(id)mutableCopyWithZone:(NSZone)arg1 ;
-(void).cxx_destruct;
@end

