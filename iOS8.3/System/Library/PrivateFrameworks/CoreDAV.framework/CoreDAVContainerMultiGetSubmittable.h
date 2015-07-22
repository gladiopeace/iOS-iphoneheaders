/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:10:06 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSSet;


@protocol CoreDAVContainerMultiGetSubmittable <CoreDAVSubmittable>
@property (nonatomic,readonly) NSSet * missingURLs; 
@property (nonatomic,readonly) NSSet * deletedURLs; 
@property (nonatomic,readonly) NSSet * parsedContents; 
@property (assign,nonatomic) char shouldIgnoreResponseErrors; 
@required
-(NSSet *)missingURLs;
-(NSSet *)deletedURLs;
-(NSSet *)parsedContents;
-(char)shouldIgnoreResponseErrors;
-(void)setShouldIgnoreResponseErrors:(char)arg1;

@end
