/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:58:57 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/FaceTime.app/FaceTime
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol UITableViewDelegate <NSObject,UIScrollViewDelegate>
@optional
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
-(void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(int)arg3;
-(void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(int)arg3;
-(void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
-(void)tableView:(id)arg1 didEndDisplayingHeaderView:(id)arg2 forSection:(int)arg3;
-(void)tableView:(id)arg1 didEndDisplayingFooterView:(id)arg2 forSection:(int)arg3;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
-(float)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
-(float)tableView:(id)arg1 estimatedHeightForHeaderInSection:(int)arg2;
-(float)tableView:(id)arg1 estimatedHeightForFooterInSection:(int)arg2;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
-(id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
-(int)tableView:(id)arg1 accessoryTypeForRowWithIndexPath:(id)arg2;
-(void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
-(void)tableView:(id)arg1 didHighlightRowAtIndexPath:(id)arg2;
-(void)tableView:(id)arg1 didUnhighlightRowAtIndexPath:(id)arg2;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
-(id)tableView:(id)arg1 willDeselectRowAtIndexPath:(id)arg2;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
-(void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
-(int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
-(id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
-(BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
-(void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
-(void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
-(id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
-(int)tableView:(id)arg1 indentationLevelForRowAtIndexPath:(id)arg2;
-(BOOL)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;
-(BOOL)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
-(void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
@end

