/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:11 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileSlideShow.app/MobileSlideShow
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PLCameraImporterDelegate <NSObject>
@required
-(void)importerDidFinishReadingImportItems:(id)arg1 error:(id)arg2;
-(void)importer:(id)arg1 didAddImportItem:(id)arg2 atIndex:(unsigned)arg3;
-(void)importer:(id)arg1 didChangeImportItem:(id)arg2 changeType:(int)arg3 error:(id)arg4;
-(void)importer:(id)arg1 didRemoveImportItems:(id)arg2 atIndexes:(id)arg3;
-(void)importer:(id)arg1 didCopyOriginalForItem:(id)arg2 error:(id)arg3;
-(void)importer:(id)arg1 didCompleteImportForItems:(id)arg2;
-(void)importer:(id)arg1 didImportItem:(id)arg2 error:(id)arg3;
-(void)importer:(id)arg1 didCompleteRemovalOfItems:(id)arg2;
@end

