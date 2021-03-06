/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary;

@interface IDESourceControlPersonManager : NSObject
{
    NSMutableDictionary *_peopleByRepository;
    NSMutableDictionary *_savedABPeoplePairingsByRepository;
}

+ (id)logAspect;
+ (id)sharedSourceControlPeopleRepository;
- (id)_authorsFromCustomDataSpecifier:(id)arg1 dataStore:(id)arg2;
- (id)_autoSetupAddressBookSupportWithEmails:(id)arg1;
- (void)_findABPersonForSourceTree:(id)arg1 person:(id)arg2 withCompletionBlock:(id)arg3;
- (id)_findABPersonFromKnownAuthors:(id)arg1 author:(id)arg2;
- (id)_loadAuthorABPairingForSourceTree:(id)arg1;
- (void)_saveAuthorsABPairingDictionary:(id)arg1 forSourceControlTree:(id)arg2;
- (id)_savedNameForSourceTree:(id)arg1;
- (id)_scPeopleForTree:(id)arg1;
- (void)clearPersonPairing:(id)arg1 forSourceControlTree:(id)arg2;
- (id)init;
- (id)personMatchingSourceControlTree:(id)arg1 forUserName:(id)arg2 email:(id)arg3 createIfNeeded:(BOOL)arg4;
- (void)savePersonPairing:(id)arg1 forSourceControlTree:(id)arg2;

@end

