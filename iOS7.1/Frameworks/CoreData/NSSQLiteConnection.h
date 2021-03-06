//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreData/NSSQLConnection.h>

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSSQLEntity, NSSQLiteStatement, NSString;

__attribute__((visibility("hidden")))
@interface NSSQLiteConnection : NSSQLConnection
{
    struct sqlite3 *_db;
    struct sqlite3_stmt *_vmstatement;
    int _rowsProcessedCount;
    unsigned int _lastEntityKey;
    NSSQLEntity *_finalEntity;
    NSSQLEntity *_lastEntity;
    struct sqlite3_stmt *_fetchPKStatement;
    struct sqlite3_stmt *_updatePKStatement;
    NSSQLiteStatement *_beginStatement;
    NSSQLiteStatement *_commitStatement;
    NSSQLiteStatement *_rollbackStatement;
    NSMutableSet *_vmCachedStatements;
    NSMutableDictionary *_pragmaSettings;
    struct __CFDictionary *_cachedEntityUpdateStatements;
    double _timeOutOption;
    double _timeOutIncrement;
    void *_extraBuffersForRegisteredFunctions[5];
    NSString *_dbPathRegisteredWithBackupd;
    long long _vacuumTracker;
    NSMutableArray *_temporaryTables;
    struct __sqliteConnectionFlags {
        unsigned int _readyToBind:1;
        unsigned int _fetchInProgress:1;
        unsigned int _fileSystemType:2;
        unsigned int _proxyLocking:1;
        unsigned int _vacuumSetupNeeded:1;
        unsigned int _usingWAL:1;
        unsigned int _disallowReconnect:1;
        unsigned int _reserved:24;
    } _sqliteConnectionFlags;
    unsigned long long _debugInode;
}

