/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:49 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <BackBoardServices/BackBoardServices-Structs.h>
@interface BKSCFBundle : NSObject {

	CFBundleRef _cfBundle;

}
-(void)dealloc;
-(id)bundleIdentifier;
-(id)infoDictionary;
-(id)localizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3 ;
-(id)bundlePath;
-(id)executablePath;
-(id)pathForResource:(id)arg1 ofType:(id)arg2 ;
-(id)initWithPath:(id)arg1 ;
-(id)localizedInfoDictionary;
-(id)initWithCFBundle:(CFBundleRef)arg1 ;
-(CFBundleRef)cfBundle;
@end

