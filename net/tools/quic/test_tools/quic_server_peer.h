// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef NET_TOOLS_QUIC_TEST_TOOLS_QUIC_SERVER_PEER_H_
#define NET_TOOLS_QUIC_TEST_TOOLS_QUIC_SERVER_PEER_H_

namespace net {

namespace tools {

class QuicDispatcher;
class QuicServer;

namespace test {

class QuicServerPeer {
 public:
  static bool SetSmallSocket(QuicServer* server);
  static void DisableRecvmmsg(QuicServer* server);
  static QuicDispatcher* GetDispatcher(QuicServer* server);
  static int GetFD(QuicServer* server);
};

}  // namespace test
}  // namespace tools
}  // namespace net

#endif  // NET_TOOLS_QUIC_TEST_TOOLS_QUIC_SERVER_PEER_H_
