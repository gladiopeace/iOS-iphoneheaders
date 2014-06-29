/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:29 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, NSString;

@interface PLProgressStack : NSObject {

	bool notifyUsingAssetsdNotificationCenter;
	float currentMultiplier;
	float currentTotal;
	id delegate;
	NSMutableArray* multipliers;
	NSString* mediaPathString;

}

@property (assign,nonatomic) id delegate; 
@property (assign,nonatomic) float currentMultiplier; 
@property (nonatomic,retain) NSMutableArray * multipliers; 
@property (assign,nonatomic) float currentTotal; 
@property (assign,nonatomic) bool notifyUsingAssetsdNotificationCenter; 
@property (nonatomic,retain) NSString * mediaPathString; 
+(id)unarchiveFromDictionary:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)pop;
-(void)updateProgress:(float)arg1 ;
-(void)setCurrentMediaPath:(id)arg1 ;
-(void)popAndUpdate;
-(void)setCurrentMultiplier:(float)arg1 ;
-(void)setMultipliers:(id)arg1 ;
-(id)multipliers;
-(float)currentTotal;
-(float)currentMultiplier;
-(void)setCurrentTotal:(float)arg1 ;
-(void)setMediaPathString:(id)arg1 ;
-(float)totalProgress:(float)arg1 ;
-(bool)notifyUsingAssetsdNotificationCenter;
-(id)mediaPathString;
-(id)initWithDelegate:(id)arg1 ;
-(void)setNotifyUsingAssetsdNotificationCenter:(bool)arg1 ;
-(void)push:(float)arg1 ;
-(id)archiveToDictionary;
@end

