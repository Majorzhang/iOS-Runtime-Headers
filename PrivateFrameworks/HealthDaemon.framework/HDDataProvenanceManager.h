/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDataProvenanceManager : NSObject <HDDiagnosticObject> {
    int  _defaultsLoaded;
    NSString * _localProductType;
    NSString * _localSourceVersion;
    NSString * _localSystemBuild;
    HDDatabaseValueCache * _originProvenanceByPersistentID;
    HDDatabaseValueCache * _persistentIDsByProvenanceKey;
    HDProfile * _profile;
    NSLock * _propertyLock;
    NSNumber * _propertyLock_deviceNoneID;
    NSNumber * _propertyLock_localDeviceID;
    NSNumber * _propertyLock_localSourceID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSNumber *deviceNoneID;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSNumber *localDeviceID;
@property (nonatomic, copy) NSString *localProductType;
@property (nonatomic, readonly) NSNumber *localSourceID;
@property (nonatomic, copy) NSString *localSystemBuild;
@property (nonatomic, retain) HDDatabaseValueCache *originProvenanceByPersistentID;
@property (nonatomic, retain) HDDatabaseValueCache *persistentIDsByProvenanceKey;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_loadDefaults;
- (id)_localTimeZoneName;
- (id)_lookupOrInsertProvenance:(id)arg1 error:(id*)arg2;
- (void)checkDefaultsLoaded;
- (id)dataProvenanceDefaultsWithSyncProvenance:(long long)arg1 productType:(id)arg2 systemBuild:(id)arg3 sourceVersion:(id)arg4 timeZoneName:(id)arg5 sourceID:(id)arg6 deviceID:(id)arg7;
- (id)defaultLocalDataProvenance;
- (id)description;
- (id)deviceNoneID;
- (id)diagnosticDescription;
- (id)initWithProfile:(id)arg1;
- (id)localDataProvenanceForSourceEntity:(id)arg1 version:(id)arg2 deviceEntity:(id)arg3;
- (id)localDeviceID;
- (id)localProductType;
- (id)localSourceID;
- (id)localSystemBuild;
- (id)originProvenanceByPersistentID;
- (id)originProvenanceForPersistentID:(long long)arg1 database:(id)arg2 error:(id*)arg3;
- (id)persistentIDsByProvenanceKey;
- (id)provenanceEntityForProvenance:(id)arg1 error:(id*)arg2;
- (void)setDeviceNoneID:(id)arg1;
- (void)setLocalDeviceID:(id)arg1;
- (void)setLocalProductType:(id)arg1;
- (void)setLocalSourceID:(id)arg1;
- (void)setLocalSystemBuild:(id)arg1;
- (void)setOriginProvenanceByPersistentID:(id)arg1;
- (void)setPersistentIDsByProvenanceKey:(id)arg1;

@end