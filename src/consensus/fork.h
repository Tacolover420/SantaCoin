// Copyright (c) 2016-2019 The CryptoCoderz Team / SantaCoin
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.
#ifndef SANTACOIN_FORK_H
#define SANTACOIN_FORK_H

#include "primitives/bignum.h"

/** Genesis Block Height */
static const int64_t nGenesisHeight = 0;
/** Reserve Phase start block */
static const int64_t nReservePhaseStart = 10;
/** Reserve Phase end block */
static const int64_t nReservePhaseEnd = 356; // created distribution subsidy for in-game (MorrowRealm)
/** PoS1 Phase start block */
static const int64_t nPoS1PhaseStart = 365000000; // Begins @ 365-Million SANTA
/** Velocity toggle block */
static const int64_t VELOCITY_TOGGLE = 500; // Implementation of the Velocity system into the chain.
/** Velocity retarget toggle block */
static const int64_t VELOCITY_TDIFF = 0; // Use Velocity's retargetting method.
/** Proof-of-Stake Version 3.0 implementation fork */
inline bool IsProtocolV3(int64_t nTime) { return TestNet() || nTime > 1535673600; } // ON (TOGGLED Fri, 31 Aug 2018 00:00:00 GMT)

#endif
