// Copyright (c) 2016-2019 The CryptoCoderz Team / SantaCoin
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.
#ifndef SANTACOIN_BLOCKPARAMS_H
#define SANTACOIN_BLOCKPARAMS_H

#include "node/net.h"
#include "chain.h"
#include "primitives/bignum.h"

// Define difficulty retarget algorithms
enum DiffMode {
    DIFF_DEFAULT = 0, // Default to invalid 0
    DIFF_VRX     = 1, // Retarget using Terminal-Velocity-RateX
};

void VRXswngdebug();
void VRXdebug();
void GNTdebug();
void VRX_BaseEngine(const CBlockIndex* pindexLast, bool fProofOfStake);
void VRX_ThreadCurve(const CBlockIndex* pindexLast, bool fProofOfStake);
void VRX_Dry_Run(const CBlockIndex* pindexLast);
void VRX_Simulate_Retarget();
unsigned int VRX_Retarget(const CBlockIndex* pindexLast, bool fProofOfStake);
unsigned int GetNextTargetRequired(const CBlockIndex* pindexLast, bool fProofOfStake);
int64_t GetProofOfWorkReward(int64_t nHeight, int64_t nFees);
int64_t GetProofOfStakeReward(int64_t nCoinAge, int64_t nFees);
int64_t GetDevOpsPayment(int nHeight, int64_t blockValue);


#endif // SANTACOIN_BLOCKPARAMS_H
