/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:02 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSBundle, NSString, NSDictionary, NSMutableDictionary;

@interface UIStoryboard : NSObject {

	NSBundle* bundle;
	NSString* storyboardFileName;
	NSDictionary* identifierToNibNameMap;
	NSString* designatedEntryPointIdentifier;
	NSMutableDictionary* identifierToUINibMap;

}

@property (nonatomic,readonly) NSBundle * bundle; 
@property (readonly) NSString * name; 
@property (nonatomic,readonly) NSString * storyboardFileName; 
@property (nonatomic,readonly) NSDictionary * identifierToNibNameMap; 
@property (nonatomic,readonly) NSString * designatedEntryPointIdentifier; 
@property (nonatomic,readonly) NSMutableDictionary * identifierToUINibMap; 
+(id)storyboardWithName:(id)arg1 bundle:(id)arg2 ;
-(void)dealloc;
-(id)instantiateInitialViewController;
-(id)instantiateViewControllerWithIdentifier:(id)arg1 ;
-(id)name;
-(bool)containsNibNamed:(id)arg1 ;
-(id)nibForStoryboardNibNamed:(id)arg1 ;
-(id)bundle;
-(id)identifierForStringsFile;
-(id)initWithBundle:(id)arg1 storyboardFileName:(id)arg2 identifierToNibNameMap:(id)arg3 designatedEntryPointIdentifier:(id)arg4 ;
-(id)storyboardFileName;
-(id)identifierToNibNameMap;
-(id)nibForViewControllerWithIdentifier:(id)arg1 ;
-(id)designatedEntryPointIdentifier;
-(id)identifierToUINibMap;
@end

