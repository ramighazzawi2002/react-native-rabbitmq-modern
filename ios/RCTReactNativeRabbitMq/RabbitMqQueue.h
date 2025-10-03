#import <React/RCTBridgeModule.h>

//#import <RMQClient/RMQClient.h>
#import <react_native_rabbitmq_modern/RMQClient.h>
#import "EventEmitter.h"

@interface RabbitMqQueue : NSObject <RCTBridgeModule>

    - (nonnull id) initWithConfig:(nonnull NSDictionary *)config
                          channel:(nonnull id<RMQChannel>)channel;

    - (void) bind:(nonnull RMQExchange *)exchange routing_key:(NSString *)routing_key;
    - (void) unbind:(nonnull RMQExchange *)exchange routing_key:(NSString *)routing_key;
    - (void) delete;
    - (void) ack: (NSNumber *)deliveryTag;
    - (void) cancelConsumer;
@end
