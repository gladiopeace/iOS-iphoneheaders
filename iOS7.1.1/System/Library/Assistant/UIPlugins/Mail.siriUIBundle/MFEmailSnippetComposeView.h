/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:12 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Assistant/UIPlugins/Mail.siriUIBundle/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Mail/Mail-Structs.h>
#import <SiriUI/SiriUIContentCollectionViewCell.h>
#import <AppleAccount/MSSearchDelegate.h>
#import <Mail/MFEmailSnippetCollectionCellView.h>

@protocol OS_dispatch_semaphore, MFEmailSnippetComposeViewDelegate;
@class SAEmailEmail, NSObject, NSString, UILabel, SiriUIKeyline;

@interface MFEmailSnippetComposeView : SiriUIContentCollectionViewCell <MSSearchDelegate, MFEmailSnippetCollectionCellView> {

	SAEmailEmail* _email;
	NSObject<OS_dispatch_semaphore>* _searchCompleted;
	NSString* _subjectResult;
	UILabel* _toHeader;
	UILabel* _toField;
	UILabel* _ccHeader;
	UILabel* _ccField;
	UILabel* _bccHeader;
	UILabel* _bccField;
	UILabel* _subjectHeader;
	UILabel* _subjectField;
	SiriUIKeyline* _subjectDivider;
	UILabel* _bodyText;
	<MFEmailSnippetComposeViewDelegate>* _composeViewDelegate;

}

@property (nonatomic,retain) SAEmailEmail * email;                                                   //@synthesize email=_email - In the implementation block
@property (assign,nonatomic) <MFEmailSnippetComposeViewDelegate> * composeViewDelegate;              //@synthesize composeViewDelegate=_composeViewDelegate - In the implementation block
+(bool)requiresConstraintBasedLayout;
+(id)reuseIdentifier;
-(void)_setupAndAddLabel:(id)arg1 isHeader:(bool)arg2 ;
-(void)_repopulateFields;
-(id)_recipientsFromArray:(id)arg1 ;
-(bool)_shouldDisplayField:(id)arg1 ;
-(double)_roundToPixel:(double)arg1 ;
-(CGRect)_frameForBodyTextWithSize:(CGSize)arg1 startingAt:(double)arg2 ;
-(bool)_loadSubjectForReference:(id)arg1 ;
-(bool)_shouldDisplayField:(id)arg1 withHeader:(id)arg2 removeIfNotDisplayed:(bool)arg3 ;
-(id)draftURL;
-(id)composeViewDelegate;
-(void)setComposeViewDelegate:(id)arg1 ;
-(double)desiredHeight;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)updateConstraints;
-(void)setEmail:(id)arg1 ;
-(bool)search:(id)arg1 didFindResults:(id)arg2 ;
-(void)search:(id)arg1 didFinishWithError:(id)arg2 ;
-(id)email;
@end

