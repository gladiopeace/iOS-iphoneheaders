/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:01 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PlacePresentationControllerDelegate <NSObject>
@required
-(void)presentationController:(id)arg1 handleReportAProblemWithSearchResult:(id)arg2;
-(void)presentationController:(id)arg1 showDirctionsToSearchResult:(id)arg2;
-(void)presentationController:(id)arg1 showDirectionsFromSearchResult:(id)arg2;
-(void)presentationController:(id)arg1 showTransitDirectionsToSearchResult:(id)arg2;
-(void)presentationController:(id)arg1 removeCustomSearchResult:(id)arg2;
-(void)presentationController:(id)arg1 addBookmarkForSearchResult:(id)arg2 title:(id)arg3;
-(void)presentationController:(id)arg1 wasDismissedForSearchResult:(id)arg2;
-(void)presentationController:(id)arg1 completedActivityOfType:(id)arg2 forSearchResult:(id)arg3;
-(void)presentationController:(id)arg1 searchForAddress:(id)arg2;
-(BOOL)presentationController:(id)arg1 shouldShowDirectionsForSearchResult:(id)arg2;
-(BOOL)presentationController:(id)arg1 shouldShowReportAProblemForSearchResult:(id)arg2;
-(void)presentationController:(id)arg1 didSelectDisplayedAddressForSearchResult:(id)arg2;
-(void)presentationController:(id)arg1 oldSearchResult:(id)arg2 becameNewSearchResult:(id)arg3;
@end

