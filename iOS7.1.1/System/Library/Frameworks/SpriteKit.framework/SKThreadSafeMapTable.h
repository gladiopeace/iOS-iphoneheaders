/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:45 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSCoding.h>
#import <CoreFoundation/NSFastEnumeration.h>

@class NSMutableArray;

@interface SKThreadSafeMapTable : NSObject <NSCopying, NSCoding, NSFastEnumeration> {

	int _storageLock;
	NSMutableArray* _storage;

}
-(id)initWithNSMapTable:(id)arg1 ;
-(id)description;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)copyWithZone:(NSZone)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(void).cxx_destruct;
@end

