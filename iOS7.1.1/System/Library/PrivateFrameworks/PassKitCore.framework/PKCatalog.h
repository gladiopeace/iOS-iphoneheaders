/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:22 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSSecureCoding.h>

@class NSMutableArray, NSDate;

@interface PKCatalog : NSObject <NSSecureCoding> {

	NSMutableArray* _groups;
	NSDate* _timestamp;

}

@property (nonatomic,retain) NSMutableArray * groups;              //@synthesize groups=_groups - In the implementation block
@property (nonatomic,retain) NSDate * timestamp;                   //@synthesize timestamp=_timestamp - In the implementation block
+(bool)supportsSecureCoding;
+(id)catalogWithContentsOfURL:(id)arg1 ;
-(void)setGroups:(id)arg1 ;
-(id)groups;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(id)timestamp;
-(void)setTimestamp:(id)arg1 ;
-(void)writeToURL:(id)arg1 atomically:(bool)arg2 ;
-(bool)isEquivalentToCatalog:(id)arg1 ;
-(bool)isNewerThanCatalog:(id)arg1 ;
-(id)allGroupIDs;
-(void)shuffle:(int)arg1 ;
@end

