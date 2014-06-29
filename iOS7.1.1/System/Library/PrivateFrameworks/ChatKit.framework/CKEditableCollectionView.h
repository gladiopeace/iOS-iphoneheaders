/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:57 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKit/UICollectionView.h>

@interface CKEditableCollectionView : UICollectionView {

	bool _editing;

}

@property (assign,getter=isEditing,nonatomic) bool editing;              //@synthesize editing=_editing - In the implementation block
-(bool)isEditing;
-(void)setEditing:(bool)arg1 animated:(bool)arg2 ;
-(void)setEditing:(bool)arg1 ;
-(id)initWithFrame:(CGRect)arg1 collectionViewLayout:(id)arg2 ;
-(id)dequeueReusableCellWithReuseIdentifier:(id)arg1 forIndexPath:(id)arg2 ;
@end

