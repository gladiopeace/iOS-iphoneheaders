/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:17 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Videos.app/Videos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Videos/Videos-Structs.h>
#import <Videos/VideosDetailViewController.h>

@class NSSet, NSString;

@interface VideosHomeVideoDetailViewController : VideosDetailViewController {

	NSSet* _codecs;
	NSString* _dimensions;

}
-(CGSize)posterSizeForImage:(id)arg1 ;
-(void)_setNeedsReload;
-(id)initWithMediaItem:(id)arg1 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)viewDidLoad;
-(void).cxx_destruct;
-(id)subtitleText;
@end

