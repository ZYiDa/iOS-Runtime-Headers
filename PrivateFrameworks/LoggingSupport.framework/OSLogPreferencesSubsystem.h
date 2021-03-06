/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
 */

@interface OSLogPreferencesSubsystem : NSObject {
    NSDictionary * _internalPrefs;
    NSString * _internalPrefsFile;
    NSString * _name;
    NSMutableDictionary * _prefs;
    NSString * _prefsFile;
    NSDictionary * _systemPrefs;
    NSString * _systemPrefsFile;
}

@property (nonatomic, readonly) NSArray *categories;
@property (nonatomic, readonly) int effectiveEnabledLevel;
@property (nonatomic, readonly) int effectivePersistedLevel;
@property (nonatomic) int enabledLevel;
@property (nonatomic, readonly) BOOL isLocked;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic) int persistedLevel;

- (void).cxx_destruct;
- (int)_defaultEnabledLevelForCategory:(id)arg1;
- (int)_defaultPersistedLevelForCategory:(id)arg1;
- (int)_enabledLevelForCategory:(id)arg1;
- (id)_levelPrefsForCategory:(id)arg1;
- (int)_persistedLevelForCategory:(id)arg1;
- (void)_resetCategory:(id)arg1;
- (void)_setEnabledLevel:(int)arg1 forCategory:(id)arg2;
- (void)_setPersistedLevel:(int)arg1 forCategory:(id)arg2;
- (id)categories;
- (int)defaultEnabledLevel;
- (int)defaultPersistedLevel;
- (int)effectiveEnabledLevel;
- (int)effectivePersistedLevel;
- (int)enabledLevel;
- (id)initWithName:(id)arg1;
- (BOOL)isLocked;
- (id)name;
- (int)persistedLevel;
- (void)reset;
- (void)resetAll;
- (void)setEnabledLevel:(int)arg1;
- (void)setPersistedLevel:(int)arg1;

@end
