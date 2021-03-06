/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:58 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIRemoteViewController.h>
#import <UIKit/_UIDocumentPickerViewControllerHost.h>
#import <UIKit/_UIDocumentPickerServiceInvalidating.h>

@protocol _UIDocumentPickerRemoteViewControllerContaining, NSCopyingNSObject;
@class UIViewController, NSString, NSExtension;

@interface _UIDocumentPickerRemoteViewController : _UIRemoteViewController <_UIDocumentPickerViewControllerHost, _UIDocumentPickerServiceInvalidating> {

	UIViewController*<_UIDocumentPickerRemoteViewControllerContaining> _publicController;
	NSString* _identifier;
	NSExtension* _extension;
	id<NSCopying><NSObject> _extensionRequestIdentifier;

}

@property (assign,nonatomic) UIViewController*<_UIDocumentPickerRemoteViewControllerContaining> publicController;              //@synthesize publicController=_publicController - In the implementation block
@property (nonatomic,retain) NSString * identifier;                                                                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSExtension * extension;                                                                          //@synthesize extension=_extension - In the implementation block
@property (nonatomic,copy) id<NSCopying><NSObject> extensionRequestIdentifier;                                                 //@synthesize extensionRequestIdentifier=_extensionRequestIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serviceViewControllerInterface;
+(id)exportedInterface;
-(void)invalidate;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setExtensionRequestIdentifier:(id<NSCopying><NSObject>)arg1 ;
-(void)setExtension:(NSExtension *)arg1 ;
-(void)_dismissViewController;
-(void)setPublicController:(UIViewController*<_UIDocumentPickerRemoteViewControllerContaining>)arg1 ;
-(void)setPreferredContentSize:(CGSize)arg1 ;
-(void)_didSelectPicker;
-(void)_dismissWithOption:(id)arg1 ;
-(void)_stitchFileCreationAtURL:(id)arg1 ;
-(void)viewDidLoad;
-(void)_tintColorDidChangeToColor:(id)arg1 ;
-(void)_didSelectURLWrapper:(id)arg1 ;
-(UIViewController*<_UIDocumentPickerRemoteViewControllerContaining>)publicController;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(NSExtension *)extension;
-(id<NSCopying><NSObject>)extensionRequestIdentifier;
@end

