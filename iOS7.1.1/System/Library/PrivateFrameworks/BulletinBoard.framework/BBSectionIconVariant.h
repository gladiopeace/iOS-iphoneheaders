/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:52 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BulletinBoard/BulletinBoard-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSSecureCoding.h>

@class NSData, NSString;

@interface BBSectionIconVariant : NSObject <NSCopying, NSSecureCoding> {

	bool _precomposed;
	long long _format;
	NSData* _imageData;
	NSString* _imagePath;
	NSString* _imageName;
	NSString* _bundlePath;

}

@property (assign,nonatomic) long long format;                                   //@synthesize format=_format - In the implementation block
@property (nonatomic,copy) NSData * imageData;                                   //@synthesize imageData=_imageData - In the implementation block
@property (nonatomic,copy) NSString * imagePath;                                 //@synthesize imagePath=_imagePath - In the implementation block
@property (nonatomic,copy) NSString * imageName;                                 //@synthesize imageName=_imageName - In the implementation block
@property (nonatomic,copy) NSString * bundlePath;                                //@synthesize bundlePath=_bundlePath - In the implementation block
@property (assign,getter=isPrecomposed,nonatomic) bool precomposed;              //@synthesize precomposed=_precomposed - In the implementation block
+(bool)supportsSecureCoding;
+(id)_variantWithFormat:(long long)arg1 ;
+(id)variantWithFormat:(long long)arg1 imageData:(id)arg2 ;
+(id)variantWithFormat:(long long)arg1 imagePath:(id)arg2 ;
+(id)variantWithFormat:(long long)arg1 imageName:(id)arg2 inBundle:(id)arg3 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)bundlePath;
-(id)copyWithZone:(NSZone)arg1 ;
-(bool)isPrecomposed;
-(void)setPrecomposed:(bool)arg1 ;
-(void)setImagePath:(id)arg1 ;
-(void)setImageName:(id)arg1 ;
-(void)setBundlePath:(id)arg1 ;
-(id)imagePath;
-(id)imageData;
-(void)setImageData:(id)arg1 ;
-(id)imageName;
-(long long)format;
-(void)setFormat:(long long)arg1 ;
@end

