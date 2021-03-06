/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:28 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/iBooks-Structs.h>
#import <iBooks/BKContentViewController.h>

@protocol BKDirectoryContentDelegate;
@interface BKDirectoryContent : BKContentViewController {

	id<BKDirectoryContentDelegate> _directoryDelegate;
	struct {
		unsigned delegatePageTitleForPageNumber : 1;
	}  _directoryContentFlags;

}

@property (assign,nonatomic) id<BKDirectoryContentDelegate> directoryDelegate;              //@synthesize directoryDelegate=_directoryDelegate - In the implementation block
-(id)pageTitleForPageNumber:(unsigned)arg1 ;
-(id<BKDirectoryContentDelegate>)directoryDelegate;
-(void)setDirectoryDelegate:(id<BKDirectoryContentDelegate>)arg1 ;
-(unsigned)pageNumberForLocation:(id)arg1 ;
-(id)locationForPageNumber:(unsigned)arg1 ;
-(void)didSelectLocation:(id)arg1 ;
@end

