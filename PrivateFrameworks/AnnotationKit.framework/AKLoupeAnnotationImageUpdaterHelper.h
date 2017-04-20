/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKLoupeAnnotationImageUpdaterHelper : NSObject

+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })magnifiedRectForUnmagnifiedRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 ofLoupeAnnotation:(id)arg2 onPageController:(id)arg3;
+ (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })transformForFastPathLayer:(id)arg1 ofLoupeAnnotation:(id)arg2 onPageController:(id)arg3;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })unmagnifiedRectForMagnifiedRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 ofLoupeAnnotation:(id)arg2;
+ (void)updateFastPathImageOnLoupeAnnotation:(id)arg1 withFastPathLayer:(id)arg2 onPageController:(id)arg3;
+ (void)updateModelImageOnLoupeAnnotation:(id)arg1 onPageController:(id)arg2;

@end