/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:34:50 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/sbin/BTMap
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol BBObserverDelegate <NSObject>
@optional
-(void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned)arg3;
-(void)observer:(id)arg1 modifyBulletin:(id)arg2 forFeed:(unsigned)arg3;
-(void)observer:(id)arg1 modifyBulletin:(id)arg2;
-(void)observer:(id)arg1 removeBulletin:(id)arg2 forFeed:(unsigned)arg3;
-(void)observer:(id)arg1 removeBulletin:(id)arg2;
-(void)observer:(id)arg1 updateSectionOrderRule:(int)arg2;
-(void)observer:(id)arg1 updateSectionOrder:(id)arg2 forCategory:(int)arg3;
-(void)observer:(id)arg1 updateSectionOrder:(id)arg2;
-(void)observer:(id)arg1 updateSectionInfo:(id)arg2 inCategory:(int)arg3;
-(void)observer:(id)arg1 updateSectionInfo:(id)arg2;
-(void)observer:(id)arg1 noteSectionParametersChanged:(id)arg2 forSectionID:(id)arg3;
-(BOOL)observerShouldFetchAttachmentImageBeforeBulletinDelivery:(id)arg1;
-(BOOL)observerShouldFetchAttachmentSizeBeforeBulletinDelivery:(id)arg1;
-(id)observer:(id)arg1 thumbnailSizeConstraintsForAttachmentType:(int)arg2;
-(id)observer:(id)arg1 multipleThumbnailSizeConstraintsForAttachmentType:(int)arg2;
-(id)observer:(id)arg1 composedAttachmentImageForType:(int)arg2 thumbnailData:(id)arg3 key:(id)arg4;
-(CGSize*)observer:(id)arg1 composedAttachmentSizeForType:(int)arg2 thumbnailWidth:(float)arg3 height:(float)arg4 key:(id)arg5;
-(void)observer:(id)arg1 purgeReferencesToBulletinID:(id)arg2;
-(void)observer:(id)arg1 noteAlertBehaviorOverridesChanged:(unsigned)arg2;
-(void)observer:(id)arg1 noteAlertBehaviorOverrideStateChanged:(unsigned)arg2;
-(void)observer:(id)arg1 noteInvalidatedBulletinIDs:(id)arg2;
-(void)observer:(id)arg1 noteServerConnectionStateChanged:(BOOL)arg2;
-(void)observer:(id)arg1 noteServerReceivedResponseForBulletin:(id)arg2;
@end

