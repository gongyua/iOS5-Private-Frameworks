/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iLifeSlideshow/MPEffectContainer.h>

@interface MPEffectContainer (Internal)
- (void)copyStruct:(id)arg1;
- (void)copyEffects:(id)arg1;
- (void)copyFilters:(id)arg1;
- (void)copyTransition:(id)arg1;
- (void)copyAudioPlaylist:(id)arg1;
- (void)cleanup;
- (void)setContainerPlug:(id)arg1;
- (void)setContainerParallelizer:(id)arg1;
- (void)setContainerEffect:(id)arg1;
- (void)setParentLayer:(id)arg1;
- (void)setStartTime:(double)arg1;
- (BOOL)shouldBeParallelizer;
- (void)convertFromParallelizerToEffectContainer;
- (void)convertFromEffectContainerToParallelizer;
- (void)calculateDurationToSmallest:(BOOL)arg1;
- (void)recreateWithContainerPlug:(id)arg1;
- (void)setUserInfoAttribute:(id)arg1 forKey:(id)arg2;
- (id)userInfoAttributeForKey:(id)arg1;
- (void)setCGBackgroundColor:(struct CGColor *)arg1;
@end
