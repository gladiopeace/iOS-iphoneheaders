/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:07 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol StackDelegate <NSObject>
@optional
-(void)stackControllerWillStartStackingViews:(id)arg1;
-(void)stackControllerDidStopStackingViews:(id)arg1;
-(void)stackControllerWillStartAnimatingViews:(id)arg1;
-(void)stackControllerDidStopAnimatingViews:(id)arg1;
-(void)stackController:(id)arg1 dataLoadTimedOutInView:(id)arg2 forItem:(id)arg3;
-(void)stackController:(id)arg1 willStackView:(id)arg2 forItem:(id)arg3;
-(void)stackController:(id)arg1 willDisplayView:(id)arg2 forItem:(id)arg3;
-(void)stackController:(id)arg1 willRemoveViewForItem:(id)arg2;
@end

