/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <AirPortAssistant/AssistantUIViewController.h>

@interface AssistantUIViewController (private)
- (void)keyboardReturnKeySetEnabled:(BOOL)arg1;
- (id)radioNameFromBaseStation:(id)arg1;
- (void)replaceSubviewsInView:(id)arg1 newSubviews:(id)arg2 layoutOptions:(int)arg3 withAnimation:(BOOL)arg4;
- (void)handleCancelRequest:(BOOL)arg1;
- (void)setupCompleteShowPasswords:(BOOL)arg1;
- (void)showUIForSetupStatus;
- (void)continueWithSwapCabling;
- (void)continueWithPPPoESettings;
- (void)skipWANPort;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)confirmSkipWANPort;
- (void)pushViewController:(id)arg1 animated:(BOOL)arg2;
- (void)popToRootViewControllerAnimated:(BOOL)arg1;
- (void)startSetup:(id)arg1;
- (id)newStepByStepControllerForStep:(int)arg1;
@end

