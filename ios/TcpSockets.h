/**
 * Copyright (c) 2015-present, Peel Technologies, Inc.
 * All rights reserved.
 */

#import "TcpSocketClient.h"

#import "RCTEventEmitter.h"
#import "CocoaAsyncSocket/GCDAsyncSocket.h"

@interface TcpSockets : RCTEventEmitter<SocketClientDelegate>

@end
