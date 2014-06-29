/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:09 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Assistant/PresentationPlugins/Siriland.siriUIPresentationBundle/Siriland
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SiriUIAceObjectViewControllerDelegate <NSObject>
@required
-(void)siriViewController:(id)arg1 openURL:(id)arg2 completion:(/*^block*/ id)arg3;
-(void)siriViewControllerHeightDidChange:(id)arg1 pinTopOfSnippet:(bool)arg2;
-(id)siriViewController:(id)arg1 disambiguationItemForListItem:(id)arg2 disambiguationKey:(id)arg3;
-(void)siriViewController:(id)arg1 addSelectionResponse:(id)arg2;
-(bool)siriViewController:(id)arg1 openPunchOut:(id)arg2;
-(id)siriViewControllerEffectiveBundleForCoreLocation:(id)arg1;
-(bool)siriViewController:(id)arg1 openURL:(id)arg2;
-(id)siriViewController:(id)arg1 domainObjectForIdentifier:(id)arg2;
-(void)siriViewController:(id)arg1 setDomainObject:(id)arg2 forIdentifier:(id)arg3;
-(void)siriViewControllerHeightDidChange:(id)arg1;
-(CGSize*)siriViewControllerVisibleContentArea:(id)arg1;
-(UIEdgeInsets*)siriViewControllerDisplayInsetsForVisibleSpace:(id)arg1;
-(void)siriViewController:(id)arg1 setContentOffset:(double)arg2;
-(double)siriSnippetViewControllerExpectedWidth:(id)arg1;
-(void)siriViewController:(id)arg1 sendGenericAceCommands:(id)arg2;
-(id)persistentStoreForSiriViewController:(id)arg1;
-(void)cancelRequestForSiriSnippetViewController:(id)arg1;
-(void)siriViewController:(id)arg1 performAceCommands:(id)arg2;
-(double)siriViewControllerExpectedWidth:(id)arg1;
@end

