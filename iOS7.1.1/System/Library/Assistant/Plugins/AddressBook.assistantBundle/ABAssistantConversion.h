/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:03 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Assistant/Plugins/AddressBook.assistantBundle/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AddressBook/AddressBook-Structs.h>
@interface ABAssistantConversion : NSObject
+(void)mergeSAPerson:(id)arg1 toSAPerson:(id)arg2 ;
+(bool)addFieldsFromSAPerson:(id)arg1 toABPerson:(void*)arg2 error:(id*)arg3 ;
+(bool)setFieldsFromSAPerson:(id)arg1 toABPerson:(void*)arg2 error:(id*)arg3 ;
+(bool)removeFieldsFromSAPerson:(id)arg1 toABPerson:(void*)arg2 error:(id*)arg3 ;
+(id)newSAABPeopleFromMergingABPeople:(id)arg1 ;
+(void)markMeCardsInSAPeople:(id)arg1 fromAddressBook:(void*)arg2 ;
+(id)newABAddressWithSALocation:(id)arg1 ;
+(id)newSAPeopleFromMergingABPeople:(id)arg1 ;
+(id)newSAPeopleFromMergingABPeople:(id)arg1 withAccountIdentifier:(id)arg2 ;
+(id)newSAPeopleFromExternalABPeople:(id)arg1 ;
+(id)newSAEmailWithValue:(id)arg1 label:(id)arg2 favoriteFacetime:(bool)arg3 favoriteFacetimeAudio:(bool)arg4 ;
+(id)newSAPhoneWithValue:(id)arg1 label:(id)arg2 favoritePhone:(bool)arg3 favoriteFacetime:(bool)arg4 favoriteFacetimeAudio:(bool)arg5 ;
+(id)newSALocationWithValue:(id)arg1 label:(id)arg2 ;
+(id)newSARelatedNameWithValue:(id)arg1 label:(id)arg2 ;
+(id)newSASocialProfileWithValue:(id)arg1 ;
+(id)convertToSAValuesForProperty:(int)arg1 fromABPerson:(void*)arg2 onlyUniqueLabels:(bool)arg3 noEmptyLabels:(bool)arg4 includeValues:(bool)arg5 includeFavorites:(bool)arg6 forAddressBook:(void*)arg7 withAccountIdentifier:(CFStringRef)arg8 ;
+(id)convertToSAValuesForProperty:(int)arg1 fromABPerson:(void*)arg2 onlyUniqueLabels:(bool)arg3 noEmptyLabels:(bool)arg4 ;
+(void)convertProperty:(int)arg1 fromABPerson:(void*)arg2 toSAPerson:(id)arg3 ;
+(id)convertToSAValuesForProperty:(int)arg1 fromABPerson:(void*)arg2 ;
+(id)newSAPersonFromABPerson:(void*)arg1 conversionType:(int)arg2 withAccountIdentifier:(CFStringRef)arg3 withExternalIdentifier:(CFStringRef)arg4 forAddressBook:(void*)arg5 returnSAABPerson:(bool)arg6 ;
+(id)newSAPersonFromABPerson:(void*)arg1 conversionType:(int)arg2 ;
+(id)newSAPeopleFromMergingABPeople:(id)arg1 withAccountIdentifier:(CFStringRef)arg2 returnSAABPeople:(bool)arg3 ;
+(id)newSAPersonFromABPerson:(void*)arg1 withAccountIdentifier:(CFStringRef)arg2 withExternalIdentifier:(CFStringRef)arg3 ;
+(bool)addABValuesForProperty:(int)arg1 fromSAPerson:(id)arg2 toABPerson:(void*)arg3 ;
+(bool)setABValuesForProperty:(int)arg1 fromSAPerson:(id)arg2 toABPerson:(void*)arg3 ;
+(bool)checkForNoRelatedNamesAccountConstraint:(id)arg1 forABPerson:(void*)arg2 ;
+(id)newSAPersonFromABPerson:(void*)arg1 conversionType:(int)arg2 forAddressBook:(void*)arg3 ;
+(id)newSASourceFromABSource:(void*)arg1 fromAddressBook:(void*)arg2 ;
+(id)newSAPersonFromDeletedRecordID:(int)arg1 forAddressBook:(void*)arg2 ;
+(id)newSAPhoneWithValue:(id)arg1 label:(id)arg2 ;
+(id)newSAEmailWithValue:(id)arg1 label:(id)arg2 ;
+(id)newSAPersonFromABPerson:(void*)arg1 withAccountIdentifier:(CFStringRef)arg2 forAddressBook:(void*)arg3 ;
+(id)newSAPersonFromABPerson:(void*)arg1 ;
@end

