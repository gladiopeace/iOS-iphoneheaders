/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:08 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileMail/MFSearchAlternativesManagerDelegate.h>

@protocol MFSearchTextParserDelegate;
@class NSMutableAttributedString, MFMessageCriterion, NSArray, MFSearchAlternativesManager, NSNumber;

@interface MFSearchTextParser : NSObject <MFSearchAlternativesManagerDelegate> {

	NSMutableAttributedString* _searchText;
	MFMessageCriterion* _criterion;
	NSArray* _terms;
	MFSearchAlternativesManager* _alternativesManager;
	NSNumber* _alternativesIdentifier;
	<MFSearchTextParserDelegate>* _delegate;

}

@property (assign,nonatomic) <MFSearchTextParserDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_dumpDiagnosticInformation:(id)arg1 ;
-(void)parseSearchText:(id)arg1 ;
-(void)_searchCriterionChanged;
-(void)alternativesManager:(id)arg1 foundAlternatives:(id)arg2 forIdentifier:(id)arg3 ;
-(void)alternativesManager:(id)arg1 finishedWithIdentifier:(id)arg2 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
@end

