//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSLayoutConstraint.h"

@class NSString;

@interface NSLayoutConstraint (IBAutolayoutFrameworkSupport)
+ (id)ib_constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 symbolicConstant:(id)arg7;
@property(readonly) double effectiveValidConstant;
- (BOOL)ib_hasValidSymbolicConstant;
@property(readonly) BOOL ib_isRedundant;
@property(readonly) double ib_knownMagnitudeOfAnyRoundingAdjustment;
@property(readonly) BOOL ib_mayRequireRoundingAdjustment;
@property(copy) NSString *ib_symbolicConstant;
@end
