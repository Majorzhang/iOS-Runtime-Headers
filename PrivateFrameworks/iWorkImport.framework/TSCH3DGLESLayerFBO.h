/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DGLESLayerFBO : TSCH3DGLFBO {
    boolmDestroyed;
    boolmProtected;
}

- (bool)activateInsideSession:(id)arg1;
- (void)bindColorbufferInSession:(id)arg1;
- (void)dealloc;
- (void)destroyResourcesInSession:(id)arg1;
- (id)initFromContext:(id)arg1 size:(struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; }*)arg2 attributes:(const struct FramebufferAttributes { int x1; long long x2; int x3; int x4; int x5; boolx6; boolx7; }*)arg3 colorAllocator:(id)arg4 depthAllocator:(id)arg5 resource:(id)arg6;
- (void)unprotectInSession:(id)arg1 clearOnFailProtection:(bool)arg2;
- (bool)validForSession:(id)arg1;

@end