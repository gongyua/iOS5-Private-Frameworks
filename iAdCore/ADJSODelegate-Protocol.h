/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@protocol ADJSODelegate
- (int)interfaceOrientation;
- (struct CGRect)bannerRectOnScreen;
- (struct CGPoint)tapLocation;
- (id)bannerParameters;
- (id)humanReadableNameForContent;
- (void)logForPrivilegedClients:(id)arg1;
- (void)dispatchDOMEventWithName:(id)arg1 canBubble:(BOOL)arg2 cancelable:(BOOL)arg3;
- (void)scriptObjectContentSignalsReady:(id)arg1;
- (id)scriptObject:(id)arg1 requestsURLForString:(id)arg2 allowOtherDomains:(BOOL)arg3 error:(id *)arg4;
- (void)javaScriptObjectDidFinishModalActivity:(id)arg1;
- (void)scriptObject:(id)arg1 requestsDismissPopoverViewControllerAnimated:(BOOL)arg2;
- (void)scriptObject:(id)arg1 requestsPresentPopoverViewController:(id)arg2 fromRect:(struct CGRect)arg3 animated:(BOOL)arg4;
- (void)scriptObject:(id)arg1 requestsDismissModalViewControllerAnimated:(BOOL)arg2;
- (void)scriptObject:(id)arg1 requestsPresentModalViewController:(id)arg2 animated:(BOOL)arg3;
- (BOOL)javaScriptObjectShouldBeginModalActivity:(id)arg1;
- (struct OpaqueJSContext *)javaScriptContextRef;
- (void)scriptObjectDidTakeScreenShot:(id)arg1;
- (void)scriptObjectWillTakeScreenShot:(id)arg1;
- (void)scriptObjectRequestsGeolocation:(id)arg1;
- (void)privilegedAdWantsToDismiss;
- (void)scriptObject:(id)arg1 didChangeSupportedInterfaceOrientations:(unsigned int)arg2;
- (void)scriptObject:(id)arg1 didReportSystemEventWithType:(int)arg2;
- (void)scriptObject:(id)arg1 didReportClickEventWithContext:(id)arg2;
- (void)scriptObject:(id)arg1 didCreateView:(id)arg2;
- (id)webViewForScriptObject:(id)arg1;
- (id)scriptObjectValueForQToken:(id)arg1;
@end
