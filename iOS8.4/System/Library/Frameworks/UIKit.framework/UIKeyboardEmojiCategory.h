/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:19:04 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray, NSString;

@interface UIKeyboardEmojiCategory : NSObject {

	int _categoryType;
	NSArray* _emoji;
	long long _lastVisibleFirstEmojiIndex;
	NSString* _displaySymbol;

}

@property (assign) int categoryType;                                             //@synthesize categoryType=_categoryType - In the implementation block
@property (retain) NSArray * emoji;                                              //@synthesize emoji=_emoji - In the implementation block
@property (assign,nonatomic) long long lastVisibleFirstEmojiIndex;               //@synthesize lastVisibleFirstEmojiIndex=_lastVisibleFirstEmojiIndex - In the implementation block
@property (getter=name,nonatomic,readonly) NSString * name; 
@property (getter=displaySymbol,readonly) NSString * displaySymbol;              //@synthesize displaySymbol=_displaySymbol - In the implementation block
+(id)localizedStringForKey:(id)arg1 ;
+(long long)numberOfCategories;
+(id)categoryForType:(int)arg1 ;
+(id)displayName:(int)arg1 ;
+(id)categories;
+(BOOL)emojiString:(id)arg1 inGroup:(unsigned*)arg2 withGroupCount:(int)arg3 ;
+(unsigned long long)hasVariantsForEmoji:(id)arg1 ;
+(id)emojiRecentsFromPreferences;
-(void)dealloc;
-(NSArray *)emoji;
-(NSString *)name;
-(void)setEmoji:(NSArray *)arg1 ;
-(void)setCategoryType:(int)arg1 ;
-(int)categoryType;
-(void)releaseCategories;
-(long long)lastVisibleFirstEmojiIndex;
-(void)setLastVisibleFirstEmojiIndex:(long long)arg1 ;
-(NSString *)displaySymbol;
@end
