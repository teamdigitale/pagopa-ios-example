// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from ppa_select_bank_payment_method.djinni

#import "WALPpaPaymentMethodVm.h"
#import <Foundation/Foundation.h>
@class WALPpaSelectBankPaymentMethodPresenter;


@protocol WALPpaSelectBankPaymentMethodView

- (void)setAvailablePaymentMethods:(nonnull NSArray<WALPpaPaymentMethodVm *> *)availableBanks;

- (void)setPresenter:(nullable WALPpaSelectBankPaymentMethodPresenter *)presenter;

@end
