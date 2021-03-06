/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary;

@interface SCROEvent : NSObject
{
    int _handlerType;
    NSMutableArray *_callbacks;
    NSMutableDictionary *_setDictionary;
    NSMutableDictionary *_getDictionary;
    NSMutableArray *_actions;
    BOOL _readOnly;
}

+ (id)brailleEvent;
- (id)initForHandlerType:(int)arg1;
- (void)dealloc;
- (int)handlerType;
- (void)requestRegisterCallbackForKey:(int)arg1;
- (void)requestSetValue:(id)arg1 forKey:(int)arg2;
- (void)requestValueForKey:(int)arg1;
- (void)requestPerformActionForKey:(int)arg1;
- (id)claimValueForKey:(int)arg1;
- (void)setMainDictionary:(id)arg1;
- (id)mainDictionary;
- (void)setClaimDictionary:(id)arg1;
- (id)claimDictionary;
- (void)performWithHandler:(id)arg1 trusted:(BOOL)arg2;

@end

