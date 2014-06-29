/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:58 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKTranscriptDataRowObject.h>

@protocol CKMessage;
@class CKEntity, NSString;

@interface CKTypingIndicator : NSObject <CKTranscriptDataRowObject> {

	bool _hasAppeared;
	<CKMessage>* _message;

}

@property (nonatomic,retain) <CKMessage> * message;              //@synthesize message=_message - In the implementation block
@property (nonatomic,readonly) CKEntity * sender; 
@property (assign,nonatomic) bool hasAppeared;                   //@synthesize hasAppeared=_hasAppeared - In the implementation block
@property (nonatomic,readonly) NSString * guid; 
-(id)__ck_displayGUIDWithMessage:(id)arg1 ;
-(Class)__ck_displayCellClass;
-(id)__ck_displayCellIdentifier;
-(void)__ck_prewarmForDisplay;
-(id)__ck_displayContactImage;
-(UIEdgeInsets)__ck_displayContentAlignmentInsets;
-(BOOL)__ck_displayTranscriptOrientation;
-(bool)__ck_transcriptUsesTextAlignmentInsets;
-(bool)__ck_displayDuringSend;
-(bool)__ck_wantsDrawerLayout;
-(CGSize)__ck_displaySize:(UIEdgeInsets*)arg1 ;
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(id)message;
-(void)setMessage:(id)arg1 ;
-(id)sender;
-(bool)hasAppeared;
-(void)setHasAppeared:(bool)arg1 ;
-(id)guid;
-(id)initWithMessage:(id)arg1 ;
@end

