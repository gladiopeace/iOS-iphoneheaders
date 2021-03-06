/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:26:44 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Assistant/UIPlugins/Sports.siriUIBundle/Sports
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Sports/Sports-Structs.h>
#import <Sports/ACSportsCardListView.h>

@class NSArray;

@interface ACSportsEntityStandingsListView : ACSportsCardListView {

	BOOL _showCardinalPositions;
	BOOL _shouldLocalizeColumnHeaders;
	NSArray* _snippetColumns;

}

@property (assign,nonatomic) BOOL showCardinalPositions;                    //@synthesize showCardinalPositions=_showCardinalPositions - In the implementation block
@property (nonatomic,copy) NSArray * snippetColumns;                        //@synthesize snippetColumns=_snippetColumns - In the implementation block
@property (assign,nonatomic) BOOL shouldLocalizeColumnHeaders;              //@synthesize shouldLocalizeColumnHeaders=_shouldLocalizeColumnHeaders - In the implementation block
+(id)domainObjectViewWithDomainObject:(id)arg1 league:(id)arg2 frame:(CGRect)arg3 ;
-(void)configureDomainObjectView:(id)arg1 withDomainObject:(id)arg2 beforeDomainObject:(id)arg3 afterDomainObject:(id)arg4 league:(id)arg5 index:(unsigned long long)arg6 ;
-(void)setShouldLocalizeColumnHeaders:(BOOL)arg1 ;
-(void)setSnippetColumns:(NSArray *)arg1 ;
-(BOOL)shouldLocalizeColumnHeaders;
-(NSArray *)snippetColumns;
-(BOOL)showCardinalPositions;
-(void)setShowCardinalPositions:(BOOL)arg1 ;
@end

