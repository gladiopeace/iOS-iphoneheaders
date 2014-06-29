/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:19 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Assistant/UIPlugins/WeatherAssistantUI.siriUIBundle/WeatherAssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SiriUI/SiriUISnippetViewController.h>
#import <AddressBook/SiriUISnippetPlugin.h>

@class WeatherAssistantForecastSnippetContentView, SAWeatherObject, NSArray, WeatherPreferences, NSString, UITapGestureRecognizer;

@interface WeatherAssistantForecastSnippetController : SiriUISnippetViewController <SiriUISnippetPlugin> {

	WeatherAssistantForecastSnippetContentView* _containerView;
	SAWeatherObject* _weatherObject;
	NSArray* _forcasts;
	bool _isShowingHourly;
	bool _shouldShowCurrentHeader;
	WeatherPreferences* _weatherPreferences;
	NSString* _compensatedName;
	double _snippetHeight;
	UITapGestureRecognizer* _recognizer;
	UITapGestureRecognizer* _headerRecognizer;

}

@property (nonatomic,retain) WeatherAssistantForecastSnippetContentView * containerView;              //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,readonly) WeatherPreferences * weatherPreferences;                               //@synthesize weatherPreferences=_weatherPreferences - In the implementation block
@property (nonatomic,copy) NSString * compensatedName;                                                //@synthesize compensatedName=_compensatedName - In the implementation block
@property (assign,nonatomic) double snippetHeight;                                                    //@synthesize snippetHeight=_snippetHeight - In the implementation block
@property (assign,nonatomic) bool isShowingHourly;                                                    //@synthesize isShowingHourly=_isShowingHourly - In the implementation block
@property (assign,nonatomic) bool shouldShowCurrentHeader;                                            //@synthesize shouldShowCurrentHeader=_shouldShowCurrentHeader - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * recognizer;                                     //@synthesize recognizer=_recognizer - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * headerRecognizer;                               //@synthesize headerRecognizer=_headerRecognizer - In the implementation block
-(void)setShouldShowCurrentHeader:(bool)arg1 ;
-(void)setHeaderRecognizer:(id)arg1 ;
-(bool)shouldShowCurrentHeader;
-(id)headerRecognizer;
-(void)setSnippetHeight:(double)arg1 ;
-(void)setIsShowingHourly:(bool)arg1 ;
-(bool)_wantsFullWidthOfScreen;
-(bool)isShowingHourly;
-(id)compensatedName;
-(double)snippetHeight;
-(id)weatherPreferences;
-(void)setCompensatedName:(id)arg1 ;
-(id)weather;
-(double)desiredHeight;
-(void)dealloc;
-(id)containerView;
-(void)openURL:(id)arg1 ;
-(void)loadView;
-(id)recognizer;
-(void)setRecognizer:(id)arg1 ;
-(void)setContainerView:(id)arg1 ;
-(id)initWithAceObject:(id)arg1 ;
-(double)desiredHeightForHeaderView;
-(id)viewControllerForSnippet:(id)arg1 ;
-(void)configureReusableHeaderView:(id)arg1 ;
-(Class)headerViewClass;
@end