+ (BOOL)_destroyPersistentStoreAtURL:(id)arg1 options:(id)arg2 error:(id *)arg3;
+ (BOOL)_replacePersistentStoreAtURL:(id)arg1 destinationOptions:(id)arg2 withPersistentStoreFromURL:(id)arg3 sourceOptions:(id)arg4 error:(id *)arg5;
+ (const char *)_databaseOpenURLStringForURL:(id)arg1;
+ (int)readMagicWordFromPath:(const char *)arg1;
+ (int)openAtPath:(const char *)arg1 handle:(struct sqlite3 **)arg2 flags:(int)arg3 module:(const char *)arg4;
+ (void)__INode_Changed_AllThatIsLeftToUsIsHonor__;
+ (void)initialize;
+ (void)_setDebugFlags:(int)arg1;
- (void)dropUbiquityTables;
- (id)ubiquityTableValueForKey:(id)arg1;
- (id)ubiquityTableKeysAndValues;
- (void)setUbiquityTableValue:(id)arg1 forKey:(id)arg2;
- (id)createMapOfEntityNameToPKMaxForEntities:(id)arg1;
- (id)createMapOfEntityNameToPKMaxForEntitiesFromUBRangeTable:(id)arg1;
- (id)createMapOfEntityNameToPKMaxForEntitiesFromPKTable:(id)arg1;
- (id)allPeerRanges;
- (void)addPeerRangeForPeerID:(id)arg1 entityName:(id)arg2 rangeStart:(id)arg3 rangeEnd:(id)arg4 peerRangeStart:(id)arg5 peerRangeEnd:(id)arg6;
- (void)addPeerRange:(id)arg1;
- (void)updateUbiquityKnowledgeForPeerWithID:(id)arg1 andTransactionNumber:(id)arg2;
- (void)updateUbiquityKnowledgeVector:(id)arg1;
- (id)fetchUbiquityKnowledgeVector;
- (BOOL)isLocalFS;
- (void)_setupVacuumIfNecessary;
- (long long)_getCurrentAutoVacuumValue;
- (void)_performPostSaveTasks;
- (void **)_buffersForRegisteredFunctions;
- (void)didCreateSchema;
- (void)willCreateSchema;
- (void)_configurePageSize;
- (void)_configureAutoVacuum;
- (BOOL)hasPrimaryKeyTable;
- (long long)generatePrimaryKeysForEntity:(id)arg1 batch:(unsigned int)arg2;
- (void)endPrimaryKeyGeneration;
- (void)prepareForPrimaryKeyGeneration;
- (void)_registerExtraFunctions;
- (BOOL)hasMetadataTable;
- (BOOL)_hasTableWithName:(id)arg1;
- (id)newFetchUUIDSForSubentitiesRootedAt:(id)arg1;
- (id)fetchTableCreationSQL;
- (id)fetchTableNames;
- (BOOL)performIntegrityCheck;
- (struct sqlite3_stmt *)_vmstatement;
- (void)endFetch;
- (void)setExclusiveLockingMode:(BOOL)arg1;
- (int)fetchResultSet:(void *)arg1 usingFetchPlan:(id)arg2;
- (void)handleCorruptedDB:(id)arg1;
- (void)cacheCurrentDBStatementOn:(id)arg1;
- (id)newFetchedArray;
- (id)_newValueForColumn:(id)arg1 atIndex:(unsigned int)arg2 inStatement:(struct sqlite3_stmt *)arg3;
- (id)describeResults;
- (void)_clearCachedStatements;
- (void)_clearOtherStatements;
- (void)releaseSQLStatement;
- (void)resetSQLStatement;
- (void)execute;
- (void)bindTempTableForBindIntarray:(id)arg1;
- (void)prepareSQLStatement:(id)arg1;
- (void)deleteRow:(id)arg1;
- (void)updateRow:(id)arg1;
- (id)cachedUpdateStatementForEntity:(id)arg1 andDeltasMask:(struct __CFBitVector *)arg2;
- (void)cacheUpdateStatement:(id)arg1 forEntity:(id)arg2 andDeltasMask:(struct __CFBitVector *)arg3;
- (void)deleteCorrelation:(id)arg1;
- (void)updateCorrelation:(id)arg1;
- (void)insertCorrelation:(id)arg1;
- (void)insertRow:(id)arg1;
- (void)_bindVariablesWithDeletedRow:(id)arg1;
- (void)_clearBindVariablesForUpdateStatement:(id)arg1 forDeltasMask:(struct __CFBitVector *)arg2;
- (void)_bindVariablesWithUpdatedRow:(id)arg1 andOriginalRow:(id)arg2 forDeltasMask:(struct __CFBitVector *)arg3;
- (void)_clearBindVariablesForInsertedRow;
- (void)_bindVariablesWithInsertedRow:(id)arg1;
- (int)_rowsChangedByLastExecute;
- (BOOL)isOpen;
- (void)rollbackTransaction;
- (void)commitTransaction;
- (void)beginTransaction;
- (void)disconnect;
- (void)_forceDisconnectOnError;
- (void)_endPowerAssertionWithAssert:(unsigned int)arg1 andApp:(id)arg2;
- (id)_beginPowerAssertionWithAssert:(unsigned int *)arg1;
- (void)_finalizeStatement;
- (void)_clearTransactionCaches;
- (void)connect;
- (void)_configurePragmaOptions:(int)arg1 createdSchema:(BOOL)arg2;
- (void)_configureUbiquityMetadataTable;
- (void)_configureIntegrityCheck;
- (void)_configureSynchronousMode;
- (void)_executeSQLString:(id)arg1;
- (BOOL)databaseIsEmpty;
- (BOOL)canConnect;
- (long long)fetchMaxPrimaryKeyForEntity:(id)arg1;
- (long long)_fetchMaxPrimaryKeyForEntity:(id)arg1;
- (struct __CFArray *)rawIntegerRowsForSQL:(id)arg1;
- (void)_ensureNoTransactionOpen;
- (void)_ensureNoFetchInProgress;
- (void)_ensureNoStatementPrepared;
- (void)_ensureDatabaseOpen;
- (BOOL)isFetchInProgress;
- (id)_adapter;
- (void)finalize;
- (void)dealloc;
- (id)initWithAdapter:(id)arg1;

@end

