/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:19:13 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface UIWebPDFLinkAction : NSObject {

	int type;
	NSString* title;
	/*^block*/id handler;

}

@property (nonatomic,copy) NSString * title; 
@property (assign,nonatomic) int type; 
@property (nonatomic,copy) id handler; 
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(void)setType:(int)arg1 ;
-(int)type;
-(NSString *)title;
-(void)setHandler:(id)arg1 ;
-(id)handler;
@end

