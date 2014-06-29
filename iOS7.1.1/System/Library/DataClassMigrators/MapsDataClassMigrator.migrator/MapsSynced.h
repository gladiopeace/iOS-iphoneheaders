/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:27 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/DataClassMigrators/MapsDataClassMigrator.migrator/MapsDataClassMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MapsSynced <NSObject>
@property (nonatomic,copy) NSString * syncIdentifier; 
@property (nonatomic,readonly) NSData * syncData; 
@property (assign,nonatomic) double position; 
@optional
-(void)setPosition:(double)arg1;
-(double)position;

@required
-(id)syncIdentifier;
-(bool)updateFromSyncData:(id)arg1;
-(void)setSyncIdentifier:(id)arg1;
-(id)syncData;
@end

