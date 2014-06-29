/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:13 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterFoundation/GameCenterFoundation-Structs.h>
#import <CoreFoundation/NSCoding.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSSecureCoding.h>

@interface GKInternalRepresentation : NSObject <NSCoding, NSCopying, NSSecureCoding>
+(id)internalRepresentation;
+(id)secureCodedPropertyKeys;
+(id)codedPropertyKeys;
+(bool)supportsSecureCoding;
-(id)serverRepresentation;
-(void)mergePropertiesFrom:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
@end

