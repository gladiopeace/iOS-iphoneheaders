/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:23:31 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/VoiceOverTouch.app/scrod
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SCROBrailleDisplayCommandDispatcherProtocol <NSObject>
@property (assign,nonatomic) id<SCROBrailleDisplayCommandDispatcherDelegate> delegate; 
@required
-(void)setDelegate:(id)arg1;
-(id<SCROBrailleDisplayCommandDispatcherDelegate>)delegate;
-(void)handleBrailleKeyEvent:(id)arg1;

@end

