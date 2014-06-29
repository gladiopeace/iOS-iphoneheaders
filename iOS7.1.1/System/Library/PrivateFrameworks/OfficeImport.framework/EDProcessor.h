/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:07 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class EDWorkbook, EDResources, NSMutableArray;

@interface EDProcessor : NSObject {

	EDWorkbook* mWorkbook;
	EDResources* mResources;
	NSMutableArray* mObjects;

}
-(void)dealloc;
-(id)initWithWorkbook:(id)arg1 ;
-(bool)isObjectSupported:(id)arg1 ;
-(void)applyProcessorToObject:(id)arg1 sheet:(id)arg2 ;
-(void)markObjectForPostProcessing:(id)arg1 ;
-(void)applyProcessorWithSheet:(id)arg1 ;
@end

