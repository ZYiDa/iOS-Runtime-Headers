/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPInterAssetAnalyzer : NSObject

+ (BOOL)canUseLastFrameOfAsset:(id)arg1 withResources:(id)arg2;
+ (struct CGSize { float x1; float x2; })thumbnailSizeForAsset:(id)arg1 withResources:(id)arg2;

- (long)distanceFromAsset:(id)arg1 toAsset:(id)arg2 distance:(float*)arg3;
- (long)distanceFromFeatureArray:(id)arg1 toFeatureArray:(id)arg2 distance:(float*)arg3;
- (long)generateFeatureForAsset:(id)arg1 withResources:(id)arg2 lastFrame:(BOOL)arg3 feature:(id*)arg4;
- (long)generateFeatureLastFrame:(id)arg1 feature:(id*)arg2;
- (struct __CVBuffer { }*)getThumbnailForAsset:(id)arg1 withResouces:(id)arg2;
- (id)init;

@end
