/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:21 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface TSPDocumentResourceInfo : NSObject {

	NSString* _digestString;
	NSString* _locator;
	NSString* _extension;
	long long _fileSize;

}

@property (nonatomic,readonly) NSString * digestString;              //@synthesize digestString=_digestString - In the implementation block
@property (nonatomic,readonly) NSString * locator;                   //@synthesize locator=_locator - In the implementation block
@property (nonatomic,readonly) NSString * extension;                 //@synthesize extension=_extension - In the implementation block
@property (nonatomic,readonly) long long fileSize;                   //@synthesize fileSize=_fileSize - In the implementation block
-(id)locator;
-(id)digestString;
-(id)initWithDigestString:(id)arg1 locator:(id)arg2 extension:(id)arg3 fileSize:(long long)arg4 ;
-(id)extension;
-(id)init;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void).cxx_destruct;
-(long long)fileSize;
@end

