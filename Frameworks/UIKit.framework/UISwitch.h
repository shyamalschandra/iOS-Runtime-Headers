/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */



@interface UISwitch : UIControl <NSCoding>
{
    id _control;
}

@property(getter=_onTintColor,retain) UIColor *onTintColor; /* unknown property attribute: S_setOnTintColor: */
@property(getter=_onColor,retain) UIColor *onColor; /* unknown property attribute: S_setOnColor: */
@property(getter=isOn) BOOL on;

+ (void)_initializeSafeCategory;

- (unsigned long long)defaultAccessibilityTraits;
- (BOOL)isAccessibilityElementByDefault;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (void)_setupMask;
- (id)_customColoredOnButtonImage;
- (id)_imageForState:(NSInteger)arg1;
- (void)_setThumbPosition:(float)arg1;
- (void)_animateToOn:(BOOL)arg1 withDuration:(float)arg2 sendAction:(BOOL)arg3;
- (void)_handlePan:(id)arg1;
- (void)_handleTap:(id)arg1;
- (void)_setPressed:(BOOL)arg1;
- (BOOL)isOn;
- (void)setOn:(BOOL)arg1;
- (void)setOn:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_onAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)_setOnColor:(id)arg1;
- (id)_onColor;
- (void)_setOnTintColor:(id)arg1;
- (id)_onTintColor;
- (void)_resetImages;
- (void)setAlternateColors:(BOOL)arg1;
- (void)_updateImage;
- (void)setEnabled:(BOOL)arg1;
- (id)_scriptingInfo;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)_commonInit;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithCoder:(id)arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (void)setAlpha:(float)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (id)_accessibilityHitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;

@end