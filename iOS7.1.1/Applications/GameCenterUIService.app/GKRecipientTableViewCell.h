/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:58:59 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/GameCenterUIService.app/GameCenterUIService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class GKComposeRecipient, GKLabel;

@interface GKRecipientTableViewCell : UITableViewCell {

	GKComposeRecipient* _recipient;
	GKLabel* _nameLabel;
	GKLabel* _labelLabel;
	GKLabel* _addressLabel;

}

@property (nonatomic,retain) GKComposeRecipient * recipient;              //@synthesize recipient=_recipient - In the implementation block
@property (nonatomic,retain) GKLabel * nameLabel;                         //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,retain) GKLabel * labelLabel;                        //@synthesize labelLabel=_labelLabel - In the implementation block
@property (nonatomic,retain) GKLabel * addressLabel;                      //@synthesize addressLabel=_addressLabel - In the implementation block
+(id)identifier;
+(float)height;
+(id)cellForRecipient:(id)arg1 ;
-(void)setLabelLabel:(id)arg1 ;
-(id)addressLabel;
-(void)setAddressLabel:(id)arg1 ;
-(id)labelLabel;
-(id)nameLabel;
-(void)setNameLabel:(id)arg1 ;
-(void)dealloc;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(id)recipient;
-(void)setRecipient:(id)arg1 ;
@end

