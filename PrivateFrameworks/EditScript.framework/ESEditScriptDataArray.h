/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/EditScript.framework/EditScript
 */

@interface ESEditScriptDataArray : NSObject <ESEditScriptData> {
    NSString * _cachedStringValue;
    NSArray * _data;
}

@property (nonatomic, retain) NSString *cachedStringValue;
@property (nonatomic, retain) NSArray *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)EditScriptDataWithArray:(id)arg1;
+ (id)EditScriptDataWithString:(id)arg1 chunkSize:(int)arg2;

- (void).cxx_destruct;
- (id)cachedStringValue;
- (int)characterIndexForItem:(int)arg1;
- (id)data;
- (id)description;
- (int)indexOfFirstDifferenceWithOtherData:(id)arg1 shouldReverseIterate:(BOOL)arg2 fallsOnWordBoundary:(BOOL*)arg3;
- (id)initWithArray:(id)arg1;
- (id)initWithString:(id)arg1 chunkSize:(int)arg2;
- (int)length;
- (int)lengthOfItem:(int)arg1;
- (void)setCachedStringValue:(id)arg1;
- (void)setData:(id)arg1;
- (id)stringAtIndex:(int)arg1;
- (id)stringValue;

@end