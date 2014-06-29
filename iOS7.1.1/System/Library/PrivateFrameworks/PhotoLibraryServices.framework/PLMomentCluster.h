/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:32 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSManagedObjectID, NSDate, CLLocation, NSMutableArray, NSMutableSet, NSArray;

@interface PLMomentCluster : NSObject {

	short _generationType;
	NSString* __title;
	NSManagedObjectID* __objectID;
	NSDate* __startingDate;
	NSDate* __endingDate;
	CLLocation* __approximateLocation;
	NSMutableArray* __mutableNodes;
	NSMutableSet* __nodesWithLocation;

}

@property (nonatomic,retain) NSString * title;                                            //@synthesize _title=__title - In the implementation block
@property (nonatomic,readonly) NSArray * nodes; 
@property (nonatomic,readonly) NSManagedObjectID * objectID;                              //@synthesize _objectID=__objectID - In the implementation block
@property (nonatomic,readonly) CLLocation * approximateLocation;                          //@synthesize _approximateLocation=__approximateLocation - In the implementation block
@property (nonatomic,retain) NSDate * startingDate;                                       //@synthesize _startingDate=__startingDate - In the implementation block
@property (nonatomic,retain) NSDate * endingDate;                                         //@synthesize _endingDate=__endingDate - In the implementation block
@property (assign,nonatomic) short generationType;                                        //@synthesize generationType=_generationType - In the implementation block
@property (setter=_setNodes:,nonatomic,copy) NSMutableArray * _mutableNodes;              //@synthesize _mutableNodes=__mutableNodes - In the implementation block
@property (nonatomic,readonly) NSMutableSet * _nodesWithLocation;                         //@synthesize _nodesWithLocation=__nodesWithLocation - In the implementation block
-(void)dealloc;
-(id)init;
-(void)setTitle:(id)arg1 ;
-(id)description;
-(id)title;
-(id)objectID;
-(id)approximateLocation;
-(void)setGenerationType:(short)arg1 ;
-(short)generationType;
-(id)nodes;
-(id)startingDate;
-(id)endingDate;
-(void)commonPLMomentClusterInitialization;
-(id)initWithObjectID:(id)arg1 ;
-(id)_mutableNodes;
-(void)_setStartingDate:(id)arg1 ;
-(void)_setEndingDate:(id)arg1 ;
-(id)_nodesWithLocation;
-(void)addNode:(id)arg1 ;
-(void)removeNode:(id)arg1 ;
-(id)initWithMoment:(id)arg1 ;
-(void)addNodesFromCluster:(id)arg1 ;
-(void)removeNodesFromCluster:(id)arg1 ;
-(unsigned long long)expandFromNode:(id)arg1 withNeighbors:(id)arg2 inClustering:(id)arg3 minimumNumberOfPoints:(unsigned long long)arg4 ;
-(void)_setNodes:(id)arg1 ;
@end

