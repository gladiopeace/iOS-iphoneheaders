/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:47:04 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/assistantd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol AFSettingsService <NSObject>
@required
-(oneway void)setActiveAccountIdentifier:(id)arg1;
-(oneway void)setAssistantEnabled:(char)arg1;
-(oneway void)setDictationEnabled:(char)arg1;
-(oneway void)fetchSupportedLanguagesWithReply:(/*^block*/id)arg1;
-(oneway void)retrieveAccountMessageDictionariesWithReply:(/*^block*/id)arg1;
-(oneway void)saveAccountWithMessageDictionary:(id)arg1 setActive:(char)arg2;
-(oneway void)deleteAccountWithIdentifier:(id)arg1;
-(oneway void)_killDaemon;
-(oneway void)barrierWithReply:(/*^block*/id)arg1;
-(oneway void)_syncDataWithAnchorKeys:(id)arg1 forceReset:(char)arg2 reply:(/*^block*/id)arg3;
-(oneway void)_fetchPeerData:(/*^block*/id)arg1;
-(oneway void)getAvailableVoices:(/*^block*/id)arg1;
-(oneway void)setOutputVoice:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(oneway void)setLanguage:(id)arg1 withCompletion:(/*^block*/id)arg2;

@end

