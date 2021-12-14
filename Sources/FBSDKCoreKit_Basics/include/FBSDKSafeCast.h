/*
 * Copyright (c) Facebook, Inc. and its affiliates.
 * All rights reserved.
 *
 * This source code is licensed under the license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import <Foundation/Foundation.h>

id _FBSDKCastToClassOrNilUnsafeInternal(id object, Class klass);
id _FBSDKCastToProtocolOrNilUnsafeInternal(id object, Protocol *protocol);

#ifndef FBSDK_CAST_TO_CLASS_OR_NIL
 #define FBSDK_CAST_TO_CLASS_OR_NIL(obj_, class_) ((class_ *)_FBSDKCastToClassOrNilUnsafeInternal(obj_, [class_ class]))
#endif

#ifndef FBSDK_CAST_TO_PROTOCOL_OR_NIL
 #define FBSDK_CAST_TO_PROTOCOL_OR_NIL(obj_, protocol_) ((id<protocol_>)_FBSDKCastToProtocolOrNilUnsafeInternal(obj_, @protocol(protocol_)))
#endif
