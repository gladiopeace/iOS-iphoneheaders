/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:30 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class THWAutoplayConfig;


@protocol THWAutoplayable <NSObject>
@property (nonatomic,readonly) THWAutoplayConfig * autoplayConfig; 
@property (nonatomic,readonly) char autoplayAllowed; 
@required
-(THWAutoplayConfig *)autoplayConfig;
-(void)autoplayStart;
-(void)autoplayStop;
-(void)autoplayPause;
-(char)autoplayAllowed;

@end

