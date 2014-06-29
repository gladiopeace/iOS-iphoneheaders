/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:48 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMAP/MFIMAPCompoundDownload.h>

@protocol MFDataConsumer, MFCollectingDataConsumer;
@class MFMessage, MFMimePart;

@interface MFIMAPMessageDownload : MFIMAPCompoundDownload {

	MFMessage* _message;
	MFMimePart* _topLevelPart;
	unsigned _allowsPartialDownloads : 1;
	unsigned _usingPartialDownloads : 1;
	unsigned _startedFetch : 1;
	unsigned _fetchingMessageContents : 1;
	unsigned _fetchingBodyText : 1;
	unsigned _doneAddingSubdownloads : 1;
	unsigned _fetchBodyData : 1;
	<MFDataConsumer>* _headerFilter;
	<MFCollectingDataConsumer>* _headerConsumer;
	<MFDataConsumer>* _textFilter;
	<MFCollectingDataConsumer>* _textConsumer;

}
-(void)dealloc;
-(id)data;
-(id)message;
-(void)handleFetchResult:(id)arg1 ;
-(void)processResults;
-(void)addCommandsToPipeline:(id)arg1 withCache:(id)arg2 ;
-(void)setAllowsPartialDownloads:(bool)arg1 ;
-(bool)allowsPartialDownloads;
-(bool)partial;
-(void)setTopLevelPart:(id)arg1 ;
-(void)setFetchBodyData:(bool)arg1 ;
-(bool)fetchBodyData;
-(id)topLevelPart;
-(bool)isComplete;
-(id)initWithMessage:(id)arg1 ;
@end

