//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SQLiteEntity.h"

@interface PaymentApplication : SQLiteEntity
{
}

+ (id)_propertySettersForPaymentApplication;
+ (id)_predicateForPass:(id)arg1;
+ (id)_predicateForPassPID:(long long)arg1;
+ (id)_predicateForApplicationIdentifier:(id)arg1 secureElementIdentifier:(id)arg2;
+ (id)predicateForNotificationService:(id)arg1;
+ (id)predicateForSecureElementIdentifier:(id)arg1;
+ (id)predicateForPassWithUniqueIdentifier:(id)arg1;
+ (id)predicateForDPANIdentifier:(id)arg1;
+ (void)deleteEntitiesForPass:(id)arg1 inDatabase:(id)arg2;
+ (void)updatePaymentApplications:(id)arg1 forPass:(id)arg2 inDatabase:(id)arg3;
+ (id)_paymentApplicationsInDatabase:(id)arg1 matchingPredicate:(id)arg2;
+ (id)paymentApplicationsInDatabase:(id)arg1;
+ (id)paymentApplicationsInDatabase:(id)arg1 forNotificationService:(id)arg2;
+ (id)paymentApplicationsInDatabase:(id)arg1 forSecureElementIdentifier:(id)arg2;
+ (id)paymentApplicationsInDatabase:(id)arg1 forPassPID:(unsigned long long)arg2;
+ (id)paymentApplicationsInDatabase:(id)arg1 forPass:(id)arg2;
+ (id)anyInDatabase:(id)arg1 withApplicationIdentifier:(id)arg2 secureElementIdentifier:(id)arg3;
+ (id)joinClauseForProperty:(id)arg1;
+ (id)associationPropertyForEntityClass:(Class)arg1;
+ (id)databaseTable;
- (void)updateWithPaymentApplication:(id)arg1;
- (id)paymentApplication;
- (id)initWithPaymentApplication:(id)arg1 pass:(id)arg2 inDatabase:(id)arg3;

@end

