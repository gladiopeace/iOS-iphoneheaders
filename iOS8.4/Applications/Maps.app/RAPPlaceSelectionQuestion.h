/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:38 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/RAPQuestion.h>

@protocol MKMapServiceTicket;
@class RAPReportContext, NSNumber, NSError, RAPPlaceIssueQuestion, NSString;

@interface RAPPlaceSelectionQuestion : RAPQuestion {

	RAPReportContext* _alternatePlaceContext;
	id<MKMapServiceTicket> _placeTicket;
	NSNumber* _placeMUID;
	NSError* _loadingError;
	RAPPlaceIssueQuestion* _placeIssueQuestion;
	RAPReportContext* _placePickingMapContext;

}

@property (nonatomic,readonly) SCD_Struct_RA6 placePickingMapRect; 
@property (nonatomic,readonly) NSString * localizedPlacePickingPrompt; 
@property (nonatomic,copy) RAPReportContext * placePickingMapContext;                   //@synthesize placePickingMapContext=_placePickingMapContext - In the implementation block
@property (nonatomic,copy) NSNumber * placeMUID;                                        //@synthesize placeMUID=_placeMUID - In the implementation block
@property (getter=isLoading,nonatomic,readonly) char loading; 
@property (nonatomic,readonly) NSError * loadingError;                                  //@synthesize loadingError=_loadingError - In the implementation block
@property (nonatomic,readonly) RAPPlaceIssueQuestion * placeIssueQuestion;              //@synthesize placeIssueQuestion=_placeIssueQuestion - In the implementation block
+(int)mapServiceAction;
+(char)_canDisplay;
-(char)_isRecursivelyComplete;
-(void)_fillSubmittableProblem:(id)arg1 ;
-(id)_alternateMapViewContext;
-(NSNumber *)placeMUID;
-(RAPReportContext *)placePickingMapContext;
-(id)_alternatePlaceContext;
-(SCD_Struct_RA6)placePickingMapRect;
-(NSString *)localizedPlacePickingPrompt;
-(void)setPlaceMUID:(NSNumber *)arg1 ;
-(void)setPlacePickingMapContext:(RAPReportContext *)arg1 ;
-(RAPPlaceIssueQuestion *)placeIssueQuestion;
-(NSError *)loadingError;
-(char)isComplete;
-(char)isLoading;
@end
