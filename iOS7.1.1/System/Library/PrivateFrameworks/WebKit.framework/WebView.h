/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:01 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <WebCore/WAKView.h>

@class WebViewPrivate, NSData;

@interface WebView : WAKView {

	WebViewPrivate* _private;

}

@property (setter=_setSourceApplicationAuditData:,getter=_sourceApplicationAuditData,nonatomic,copy) NSData * sourceApplicationAuditData; 
+(Class)_getPDFRepresentationClass;
+(Class)_getPDFViewClass;
+(void)_setPDFRepresentationClass:(Class)arg1 ;
+(void)_setPDFViewClass:(Class)arg1 ;
+(bool)shouldIncludeInWebKitStatistics;
+(unsigned long long)_cacheModel;
+(void)_setCacheModel:(unsigned long long)arg1 ;
+(void)_cacheModelChangedNotification:(id)arg1 ;
+(void)_preferencesRemovedNotification:(id)arg1 ;
+(void)_preflightSpellChecker;
+(unsigned long long)_didSetCacheModel;
+(unsigned long long)_maxCacheModelInAnyInstance;
+(void)_preflightSpellCheckerNow:(id)arg1 ;
+(void)_addUserStyleSheetToGroup:(id)arg1 world:(id)arg2 source:(id)arg3 url:(id)arg4 whitelist:(id)arg5 blacklist:(id)arg6 injectedFrames:(int)arg7 ;
+(void)_setAcceleratedImageDecoding:(bool)arg1 ;
+(void)_removeUserStyleSheetsFromGroup:(id)arg1 world:(id)arg2 ;
+(void)_addUserStyleSheetToGroup:(id)arg1 world:(id)arg2 source:(id)arg3 url:(id)arg4 whitelist:(id)arg5 blacklist:(id)arg6 ;
+(id)_productivityDocumentMIMETypes;
+(bool)_canHandleRequest:(id)arg1 ;
+(bool)isCharacterSmartReplaceExempt:(unsigned short)arg1 isPreviousCharacter:(bool)arg2 ;
+(void)purgeInactiveFontData;
+(bool)_viewClass:(Class*)arg1 andRepresentationClass:(Class*)arg2 forMIMEType:(id)arg3 allowingPlugins:(bool)arg4 ;
+(bool)_canHandleRequest:(id)arg1 forMainFrame:(bool)arg2 ;
+(id)sharedWebInspectorServer;
+(bool)_representationExistsForURLScheme:(id)arg1 ;
+(id)_generatedMIMETypeForURLScheme:(id)arg1 ;
+(void)_registerPluginMIMEType:(id)arg1 ;
+(void)_unregisterPluginMIMEType:(id)arg1 ;
+(void)enableWebThread;
+(void)_setAllowsRoundingHacks:(bool)arg1 ;
+(void)registerForMemoryNotifications;
+(id)_standardUserAgentWithApplicationName:(id)arg1 osMarketingVersion:(id)arg2 ;
+(void)_enableRemoteInspector;
+(void)drainLayerPool;
+(void)discardAllCompiledCode;
+(void)releaseFastMallocMemory;
+(void)_handleMemoryWarning;
+(void)garbageCollectNow;
+(void)_releaseMemoryNow;
+(void)_unregisterViewClassAndRepresentationClassForMIMEType:(id)arg1 ;
+(id)_MIMETypeForFile:(id)arg1 ;
+(void)_addUserScriptToGroup:(id)arg1 world:(id)arg2 source:(id)arg3 url:(id)arg4 whitelist:(id)arg5 blacklist:(id)arg6 injectionTime:(int)arg7 injectedFrames:(int)arg8 ;
+(id)_standardUserAgentWithApplicationName:(id)arg1 ;
+(id)_supportedMIMETypes;
+(void)_clearPrivateBrowsingSessionCookieStorage;
+(void)willEnterBackgroundWithCompletionHandler:(/*^block*/ id)arg1 ;
+(void)_setAlwaysUsesComplexTextCodePath:(bool)arg1 ;
+(bool)_allowsRoundingHacks;
+(bool)canCloseAllWebViews;
+(void)closeAllWebViews;
+(bool)canShowFile:(id)arg1 ;
+(bool)_acceleratedImageDecoding;
+(void)_setAllowCookies:(bool)arg1 ;
+(bool)_allowCookies;
+(bool)_isUnderMemoryPressure;
+(void)_clearMemoryPressure;
+(bool)_shouldWaitForMemoryClearMessage;
+(void)_disableRemoteInspector;
+(void)_disableAutoStartRemoteInspector;
+(bool)_isRemoteInspectorEnabled;
+(bool)_hasRemoteInspectorSession;
+(void)_registerViewClass:(Class)arg1 representationClass:(Class)arg2 forURLScheme:(id)arg3 ;
+(id)_decodeData:(id)arg1 ;
+(void)_setShouldUseFontSmoothing:(bool)arg1 ;
+(bool)_shouldUseFontSmoothing;
+(void)_setMaximumImageSizeBeforeSubsampling:(unsigned long long)arg1 ;
+(unsigned long long)_maximumImageSizeBeforeSubsampling;
+(void)_removeOriginAccessWhitelistEntryWithSourceOrigin:(id)arg1 destinationProtocol:(id)arg2 destinationHost:(id)arg3 allowDestinationSubdomains:(bool)arg4 ;
+(void)_resetOriginAccessWhitelists;
+(void)_addUserScriptToGroup:(id)arg1 world:(id)arg2 source:(id)arg3 url:(id)arg4 whitelist:(id)arg5 blacklist:(id)arg6 injectionTime:(int)arg7 ;
+(void)_removeUserScriptFromGroup:(id)arg1 world:(id)arg2 url:(id)arg3 ;
+(void)_removeUserStyleSheetFromGroup:(id)arg1 world:(id)arg2 url:(id)arg3 ;
+(void)_removeUserScriptsFromGroup:(id)arg1 world:(id)arg2 ;
+(void)_removeAllUserContentFromGroup:(id)arg1 ;
+(void)_setDomainRelaxationForbidden:(bool)arg1 forURLScheme:(id)arg2 ;
+(void)_registerURLSchemeAsSecure:(id)arg1 ;
+(void)_registerURLSchemeAsAllowingLocalStorageAccessInPrivateBrowsing:(id)arg1 ;
+(void)_registerURLSchemeAsAllowingDatabaseAccessInPrivateBrowsing:(id)arg1 ;
+(void)_setLoadResourcesSerially:(bool)arg1 ;
+(bool)_HTTPPipeliningEnabled;
+(void)_setHTTPPipeliningEnabled:(bool)arg1 ;
+(void)_setTileCacheLayerPoolCapacity:(unsigned)arg1 ;
+(void)_reportException:(OpaqueJSValueRef)arg1 inContext:(OpaqueJSContextRef)arg2 ;
+(void)_addOriginAccessWhitelistEntryWithSourceOrigin:(id)arg1 destinationProtocol:(id)arg2 destinationHost:(id)arg3 allowDestinationSubdomains:(bool)arg4 ;
+(void)_makeAllWebViewsPerformSelector:(SEL)arg1 ;
+(bool)canShowMIMEType:(id)arg1 ;
+(void)initialize;
+(bool)canShowMIMETypeAsHTML:(id)arg1 ;
+(void)registerViewClass:(Class)arg1 representationClass:(Class)arg2 forMIMEType:(id)arg3 ;
+(bool)_canShowMIMEType:(id)arg1 allowingPlugins:(bool)arg2 ;
+(id)MIMETypesShownAsHTML;
+(void)setMIMETypesShownAsHTML:(id)arg1 ;
+(void)registerURLSchemeAsLocal:(id)arg1 ;
-(oneway void)release;
-(oneway void)_webcore_releaseOnWebThread;
-(bool)_writeDataAtPath:(id)arg1 asArchive:(bool)arg2 ;
-(bool)_createSymlinkInDirectory:(id)arg1 pointingToPath:(id)arg2 ;
-(id)_quickLookContentFilePath;
-(id)fullScreenPlaceholderView;
-(id)_notificationProvider;
-(void)_setNotificationProvider:(id)arg1 ;
-(void)_notificationDidShow:(unsigned long long)arg1 ;
-(void)_notificationDidClick:(unsigned long long)arg1 ;
-(void)_notificationsDidClose:(id)arg1 ;
-(unsigned long long)_notificationIDForTesting:(OpaqueJSValueRef)arg1 ;
-(id)_geolocationProvider;
-(void)_geolocationDidChangePosition:(id)arg1 ;
-(void)_geolocationDidFailWithMessage:(id)arg1 ;
-(void)_resetAllGeolocationPermission;
-(void)_setGeolocationProvider:(id)arg1 ;
-(id)_deviceOrientationProvider;
-(void)_setDeviceOrientationProvider:(id)arg1 ;
-(void)_scheduleLayerFlushForPendingTileCacheRepaint;
-(id)_selectedOrMainFrame;
-(int)_keyboardUIMode;
-(void)_setNeedsOneShotDrawingSynchronization:(bool)arg1 ;
-(void)_scheduleCompositingLayerFlush;
-(Frame*)_mainCoreFrame;
-(void)_addObject:(id)arg1 forIdentifier:(unsigned long long)arg2 ;
-(id)_objectForIdentifier:(unsigned long long)arg1 ;
-(void)_removeObjectForIdentifier:(unsigned long long)arg1 ;
-(void)_retrieveKeyboardUIModeFromPreferences:(id)arg1 ;
-(bool)_flushCompositingChanges;
-(bool)_becomingFirstResponderFromOutside;
-(bool)_needsOneShotDrawingSynchronization;
-(CGPoint)_convertPointFromRootView:(CGPoint)arg1 ;
-(CGRect)_convertRectFromRootView:(CGRect)arg1 ;
-(bool)_isLoading;
-(id)_focusedFrame;
-(id)_frameViewAtWindowPoint:(CGPoint)arg1 ;
-(bool)_continuousCheckingAllowed;
-(id)_responderForResponderOperations;
-(void)_insertNewlineInQuotedContent;
-(void)_replaceSelectionWithNode:(id)arg1 matchStyle:(bool)arg2 ;
-(bool)_selectionIsCaret;
-(bool)_selectionIsAll;
-(void)_simplifyMarkup:(id)arg1 endNode:(id)arg2 ;
-(id)typingAttributes;
-(void)insertText:(id)arg1 ;
-(void)selectAll:(id)arg1 ;
-(void)makeTextWritingDirectionRightToLeft:(id)arg1 ;
-(void)makeTextWritingDirectionLeftToRight:(id)arg1 ;
-(void)cut:(id)arg1 ;
-(void)copy:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(void)toggleUnderline:(id)arg1 ;
-(void)deleteBackward:(id)arg1 ;
-(void)insertDictationPhrases:(id)arg1 metadata:(id)arg2 ;
-(void)toggleBold:(id)arg1 ;
-(void)toggleItalic:(id)arg1 ;
-(void)moveRight:(id)arg1 ;
-(void)moveLeft:(id)arg1 ;
-(void)moveUp:(id)arg1 ;
-(void)moveDown:(id)arg1 ;
-(void)delete:(id)arg1 ;
-(void)deleteForward:(id)arg1 ;
-(void)insertParagraphSeparator:(id)arg1 ;
-(void)moveDownAndModifySelection:(id)arg1 ;
-(void)moveLeftAndModifySelection:(id)arg1 ;
-(void)moveRightAndModifySelection:(id)arg1 ;
-(void)moveUpAndModifySelection:(id)arg1 ;
-(void)insertBacktab:(id)arg1 ;
-(void)insertTab:(id)arg1 ;
-(void)insertNewline:(id)arg1 ;
-(void)scrollToBeginningOfDocument:(id)arg1 ;
-(void)scrollToEndOfDocument:(id)arg1 ;
-(void)scrollPageUp:(id)arg1 ;
-(void)scrollPageDown:(id)arg1 ;
-(void)scrollLineUp:(id)arg1 ;
-(void)scrollLineDown:(id)arg1 ;
-(void)selectWord:(id)arg1 ;
-(void)alignCenter:(id)arg1 ;
-(void)alignJustified:(id)arg1 ;
-(void)alignLeft:(id)arg1 ;
-(void)alignRight:(id)arg1 ;
-(void)deleteBackwardByDecomposingPreviousCharacter:(id)arg1 ;
-(void)deleteToBeginningOfLine:(id)arg1 ;
-(void)deleteToBeginningOfParagraph:(id)arg1 ;
-(void)deleteToEndOfLine:(id)arg1 ;
-(void)deleteToEndOfParagraph:(id)arg1 ;
-(void)deleteToMark:(id)arg1 ;
-(void)deleteWordBackward:(id)arg1 ;
-(void)deleteWordForward:(id)arg1 ;
-(void)ignoreSpelling:(id)arg1 ;
-(void)indent:(id)arg1 ;
-(void)insertLineBreak:(id)arg1 ;
-(void)insertNewlineIgnoringFieldEditor:(id)arg1 ;
-(void)insertTabIgnoringFieldEditor:(id)arg1 ;
-(void)makeTextWritingDirectionNatural:(id)arg1 ;
-(void)moveBackward:(id)arg1 ;
-(void)moveBackwardAndModifySelection:(id)arg1 ;
-(void)moveForward:(id)arg1 ;
-(void)moveForwardAndModifySelection:(id)arg1 ;
-(void)moveParagraphBackwardAndModifySelection:(id)arg1 ;
-(void)moveParagraphForwardAndModifySelection:(id)arg1 ;
-(void)moveToBeginningOfDocument:(id)arg1 ;
-(void)moveToBeginningOfDocumentAndModifySelection:(id)arg1 ;
-(void)moveToBeginningOfLine:(id)arg1 ;
-(void)moveToBeginningOfLineAndModifySelection:(id)arg1 ;
-(void)moveToBeginningOfParagraph:(id)arg1 ;
-(void)moveToBeginningOfParagraphAndModifySelection:(id)arg1 ;
-(void)moveToBeginningOfSentence:(id)arg1 ;
-(void)moveToBeginningOfSentenceAndModifySelection:(id)arg1 ;
-(void)moveToEndOfDocument:(id)arg1 ;
-(void)moveToEndOfDocumentAndModifySelection:(id)arg1 ;
-(void)moveToEndOfLine:(id)arg1 ;
-(void)moveToEndOfLineAndModifySelection:(id)arg1 ;
-(void)moveToEndOfParagraph:(id)arg1 ;
-(void)moveToEndOfParagraphAndModifySelection:(id)arg1 ;
-(void)moveToEndOfSentence:(id)arg1 ;
-(void)moveToEndOfSentenceAndModifySelection:(id)arg1 ;
-(void)moveToLeftEndOfLine:(id)arg1 ;
-(void)moveToLeftEndOfLineAndModifySelection:(id)arg1 ;
-(void)moveToRightEndOfLine:(id)arg1 ;
-(void)moveToRightEndOfLineAndModifySelection:(id)arg1 ;
-(void)moveWordBackward:(id)arg1 ;
-(void)moveWordBackwardAndModifySelection:(id)arg1 ;
-(void)moveWordForward:(id)arg1 ;
-(void)moveWordForwardAndModifySelection:(id)arg1 ;
-(void)moveWordLeft:(id)arg1 ;
-(void)moveWordLeftAndModifySelection:(id)arg1 ;
-(void)moveWordRight:(id)arg1 ;
-(void)moveWordRightAndModifySelection:(id)arg1 ;
-(void)outdent:(id)arg1 ;
-(void)overWrite:(id)arg1 ;
-(void)pageDown:(id)arg1 ;
-(void)pageDownAndModifySelection:(id)arg1 ;
-(void)pageUp:(id)arg1 ;
-(void)pageUpAndModifySelection:(id)arg1 ;
-(void)pasteAsPlainText:(id)arg1 ;
-(void)selectLine:(id)arg1 ;
-(void)selectParagraph:(id)arg1 ;
-(void)selectSentence:(id)arg1 ;
-(void)selectToMark:(id)arg1 ;
-(void)setMark:(id)arg1 ;
-(void)subscript:(id)arg1 ;
-(void)superscript:(id)arg1 ;
-(void)swapWithMark:(id)arg1 ;
-(void)transpose:(id)arg1 ;
-(void)underline:(id)arg1 ;
-(void)unscript:(id)arg1 ;
-(void)yank:(id)arg1 ;
-(void)yankAndSelect:(id)arg1 ;
-(void)clearText:(id)arg1 ;
-(void)centerSelectionInVisibleArea:(id)arg1 ;
-(void)uppercaseWord:(id)arg1 ;
-(void)lowercaseWord:(id)arg1 ;
-(void)capitalizeWord:(id)arg1 ;
-(void)_performResponderOperation:(SEL)arg1 with:(id)arg2 ;
-(void)changeAttributes:(id)arg1 ;
-(void)changeBaseWritingDirection:(id)arg1 ;
-(void)changeBaseWritingDirectionToLTR:(id)arg1 ;
-(void)changeBaseWritingDirectionToRTL:(id)arg1 ;
-(void)changeColor:(id)arg1 ;
-(void)changeDocumentBackgroundColor:(id)arg1 ;
-(void)changeFont:(id)arg1 ;
-(void)changeSpelling:(id)arg1 ;
-(void)checkSpelling:(id)arg1 ;
-(void)complete:(id)arg1 ;
-(void)copyFont:(id)arg1 ;
-(void)makeBaseWritingDirectionLeftToRight:(id)arg1 ;
-(void)makeBaseWritingDirectionRightToLeft:(id)arg1 ;
-(void)orderFrontSubstitutionsPanel:(id)arg1 ;
-(void)pasteAsRichText:(id)arg1 ;
-(void)pasteFont:(id)arg1 ;
-(void)performFindPanelAction:(id)arg1 ;
-(void)showGuessPanel:(id)arg1 ;
-(void)startSpeaking:(id)arg1 ;
-(void)stopSpeaking:(id)arg1 ;
-(void)takeFindStringFromSelection:(id)arg1 ;
-(void)toggleBaseWritingDirection:(id)arg1 ;
-(void)applyStyle:(id)arg1 ;
-(void)replaceSelectionWithNode:(id)arg1 ;
-(void)replaceSelectionWithText:(id)arg1 ;
-(void)replaceSelectionWithMarkupString:(id)arg1 ;
-(void)replaceSelectionWithArchive:(id)arg1 ;
-(void)deleteSelection;
-(bool)isAutomaticQuoteSubstitutionEnabled;
-(bool)isAutomaticLinkDetectionEnabled;
-(bool)isAutomaticDashSubstitutionEnabled;
-(bool)isAutomaticTextReplacementEnabled;
-(bool)isAutomaticSpellingCorrectionEnabled;
-(void)setSmartInsertDeleteEnabled:(bool)arg1 ;
-(id)typingStyle;
-(id)undoManager;
-(bool)isEditable;
-(int)selectionAffinity;
-(void)setEditable:(bool)arg1 ;
-(id)selectedDOMRange;
-(void)setEditingDelegate:(id)arg1 ;
-(void)registerForEditingDelegateNotification:(id)arg1 selector:(SEL)arg2 ;
-(void)setSelectedDOMRange:(id)arg1 affinity:(int)arg2 ;
-(void)setContinuousSpellCheckingEnabled:(bool)arg1 ;
-(void)setTypingStyle:(id)arg1 ;
-(id)editingDelegate;
-(bool)isContinuousSpellCheckingEnabled;
-(bool)_shouldChangeSelectedDOMRange:(id)arg1 toDOMRange:(id)arg2 affinity:(int)arg3 stillSelecting:(bool)arg4 ;
-(bool)maintainsInactiveSelection;
-(bool)smartInsertDeleteEnabled;
-(id)editableDOMRangeForPoint:(CGPoint)arg1 ;
-(id)styleDeclarationWithText:(id)arg1 ;
-(id)computedStyleForElement:(id)arg1 pseudoElement:(id)arg2 ;
-(void)scrollDOMRangeToVisible:(id)arg1 ;
-(unsigned long long)countMatchesForText:(id)arg1 options:(unsigned long long)arg2 highlight:(bool)arg3 limit:(unsigned long long)arg4 markMatches:(bool)arg5 ;
-(bool)findString:(id)arg1 options:(unsigned long long)arg2 ;
-(id)historyDelegate;
-(void)setMainFrameDocumentReady:(bool)arg1 ;
-(void)unmarkAllTextMatches;
-(id)rectsForTextMatches;
-(unsigned long long)countMatchesForText:(id)arg1 inDOMRange:(id)arg2 options:(unsigned long long)arg3 highlight:(bool)arg4 limit:(unsigned long long)arg5 markMatches:(bool)arg6 ;
-(id)DOMRangeOfString:(id)arg1 relativeTo:(id)arg2 options:(unsigned long long)arg3 ;
-(void)setTabKeyCyclesThroughElements:(bool)arg1 ;
-(bool)tabKeyCyclesThroughElements;
-(void)setHistoryDelegate:(id)arg1 ;
-(bool)shouldClose;
-(bool)canMarkAllTextMatches;
-(void)scrollDOMRangeToVisible:(id)arg1 withInset:(double)arg2 ;
-(bool)allowsUndo;
-(void)setAllowsUndo:(bool)arg1 ;
-(void)setPageSizeMultiplier:(float)arg1 ;
-(float)pageSizeMultiplier;
-(bool)canZoomPageIn;
-(void)zoomPageIn:(id)arg1 ;
-(bool)canZoomPageOut;
-(void)zoomPageOut:(id)arg1 ;
-(bool)canResetPageZoom;
-(void)resetPageZoom:(id)arg1 ;
-(void)setMediaVolume:(float)arg1 ;
-(float)mediaVolume;
-(void)addVisitedLinks:(id)arg1 ;
-(void)removeVisitedLink:(id)arg1 ;
-(void)setScriptDebugDelegate:(id)arg1 ;
-(id)scriptDebugDelegate;
-(void)stopLoadingAndClear;
-(void)stopLoading:(id)arg1 ;
-(void)reload:(id)arg1 ;
-(void)goBack:(id)arg1 ;
-(void)goForward:(id)arg1 ;
-(bool)canGoBack;
-(bool)canGoForward;
-(void)takeStringURLFrom:(id)arg1 ;
-(void)reloadFromOrigin:(id)arg1 ;
-(bool)canMakeTextSmaller;
-(void)makeTextSmaller:(id)arg1 ;
-(bool)canMakeTextLarger;
-(void)makeTextLarger:(id)arg1 ;
-(bool)canMakeTextStandardSize;
-(void)makeTextStandardSize:(id)arg1 ;
-(void)setWebMailDelegate:(id)arg1 ;
-(id)_webMailDelegate;
-(void)updateLayoutIgnorePendingStyleSheets;
-(void)setBackgroundColor:(CGColorRef)arg1 ;
-(CGColorRef)backgroundColor;
-(id)initSimpleHTMLDocumentWithStyle:(id)arg1 frame:(CGRect)arg2 preferences:(id)arg3 groupName:(id)arg4 ;
-(bool)_setMediaLayer:(id)arg1 forPluginView:(id)arg2 ;
-(void)_setUIKitDelegate:(id)arg1 ;
-(id)inspector;
-(id)styleAtSelectionStart;
-(void)_clearDelegates;
-(void)_setNetworkStateIsOnline:(bool)arg1 ;
-(void)_setWantsTelephoneNumberParsing:(bool)arg1 ;
-(CGSize)_fixedLayoutSize;
-(void)_setFixedLayoutSize:(CGSize)arg1 ;
-(unsigned long long)_renderTreeSize;
-(bool)_isProcessingUserGesture;
-(void)_viewGeometryDidChange;
-(void)_setCustomFixedPositionLayoutRectInWebThread:(CGRect)arg1 synchronize:(bool)arg2 ;
-(void)_setCustomFixedPositionLayoutRect:(CGRect)arg1 ;
-(id)_fixedPositionContent;
-(void)setCaretChangeListener:(id)arg1 ;
-(bool)_pluginsAreRunning;
-(id)_UIKitDelegate;
-(id)_formDelegate;
-(void)_setFontFallbackPrefersPictographs:(bool)arg1 ;
-(int)_paginationMode;
-(void)_setPaginationMode:(int)arg1 ;
-(bool)_paginationBehavesLikeColumns;
-(void)_setPaginationBehavesLikeColumns:(bool)arg1 ;
-(double)_pageLength;
-(void)_setPageLength:(double)arg1 ;
-(double)_gapBetweenPages;
-(void)_setGapBetweenPages:(double)arg1 ;
-(unsigned long long)_pageCount;
-(Page*)page;
-(void)_setFormDelegate:(id)arg1 ;
-(void)_setUIWebViewUserAgentWithBuildVersion:(id)arg1 ;
-(void)_overflowScrollPositionChangedTo:(CGPoint)arg1 forNode:(id)arg2 isUserScroll:(bool)arg3 ;
-(id)_touchEventRegions;
-(bool)defersCallbacks;
-(void)setDefersCallbacks:(bool)arg1 ;
-(void)setAllowsRemoteInspection:(bool)arg1 ;
-(void)setHostApplicationBundleId:(id)arg1 name:(id)arg2 ;
-(void)setUsesPageCache:(bool)arg1 ;
-(id)quickLookContentForURL:(id)arg1 ;
-(void)_dispatchTileDidDraw:(id)arg1 ;
-(void)_willStartScrollingOrZooming;
-(void)_didFinishScrollingOrZooming;
-(bool)usesPageCache;
-(id)_UIDelegateForwarder;
-(bool)_allowsMessaging;
-(id)_UIKitDelegateForwarder;
-(void)_closeWindow;
-(void)_mouseDidMoveOverElement:(id)arg1 modifierFlags:(unsigned long long)arg2 ;
-(void)_pushPerformingProgrammaticFocus;
-(void)_popPerformingProgrammaticFocus;
-(bool)_isStopping;
-(bool)_fetchCustomFixedPositionLayoutRect:(CGRect*)arg1 ;
-(id)_UIDelegateForSelector:(SEL)arg1 ;
-(id)_formDelegateForSelector:(SEL)arg1 ;
-(id)_editingDelegateForwarder;
-(bool)_isClosing;
-(bool)_includesFlattenedCompositingLayersWhenDrawingToBitmap;
-(void)_stopAllPlugIns;
-(void)_startAllPlugIns;
-(void)_didCommitLoadForFrame:(id)arg1 ;
-(id)_policyDelegateForwarder;
-(id)_downloadURL:(id)arg1 ;
-(void)_setGlobalHistoryItem:(HistoryItem*)arg1 ;
-(void)_stopAllPlugInsForPageCache;
-(void)_restorePlugInsFromCache;
-(id)_sourceApplicationAuditData;
-(bool)_useFixedLayout;
-(void)_documentScaleChanged;
-(bool)_isUsingAcceleratedCompositing;
-(bool)searchFor:(id)arg1 direction:(bool)arg2 caseSensitive:(bool)arg3 wrap:(bool)arg4 startInSelection:(bool)arg5 ;
-(bool)_isPerformingProgrammaticFocus;
-(bool)canBeRemotelyInspected;
-(id)hostApplicationBundleId;
-(id)hostApplicationName;
-(id)remoteInspectorUserInfo;
-(void)setIndicatingForRemoteInspector:(bool)arg1 ;
-(bool)_isViewVisible;
-(void)_setVisibilityState:(int)arg1 isInitialState:(bool)arg2 ;
-(void)_preferencesChangedNotification:(id)arg1 ;
-(void)_preferencesChanged:(id)arg1 ;
-(void)_commonInitializationWithFrameName:(id)arg1 groupName:(id)arg2 ;
-(void)_closePluginDatabases;
-(void)_closeWithFastTeardown;
-(bool)allowsRemoteInspection;
-(bool)_needsPreHTML5ParserQuirks;
-(bool)_needsUnrestrictedGetMatchedCSSRules;
-(bool)interactiveFormValidationEnabled;
-(int)validationMessageTimerMagnification;
-(void)caretChanged;
-(void)removeAllCaretChangeListeners;
-(bool)_locked_plugInsAreRunningInFrame:(id)arg1 ;
-(void)_locked_recursivelyPerformPlugInSelector:(SEL)arg1 inFrame:(id)arg2 ;
-(void)_synchronizeCustomFixedPositionLayoutRect;
-(void)_setBrowserUserAgentProductVersion:(id)arg1 buildVersion:(id)arg2 bundleVersion:(id)arg3 ;
-(void)_dispatchPendingLoadRequests;
-(id)_initWithFrame:(CGRect)arg1 frameName:(id)arg2 groupName:(id)arg3 usesDocumentViews:(bool)arg4 ;
-(void)_viewWillDrawInternal;
-(void)_replaceCurrentHistoryItem:(id)arg1 ;
-(bool)_viewClass:(Class*)arg1 andRepresentationClass:(Class*)arg2 forMIMEType:(id)arg3 ;
-(bool)_isClosed;
-(void)_dispatchUnloadEvent;
-(void)_setResourceLoadSchedulerSuspended:(bool)arg1 ;
-(id)_openNewWindowWithRequest:(id)arg1 ;
-(void)setRemoteInspectorUserInfo:(id)arg1 ;
-(void)_loadBackForwardListFromOtherView:(id)arg1 ;
-(id)_formDelegateForwarder;
-(void)_cacheResourceLoadDelegateImplementations;
-(void)_cacheFrameLoadDelegateImplementations;
-(void)_cacheScriptDebugDelegateImplementations;
-(void)_cacheHistoryDelegateImplementations;
-(id)caretChangeListener;
-(id)caretChangeListeners;
-(void)addCaretChangeListener:(id)arg1 ;
-(void)removeCaretChangeListener:(id)arg1 ;
-(void)_setInViewSourceMode:(bool)arg1 ;
-(bool)_inViewSourceMode;
-(void)_setUseFastImageScalingMode:(bool)arg1 ;
-(bool)_inFastImageScalingMode;
-(bool)_cookieEnabled;
-(void)_setCookieEnabled:(bool)arg1 ;
-(void)_destroyAllPlugIns;
-(void)_clearBackForwardCache;
-(void)_setNeedsUnrestrictedGetMatchedCSSRules:(bool)arg1 ;
-(void)_attachScriptDebuggerToAllFrames;
-(void)_detachScriptDebuggerFromAllFrames;
-(void)_setAllowsMessaging:(bool)arg1 ;
-(id)_globalHistoryItem;
-(id)textIteratorForRect:(CGRect)arg1 ;
-(void)_executeCoreCommandByName:(id)arg1 value:(id)arg2 ;
-(void)_setCustomHTMLTokenizerTimeDelay:(double)arg1 ;
-(void)_setCustomHTMLTokenizerChunkSize:(int)arg1 ;
-(void)_clearMainFrameName;
-(void)setSelectTrailingWhitespaceEnabled:(bool)arg1 ;
-(bool)isSelectTrailingWhitespaceEnabled;
-(void)setMemoryCacheDelegateCallsEnabled:(bool)arg1 ;
-(bool)areMemoryCacheDelegateCallsEnabled;
-(bool)_postsAcceleratedCompositingNotifications;
-(void)_setPostsAcceleratedCompositingNotifications:(bool)arg1 ;
-(void)_setBaseCTM:(CGAffineTransform)arg1 forContext:(CGContextRef)arg2 ;
-(void)setInteractiveFormValidationEnabled:(bool)arg1 ;
-(void)setValidationMessageTimerMagnification:(int)arg1 ;
-(bool)_isSoftwareRenderable;
-(void)_setIncludesFlattenedCompositingLayersWhenDrawingToBitmap:(bool)arg1 ;
-(void)setTracksRepaints:(bool)arg1 ;
-(bool)isTrackingRepaints;
-(void)resetTrackedRepaints;
-(id)trackedRepaintRects;
-(void)_updateVisibilityState;
-(void)_updateActiveState;
-(bool)allowsNewCSSAnimationsWhileSuspended;
-(void)setAllowsNewCSSAnimationsWhileSuspended:(bool)arg1 ;
-(bool)cssAnimationsSuspended;
-(void)setCSSAnimationsSuspended:(bool)arg1 ;
-(void)_scaleWebView:(float)arg1 atOrigin:(CGPoint)arg2 ;
-(float)_viewScaleFactor;
-(void)_setUseFixedLayout:(bool)arg1 ;
-(void)_listenForLayoutMilestones:(unsigned long long)arg1 ;
-(unsigned long long)_layoutMilestones;
-(unsigned long long)markAllMatchesForText:(id)arg1 caseSensitive:(bool)arg2 highlight:(bool)arg3 limit:(unsigned long long)arg4 ;
-(unsigned long long)countMatchesForText:(id)arg1 caseSensitive:(bool)arg2 highlight:(bool)arg3 limit:(unsigned long long)arg4 markMatches:(bool)arg5 ;
-(bool)_wantsTelephoneNumberParsing;
-(bool)_webGLEnabled;
-(void)_setWebGLEnabled:(bool)arg1 ;
-(void)_setSourceApplicationAuditData:(id)arg1 ;
-(id)_displayURL;
-(int)_visibilityState;
-(void)_close;
-(void)_removeFromAllWebViewsSet;
-(void)_addToAllWebViewsSet;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(bool)becomeFirstResponder;
-(void)setGroupName:(id)arg1 ;
-(void)setPreferences:(id)arg1 ;
-(id)mainFrame;
-(void)setPolicyDelegate:(id)arg1 ;
-(void)setCustomUserAgent:(id)arg1 ;
-(void)setDrawsBackground:(bool)arg1 ;
-(void)viewDidMoveToWindow;
-(void)close;
-(id)selectedFrame;
-(id)groupName;
-(id)backForwardList;
-(id)preferences;
-(bool)isLoading;
-(void)setFrameLoadDelegate:(id)arg1 ;
-(void)setUIDelegate:(id)arg1 ;
-(void)setResourceLoadDelegate:(id)arg1 ;
-(id)stringByEvaluatingJavaScriptFromString:(id)arg1 ;
-(id)mainFrameURL;
-(bool)goToBackForwardItem:(id)arg1 ;
-(id)customUserAgent;
-(bool)goBack;
-(bool)goForward;
-(bool)drawsBackground;
-(id)elementAtPoint:(CGPoint)arg1 ;
-(double)estimatedProgress;
-(bool)supportsTextEncoding;
-(void)setDownloadDelegate:(id)arg1 ;
-(void)setTextSizeMultiplier:(float)arg1 ;
-(float)textSizeMultiplier;
-(bool)acceptsFirstResponder;
-(void)finalize;
-(void)setNextKeyView:(id)arg1 ;
-(id)previousValidKeyView;
-(bool)_canShowMIMEType:(id)arg1 ;
-(id)_frameLoadDelegateForwarder;
-(id)_resourceLoadDelegateForwarder;
-(id)downloadDelegate;
-(float)_realZoomMultiplier;
-(bool)_realZoomMultiplierIsTextOnly;
-(void)_setZoomMultiplier:(float)arg1 isTextOnly:(bool)arg2 ;
-(bool)shouldUpdateWhileOffscreen;
-(String*)_userAgentString;
-(id)_pluginForExtension:(id)arg1 ;
-(id)_pluginForMIMEType:(id)arg1 ;
-(id)_videoProxyPluginForMIMEType:(id)arg1 ;
-(id)mediaStyle;
-(id)_webcore_effectiveFirstResponder;
-(bool)searchFor:(id)arg1 direction:(bool)arg2 caseSensitive:(bool)arg3 wrap:(bool)arg4 ;
-(void)setCurrentNodeHighlight:(id)arg1 ;
-(void)setApplicationNameForUserAgent:(id)arg1 ;
-(void)_updateScreenScaleFromWindow;
-(void)_wakWindowScreenScaleChanged:(id)arg1 ;
-(void)_wakWindowVisibilityChanged:(id)arg1 ;
-(void)setMaintainsBackForwardList:(bool)arg1 ;
-(void)setHostWindow:(id)arg1 ;
-(id)preferencesIdentifier;
-(id)currentNodeHighlight;
-(id)initWithFrame:(CGRect)arg1 frameName:(id)arg2 groupName:(id)arg3 ;
-(float)_zoomMultiplier:(bool)arg1 ;
-(id)customTextEncodingName;
-(id)_mainFrameOverrideEncoding;
-(id)_elementAtWindowPoint:(CGPoint)arg1 ;
-(bool)_isMIMETypeRegisteredAsPlugin:(id)arg1 ;
-(id)_initWithArguments:(id)arg1 ;
-(void)setShouldCloseWithWindow:(bool)arg1 ;
-(bool)shouldCloseWithWindow;
-(void)setPreferencesIdentifier:(id)arg1 ;
-(bool)_canZoomOut:(bool)arg1 ;
-(bool)_canZoomIn:(bool)arg1 ;
-(void)_zoomOut:(id)arg1 isTextOnly:(bool)arg2 ;
-(void)_zoomIn:(id)arg1 isTextOnly:(bool)arg2 ;
-(bool)_canResetZoom:(bool)arg1 ;
-(void)_resetZoom:(id)arg1 isTextOnly:(bool)arg2 ;
-(id)applicationNameForUserAgent;
-(void)setMediaStyle:(id)arg1 ;
-(void)setCustomTextEncodingName:(id)arg1 ;
-(id)userAgentForURL:(id)arg1 ;
-(id)hostWindow;
-(id)documentViewAtWindowPoint:(CGPoint)arg1 ;
-(void)setMainFrameURL:(id)arg1 ;
-(id)mainFrameIconURL;
-(id)mainFrameDocument;
-(void)setShouldUpdateWhileOffscreen:(bool)arg1 ;
-(id)mainFrameTitle;
-(id)windowScriptObject;
-(id)frameLoadDelegate;
-(id)policyDelegate;
-(id)resourceLoadDelegate;
-(id)UIDelegate;
@end

