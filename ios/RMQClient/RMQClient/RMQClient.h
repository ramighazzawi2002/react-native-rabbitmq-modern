// This source code is dual-licensed under the Mozilla Public License ("MPL"),
// version 2.0 and the Apache License ("ASL"), version 2.0.
//
// The ASL v2.0:
//
// ---------------------------------------------------------------------------
// Copyright (c) 2007-2024 Broadcom. All Rights Reserved. The term “Broadcom” refers to Broadcom Inc. and/or its subsidiaries. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//    https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
// ---------------------------------------------------------------------------
//
// The MPL v2.0:
//
// ---------------------------------------------------------------------------
// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at https://mozilla.org/MPL/2.0/.
//
// Copyright (c) 2007-2022 VMware, Inc. or its affiliates.  All rights reserved.
//
// Alternatively, the contents of this file may be used under the terms
// of the Apache Standard license (the "ASL License"), in which case the
// provisions of the ASL License are applicable instead of those
// above. If you wish to allow use of your version of this file only
// under the terms of the ASL License and not to allow others to use
// your version of this file under the MPL, indicate your decision by
// deleting the provisions above and replace them with the notice and
// other provisions required by the ASL License. If you do not delete
// the provisions above, a recipient may use your version of this file
// under either the MPL or the ASL License.
// ---------------------------------------------------------------------------

#import <react_native_rabbitmq_modern/RMQConnection.h>
#import <react_native_rabbitmq_modern/RMQErrors.h>
#import <react_native_rabbitmq_modern/RMQBasicProperties.h>
#import <react_native_rabbitmq_modern/RMQBasicProperties+MergeDefaults.h>
#import <react_native_rabbitmq_modern/RMQFrame.h>
#import <react_native_rabbitmq_modern/RMQHeartbeat.h>
#import <react_native_rabbitmq_modern/RMQMethodDecoder.h>
#import <react_native_rabbitmq_modern/RMQMethodMap.h>
#import <react_native_rabbitmq_modern/RMQMethods+Convenience.h>
#import <react_native_rabbitmq_modern/RMQProtocolHeader.h>
#import <react_native_rabbitmq_modern/RMQURI.h>
#import <react_native_rabbitmq_modern/RMQAllocatedChannel.h>
#import <react_native_rabbitmq_modern/RMQConnectionDelegateLogger.h>
#import <react_native_rabbitmq_modern/RMQConnectionRecover.h>
#import <react_native_rabbitmq_modern/RMQSuspendResumeDispatcher.h>
#import <react_native_rabbitmq_modern/RMQFramesetValidator.h>
#import <react_native_rabbitmq_modern/RMQHandshaker.h>
#import <react_native_rabbitmq_modern/RMQMultipleChannelAllocator.h>
#import <react_native_rabbitmq_modern/RMQReader.h>
#import <react_native_rabbitmq_modern/RMQSynchronizedMutableDictionary.h>
#import <react_native_rabbitmq_modern/RMQTCPSocketTransport.h>
#import <react_native_rabbitmq_modern/RMQUnallocatedChannel.h>
#import <react_native_rabbitmq_modern/RMQGCDSerialQueue.h>
#import <react_native_rabbitmq_modern/RMQSemaphoreWaiterFactory.h>
#import <react_native_rabbitmq_modern/RMQSemaphoreWaiter.h>
#import <react_native_rabbitmq_modern/RMQProcessInfoNameGenerator.h>
#import <react_native_rabbitmq_modern/RMQQueuingConnectionDelegateProxy.h>
#import <react_native_rabbitmq_modern/RMQGCDHeartbeatSender.h>
#import <react_native_rabbitmq_modern/RMQTickingClock.h>
#import <react_native_rabbitmq_modern/RMQPKCS12CertificateConverter.h>
#import <react_native_rabbitmq_modern/RMQTLSOptions.h>
#import <react_native_rabbitmq_modern/RMQTransactionalConfirmations.h>
#import <react_native_rabbitmq_modern/RMQConfirmationTransaction.h>

//! Project version number for react_native_rabbitmq_modern.
FOUNDATION_EXPORT double RMQClientVersionNumber;

//! Project version string for react_native_rabbitmq_modern.
FOUNDATION_EXPORT const unsigned char RMQClientVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <react_native_rabbitmq_modern/PublicHeader.h>


