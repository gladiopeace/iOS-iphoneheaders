/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:56 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray, NSMutableArray, NSOperationQueue;

@interface _UIDocumentPickerContainerModel : NSObject {

	int _sortOrder;
	NSArray* _pickableTypes;
	unsigned long long _pickerMode;
	NSMutableArray* _updateHandlers;
	NSOperationQueue* _thumbnailQueue;

}

@property (nonatomic,readonly) NSArray * modelObjects; 
@property (nonatomic,copy) NSArray * pickableTypes;                          //@synthesize pickableTypes=_pickableTypes - In the implementation block
@property (assign,nonatomic) unsigned long long pickerMode;                  //@synthesize pickerMode=_pickerMode - In the implementation block
@property (assign,nonatomic) int sortOrder;                                  //@synthesize sortOrder=_sortOrder - In the implementation block
@property (nonatomic,readonly) BOOL afterInitialUpdate; 
@property (nonatomic,retain) NSMutableArray * updateHandlers;                //@synthesize updateHandlers=_updateHandlers - In the implementation block
@property (nonatomic,retain) NSOperationQueue * thumbnailQueue;              //@synthesize thumbnailQueue=_thumbnailQueue - In the implementation block
-(void)dealloc;
-(id)init;
-(BOOL)afterInitialUpdate;
-(void)updateSortDescriptors;
-(id)addUpdateHandler:(/*^block*/id)arg1 weakSelf:(id)arg2 ;
-(void)removeUpdateHandler:(id)arg1 ;
-(NSArray *)modelObjects;
-(void)startMonitoringChanges;
-(void)stopMonitoringChanges;
-(id)displayTitle;
-(void)refreshItem:(id)arg1 thumbnailOnly:(BOOL)arg2 ;
-(void)setSortOrder:(int)arg1 ;
-(NSArray *)pickableTypes;
-(void)setPickableTypes:(NSArray *)arg1 ;
-(unsigned long long)pickerMode;
-(void)setPickerMode:(unsigned long long)arg1 ;
-(int)sortOrder;
-(NSMutableArray *)updateHandlers;
-(void)setUpdateHandlers:(NSMutableArray *)arg1 ;
-(NSOperationQueue *)thumbnailQueue;
-(void)setThumbnailQueue:(NSOperationQueue *)arg1 ;
@end

