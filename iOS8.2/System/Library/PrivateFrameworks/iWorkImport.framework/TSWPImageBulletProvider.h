/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:20 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, NSArray;

@interface TSWPImageBulletProvider : NSObject {

	NSMutableArray* _images;
	NSMutableArray* _filenames;

}

@property (nonatomic,readonly) NSArray * predefinedImages; 
+(id)sharedInstance;
-(id)dataForDefaultImageBulletWithContext:(id)arg1 ;
-(id)p_predefinedImageNames;
-(id)p_pathToPredefinedImages;
-(id)dataForImageBullet:(id)arg1 withContext:(id)arg2 ;
-(NSArray *)predefinedImages;
@end

