// Copyright (c) 2018 The PIVX developers
// Copyright (c) 2019 The FoxBet developers
// Copyright (c) 2019 The FoxBet developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef FXB_SPENDTYPE_H
#define FXB_SPENDTYPE_H

#include <cstdint>

namespace libzerocoin {
    enum SpendType : uint8_t {
        SPEND, // Used for a typical spend transaction, zFXB should be unusable after
        STAKE, // Used for a spend that occurs as a stake
        MN_COLLATERAL, // Used when proving ownership of zFXB that will be used for masternodes (future)
        SIGN_MESSAGE // Used to sign messages that do not belong above (future)
    };
}

#endif //FXB_SPENDTYPE_H
