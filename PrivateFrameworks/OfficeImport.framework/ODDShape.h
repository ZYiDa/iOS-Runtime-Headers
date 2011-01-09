/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableArray;



@interface ODDShape : ODDLayoutObject 
{
    NSInteger mType;
    NSInteger mPresetType;
    NSMutableArray *mAdjustments;
}


- (NSInteger)presetType;
- (void)setPresetType:(NSInteger)arg1;
- (id)adjustments;
- (void)addAdjustment:(id)arg1;
- (NSInteger)type;
- (void)setType:(NSInteger)arg1;
- (id)init;
- (void)dealloc;

@end