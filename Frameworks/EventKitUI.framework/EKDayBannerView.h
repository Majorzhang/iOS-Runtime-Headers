/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class EKDayBannerNameView, CalendarArrowButton;



@interface EKDayBannerView : UIView 
{
    CalendarArrowButton *_leftArrow;
    CalendarArrowButton *_rightArrow;
    EKDayBannerNameView *_nameView;
    id _delegate;
}

@property BOOL showsArrows;
@property id delegate;

+ (float)defaultHeight;

- (void)setDay:(struct { NSInteger x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isTracking;
- (void)layoutSubviews;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (BOOL)showsArrows;
- (void)invalidateForDayChange;
- (void)setShowsArrows:(BOOL)arg1;
- (void)calendarArrowButtonActivated:(id)arg1 forRepeat:(BOOL)arg2;

@end