/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:51 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIActivity.h>

@class NSString, SLComposeViewController, UIImage;

@interface UISocialActivity : UIActivity {

	NSString* _socialActivityType;
	SLComposeViewController* _socialComposeViewController;
	UIImage* _composedImage;

}

@property (nonatomic,copy) NSString * socialActivityType;                                        //@synthesize socialActivityType=_socialActivityType - In the implementation block
@property (nonatomic,retain) SLComposeViewController * socialComposeViewController;              //@synthesize socialComposeViewController=_socialComposeViewController - In the implementation block
@property (nonatomic,retain) UIImage * composedImage;                                            //@synthesize composedImage=_composedImage - In the implementation block
+(int)activityCategory;
-(void)dealloc;
-(CGSize)_thumbnailSize;
-(id)_activityImage;
-(id)activityTitle;
-(id)activityType;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(void)_cleanup;
-(id)activityViewController;
-(void)prepareWithActivityItems:(id)arg1 ;
-(id)initActivityType:(id)arg1 ;
-(void)setSocialActivityType:(id)arg1 ;
-(id)socialActivityType;
-(id)_serviceType;
-(void)setComposedImage:(id)arg1 ;
-(int)_activityItemTypes;
-(int)_blockingActivityItemTypes;
-(int)_maxImageDataSize;
-(void)setSocialComposeViewController:(id)arg1 ;
-(id)socialComposeViewController;
-(id)composedImage;
@end

