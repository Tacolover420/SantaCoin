// Copyright (c) 2016-2019 The CryptoCoderz Team / SantaCoin
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.
#ifndef SANTACOIN_GENESIS_H
#define SANTACOIN_GENESIS_H

#include "primitives/bignum.h"

/** Genesis Start Time */
static const unsigned int timeGenesisBlock = 1576118300; // Thursday, December 12, 2019 2:38:20 AM (GMT)
/** Genesis RegNet Start Time */
static const unsigned int timeRegNetGenesis = 1576118600; // Thursday, December 12, 2019 2:38:20 AM (GMT)
/** Genesis Nonce */
static const unsigned int nNonceMain = 0;
/** Genesis Nonce Testnet */
static const unsigned int nNonceTest = 0;
/** Genesis Nonce Regnet */
static const unsigned int nNonceReg = 8;
/** Main Net Genesis Block */
static const uint256 nGenesisBlock("0x0000aa5e7cbe81a919b82d58c1e343cf661f19ef906b77453b3de1e43465c8d5");
/** Test Net Genesis Block */
static const uint256 hashTestNetGenesisBlock("0x");
/** Reg Net Genesis Block */
static const uint256 hashRegNetGenesisBlock("0x");
/** Genesis Merkleroot */
static const uint256 nGenesisMerkle("0xf9e70d86ec6b9f7ddb0d0582569aaf60995c79e0f52226297b17d0aa51d26d09");

#endif
