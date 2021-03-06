/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:26 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class UIScrollView;


@protocol BKTOCViewControllerProtocol <NSObject>
@property (assign,nonatomic) id<BKTOCViewControllerDelegate> directoryDelegate; 
@property (assign,nonatomic) UIEdgeInsets centeringInsets; 
@property (assign,nonatomic) NSObject*<BKContentViewControllerLayoutDelegate> layoutDelegate; 
@property (assign,getter=isVertical,nonatomic) char vertical; 
@property (nonatomic,readonly) UIScrollView * scrollView; 
@required
-(id<BKTOCViewControllerDelegate>)directoryDelegate;
-(void)setDirectoryDelegate:(id)arg1;
-(UIEdgeInsets)centeringInsets;
-(void)setCenteringInsets:(UIEdgeInsets)arg1;
-(void)reload;
-(UIScrollView *)scrollView;
-(void)updateView;
-(char)isVertical;
-(void)setVertical:(char)arg1;
-(NSObject*<BKContentViewControllerLayoutDelegate>)layoutDelegate;
-(void)setLayoutDelegate:(id)arg1;

@end

