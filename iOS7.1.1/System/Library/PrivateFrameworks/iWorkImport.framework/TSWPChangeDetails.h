/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:48 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDAnnotationHosting.h>

@protocol TSKModel;
@class NSString, TSWPChange, TSKAnnotationAuthor, NSDate, TSDCommentStorage;

@interface TSWPChangeDetails : NSObject <TSDAnnotationHosting> {

	NSString* mChangeString;
	<TSKModel>* model;
	TSWPChange* _change;

}

@property (nonatomic,retain) TSWPChange * change;                            //@synthesize change=_change - In the implementation block
@property (nonatomic,readonly) int annotationType; 
@property (nonatomic,readonly) int annotationDisplayStringType; 
@property (nonatomic,retain) TSKAnnotationAuthor * author; 
@property (nonatomic,readonly) NSDate * date; 
@property (assign,nonatomic) <TSKModel> * model; 
@property (nonatomic,readonly) NSString * changeTrackingString; 
@property (nonatomic,copy) TSDCommentStorage * storage; 
-(void)commitText:(id)arg1 ;
-(id)changeTrackingString;
-(int)annotationDisplayStringType;
-(bool)isEqualToChangeDetails:(id)arg1 ;
-(id)initWithChange:(id)arg1 changeString:(id)arg2 ;
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(id)date;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)model;
-(id)change;
-(void)setChange:(id)arg1 ;
-(void)setModel:(id)arg1 ;
-(void)setAuthor:(id)arg1 ;
-(id)author;
-(int)annotationType;
@end

