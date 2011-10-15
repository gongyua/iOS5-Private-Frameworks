/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@protocol SafeVMUProcInfoProtocol
+ (id)getProcessIds;
+ (BOOL)isProcessRunning:(int)arg1;
+ (int)processParentId:(int)arg1;
- (unsigned int)task;
- (int)pid;
- (int)ppid;
- (id)name;
- (struct timeval)startTime;
- (id)description;
- (id)procTableName;
- (id)realAppName;
- (id)requestedAppName;
- (id)firstArgument;
- (id)arguments;
- (id)userAppName;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (int)compare:(id)arg1;
- (int)compareByName:(id)arg1;
- (BOOL)isApp;
- (BOOL)isMachO;
- (BOOL)isCFM;
- (BOOL)isRunning;
- (int)cpuType;
- (BOOL)isNative;
@end
