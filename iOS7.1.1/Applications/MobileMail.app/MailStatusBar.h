/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:06 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <MobileMail/MailStatusBarViewDelegate.h>

@class MailStatusBarView, NSMutableDictionary, NSSet, MFMailboxUid, NSString;

@interface MailStatusBar : NSObject <MailStatusBarViewDelegate> {

	CGRect _frame;
	MailStatusBarView* _ourBarView;
	NSMutableDictionary* _statusPerAccountDictionary;
	NSSet* _visibleMailboxes;
	MFMailboxUid* _lastTrackedMailbox;
	double _lastBarTime;
	BOOL _showsSubtitleString;
	NSString* _subtitleString;
	unsigned _unsentCount;
	unsigned _state;

}

@property (assign,nonatomic) unsigned state; 
@property (nonatomic,copy) NSSet * visibleMailboxes;                //@synthesize visibleMailboxes=_visibleMailboxes - In the implementation block
@property (assign,nonatomic) unsigned unsentCount;                  //@synthesize unsentCount=_unsentCount - In the implementation block
@property (nonatomic,copy) NSString * subtitleString;               //@synthesize subtitleString=_subtitleString - In the implementation block
@property (assign,nonatomic) BOOL showsSubtitleString;              //@synthesize showsSubtitleString=_showsSubtitleString - In the implementation block
+(id)sharedStatusBar;
+(id)mailStatusBarButtonItem;
-(void)_dumpDiagnosticInformation:(id)arg1 ;
-(void)updateStatus:(id)arg1 forObject:(id)arg2 withMonitor:(id)arg3 ;
-(void)setUnsentCount:(unsigned)arg1 ;
-(void)setShowsSubtitleString:(BOOL)arg1 ;
-(void)setVisibleMailboxes:(id)arg1 ;
-(void)showIndeterminateProgressWithMessage:(id)arg1 forMailbox:(id)arg2 withMonitor:(id)arg3 ;
-(id)_barView:(BOOL)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 andObject:(id)arg3 ;
-(void)resetStatusForObject:(id)arg1 ;
-(void)cleanUpForMonitor:(id)arg1 ;
-(void)setCount:(int)arg1 total:(int)arg2 progress:(float)arg3 forObject:(id)arg4 update:(BOOL)arg5 ;
-(id)valueForKey:(id)arg1 andObject:(id)arg2 ;
-(void)setCount:(int)arg1 total:(int)arg2 progress:(float)arg3 forObject:(id)arg4 ;
-(void)setMonitor:(id)arg1 forObject:(id)arg2 ;
-(void)setStatus:(id)arg1 forObject:(id)arg2 ;
-(BOOL)showsSubtitleString;
-(id)trackedMailbox;
-(id)statusWithCount:(int*)arg1 total:(int*)arg2 progress:(float*)arg3 state:(unsigned*)arg4 ;
-(id)updatedSubtitleString;
-(void)statusBarView:(id)arg1 stateDidChange:(unsigned)arg2 ;
-(unsigned)_unsentCount;
-(id)visibleMailboxes;
-(unsigned)unsentCount;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setNeedsDisplay;
-(unsigned)state;
-(int)interfaceOrientation;
-(void)setState:(unsigned)arg1 ;
-(void)setView:(id)arg1 ;
-(id)subtitleString;
-(void)setSubtitleString:(id)arg1 ;
-(id)lastUpdated;
@end

