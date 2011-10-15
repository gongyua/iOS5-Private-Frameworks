/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSLock, SCROBrailleEvent;

@interface SCROBrailleEventDispatcher : NSObject
{
    NSLock *_queueLock;
    struct __CFRunLoop *_runLoop;
    struct __CFRunLoopSource *_queueSource;
    struct __CFArray *_queue;
    SCROBrailleEvent *_brailleQueue;
    id _target;
    BOOL _isValid;
}

- (id)initWithTarget:(id)arg1;
- (void)dealloc;
- (void)start;
- (void)invalidate;
- (BOOL)isValid;
- (void)enqueueEvent:(id)arg1;
- (void)_processQueue;

@end
