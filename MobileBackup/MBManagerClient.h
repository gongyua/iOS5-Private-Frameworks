/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MobileBackup/MBManager.h>

#import "MBConnectionHandler-Protocol.h"

@class MBConnection;

@interface MBManagerClient : MBManager <MBConnectionHandler>
{
    MBConnection *_conn;
}

- (id)initWithDelegate:(id)arg1;
- (id)init;
- (void)dealloc;
- (BOOL)setupBackupWithPasscode:(id)arg1 error:(id *)arg2;
- (BOOL)isBackupEnabled;
- (void)setBackupEnabled:(BOOL)arg1;
- (void)syncBackupEnabled;
- (id)getBackupListWithError:(id *)arg1;
- (id)getBackupListWithFiltering:(BOOL)arg1 error:(id *)arg2;
- (id)backupState;
- (BOOL)startBackupWithError:(id *)arg1;
- (void)cancel;
- (void)cancelRestore;
- (id)restoreState;
- (BOOL)restoreDataExistsForApplicationWithBundleID:(id)arg1 size:(unsigned long long *)arg2;
- (id)restoreFilesForDomain:(id)arg1 error:(id *)arg2;
- (id)dateOfNextScheduledBackup;
- (BOOL)startRestoreForBackupUDID:(id)arg1 snapshotID:(unsigned int)arg2 error:(id *)arg3;
- (BOOL)restoreFileWithPath:(id)arg1 error:(id *)arg2;
- (BOOL)restoreApplicationWithBundleID:(id)arg1 failed:(BOOL)arg2 error:(id *)arg3;
- (BOOL)cancelApplicationRestoreWithBundleID:(id)arg1 error:(id *)arg2;
- (void)finishRestore;
- (void)wakeUp;
- (void)accountChanged;
- (void)keyBagIsLocking;
- (BOOL)deleteAccountWithError:(id *)arg1;
- (BOOL)deleteBackupUDID:(id)arg1 error:(id *)arg2;
- (BOOL)deleteSnapshotID:(unsigned int)arg1 fromBackupUDID:(id)arg2 error:(id *)arg3;
- (BOOL)releaseLockWithBackupUDID:(id)arg1 error:(id *)arg2;
- (BOOL)startScanWithError:(id *)arg1;
- (unsigned long long)nextBackupSize;
- (id)domainInfoForName:(id)arg1;
- (id)domainInfoList;
- (BOOL)removeDomainName:(id)arg1 error:(id *)arg2;
- (BOOL)isBackupEnabledForDomainName:(id)arg1;
- (void)setBackupEnabled:(BOOL)arg1 forDomainName:(id)arg2;
- (void)setLogLevel:(int)arg1;
- (int)getLogLevel;
- (void)setAllowiTunesBackup:(BOOL)arg1;
- (BOOL)allowiTunesBackup;
- (void)rebootDevice;
- (void)_establishConnection;
- (id)_sendRequest:(id)arg1 arguments:(id)arg2;
- (id)_sendRequest:(id)arg1 arguments:(id)arg2 error:(id *)arg3;
- (void)connection:(id)arg1 didReceiveMessage:(id)arg2;
- (void)connectionDidDisconnect:(id)arg1;

@end
