/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:45 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSCoding.h>

@class NSString, NSDictionary;

@interface SKBitmapFont : NSObject <NSCoding> {

	NSString* _fontName;
	NSString* _filePath;
	double _lineHeight;
	double _baseLine;
	NSDictionary* _characterSprites;
	NSDictionary* _characterAdvances;
	NSDictionary* _characterKerning;
	bool _internal;
	NSString* _fileName;

}
+(id)_fontForFileNamed:(id)arg1 ;
+(id)fontForFileNamed:(id)arg1 ;
+(id)fontWithTexture:(id)arg1 fontDataString:(id)arg2 ;
-(id)fontName;
-(bool)loadFontWithTexture:(id)arg1 fontDataString:(id)arg2 ;
-(id)spriteForCharacterNamed:(id)arg1 ;
-(double)advanceForCharacterNamed:(id)arg1 ;
-(double)kerningForCharacterNamed:(id)arg1 followedBy:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(double)lineHeight;
-(void).cxx_destruct;
@end

