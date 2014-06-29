/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:22 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKitCore/PKPassImages.h>

@class PKImage;

@interface PKPassBackFaceImages : PKPassImages {

	PKImage* _faceImage;

}

@property (nonatomic,retain) PKImage * faceImage;              //@synthesize faceImage=_faceImage - In the implementation block
+(bool)supportsSecureCoding;
+(id)archiveName;
+(long long)imageSet;
+(long long)currentVersion;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)preheatImages;
-(id)initWithCardURL:(id)arg1 displayProfile:(id)arg2 ;
-(void)setFaceImage:(id)arg1 ;
-(id)faceImage;
@end

