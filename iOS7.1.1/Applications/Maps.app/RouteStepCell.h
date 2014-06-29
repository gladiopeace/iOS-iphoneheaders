/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:00 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/SnapshotResponderProtocol.h>

@class MNRoute, MKMapSnapshot, MKMapSnapshotter, UIColor, MNRouteStep, UIImage;

@interface RouteStepCell : NSObject <SnapshotResponderProtocol> {

	MNRoute* _route;
	unsigned _stepIndex;
	CGRect _frame;
	int _page;
	BOOL _hasSnapshot;
	MKMapSnapshot* _snapshot;
	MKMapSnapshotter* _snapshotter;
	UIColor* _routeCenterPrintColor;
	UIColor* _routeOutlinePrintColor;
	UIColor* _blueTextColor;

}

@property (nonatomic,retain) MNRoute * route;                                 //@synthesize route=_route - In the implementation block
@property (nonatomic,@dynamic,readonly) MNRouteStep * routeStep; 
@property (assign,nonatomic) unsigned stepIndex;                              //@synthesize stepIndex=_stepIndex - In the implementation block
@property (assign,nonatomic) CGRect frame;                                    //@synthesize frame=_frame - In the implementation block
@property (assign,nonatomic) int page;                                        //@synthesize page=_page - In the implementation block
@property (assign,nonatomic,@dynamic) float y; 
@property (nonatomic,@dynamic,readonly) UIImage * snapshotImage; 
@property (nonatomic,readonly) BOOL hasSnapshot;                              //@synthesize hasSnapshot=_hasSnapshot - In the implementation block
+(id)cellWithRoute:(id)arg1 stepIndex:(unsigned)arg2 ;
-(id)snapshotImage;
-(/*^block*/ id)snapshotBlock;
-(BOOL)hasSnapshot;
-(void)releaseSnapshotCreator;
-(void)_drawPinInRect:(CGRect)arg1 zoomLevel:(float)arg2 ;
-(id)initWithRoute:(id)arg1 stepIndex:(unsigned)arg2 ;
-(void)setStepIndex:(unsigned)arg1 ;
-(id)routeStep;
-(BOOL)_lineSegmentsIntersectLineAPoint1:(SCD_Struct_Si13)arg1 lineAPoint2:(SCD_Struct_Si13)arg2 lineBPoint1:(SCD_Struct_Si13)arg3 lineBPoint2:(SCD_Struct_Si13)arg4 outIntersectionPoint:(SCD_Struct_Si13*)arg5 ;
-(CGPoint)_cgPointApplyAffineTransform:(CGPoint)arg1 :(CGAffineTransform)arg2 :(CGAffineTransform)arg3 :(CGAffineTransform)arg4 ;
-(SCD_Struct_Si13)_intersectLineWithPoint1:(SCD_Struct_Si13)arg1 point2:(SCD_Struct_Si13)arg2 withRect:(SCD_Struct_Se14)arg3 ;
-(float)_textLayoutHeightForLines:(id)arg1 ;
-(void)_drawRouteLineInRect:(CGRect)arg1 zoomLevel:(float)arg2 ;
-(void)setRoute:(id)arg1 ;
-(id)route;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(CGRect)frame;
-(void)drawInRect:(CGRect)arg1 ;
-(float)y;
-(void)setY:(float)arg1 ;
-(int)page;
-(void)setPage:(int)arg1 ;
-(void).cxx_destruct;
-(unsigned)stepIndex;
@end

