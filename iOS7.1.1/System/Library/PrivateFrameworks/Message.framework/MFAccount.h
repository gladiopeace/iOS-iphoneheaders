/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:45 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Message/Message-Structs.h>
@class ACAccount, NSMutableDictionary, NSString, NSDictionary;

@interface MFAccount : NSObject {

	ACAccount* _persistentAccount;
	int _persistentAccountLock;
	NSMutableDictionary* _unsavedAccountProperties;
	NSString* _sourceApplicationBundleIdentifier;

}

@property (readonly) ACAccount * persistentAccount; 
@property (readonly) ACAccount * parentAccount; 
@property (readonly) NSString * parentAccountIdentifier; 
@property (readonly) NSDictionary * properties; 
@property (readonly) NSString * uniqueId; 
@property (readonly) NSString * identifier; 
@property (readonly) NSString * syncStoreIdentifier; 
@property (readonly) NSString * managedTag; 
@property (readonly) NSString * type; 
@property (nonatomic,retain) NSString * username; 
@property (nonatomic,retain) NSString * hostname; 
@property (nonatomic,retain) NSString * displayName; 
@property (nonatomic,copy) NSString * sourceApplicationBundleIdentifier;              //@synthesize sourceApplicationBundleIdentifier=_sourceApplicationBundleIdentifier - In the implementation block
@property (readonly) ACAccount * accountForRenewingCredentials; 
+(id)profileDisplayNameFromTag:(id)arg1 ;
+(SCD_Struct_MF6)tupleForType:(int)arg1 ;
+(SCD_Struct_MF6)tupleForKey:(id)arg1 ;
+(id)authSchemeValues;
+(id)authSchemeTitles;
+(bool)migrateCredentialsIfNecessaryWithPersistentAccount:(id)arg1 credential:(id)arg2 ;
+(id)accountWithProperties:(id)arg1 ;
+(id)_accountClass;
+(id)_newPersistentAccount;
+(id)accountTypeIdentifier;
+(id)_basicPropertyForKey:(id)arg1 persistentAccount:(id)arg2 ;
+(bool)_setBasicProperty:(id)arg1 forKey:(id)arg2 persistentAccount:(id)arg3 ;
+(id)accountTypeString;
+(id)displayedAccountTypeString;
+(bool)usesSSL;
+(unsigned)defaultSecurePortNumber;
+(unsigned)defaultPortNumber;
+(id)predefinedValueForKey:(id)arg1 ;
+(id)newAccountWithDictionary:(id)arg1 ;
+(id)authSchemesForAccountClass;
+(id)accountWithPersistentAccount:(id)arg1 ;
+(id)existingAccountForUniqueID:(id)arg1 ;
+(bool)isPredefinedAccountType;
+(id)propertiesWhichRequireValidation;
+(id)displayedShortAccountTypeString;
+(void*)legacyKeychainProtocol;
+(id)myFullName;
+(id)accountPropertiesValueForKey:(id)arg1 value:(id)arg2 ;
+(bool)isCommonPortNumber:(unsigned)arg1 ;
+(bool)isSSLEditable;
+(id)saslProfileName;
+(id)supportedDataclasses;
+(id)hostname;
-(id)valueForSettingsInAccountPropertiesForKey:(id)arg1 ;
-(void)_copyBooleanValueInAccountPropertiesForKey:(id)arg1 intoDictionary:(id)arg2 ;
-(void)copyAccountPropertiesForSpecifiers:(id)arg1 intoDictionary:(id)arg2 ;
-(void)copySecureMIMEIdentitiesIntoDictionary:(id)arg1 ;
-(void)setAccountPropertiesWithDictionary:(id)arg1 ;
-(id)password;
-(void)setPassword:(id)arg1 ;
-(id)serviceName;
-(bool)requiresAuthentication;
-(void)dealloc;
-(id)init;
-(bool)isActive;
-(id)type;
-(id)domain;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)identifier;
-(void)setActive:(bool)arg1 ;
-(id)uniqueId;
-(id)displayName;
-(id)properties;
-(id)initWithProperties:(id)arg1 ;
-(id)initWithPersistentAccount:(id)arg1 ;
-(void)_setAccountProperties:(id)arg1 ;
-(void)setPersistentAccount:(id)arg1 ;
-(void)releaseAllConnections;
-(void)persistentAccountDidChange:(id)arg1 previousAccount:(id)arg2 ;
-(id)accountPropertyForKey:(id)arg1 ;
-(id)persistentAccount;
-(id)parentAccount;
-(id)parentAccountIdentifier;
-(void)setAccountProperty:(id)arg1 forKey:(id)arg2 ;
-(void)setUsername:(id)arg1 ;
-(void)accountInfoDidChange;
-(void)_queueAccountInfoDidChange;
-(void)removeAccountPropertyForKey:(id)arg1 ;
-(bool)usesSSL;
-(id)_credentialCreateIfNecessary:(bool)arg1 ;
-(id)_credentialCreateIfNecessary:(bool)arg1 error:(id*)arg2 ;
-(id)_password;
-(id)_passwordWithError:(id*)arg1 ;
-(id)preferredAuthScheme;
-(id)credentialItemForKey:(id)arg1 error:(id*)arg2 ;
-(id)credentialItemForKey:(id)arg1 ;
-(bool)setCredentialItem:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(void)setCredentialItem:(id)arg1 forKey:(id)arg2 ;
-(id)accountForRenewingCredentials;
-(unsigned)defaultSecurePortNumber;
-(unsigned)defaultPortNumber;
-(unsigned)portNumber;
-(bool)_shouldTryDirectSSLConnectionOnPort:(unsigned)arg1 ;
-(Class)connectionClass;
-(id)_newConnection;
-(bool)_connectAndAuthenticate:(id)arg1 ;
-(void)setUsesSSL:(bool)arg1 ;
-(void)setHostname:(id)arg1 ;
-(void)setPortNumber:(unsigned)arg1 ;
-(id)certUIService;
-(id)clientCertificates;
-(void)setClientCertificates:(id)arg1 ;
-(void)setTryDirectSSL:(bool)arg1 ;
-(id)secureServiceName;
-(CFStringRef)connectionServiceType;
-(bool)allowsTrustPrompt;
-(id)sourceApplicationBundleIdentifier;
-(void)setSourceApplicationBundleIdentifier:(id)arg1 ;
-(id)defaultConnectionSettings;
-(id)customTitleForAuthenticationError:(id)arg1 authScheme:(id)arg2 defaultTitle:(id)arg3 ;
-(unsigned long long)credentialAccessibility;
-(id)customTitleForError:(id)arg1 authScheme:(id)arg2 defaultTitle:(id)arg3 ;
-(id)customDescriptionForError:(id)arg1 authScheme:(id)arg2 defaultDescription:(id)arg3 ;
-(void)reportAuthenticationError:(id)arg1 authScheme:(id)arg2 ;
-(id)enabledDataclasses;
-(void)savePersistentAccount;
-(void)removePersistentAccount;
-(id)accountClass;
-(void)setValueInAccountProperties:(id)arg1 forKey:(id)arg2 ;
-(void)removeValueInAccountPropertiesForKey:(id)arg1 ;
-(id)valueInAccountPropertiesForKey:(id)arg1 ;
-(id)_objectForAccountInfoKey:(id)arg1 ;
-(bool)_boolForAccountInfoKey:(id)arg1 defaultValue:(bool)arg2 ;
-(bool)canGoOffline;
-(id)_credential;
-(bool)promptUserForPasswordWithTitle:(id)arg1 message:(id)arg2 completionHandler:(/*^block*/ id)arg3 ;
-(bool)promptUserForWebLoginWithURL:(id)arg1 shouldConfirm:(bool)arg2 completionHandler:(/*^block*/ id)arg3 ;
-(id)managedTag;
-(bool)fetchTokensIfNecessary:(id*)arg1 ;
-(void)releaseAllForcedConnections;
-(void)validateConnections;
-(void)setDomain:(id)arg1 ;
-(void)setPreferredAuthScheme:(id)arg1 ;
-(id)authenticatedConnection;
-(void)applySettingsAsDefault:(id)arg1 ;
-(id)alternateConnectionSettings;
-(id)insecureConnectionSettings;
-(id)secureConnectionSettings;
-(id)syncStoreIdentifier;
-(id)nameForMailboxUid:(id)arg1 ;
-(bool)shouldEnableAfterError:(id)arg1 ;
-(bool)enableAccount;
-(bool)shouldDisplayHostnameInErrorMessages;
-(id)missingPasswordErrorWithTitle:(id)arg1 ;
-(id)inaccessiblePasswordErrorWithTitle:(id)arg1 ;
-(id)copyDiagnosticInformation;
-(void)setDisplayName:(id)arg1 ;
-(bool)isEnabledForDataclass:(id)arg1 ;
-(id)username;
-(id)hostname;
@end

