/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:10 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSURL, NSHashTable, NSError, NSDictionary;

@interface NSFileWrapperMoreIVars : NSObject {

	NSURL* contentsURL;
	bool contentsMustBeReadWithoutMapping;
	bool attributesMustBeWrittenSoNoHardLinking;
	NSHashTable* parents;
	NSError* contentsLazyReadingError;
	NSDictionary* cachedDirectoryChildrenAsDictionary;

}
@end

