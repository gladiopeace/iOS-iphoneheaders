/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:10 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class WebBookmark, NSString;

@interface FolderPickerItem : NSObject {

	WebBookmark* _bookmark;
	unsigned _depth;

}

@property (nonatomic,readonly) WebBookmark * bookmark;              //@synthesize bookmark=_bookmark - In the implementation block
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) unsigned depth;                      //@synthesize depth=_depth - In the implementation block
-(void)dealloc;
-(id)title;
-(id)_initWithBookmark:(id)arg1 depth:(unsigned)arg2 ;
-(unsigned)depth;
-(id)bookmark;
@end

