/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:49 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSSecureCoding.h>

@class NSString;

@interface AFUIDialogPhase : NSObject <NSSecureCoding> {

	long long _type;

}

@property (getter=isTemporary,nonatomic,readonly) bool temporary; 
@property (getter=isExpository,nonatomic,readonly) bool expository; 
@property (getter=isConfirmationDialogPhase,nonatomic,readonly) bool confirmationDialogPhase; 
@property (getter=isReflectionDialogPhase,nonatomic,readonly) bool reflectionDialogPhase; 
@property (getter=isClarificationDialogPhase,nonatomic,readonly) bool clarificationDialogPhase; 
@property (getter=isConfirmedDialogPhase,nonatomic,readonly) bool confirmedDialogPhase; 
@property (getter=isCancelledDialogPhase,nonatomic,readonly) bool cancelledDialogPhase; 
@property (getter=isUserRequestDialogPhase,nonatomic,readonly) bool userRequestDialogPhase; 
@property (getter=isErrorDialogPhase,nonatomic,readonly) bool errorDialogPhase; 
@property (nonatomic,readonly) NSString * aceDialogPhaseValue; 
@property (getter=_type,nonatomic,readonly) long long type;                                                  //@synthesize type=_type - In the implementation block
+(bool)supportsSecureCoding;
+(id)dialogPhaseForAceDialogPhase:(id)arg1 ;
+(id)acknowledgementDialogPhase;
+(id)reflectionDialogPhase;
+(id)statusDialogPhase;
+(id)clarificationDialogPhase;
+(id)summaryDialogPhase;
+(id)confirmationDialogPhase;
+(id)completionDialogPhase;
+(id)errorDialogPhase;
+(id)confirmedDialogPhase;
+(id)cancelledDialogPhase;
+(id)_dialogPhaseWithType:(long long)arg1 ;
+(id)userRequestDialogPhase;
-(bool)isTemporary;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)_type;
-(bool)isReflectionDialogPhase;
-(bool)isEqualToDialogPhase:(id)arg1 ;
-(id)aceDialogPhaseValue;
-(bool)replacesPreviousSnippetContents;
-(bool)isExpository;
-(bool)isConfirmationDialogPhase;
-(bool)isClarificationDialogPhase;
-(bool)isConfirmedDialogPhase;
-(bool)isCancelledDialogPhase;
-(bool)isUserRequestDialogPhase;
-(bool)isErrorDialogPhase;
-(id)_initWithType:(long long)arg1 ;
@end

