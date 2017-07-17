//
// ticket.cc
// Copyright (C) 2017 4paradigm.com
// Author vagrant
// Date 2017-07-14
//

#include "storage/ticket.h"

namespace rtidb {
namespace storage {

Ticket::Ticket() {}

Ticket::~Ticket() {
    std::vector<KeyEntry*>::iterator it = entries_.begin();
    for (; it != entries_.end(); ++it) {
        (*it)->UnRef();
    }
}

void Ticket::Push(KeyEntry* entry) {
    if (entry == NULL) {
        return;
    }
    entries_.push_back(entry);
}

}
}


