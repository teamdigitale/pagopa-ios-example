// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from ppa_password_strength_vm.djinni

#import <Foundation/Foundation.h>

@interface WALPpaPasswordStrengthVm : NSObject
- (nonnull instancetype)initWithStrength:(float)strength;
+ (nonnull instancetype)ppaPasswordStrengthVmWithStrength:(float)strength;

/** a number from 0 (super-weak) to 1 (ultra-secure). 0.5 is considered the minimum for a "secure" password */
@property (nonatomic, readonly) float strength;

@end
