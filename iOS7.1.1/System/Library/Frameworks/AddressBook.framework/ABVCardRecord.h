/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:37 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AddressBook/AddressBook-Structs.h>
@interface ABVCardRecord : NSObject {

	void* _record;
	CFArrayRef _properties;

}
+(bool)includeREVInVCards;
+(bool)includeNotesInVCards;
+(bool)includeImageURIInVCards;
+(bool)includeABClipRectInVCardPhotos;
+(CFArrayRef)supportedProperties;
+(bool)privateVCardEnabled;
+(void)setPrivateVCardEnabled:(bool)arg1 ;
+(void)setVCardField:(id)arg1 isPrivate:(bool)arg2 ;
+(void)clearPrivateFields;
+(bool)vcardFieldisPrivate:(id)arg1 ;
+(void)setIncludeNotesInVCards:(bool)arg1 ;
+(void)setIncludeREVInVCards:(bool)arg1 ;
+(void)setIncludePhotosInVCards:(bool)arg1 ;
+(bool)includePhotosInVCards;
-(id)initWithRecord:(void*)arg1 ;
-(id)_21vCardRepresentationAsData;
-(id)_copyVCardRepresentationAsStringIncludeExternalProperties:(bool)arg1 withPhoto:(id)arg2 extraPhotoParameters:(id)arg3 ;
-(bool)useThumbnailImageFormatIfAvailable;
-(id)_copyGroupVCardRepresentationAsStringIncludeExternalProperties:(bool)arg1 ;
-(id)newISO8061StringFromDate:(id)arg1 ;
-(void*)copyValueForProperty:(unsigned)arg1 ;
-(bool)_showField:(unsigned)arg1 identifier:(int)arg2 ;
-(CFStringRef)_vCardKeyForGenericLabel:(id)arg1 ;
-(void)appendLabel:(id)arg1 toVCardRep:(id)arg2 inGroup:(id)arg3 ;
-(id)encodedDataForValue:(id)arg1 charsetName:(id*)arg2 ;
-(id)encodedLineForValue:(id)arg1 ;
-(id)propertyLineForIMHandles:(id)arg1 labels:(id)arg2 vCardProperty:(id)arg3 ;
-(id)_fullNameIncludingAuxiliaryElements:(bool)arg1 ;
-(bool)_isCompany;
-(id)alternateName;
-(id)_realCompositeName;
-(CFStringRef)_vCardKeyForEmailLabel:(id)arg1 ;
-(id)_vCardKeysForPhoneLabel:(id)arg1 ;
-(id)_vCardKeyForAddressLabel:(id)arg1 vCard3:(bool)arg2 ;
-(id)propertyLineForGenericABProperty21:(unsigned)arg1 vCardProperty:(id)arg2 ;
-(bool)_showField:(unsigned)arg1 ;
-(id)ISO8061StringFromDate:(id)arg1 ;
-(id)dataForInstantMessageProperties;
-(id)dataForSocialProfileProperty:(void*)arg1 groupCount:(long long*)arg2 ;
-(id)ISO8061StringFromDateTime:(id)arg1 ;
-(bool)_usesArrayForExternalPropKey:(id)arg1 ;
-(id)_prodID;
-(id)propertyLineForGenericABProperty:(unsigned)arg1 vCardProperty:(id)arg2 is21:(bool)arg3 groupCount:(long long*)arg4 ;
-(id)propertyLineForInstantMessageHandles:(id)arg1 groupCount:(long long*)arg2 ;
-(id)propertyLineForIMPPProperty:(id)arg1 groupCount:(long long*)arg2 ;
-(void)_appendPropValue:(id)arg1 forExternalPropKey:(id)arg2 toOutString:(id)arg3 usingDelimiter:(id)arg4 ;
-(id)initWithVCardRepresentation:(id)arg1 ;
-(id)vCardRepresentationForMode:(int)arg1 ;
-(void)dealloc;
-(id)init;
-(void*)valueForProperty:(unsigned)arg1 ;
-(id)_fullName;
-(bool)setValue:(void*)arg1 forProperty:(unsigned)arg2 ;
-(id)imageData;
-(void*)record;
@end

