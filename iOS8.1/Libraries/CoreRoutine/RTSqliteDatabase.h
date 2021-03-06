/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>, NSString;

@interface RTSqliteDatabase : NSObject
{
    _Bool _accessible;
    int _flags;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_path;
    NSString *_journalPath;
    struct sqlite3 *_db;
    unsigned long long _encryptionClass;
    NSMutableArray *_pendingInvocations;
}

+ (id)countTableColumns;
+ (id)tableInfoTableColumns;
+ (id)databaseForEncryptionClass:(unsigned long long)arg1;
@property(retain, nonatomic) NSMutableArray *pendingInvocations; // @synthesize pendingInvocations=_pendingInvocations;
@property(nonatomic) unsigned long long encryptionClass; // @synthesize encryptionClass=_encryptionClass;
@property(nonatomic) int flags; // @synthesize flags=_flags;
@property(nonatomic) struct sqlite3 *db; // @synthesize db=_db;
@property(retain, nonatomic) NSString *journalPath; // @synthesize journalPath=_journalPath;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(nonatomic) _Bool accessible; // @synthesize accessible=_accessible;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (unsigned long long)getNumberOfRowsModifed;
- (unsigned long long)getNumberOfRowsInTableWithName:(id)arg1;
- (void)logReturnCode:(int)arg1 ofStatement:(struct sqlite3_stmt *)arg2;
- (void)executeAndFinalizeStatement:(struct sqlite3_stmt *)arg1;
- (void)finalizeStatement:(struct sqlite3_stmt *)arg1;
- (void)executeStatement:(struct sqlite3_stmt *)arg1;
- (void)dropCountTableForTableWithName:(id)arg1;
- (void)dropCountTriggersForTableWithName:(id)arg1;
- (id)getSqlStatementForType:(id)arg1 withName:(id)arg2;
- (void)createCountTriggersForTableWithName:(id)arg1;
- (void)createCountTableForTableWithName:(id)arg1;
- (_Bool)schemaDiffersWithTableName:(id)arg1 andColumns:(id)arg2;
- (void)dropTableWithName:(id)arg1;
- (void)_dropTableWithName:(id)arg1;
- (void)createRowInInfoTableWithTableName:(id)arg1;
- (void)deleteRowFromInfoTableWithTableName:(id)arg1;
- (struct sqlite3_stmt *)prepareInsertStatementForTable:(id)arg1 withColumns:(id)arg2;
- (_Bool)bindIndex:(int)arg1 ofStatement:(struct sqlite3_stmt *)arg2 withString:(id)arg3;
- (_Bool)bindIndex:(int)arg1 ofStatement:(struct sqlite3_stmt *)arg2 withDouble:(double)arg3;
- (_Bool)bindIndex:(int)arg1 ofStatement:(struct sqlite3_stmt *)arg2 withInt:(int)arg3;
- (struct sqlite3_stmt *)prepareDeleteStatementFromTable:(id)arg1 forKey:(id)arg2;
- (_Bool)tableExistsWithName:(id)arg1;
- (struct sqlite3_stmt *)prepareStatementFromString:(id)arg1;
- (void)handleSqlError:(int)arg1;
- (_Bool)isOpen;
- (void)close;
- (_Bool)configure;
- (void)configureTrace;
- (void)configureProfile;
- (void)configureLimit;
- (void)setPragma:(id)arg1 toInteger:(long long)arg2;
- (_Bool)open;
- (void)onEncryptedDataAvailabilityNotification:(id)arg1;
- (void)createTableWithName:(id)arg1 andColumns:(id)arg2;
- (void)_createTableWithName:(id)arg1 andColumns:(id)arg2;
- (void)addInvocation:(id)arg1;
- (void)dealloc;
- (id)initWithEncryptionClass:(unsigned long long)arg1;

@end

