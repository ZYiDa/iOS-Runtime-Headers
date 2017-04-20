/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

@interface PMLModelDescriptor : NSObject <DictionarySerializableProtocol> {
    PMLModelLearningRates * _learningRates;
    NSString * _name;
    _PASTuple2 * _shape;
    NSNumber * _version;
    PMLModelWeights * _weights;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (retain) PMLModelLearningRates *learningRates;
@property (retain) NSString *name;
@property (retain) _PASTuple2 *shape;
@property (readonly) Class superclass;
@property (retain) NSNumber *version;
@property (retain) PMLModelWeights *weights;

+ (id)fromDictionary:(id)arg1;

- (void).cxx_destruct;
- (id)initFromDictionary:(id)arg1;
- (id)learningRates;
- (id)name;
- (void)setLearningRates:(id)arg1;
- (void)setName:(id)arg1;
- (void)setShape:(id)arg1;
- (void)setVersion:(id)arg1;
- (void)setWeights:(id)arg1;
- (id)shape;
- (id)toDictionary;
- (id)version;
- (id)weights;

@end