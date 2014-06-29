/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 2:00:26 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/VoiceOverTouch.app/vot
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <vot/vot-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class AXEventRepresentation, NSString;

@interface VOTKeyInfo : NSObject <NSCopying> {

	AXEventRepresentation* _eventRecord;
	struct {
		unsigned keyDown : 1;
		unsigned keyUp : 1;
		unsigned modifiersChanged : 1;
	}  _flags;
	NSString* _characters;
	NSString* _originalCharacters;
	unsigned _changedModifiers;

}

@property (nonatomic,retain) AXEventRepresentation * eventRecord;               //@synthesize eventRecord=_eventRecord - In the implementation block
@property (nonatomic,@dynamic,readonly) int mediaKeyCode; 
@property (nonatomic,retain) NSString * characters;                             //@synthesize characters=_characters - In the implementation block
@property (nonatomic,retain) NSString * originalCharacters;                     //@synthesize originalCharacters=_originalCharacters - In the implementation block
@property (assign,nonatomic,@dynamic) unsigned short keyCode; 
@property (assign,nonatomic,@dynamic) BOOL keyDown; 
@property (assign,nonatomic,@dynamic) BOOL keyUp; 
@property (assign,nonatomic,@dynamic) BOOL modifiersChanged; 
@property (nonatomic,@dynamic,readonly) unsigned modifierState; 
@property (assign,nonatomic) unsigned changedModifiers;                         //@synthesize changedModifiers=_changedModifiers - In the implementation block
@property (nonatomic,@dynamic,readonly) BOOL isShiftKeyPressed; 
@property (nonatomic,@dynamic,readonly) BOOL isCommandKeyPressed; 
@property (nonatomic,@dynamic,readonly) BOOL isOptionKeyPressed; 
@property (nonatomic,@dynamic,readonly) BOOL isControlKeyPressed; 
@property (nonatomic,@dynamic,readonly) BOOL isCapsLockKeyPressed; 
@property (nonatomic,@dynamic,readonly) BOOL isMediaKey; 
@property (nonatomic,readonly) BOOL isAppleVendorKey; 
@property (nonatomic,readonly) BOOL isBrightnessKey; 
@property (nonatomic,readonly) BOOL isEscapeKey; 
-(id)initWithEventRepresentation:(id)arg1 ;
-(id)eventRecord;
-(BOOL)isMediaKey;
-(BOOL)isCommandKeyPressed;
-(BOOL)isOptionKeyPressed;
-(unsigned)changedModifiers;
-(BOOL)isAppleVendorKey;
-(int)mediaKeyCode;
-(BOOL)isControlKeyPressed;
-(id)originalCharacters;
-(BOOL)isShiftKeyPressed;
-(BOOL)isEscapeKey;
-(BOOL)keyUp;
-(BOOL)modifiersChanged;
-(void)setChangedModifiers:(unsigned)arg1 ;
-(void)setModifiersChanged:(BOOL)arg1 ;
-(BOOL)isBrightnessKey;
-(void)setEventRecord:(id)arg1 ;
-(void)setKeyUp:(BOOL)arg1 ;
-(BOOL)isCapsLockKeyPressed;
-(void)setOriginalCharacters:(id)arg1 ;
-(void)_setCommandKeyPressed:(BOOL)arg1 ;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(void)setCharacters:(id)arg1 ;
-(id)characters;
-(void)setKeyCode:(unsigned short)arg1 ;
-(void)setKeyDown:(BOOL)arg1 ;
-(unsigned)modifierState;
-(BOOL)keyDown;
-(unsigned short)keyCode;
@end

