/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:23 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <CoreMotion/CMLogItem.h>

@interface CMDeviceOrientation : CMLogItem {

	int fOrientation;

}

@property (nonatomic,readonly) int orientation; 
+(char)supportsSecureCoding;
-(id)orientationString;
-(id)initWithOrientation:(int)arg1 andTimestamp:(double)arg2 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(int)orientation;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
