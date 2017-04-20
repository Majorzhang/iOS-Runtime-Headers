/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

@interface MDLVertexAttributeData : NSObject {
    unsigned int  _bufferSize;
    void * _dataStart;
    unsigned int  _format;
    MDLMeshBufferMap * _map;
    unsigned int  _stride;
}

@property (nonatomic) unsigned int bufferSize;
@property (nonatomic) void*dataStart;
@property (nonatomic) unsigned int format;
@property (nonatomic, retain) MDLMeshBufferMap *map;
@property (nonatomic) unsigned int stride;

- (void).cxx_destruct;
- (unsigned int)bufferSize;
- (void*)dataStart;
- (unsigned int)format;
- (id)init;
- (id)map;
- (void)setBufferSize:(unsigned int)arg1;
- (void)setDataStart:(void*)arg1;
- (void)setFormat:(unsigned int)arg1;
- (void)setMap:(id)arg1;
- (void)setStride:(unsigned int)arg1;
- (void)setbufferSize:(unsigned int)arg1;
- (unsigned int)stride;

@end