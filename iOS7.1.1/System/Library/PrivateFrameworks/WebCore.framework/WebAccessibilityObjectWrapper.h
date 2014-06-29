/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:58 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebCore/WebCore-Structs.h>
#import <WebCore/WebAccessibilityObjectWrapperBase.h>

@interface WebAccessibilityObjectWrapper : WebAccessibilityObjectWrapperBase {

	int m_isAccessibilityElement;
	unsigned long long m_accessibilityTraitsFromAncestor;

}
-(void)dealloc;
-(id)accessibilityLabel;
-(void)detach;
-(id)stringForRange:(NSRange)arg1 ;
-(CGRect)accessibilityFrame;
-(id)accessibilityValue;
-(id)accessibilityHint;
-(CGPoint)accessibilityActivationPoint;
-(unsigned long long)accessibilityTraits;
-(bool)isAccessibilityElement;
-(id)accessibilityContainer;
-(id)accessibilityLanguage;
-(id)accessibilityIdentifier;
-(void)accessibilityElementDidBecomeFocused;
-(void)accessibilityIncrement;
-(void)accessibilityDecrement;
-(long long)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(long long)arg1 ;
-(long long)indexOfAccessibilityElement:(id)arg1 ;
-(id)attachmentView;
-(id)initWithAccessibilityObject:(AccessibilityObject*)arg1 ;
-(void)postFocusChangeNotification;
-(void)postSelectedTextChangeNotification;
-(void)postLayoutChangeNotification;
-(void)postLiveRegionChangeNotification;
-(void)postChildrenChangedNotification;
-(void)postLoadCompleteNotification;
-(void)postInvalidStatusChangedNotification;
-(void)accessibilityPostedNotification:(id)arg1 ;
-(bool)fileUploadButtonReturnsValueInTitle;
-(id)accessibilityPlatformMathSubscriptKey;
-(id)accessibilityPlatformMathSuperscriptKey;
-(CGPoint)convertPointToScreenSpace:(FloatPoint*)arg1 ;
-(bool)_prepareAccessibilityCall;
-(bool)accessibilityCanFuzzyHitTest;
-(WebAccessibilityObjectWrapper*)accessibilityPostProcessHitTest:(CGPoint)arg1 ;
-(bool)isAttachment;
-(bool)_accessibilityIsLandmarkRole:(int)arg1 ;
-(unsigned long long)_axLinkTrait;
-(unsigned long long)_axVisitedTrait;
-(unsigned long long)_axHeaderTrait;
-(unsigned long long)_axContainedByListTrait;
-(unsigned long long)_axContainedByTableTrait;
-(unsigned long long)_axContainedByLandmarkTrait;
-(unsigned long long)_axWebContentTrait;
-(unsigned long long)_axSecureTextFieldTrait;
-(unsigned long long)_axTextEntryTrait;
-(unsigned long long)_axHasTextCursorTrait;
-(unsigned long long)_axTextOperationsAvailableTrait;
-(unsigned long long)_axImageTrait;
-(unsigned long long)_axTabButtonTrait;
-(unsigned long long)_axButtonTrait;
-(unsigned long long)_axToggleTrait;
-(unsigned long long)_axPopupButtonTrait;
-(unsigned long long)_axRadioButtonTrait;
-(unsigned long long)_axStaticTextTrait;
-(unsigned long long)_axAdjustableTrait;
-(unsigned long long)_axMenuItemTrait;
-(unsigned long long)_axSelectedTrait;
-(unsigned long long)_axNotEnabledTrait;
-(unsigned long long)_accessibilityTraitsFromAncestors;
-(bool)containsUnnaturallySegmentedChildren;
-(bool)isSVGGroupElement;
-(bool)determineIsAccessibilityElement;
-(bool)stringValueShouldBeUsedInLabel;
-(AccessibilityTableCell*)tableCellParent;
-(AccessibilityTable*)tableParent;
-(id)_accessibilityWebDocumentView;
-(CGRect)convertRectToScreenSpace:(IntRect*)arg1 ;
-(id)_accessibilityNextElementsWithCount:(unsigned)arg1 ;
-(id)_accessibilityPreviousElementsWithCount:(unsigned)arg1 ;
-(void)accessibilityModifySelection:(int)arg1 increase:(bool)arg2 ;
-(bool)_addAccessibilityObject:(AccessibilityObject*)arg1 toTextMarkerArray:(id)arg2 ;
-(NSRange)_convertToNSRange:(Range*)arg1 ;
-(id)textMarkerRange;
-(long long)positionForTextMarker:(id)arg1 ;
-(PassRefPtr<WebCore::Range>*)_convertToDOMRange:(NSRange)arg1 ;
-(id)textMarkerForPosition:(long long)arg1 ;
-(id)arrayOfTextForTextMarkers:(id)arg1 attributed:(bool)arg2 ;
-(id)_stringForRange:(NSRange)arg1 attributed:(bool)arg2 ;
-(id)textMarkerRangeForSelection;
-(id)stringForTextMarkers:(id)arg1 ;
-(id)accessibilityHitTest:(CGPoint)arg1 ;
-(CGPathRef)_accessibilityPath;
-(WebAccessibilityObjectWrapper*)_accessibilityListAncestor;
-(WebAccessibilityObjectWrapper*)_accessibilityLandmarkAncestor;
-(WebAccessibilityObjectWrapper*)_accessibilityTableAncestor;
-(double)_accessibilityMinValue;
-(double)_accessibilityMaxValue;
-(id)accessibilityTitleElement;
-(id)accessibilityHeaderElements;
-(id)accessibilityElementForRow:(long long)arg1 andColumn:(long long)arg2 ;
-(NSRange)accessibilityRowRange;
-(NSRange)accessibilityColumnRange;
-(id)accessibilityPlaceholderValue;
-(bool)accessibilityIsComboBox;
-(id)accessibilityURL;
-(CGRect)accessibilityElementRect;
-(id)accessibilityFocusedUIElement;
-(bool)accessibilityRequired;
-(id)accessibilityFlowToElements;
-(id)accessibilityLinkedElement;
-(void)_accessibilityActivate;
-(id)_accessibilityParentForSubview:(id)arg1 ;
-(void)accessibilityIncreaseSelection:(int)arg1 ;
-(void)accessibilityDecreaseSelection:(int)arg1 ;
-(void)accessibilityMoveSelectionToMarker:(id)arg1 ;
-(NSRange)elementTextRange;
-(WebAccessibilityObjectWrapper*)accessibilityObjectForTextMarker:(id)arg1 ;
-(id)attributedStringForRange:(NSRange)arg1 ;
-(id)elementsForRange:(NSRange)arg1 ;
-(id)selectionRangeString;
-(id)selectedTextMarker;
-(id)lineEndMarkerForMarker:(id)arg1 ;
-(id)lineStartMarkerForMarker:(id)arg1 ;
-(id)nextMarkerForMarker:(id)arg1 ;
-(id)previousMarkerForMarker:(id)arg1 ;
-(CGRect)frameForTextMarkers:(id)arg1 ;
-(id)textMarkerForPoint:(CGPoint)arg1 ;
-(id)accessibilitySpeechHint;
-(bool)accessibilityARIAIsBusy;
-(id)accessibilityARIALiveRegionStatus;
-(id)accessibilityARIARelevantStatus;
-(bool)accessibilityARIALiveRegionIsAtomic;
-(id)accessibilityInvalidStatus;
-(id)accessibilityMathRootIndexObject;
-(id)accessibilityMathRadicandObject;
-(id)accessibilityMathNumeratorObject;
-(id)accessibilityMathDenominatorObject;
-(id)accessibilityMathBaseObject;
-(id)accessibilityMathSubscriptObject;
-(id)accessibilityMathSuperscriptObject;
-(id)accessibilityMathUnderObject;
-(id)accessibilityMathOverObject;
-(id)accessibilityMathPostscripts;
-(id)accessibilityMathPrescripts;
-(id)accessibilityMathFencedOpenString;
-(id)accessibilityMathFencedCloseString;
-(bool)accessibilityIsMathTopObject;
-(long long)accessibilityMathLineThickness;
-(id)accessibilityMathType;
-(CGPoint)accessibilityClickPoint;
-(void)accessibilitySetPostedNotificationCallback:(/*function pointer*/ void*)arg1 withContext:(void*)arg2 ;
@end

