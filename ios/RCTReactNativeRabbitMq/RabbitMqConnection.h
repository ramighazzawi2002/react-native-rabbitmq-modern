#import <React/RCTBridgeModule.h>

#import <react_native_rabbitmq_modern/RMQClient.h>
#import <react_native_rabbitmq_modern/RMQChannel.h>

#import "RabbitMqQueue.h"
#import "RabbitMqDelegateLogger.h"
#import "EventEmitter.h"

@interface RabbitMqConnection : NSObject <RCTBridgeModule>

@end
