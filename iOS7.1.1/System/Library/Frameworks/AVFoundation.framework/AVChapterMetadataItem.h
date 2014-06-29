/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:31 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVMetadataItem.h>

@class AVChapterMetadataItemInternal;

@interface AVChapterMetadataItem : AVMetadataItem {

	AVChapterMetadataItemInternal* _privChapter;

}
-(void)cancelLoading;
-(id)_initWithAsset:(id)arg1 chapterGroupIndex:(long long)arg2 chapterIndex:(long long)arg3 chapterType:(id)arg4 locale:(id)arg5 time:(SCD_Struct_CM4)arg6 duration:(SCD_Struct_CM4)arg7 ;
-(void)_addFigAssetNotifications;
-(void)_removeFigAssetNotifications;
-(void)_ensureValueLoadedSync;
-(void)_setValueStatus:(long long)arg1 figErrorCode:(int)arg2 ;
-(long long)_valueStatus;
-(void)_takeValueFrom:(id)arg1 ;
-(bool)_valueForKeyDependsOnMetadataValue:(id)arg1 ;
-(long long)_chapterGroupIndex;
-(long long)_chapterIndex;
-(id)keySpace;
-(void)dealloc;
-(id)init;
-(id)description;
-(SCD_Struct_CM4)duration;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)value;
-(SCD_Struct_CM4)time;
-(id)key;
-(id)locale;
-(id)mutableCopyWithZone:(NSZone)arg1 ;
-(long long)statusOfValueForKey:(id)arg1 error:(id*)arg2 ;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(id)commonKey;
-(id)extraAttributes;
-(void)finalize;
@end

