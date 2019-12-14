// Copyright (c) 2016-2019 The CryptoCoderz Team / SantaCoin
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.
#ifndef SANTACOIN_MINING_H
#define SANTACOIN_MINING_H

#include "primitives/bignum.h"

/** Minimum nCoinAge required to stake PoS (v2) */
static const unsigned int nStakeMinAge = 2 * 60 * 60; // 2 hours
/** Minimum nCoinAge required to stake PoS (v3) */
static const int nStakeMinConfirmations = 90; // 5(minutes) × 90(confirms) ÷ 60(minutes) = 7.5 hours
/** Time to elapse before new modifier is computed */
static const unsigned int nModifierInterval = 10 * 60;
/** PoS Subsidy 2 */
static const int64_t COIN_YEAR_REWARD = 25 * CENT; // ~25% 
/** PoS Subsidy 4 */
static const int64_t COIN_YEAR_REWARD2 = 1 * CENT; // ~1% 
/** Block spacing preferred */
static const int64_t BLOCK_SPACING = 5 * 60;
/** Block spacing minimum */
static const int64_t BLOCK_SPACING_MIN = 3.5 * 60;
/** Block spacing maximum */
static const int64_t BLOCK_SPACING_MAX = 7.5 * 60;
/** Genesis block subsidy */
static const int64_t nGenesisBlockReward = 1 * COIN;
/** Reserve block subsidy */
static const int64_t nBlockRewardReserve = 5000 * COIN; // do math
/** Starting block subsidy */
static const int64_t nBlockPoWReward = 500 * COIN; // do more math
/** Invalid block subsidy */
static const int64_t nBlockRewardBuffer = 0.1 * COIN;
/** Coinbase transaction outputs can only be spent after this number of new blocks (network rule) */
static const int nCoinbaseMaturity = 60;

#endif
