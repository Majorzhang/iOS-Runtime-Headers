/* Generated by RuntimeBrowser.
 */

@protocol SXVideoQueue <SXVideoQueueDiffing, NFCopying>

@required

- (<SXVideo> *)firstVideo;
- (unsigned long long)indexOfVideo:(id <SXVideo>)arg1;
- (<SXVideo> *)lastVideo;
- (<SXVideo> *)nextVideo;
- (<SXVideo> *)nextVideoOfType:(unsigned long long)arg1;
- (unsigned long long)numberOfVideos;
- (<SXVideo> *)previousVideo;
- (<SXVideo> *)previousVideoOfType:(unsigned long long)arg1;
- (void)setVideo:(id <SXVideo>)arg1;
- (<SXVideo> *)video;
- (<SXVideo> *)videoAfterVideo:(id <SXVideo>)arg1;
- (<SXVideo> *)videoAtIndex:(unsigned long long)arg1;
- (<SXVideo> *)videoBeforeVideo:(id <SXVideo>)arg1;
- (NSOrderedSet *)videos;

@end