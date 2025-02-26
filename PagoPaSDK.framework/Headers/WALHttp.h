// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from network-interfaces.djinni

#import "WALHttpAction.h"
#import <Foundation/Foundation.h>
@class WALHttpCallback;


@protocol WALHttp

- (void)request:(WALHttpAction)httpAction
            url:(nonnull NSString *)url
     parameters:(nullable NSDictionary<NSString *, NSString *> *)parameters
        headers:(nonnull NSDictionary<NSString *, NSString *> *)headers
           body:(nonnull NSString *)body
       callback:(nullable WALHttpCallback *)callback;

@end
