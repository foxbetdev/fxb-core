// Copyright (c) 2018 The PIVX developers
// Copyright (c) 2019 The FoxBet developers
// Copyright (c) 2019 The FoxBet developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.



#ifndef FXB_INVALID_SERIALS_JSON_H
#define FXB_INVALID_SERIALS_JSON_H

#include <string>

std::string LoadInvalidSerials()
{
    std::string str = "[\n"
            "  {\n"
            "    \"s\": \"c9c868bb56eacfc4f3d829528a0ae812dff26619cd38e6c9a0eea1eacddc84\"\n"
            "  },\n"
            "]";
    return str;
}

#endif //FXB_INVALID_SERIALS_JSON_H
