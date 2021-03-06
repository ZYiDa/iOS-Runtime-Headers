/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface _NSCloudSharingDescriptor : NSObject <NSSecureCoding> {
    BOOL  _invitationsSentViaThirdPartyService;
    int  _numberOfInvitations;
    int  _operation;
    BOOL  _publicShare;
    NSString * _sharedContentType;
}

@property BOOL invitationsSentViaThirdPartyService;
@property int numberOfInvitations;
@property int operation;
@property BOOL publicShare;
@property (copy) NSString *sharedContentType;

+ (BOOL)supportsSecureCoding;

- (id)_variantSubstrings;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)invitationsSentViaThirdPartyService;
- (int)numberOfInvitations;
- (int)operation;
- (BOOL)publicShare;
- (void)setInvitationsSentViaThirdPartyService:(BOOL)arg1;
- (void)setNumberOfInvitations:(int)arg1;
- (void)setOperation:(int)arg1;
- (void)setPublicShare:(BOOL)arg1;
- (void)setSharedContentType:(id)arg1;
- (id)sharedContentType;

@end
