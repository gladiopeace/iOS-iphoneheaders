/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:53:01 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSMutableDictionary;

@interface TCBundleResourceManager : NSObject {

	NSMutableDictionary* mPackageMap;

}
+(id)instance;
+(void)disposeInstance;
-(void)dealloc;
-(id)init;
-(id)packageWithName:(id)arg1 cacheResult:(char)arg2 ;
-(id)dataForResource:(id)arg1 ofType:(id)arg2 inPackage:(id)arg3 cacheResult:(char)arg4 ;
-(xmlDoc*)xmlDocumentForResource:(id)arg1 ofType:(id)arg2 inPackage:(id)arg3 cacheResult:(char)arg4 ;
@end

