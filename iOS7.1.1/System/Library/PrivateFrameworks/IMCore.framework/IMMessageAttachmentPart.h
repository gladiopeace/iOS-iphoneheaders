/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:35 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMCore/IMMessagePart.h>

@class NSString, NSAttributedString, IMFileTransfer;

@interface IMMessageAttachmentPart : IMMessagePart {

	NSString* _transferGuid;
	NSAttributedString* _text;

}

@property (nonatomic,readonly) IMFileTransfer * fileTransfer; 
@property (nonatomic,readonly) NSAttributedString * text;                  //@synthesize text=_text - In the implementation block
-(void)dealloc;
-(id)description;
-(id)text;
-(id)initWithGUID:(id)arg1 fileTransfer:(id)arg2 text:(id)arg3 ;
-(id)fileTransfer;
@end

