/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:29 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLManagedAlbum.h>

@class NSString;

@interface PLPhotoStreamAlbum : PLManagedAlbum

@property (nonatomic,retain) NSString * personID; 
+(id)photoStreamAlbumWithStreamID:(id)arg1 inPhotoLibrary:(id)arg2 createIfNeeded:(bool)arg3 ;
+(id)entityInManagedObjectContext:(id)arg1 ;
+(id)entityName;
+(id)keyPathsForValuesAffectingPersonID;
-(bool)shouldDeleteWhenEmpty;
-(id)personID;
-(void)addAssetOrderedByDataTaken:(id)arg1 ;
-(void)enforceImageLimitIfNecessary;
-(void)awakeFromInsert;
-(void)setPersonID:(id)arg1 ;
@end

