/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:32:27 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/DuetLST
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface DuetLSTPoolTableEntry : NSObject {

	NSString* poolname;
	long long poolvalue;

}

@property (nonatomic,retain) NSString * poolname; 
@property (assign,nonatomic) long long poolvalue; 
-(id)initWithName:(id)arg1 Value:(long long)arg2 ;
-(id)poolname;
-(void)setPoolname:(id)arg1 ;
-(long long)poolvalue;
-(void)setPoolvalue:(long long)arg1 ;
-(void).cxx_destruct;
@end

