//
//  _DCTCoreDataStack.h
//  DCTCoreDataStack
//
//  Created by Daniel Tull on 15/12/2012.
//  Copyright (c) 2012 Daniel Tull. All rights reserved.
//

#import "DCTCoreDataStack.h"

@interface DCTCoreDataStack (Private)

@property (nonatomic, readonly) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (nonatomic, readonly) NSManagedObjectModel *managedObjectModel;

- (void)_loadManagedObjectContext;
- (void)_loadManagedObjectModel;
- (void)_loadPersistentStoreCoordinator;
- (void)_loadPersistentStore;

- (void)_setupExcludeFromBackupFlag;

+ (NSURL *)_applicationDocumentsDirectory;

#ifdef TARGET_OS_IPHONE
- (void)_applicationDidEnterBackgroundNotification:(NSNotification *)notification;
- (void)_applicationWillTerminateNotification:(NSNotification *)notification;
#endif

@end