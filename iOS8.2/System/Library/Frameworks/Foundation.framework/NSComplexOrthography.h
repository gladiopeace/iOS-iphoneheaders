/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:31 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOrthography.h>

@class NSString, NSDictionary;

@interface NSComplexOrthography : NSOrthography {

	NSString* _dominantScript;
	NSDictionary* _languageMap;
	unsigned _orthographyFlags;

}
+(void)initialize;
-(id)initWithDominantScript:(id)arg1 languageMap:(id)arg2 ;
-(unsigned)orthographyFlags;
-(id)dominantScript;
-(id)languageMap;
-(void)dealloc;
@end

