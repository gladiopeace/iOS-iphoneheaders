/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:33 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/NSCopying.h>
#import <QuartzCore/NSCoding.h>

@class CALayer, NSString;

@interface CAStateElement : NSObject <NSCopying, NSCoding> {

	CALayer* _target;
	CAStateElement* _source;

}

@property (assign,nonatomic,__weak) CALayer * target;                //@synthesize target=_target - In the implementation block
@property (nonatomic,retain) CAStateElement * source;                //@synthesize source=_source - In the implementation block
@property (nonatomic,copy,readonly) NSString * keyPath; 
+(void)CAMLParserStartElement:(id)arg1 ;
-(id)save;
-(void)apply:(id)arg1 ;
-(void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3 ;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(id)CAMLTypeForKey:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTarget:(CALayer *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CALayer *)target;
-(NSString *)keyPath;
-(CAStateElement *)source;
-(void)setSource:(CAStateElement *)arg1 ;
-(void)foreachLayer:(/*^block*/id)arg1 ;
-(id)targetName;
-(BOOL)matches:(id)arg1 ;
@end

