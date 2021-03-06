/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:05 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <itunescloudd/HSMediaLibraryImportObserverDelegate.h>

@class HSMediaLibraryImportObserver, HSCloudLibrary, NSString;

@interface SagaImporter : NSObject <HSMediaLibraryImportObserverDelegate> {

	float _progress;
	HSMediaLibraryImportObserver* _mediaLibraryImportObserver;
	BOOL _isCancelled;
	HSCloudLibrary* _library;
	BOOL _prefetchArtwork;

}

@property (assign,nonatomic) BOOL prefetchArtwork;                  //@synthesize prefetchArtwork=_prefetchArtwork - In the implementation block
@property (nonatomic,readonly) BOOL isCancelled;                    //@synthesize isCancelled=_isCancelled - In the implementation block
@property (nonatomic,readonly) float progress;                      //@synthesize progress=_progress - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)cancelAllOperations;
-(void)setPrefetchArtwork:(BOOL)arg1 ;
-(void)importTracksUpToRevision:(unsigned)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(BOOL)prefetchArtwork;
-(BOOL)_importLyricsFromItemsResponseData:(id)arg1 ;
-(void)_sendActivityPing;
-(id)initWithLibrary:(id)arg1 ;
-(void)cancel;
-(void)dealloc;
-(id)init;
-(BOOL)isCancelled;
-(float)progress;
-(void)mediaLibraryImportObserver:(id)arg1 didReportProgress:(float)arg2 ;
-(void)mediaLibraryImportObserver:(id)arg1 didReportError:(id)arg2 ;
@end

