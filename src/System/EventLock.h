// Copyright (c) 2011-2016 The Cryptonote developers
// Copyright (c) 2016 XDN developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#pragma once

namespace System {

class Event;

class EventLock {
public:
  explicit EventLock(Event& event);
  ~EventLock();
  EventLock& operator=(const EventLock&) = delete;

private:
  Event& event;
};

}
