/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "MRTransition-Protocol.h"

@interface MROrigamiFold : NSObject <MRTransition>
{
    unsigned char mDirection;
    unsigned char mNumberOfFoldings;
    float mPixelUnit;
}

- (id)initWithAttributes:(id)arg1;
- (void)renderAtTime:(double)arg1 andSize:(struct CGSize)arg2 withSourcePatchwork:(id)arg3 andTargetPatchwork:(id)arg4;
@property float pixelUnit; // @synthesize pixelUnit=mPixelUnit;

@end

