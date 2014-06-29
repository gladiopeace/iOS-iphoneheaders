/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:11 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Assistant/UIPlugins/FMF.siriUIBundle/FMF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSNumber;

@interface ISDecomposedURL : NSObject {

	NSString* scheme;
	NSString* user;
	NSString* password;
	NSString* host;
	NSNumber* port;
	NSString* path;
	NSString* parameterString;
	NSString* query;
	NSString* fragment;

}

@property (nonatomic,copy) NSString * scheme; 
@property (nonatomic,copy) NSString * user; 
@property (nonatomic,copy) NSString * password; 
@property (nonatomic,copy) NSString * host; 
@property (nonatomic,copy) NSNumber * port; 
@property (nonatomic,copy) NSString * path; 
@property (nonatomic,copy) NSString * parameterString; 
@property (nonatomic,copy) NSString * query; 
@property (nonatomic,copy) NSString * fragment; 
-(void)setParameterString:(id)arg1 ;
-(id)user;
-(id)password;
-(id)parameterString;
-(void)setPort:(id)arg1 ;
-(void)setUser:(id)arg1 ;
-(void)setPassword:(id)arg1 ;
-(void)setHost:(id)arg1 ;
-(void)setQuery:(id)arg1 ;
-(void)setFragment:(id)arg1 ;
-(id)description;
-(id)scheme;
-(id)query;
-(id)path;
-(id)URL;
-(id)host;
-(void)setPath:(id)arg1 ;
-(id)fragment;
-(void).cxx_destruct;
-(id)port;
-(void)setScheme:(id)arg1 ;
@end

