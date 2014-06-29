/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:23 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSCoding.h>

@interface VideoAttributes : NSObject <NSCopying, NSCoding> {

	CGSize ratio;
	int orientation;
	int camera;
	bool cameraSwitching;
	CGRect contentsRect;

}

@property (assign,nonatomic) CGSize ratio; 
@property (assign,nonatomic) int orientation; 
@property (assign,nonatomic) int camera; 
@property (assign,nonatomic) bool cameraSwitching; 
@property (assign,nonatomic) CGRect contentsRect; 
+(id)videoAttributesWithVideoAttributes:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(int)orientation;
-(id)copyWithZone:(NSZone)arg1 ;
-(void)setContentsRect:(CGRect)arg1 ;
-(void)setOrientation:(int)arg1 ;
-(CGRect)contentsRect;
-(id)initWithEncodedDictionary:(id)arg1 ;
-(int)camera;
-(void)decodeFromNSDictionary:(id)arg1 ;
-(id)encodeToNewNSDictionary;
-(CGSize)ratio;
-(void)setRatio:(CGSize)arg1 ;
-(void)setCamera:(int)arg1 ;
-(bool)cameraSwitching;
-(void)setCameraSwitching:(bool)arg1 ;
-(id)initWithCameraStatusBits:(unsigned char)arg1 aspectRatio:(CGSize)arg2 contentsRect:(CGRect)arg3 ;
-(bool)isEqualToVideoAttributes:(id)arg1 ;
@end

