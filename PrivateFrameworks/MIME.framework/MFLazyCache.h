/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFLazyCache : NSObject <NSCacheDelegate> {
    MFWeakReferenceHolder * _delegate;
    struct { 
        unsigned int delegateRespondsToLazyCacheWillEvictObject : 1; 
    }  _flags;
    NSRecursiveLock * _lock;
    NSCache * _storage;
}

@property (readonly, copy) NSString *debugDescription;
@property <MFLazyCacheDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void)_exchangeOriginalObject:(id)arg1 forKey:(id)arg2 withObject:(id)arg3;
- (void)cache:(id)arg1 willEvictObject:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initWithCountLimit:(unsigned int)arg1;
- (id)objectForKey:(id)arg1 generator:(id /* block */)arg2;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)storedObjectForKey:(id)arg1;
- (int)waiterCountForKey:(id)arg1;

@end