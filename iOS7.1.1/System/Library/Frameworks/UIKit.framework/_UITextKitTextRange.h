/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:08 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UITextRange.h>
#import <CoreFoundation/NSCopying.h>

@class _UITextKitTextPosition, UITextPosition;

@interface _UITextKitTextRange : UITextRange <NSCopying> {

	_UITextKitTextPosition* _start;
	_UITextKitTextPosition* _end;

}

@property (nonatomic,retain) UITextPosition * start;              //@synthesize start=_start - In the implementation block
@property (nonatomic,retain) UITextPosition * end;                //@synthesize end=_end - In the implementation block
@property (nonatomic,readonly) long long affinity; 
+(id)rangeWithRange:(NSRange)arg1 ;
+(id)rangeWithStart:(id)arg1 end:(id)arg2 ;
+(id)rangeWithRange:(NSRange)arg1 affinity:(long long)arg2 ;
+(id)defaultRange;
-(void)dealloc;
-(id)init;
-(bool)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(bool)isEmpty;
-(NSRange)asRange;
-(id)start;
-(id)end;
-(long long)affinity;
-(void)setStart:(id)arg1 ;
-(void)setEnd:(id)arg1 ;
@end

