/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 2:31:41 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/Social.framework/XPCServices/com.apple.facebook.xpc/com.apple.facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class SLFacebookPost, NSArray;

@interface FBDPostUploadPart : NSObject {

	SLFacebookPost* _post;
	NSArray* _partAssets;

}

@property (retain) SLFacebookPost * post;              //@synthesize post=_post - In the implementation block
@property (retain) NSArray * partAssets;               //@synthesize partAssets=_partAssets - In the implementation block
-(id)post;
-(void)setPost:(id)arg1 ;
-(void)setPartAssets:(id)arg1 ;
-(id)initWithPost:(id)arg1 partAssets:(id)arg2 ;
-(id)partAssets;
-(void).cxx_destruct;
@end

