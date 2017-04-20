/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBKeyViewAnimator : NSObject <CAAnimationDelegate> {
    BOOL  _disabled;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disabled;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } primaryGlyphNormalizedExitRect;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } secondaryGlyphNormalizedExitRect;
@property (nonatomic, readonly) BOOL shouldPurgeKeyViews;
@property (readonly) Class superclass;

+ (id)normalizedAnimationWithKeyPath:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3;
+ (id)normalizedUnwindAnimationWithKeyPath:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3 offset:(float)arg4;
+ (id)normalizedUnwindAnimationWithKeyPath:(id)arg1 originallyFromValue:(id)arg2 toValue:(id)arg3 offset:(double)arg4;
+ (id)normalizedUnwindOpacityAnimationWithKeyPath:(id)arg1 originallyFromValue:(id)arg2 toValue:(id)arg3 offset:(double)arg4;

- (void)_fadeInKeyView:(id)arg1 duration:(float)arg2 completion:(id /* block */)arg3;
- (void)_fadeOutKeyView:(id)arg1 duration:(float)arg2 completion:(id /* block */)arg3;
- (Class)_keyViewClassForSpecialtyKey:(id)arg1;
- (float)delayedDeactivationTimeForKeyView:(id)arg1;
- (BOOL)disabled;
- (void)endTransitionForKeyView:(id)arg1;
- (Class)keyViewClassForKey:(id)arg1 traits:(id)arg2;
- (id)keycapAlternateDualStringTransform:(id)arg1;
- (id)keycapAlternateTransform;
- (id)keycapLeftSelectLeftTransform;
- (id)keycapLeftSelectPrimaryTransform;
- (id)keycapLeftSelectRightTransform;
- (id)keycapLeftTransform;
- (id)keycapMeshTransformFromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 toRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (id)keycapNullTransform;
- (id)keycapPrimaryDualStringTransform:(id)arg1;
- (id)keycapPrimaryExitTransform;
- (id)keycapPrimaryTransform;
- (id)keycapRightSelectLeftTransform;
- (id)keycapRightSelectPrimaryTransform;
- (id)keycapRightSelectRightTransform;
- (id)keycapRightTransform;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })primaryGlyphNormalizedExitRect;
- (void)reset;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })secondaryGlyphNormalizedExitRect;
- (void)setDisabled:(BOOL)arg1;
- (BOOL)shouldAssertCurrentKeyState:(id)arg1;
- (BOOL)shouldPurgeKeyViews;
- (BOOL)shouldTransitionKeyView:(id)arg1 fromState:(int)arg2 toState:(int)arg3;
- (void)transitionEndedForKeyView:(id)arg1 alternateCount:(unsigned int)arg2;
- (void)transitionKeyView:(id)arg1 fromState:(int)arg2 toState:(int)arg3 completion:(id /* block */)arg4;
- (void)transitionOutKeyView:(id)arg1 fromState:(int)arg2 toState:(int)arg3 completion:(id /* block */)arg4;
- (void)transitionStartedForKeyView:(id)arg1 alternateCount:(unsigned int)arg2 toLeft:(BOOL)arg3;
- (void)updateTransitionForKeyView:(id)arg1 normalizedDragSize:(struct CGSize { float x1; float x2; })arg2;

@end