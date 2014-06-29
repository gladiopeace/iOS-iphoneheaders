/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:42 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SLFacebookAlbumManagerDelegate;
@class NSOperationQueue, ACAccount, SLFacebookAlbum;

@interface SLFacebookAlbumManager : NSObject {

	bool _isCanceled;
	NSOperationQueue* photoQueue;
	ACAccount* _account;
	<SLFacebookAlbumManagerDelegate>* _delegate;
	SLFacebookAlbum* _selectedAlbum;

}

@property (retain) ACAccount * account;                                      //@synthesize account=_account - In the implementation block
@property (__weak) <SLFacebookAlbumManagerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (retain) SLFacebookAlbum * selectedAlbum;                          //@synthesize selectedAlbum=_selectedAlbum - In the implementation block
-(void)refreshAlbums;
-(void)setSelectedAlbum:(id)arg1 ;
-(id)selectedAlbum;
-(void)loadCoverImageForAlbum:(id)arg1 ;
-(id)checkErrorResponse:(id)arg1 ;
-(id)parseAlbumsWithResponse:(id)arg1 ;
-(id)defaultAlbumWithDefaultAlbumResponse:(id)arg1 ;
-(void)handleAlbumResponse:(id)arg1 error:(id)arg2 ;
-(void)performAlbumRequestWithBatchRequests:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(void)handleDefaultAlbumFetchResponse:(id)arg1 handler:(/*^block*/ id)arg2 error:(id)arg3 ;
-(void)fetchDefaultAlbum:(/*^block*/ id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void).cxx_destruct;
-(id)account;
-(id)initWithAccount:(id)arg1 ;
-(void)setAccount:(id)arg1 ;
@end

