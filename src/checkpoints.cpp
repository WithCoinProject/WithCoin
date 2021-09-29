// Copyright (c) 2009-2015 The Bitcoin developers
// Copyright (c) 2015 The WithCoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include <boost/assign/list_of.hpp> // for 'map_list_of()'
#include <boost/foreach.hpp>

#include "checkpoints.h"

#include "txdb.h"
#include "main.h"
#include "uint256.h"

namespace Checkpoints
{
    typedef std::map<int, uint256> MapCheckpoints;

    //
    // What makes a good checkpoint block?
    // + Is surrounded by blocks with reasonable timestamps
    //   (no blocks before with a timestamp after, none after with
    //    timestamp before)
    // + Contains no strange transactions
    //
    static MapCheckpoints mapCheckpoints =
        boost::assign::map_list_of
        ( 0,     hashGenesisBlock )
		(  1500, uint256("0x0000001932c9f76c5e9de060bc5d20b17d7b9a2a931ef3981c1602908d8160e7"))
		(  5500, uint256("0x000000393161c8706e8d3dfa457d7224b6aadc3030321faff2aa9bd4a193e8f9"))
		(  11000, uint256("0x000000118e999dc63191253fb7db52d1bca3a55d8dc88e13c4c2a62636398b2a"))
		(  24100, uint256("0x00000000007895e478ec987597307ab8821912ed7cbc271eee4f1815a8959778"))
		(  48150, uint256("0x0000000000003883f18371bfc7ec557e4ff4511d6676379f47ec01486c358d68"))
		(  83200, uint256("0x0000000000019782d4f9ffa5daf598cf344771f54c926f8c65e34e23b2d911c4"))
		(  123000, uint256("0x97e06f83d5fd49fa7a3a4d39391fbc45f3ff210204dfe8bebee3c0263ea7faaf"))
		(  146200, uint256("0xd2ff6965b89ad8a54af34c5fb8b75a4095a14a333f8fdd339d78b26e022a9a5e"))
		(  183000, uint256("0x00000000000066679d5e46736fa81ae67a907015920eeb61d3e2ea12fbb07312"))
		(  261500, uint256("0x0000000000012b8c68f9fbe53c4e066a6f5719c57cfeae439d8e4e0ddd835c3e"))
		(  302300, uint256("0x000000000005d9966632f0aad222a2b165fe0931951da1a3c914e7b4346b43f9"))
		(  341500, uint256("0x3f9773a747e46a2616fe7ca6529563ba7cd831bf64e8566c2097b1d5fa7245d0"))
		(  381150, uint256("0xc13623523343f0bada1d681cafbacc448248510e719e8b8d324c9bd9fe1abdeb"))
		(  408005, uint256("0x0000000000019fa1799bde7710e4467906c3f78930f03a6e3acd55d41a1f42f6"))
		(  453000, uint256("0x000000000000cf2a1b395615aa4ce667fc098b3b8d2877c756bef1b37e9e6a82"))
		(  532100, uint256("0x963dd1ad610d977761c6c4ea004b7132b0b88ec50c3c637e1d38acf8c7b35615"))
		(  561300, uint256("0x000000000000888a4d9449234a56afdee62d354f3b68a551dacc529c49bcd6f4"))
		(  624000, uint256("0x000000000001b87193e26cf199368f4a0741c1982d606f8be38b3d9b6e451cee"))
		(  685200, uint256("0x000000000003ff6b6907bfb1f361202b179230eb5746b7de2c324c2b19cba7ee"))
		(  739120, uint256("0x000000630ba1afcd4575083c05f326e0e1df6e3707a39966a2e976953cfc5c42"))
		(  801350, uint256("0x00000000000027ea69b148bbad68e8cb996e4fceeb3c35f949481be344b7ea0f"))
		(  884000, uint256("0x0000006e0fe58cbe4ded9be4515c2b1afb4194cbe577ad25321b8f0527e755b8"))
		(  923500, uint256("0x0000000000020cb107d7fae331542ad99e26302b67f6d2b4436d553656bec995"))
		(  950000, uint256("0x000000000002c9432fcbe4628b5f564034a0a2ac03dd6d5a26ac911b56675a79"))
		(  973200, uint256("0x888fe305e7081c8e5b23ff0e0be51b9b4eea2120a29854ebfe235bf47644d6b3"))
		(  1012350, uint256("0x0000000000016cea64507057c431d819041a114761b648dbd427ab4fdbe3362b"))
		(  1051300, uint256("0x0000000000296246358a4341b83d893bef9943b57157638f9eefdce58f79c753"))
		(  1103000, uint256("0x0000000000022b6f40e195701e697359967941ffeeb3f38acf16568d21c4993f"))
		(  1138000, uint256("0x0000000000084fa60e902ae9ed489caf7f1aa45fe0ef32b2d7a74c1752d2029a"))
		(  1174300, uint256("0x00000000001d646cb934d57db43738aeeeb7e9444dd672b200a7b8050cc25043"))
		(  1191111, uint256("0x00000000003574bb2641d3d52b57d081f46f92077ecaf4c16926f8bcbed89949"))
		(  1203156, uint256("0xb97fde356b1e7c4ea42085764ec3c76b71e2cc6e1dee1f0a09740b33fdf54952"))
		(  1210000, uint256("0x0000000000050f16f50ac81cabc12aa6a6af93a293144221a1adfa333411c441"))
		(  1260000, uint256("0x00000000001aadd62d31a4c722f70a39c807a830fe868939534643edd4aa47fb"))
		(  1273500, uint256("0x0000000002a60b0228a82212cbb595dc9a768c9b95b4c11084c94072b3357352"))
		(  1304500, uint256("0x560c0e56b5e340aa599c12d362dfc4ca45b08d14fabdba0734ab1c66c3749422"))
		(  1347630, uint256("0x0000000002f72a0a4ec7870a95d1f6e5a2ba955ac015734cb8726ed97e550a98"))
		(  1376842, uint256("0x1e12e008304da900489f3e9cd502e5345fbf117da4d32d70116f94287a8b1e9e"))
		(  1406584, uint256("0xc3aa40e053912987965d34449a4f3f4bffd508519040978ff7d8b381dcf5f766"))
		(  1434952, uint256("0x67049e2d35ce7da4811af7824fffa35def15b242ca16db867bd0c4a805c1d8f0"))
		(  1468561, uint256("0x000000000005cb8c448ba5998e6bdc7ed6fc00d74a554aeae4c454fa0d1ba3dc"))
		(  1500000, uint256("0xc8b7d682f305b7e9fdb3478a5ce53215906c4180cdf82145ae83598d386b047b"))
		(  1610000, uint256("0xf575ac11bc2289cd17ba0b58cbda63714e1a7cbc2f198e9dad5cc3409116348f"))
		(  1730000, uint256("0xb31a724cdb50498c489bf3442ed8ef1e49cb672534341aa7637b04b3f815666c"))
		(  1815000, uint256("0x719ff98ca2271743b1476562dbbeb3397609e1cc069dda6f58a9195c883da540"))
		(  1873000, uint256("0x337623572b6bc4ca45014ae595e473435a88f1cdddc86e64d071253d0c20b747"))
		(  1941500, uint256("0x6abe75f441a66f21fb416895e0cfb1921843d7116612f50091f7c0534ee623b7"))
		(  2017300, uint256("0x21b5e5c92b65fc6fb15a6283db666f022f616beec0b707937394960cc283d91c"))
		(  2114300, uint256("0x8489e2974335366d33d4291851d841cd8586a363910c4c3369c5919abe4b38e2"))
		(  2167000, uint256("0x3c7a6c39c5029f7e63c52236a67e5195f8071d376e7603f59ac58d146abf7bc1"))
		(  2270000, uint256("0x8013f099bdd72aebc6d4b7992547a9c62bac53ab0ecf78f653d3cf4002cecf82"))
		(  2350000, uint256("0x0f3af6241ea952eeda26039a24651cb0fa85e3eb9cbe5ab85bda4539bd6b0769"))
		(  2412000, uint256("0x7c04fa74800933bc21c748d7d48c5035224a854053613882a6141092f4c6d121"))
		(  2481600, uint256("0x7282f96aaece8fa09ee9556252197d86981476c660e450a35fc74e86c64f04bc"))
		(  2530000, uint256("0x8af3330b345b5cb3d674a5390854ebe7c3cb3b557fe28923bcf425d3a0a875f7"))
		(  2660000, uint256("0x8bfaf49a2b9b1f72b60ad1823c211432f4169212847011b680ccf6d21fd972b8"))
		(  2730000, uint256("0x0d1925501e330dc72b78eab52a2e16183f9b0fed6bccc2c53a8613cd3fdf283d"))
		(  2811150, uint256("0xcad2b73674273770b865d01d0cd894bcfc945d6a3a3ebfe6f09ce2f2b448751a"))
		(  2894500, uint256("0x70ab39209ecda39cae0b3622e4d232a26e818a0b9c308e7a71faabfb0dce6ff2"))
		(  2960000, uint256("0x5dc52ff46be964e2abea983cfa9ff51330b250e7b81fb04cb2abc7199c0dbdc6"))
		(  3012500, uint256("0x245e98ac700f305a74c73bd9696ba1fd07d1ab1a76fcc04b8b3013cbd70d1cdf"))
		(  3110730, uint256("0xe50c8c0031cf3d5047a80a205c3a140a199ee1ac19952ba68cdfa25fa3cf4c4b"))

		;

    // TestNet has no checkpoints
    static MapCheckpoints mapCheckpointsTestnet =
        boost::assign::map_list_of
        ( 0, hashGenesisBlockTestNet )
		
        ;

    bool CheckHardened(int nHeight, const uint256& hash)
    {
        MapCheckpoints& checkpoints = (fTestNet ? mapCheckpointsTestnet : mapCheckpoints);

        MapCheckpoints::const_iterator i = checkpoints.find(nHeight);
        if (i == checkpoints.end()) return true;
        return hash == i->second;
    }

    int GetTotalBlocksEstimate()
    {
        MapCheckpoints& checkpoints = (fTestNet ? mapCheckpointsTestnet : mapCheckpoints);

        return checkpoints.rbegin()->first;
    }

    CBlockIndex* GetLastCheckpoint(const std::map<uint256, CBlockIndex*>& mapBlockIndex)
    {
        MapCheckpoints& checkpoints = (fTestNet ? mapCheckpointsTestnet : mapCheckpoints);

        BOOST_REVERSE_FOREACH(const MapCheckpoints::value_type& i, checkpoints)
        {
            const uint256& hash = i.second;
            std::map<uint256, CBlockIndex*>::const_iterator t = mapBlockIndex.find(hash);
            if (t != mapBlockIndex.end())
                return t->second;
        }
        return NULL;
    }

    // WithCoin: synchronized checkpoint (centrally broadcasted)
    uint256 hashSyncCheckpoint = 0;
    uint256 hashPendingCheckpoint = 0;
    CSyncCheckpoint checkpointMessage;
    CSyncCheckpoint checkpointMessagePending;
    uint256 hashInvalidCheckpoint = 0;
    CCriticalSection cs_hashSyncCheckpoint;

    // WithCoin: get last synchronized checkpoint
    CBlockIndex* GetLastSyncCheckpoint()
    {
        LOCK(cs_hashSyncCheckpoint);
        if (!mapBlockIndex.count(hashSyncCheckpoint))
            error("GetSyncCheckpoint: block index missing for current sync-checkpoint %s", hashSyncCheckpoint.ToString().c_str());
        else
            return mapBlockIndex[hashSyncCheckpoint];
        return NULL;
    }

    // WithCoin: only descendant of current sync-checkpoint is allowed
    bool ValidateSyncCheckpoint(uint256 hashCheckpoint)
    {
        if (!mapBlockIndex.count(hashSyncCheckpoint))
            return error("ValidateSyncCheckpoint: block index missing for current sync-checkpoint %s", hashSyncCheckpoint.ToString().c_str());
        if (!mapBlockIndex.count(hashCheckpoint))
            return error("ValidateSyncCheckpoint: block index missing for received sync-checkpoint %s", hashCheckpoint.ToString().c_str());

        CBlockIndex* pindexSyncCheckpoint = mapBlockIndex[hashSyncCheckpoint];
        CBlockIndex* pindexCheckpointRecv = mapBlockIndex[hashCheckpoint];

        if (pindexCheckpointRecv->nHeight <= pindexSyncCheckpoint->nHeight)
        {
            // Received an older checkpoint, trace back from current checkpoint
            // to the same height of the received checkpoint to verify
            // that current checkpoint should be a descendant block
            CBlockIndex* pindex = pindexSyncCheckpoint;
            while (pindex->nHeight > pindexCheckpointRecv->nHeight)
                if (!(pindex = pindex->pprev))
                    return error("ValidateSyncCheckpoint: pprev null - block index structure failure");
            if (pindex->GetBlockHash() != hashCheckpoint)
            {
                hashInvalidCheckpoint = hashCheckpoint;
                return error("ValidateSyncCheckpoint: new sync-checkpoint %s is conflicting with current sync-checkpoint %s", hashCheckpoint.ToString().c_str(), hashSyncCheckpoint.ToString().c_str());
            }
            return false; // ignore older checkpoint
        }

        // Received checkpoint should be a descendant block of the current
        // checkpoint. Trace back to the same height of current checkpoint
        // to verify.
        CBlockIndex* pindex = pindexCheckpointRecv;
        while (pindex->nHeight > pindexSyncCheckpoint->nHeight)
            if (!(pindex = pindex->pprev))
                return error("ValidateSyncCheckpoint: pprev2 null - block index structure failure");
        if (pindex->GetBlockHash() != hashSyncCheckpoint)
        {
            hashInvalidCheckpoint = hashCheckpoint;
            return error("ValidateSyncCheckpoint: new sync-checkpoint %s is not a descendant of current sync-checkpoint %s", hashCheckpoint.ToString().c_str(), hashSyncCheckpoint.ToString().c_str());
        }
        return true;
    }

    bool WriteSyncCheckpoint(const uint256& hashCheckpoint)
    {
        CTxDB txdb;
        txdb.TxnBegin();
        if (!txdb.WriteSyncCheckpoint(hashCheckpoint))
        {
            txdb.TxnAbort();
            return error("WriteSyncCheckpoint(): failed to write to db sync checkpoint %s", hashCheckpoint.ToString().c_str());
        }
        if (!txdb.TxnCommit())
            return error("WriteSyncCheckpoint(): failed to commit to db sync checkpoint %s", hashCheckpoint.ToString().c_str());

        Checkpoints::hashSyncCheckpoint = hashCheckpoint;
        return true;
    }

    bool AcceptPendingSyncCheckpoint()
    {
        LOCK(cs_hashSyncCheckpoint);
        if (hashPendingCheckpoint != 0 && mapBlockIndex.count(hashPendingCheckpoint))
        {
            if (!ValidateSyncCheckpoint(hashPendingCheckpoint))
            {
                hashPendingCheckpoint = 0;
                checkpointMessagePending.SetNull();
                return false;
            }

            CTxDB txdb;
            CBlockIndex* pindexCheckpoint = mapBlockIndex[hashPendingCheckpoint];
            if (!pindexCheckpoint->IsInMainChain())
            {
                CBlock block;
                if (!block.ReadFromDisk(pindexCheckpoint))
                    return error("AcceptPendingSyncCheckpoint: ReadFromDisk failed for sync checkpoint %s", hashPendingCheckpoint.ToString().c_str());
                if (!block.SetBestChain(txdb, pindexCheckpoint))
                {
                    hashInvalidCheckpoint = hashPendingCheckpoint;
                    return error("AcceptPendingSyncCheckpoint: SetBestChain failed for sync checkpoint %s", hashPendingCheckpoint.ToString().c_str());
                }
            }

            if (!WriteSyncCheckpoint(hashPendingCheckpoint))
                return error("AcceptPendingSyncCheckpoint(): failed to write sync checkpoint %s", hashPendingCheckpoint.ToString().c_str());
            hashPendingCheckpoint = 0;
            checkpointMessage = checkpointMessagePending;
            checkpointMessagePending.SetNull();
            printf("AcceptPendingSyncCheckpoint : sync-checkpoint at %s\n", hashSyncCheckpoint.ToString().c_str());
            // relay the checkpoint
            if (!checkpointMessage.IsNull())
            {
                BOOST_FOREACH(CNode* pnode, vNodes)
                    checkpointMessage.RelayTo(pnode);
            }
            return true;
        }
        return false;
    }

    // Automatically select a suitable sync-checkpoint 
    uint256 AutoSelectSyncCheckpoint()
    {
        const CBlockIndex *pindex = pindexBest;
        // Search backward for a block within max span and maturity window
        while (pindex->pprev && (pindex->GetBlockTime() + CHECKPOINT_MAX_SPAN > pindexBest->GetBlockTime() || pindex->nHeight + 8 > pindexBest->nHeight))
            pindex = pindex->pprev;
        return pindex->GetBlockHash();
    }

    // Check against synchronized checkpoint
    bool CheckSync(const uint256& hashBlock, const CBlockIndex* pindexPrev)
    {
        if (fTestNet) return true; // Testnet has no checkpoints
        int nHeight = pindexPrev->nHeight + 1;

        LOCK(cs_hashSyncCheckpoint);
        // sync-checkpoint should always be accepted block
        assert(mapBlockIndex.count(hashSyncCheckpoint));
        const CBlockIndex* pindexSync = mapBlockIndex[hashSyncCheckpoint];

        if (nHeight > pindexSync->nHeight)
        {
            // trace back to same height as sync-checkpoint
            const CBlockIndex* pindex = pindexPrev;
            while (pindex->nHeight > pindexSync->nHeight)
                if (!(pindex = pindex->pprev))
                    return error("CheckSync: pprev null - block index structure failure");
            if (pindex->nHeight < pindexSync->nHeight || pindex->GetBlockHash() != hashSyncCheckpoint)
                return false; // only descendant of sync-checkpoint can pass check
        }
        if (nHeight == pindexSync->nHeight && hashBlock != hashSyncCheckpoint)
            return false; // same height with sync-checkpoint
        if (nHeight < pindexSync->nHeight && !mapBlockIndex.count(hashBlock))
            return false; // lower height than sync-checkpoint
        return true;
    }

    bool WantedByPendingSyncCheckpoint(uint256 hashBlock)
    {
        LOCK(cs_hashSyncCheckpoint);
        if (hashPendingCheckpoint == 0)
            return false;
        if (hashBlock == hashPendingCheckpoint)
            return true;
        if (mapOrphanBlocks.count(hashPendingCheckpoint) 
            && hashBlock == WantedByOrphan(mapOrphanBlocks[hashPendingCheckpoint]))
            return true;
        return false;
    }

    // WithCoin: reset synchronized checkpoint to last hardened checkpoint
    bool ResetSyncCheckpoint()
    {
        LOCK(cs_hashSyncCheckpoint);
        const uint256& hash = mapCheckpoints.rbegin()->second;
        if (mapBlockIndex.count(hash) && !mapBlockIndex[hash]->IsInMainChain())
        {
            // checkpoint block accepted but not yet in main chain
            printf("ResetSyncCheckpoint: SetBestChain to hardened checkpoint %s\n", hash.ToString().c_str());
            CTxDB txdb;
            CBlock block;
            if (!block.ReadFromDisk(mapBlockIndex[hash]))
                return error("ResetSyncCheckpoint: ReadFromDisk failed for hardened checkpoint %s", hash.ToString().c_str());
            if (!block.SetBestChain(txdb, mapBlockIndex[hash]))
            {
                return error("ResetSyncCheckpoint: SetBestChain failed for hardened checkpoint %s", hash.ToString().c_str());
            }
        }
        else if(!mapBlockIndex.count(hash))
        {
            // checkpoint block not yet accepted
            hashPendingCheckpoint = hash;
            checkpointMessagePending.SetNull();
            printf("ResetSyncCheckpoint: pending for sync-checkpoint %s\n", hashPendingCheckpoint.ToString().c_str());
        }

        BOOST_REVERSE_FOREACH(const MapCheckpoints::value_type& i, mapCheckpoints)
        {
            const uint256& hash = i.second;
            if (mapBlockIndex.count(hash) && mapBlockIndex[hash]->IsInMainChain())
            {
                if (!WriteSyncCheckpoint(hash))
                    return error("ResetSyncCheckpoint: failed to write sync checkpoint %s", hash.ToString().c_str());
                printf("ResetSyncCheckpoint: sync-checkpoint reset to %s\n", hashSyncCheckpoint.ToString().c_str());
                return true;
            }
        }

        return false;
    }

    void AskForPendingSyncCheckpoint(CNode* pfrom)
    {
        LOCK(cs_hashSyncCheckpoint);
        if (pfrom && hashPendingCheckpoint != 0 && (!mapBlockIndex.count(hashPendingCheckpoint)) && (!mapOrphanBlocks.count(hashPendingCheckpoint)))
            pfrom->AskFor(CInv(MSG_BLOCK, hashPendingCheckpoint));
    }

    bool SetCheckpointPrivKey(std::string strPrivKey)
    {
        // Test signing a sync-checkpoint with genesis block
        CSyncCheckpoint checkpoint;
        checkpoint.hashCheckpoint = !fTestNet ? hashGenesisBlock : hashGenesisBlockTestNet;
        CDataStream sMsg(SER_NETWORK, PROTOCOL_VERSION);
        sMsg << (CUnsignedSyncCheckpoint)checkpoint;
        checkpoint.vchMsg = std::vector<unsigned char>(sMsg.begin(), sMsg.end());

        std::vector<unsigned char> vchPrivKey = ParseHex(strPrivKey);
        CKey key;
        key.SetPrivKey(CPrivKey(vchPrivKey.begin(), vchPrivKey.end())); // if key is not correct openssl may crash
        if (!key.Sign(Hash(checkpoint.vchMsg.begin(), checkpoint.vchMsg.end()), checkpoint.vchSig))
            return false;

        // Test signing successful, proceed
        CSyncCheckpoint::strMasterPrivKey = strPrivKey;
        return true;
    }

    bool SendSyncCheckpoint(uint256 hashCheckpoint)
    {
        CSyncCheckpoint checkpoint;
        checkpoint.hashCheckpoint = hashCheckpoint;
        CDataStream sMsg(SER_NETWORK, PROTOCOL_VERSION);
        sMsg << (CUnsignedSyncCheckpoint)checkpoint;
        checkpoint.vchMsg = std::vector<unsigned char>(sMsg.begin(), sMsg.end());

        if (CSyncCheckpoint::strMasterPrivKey.empty())
            return error("SendSyncCheckpoint: Checkpoint master key unavailable.");
        std::vector<unsigned char> vchPrivKey = ParseHex(CSyncCheckpoint::strMasterPrivKey);
        CKey key;
        key.SetPrivKey(CPrivKey(vchPrivKey.begin(), vchPrivKey.end())); // if key is not correct openssl may crash
        if (!key.Sign(Hash(checkpoint.vchMsg.begin(), checkpoint.vchMsg.end()), checkpoint.vchSig))
            return error("SendSyncCheckpoint: Unable to sign checkpoint, check private key?");

        if(!checkpoint.ProcessSyncCheckpoint(NULL))
        {
            printf("WARNING: SendSyncCheckpoint: Failed to process checkpoint.\n");
            return false;
        }

        // Relay checkpoint
        {
            LOCK(cs_vNodes);
            BOOST_FOREACH(CNode* pnode, vNodes)
                checkpoint.RelayTo(pnode);
        }
        return true;
    }

    // Is the sync-checkpoint outside maturity window?
    bool IsMatureSyncCheckpoint()
    {
        LOCK(cs_hashSyncCheckpoint);
        // sync-checkpoint should always be accepted block
        assert(mapBlockIndex.count(hashSyncCheckpoint));
        const CBlockIndex* pindexSync = mapBlockIndex[hashSyncCheckpoint];
        return (nBestHeight >= pindexSync->nHeight + nCoinbaseMaturity ||
                pindexSync->GetBlockTime() + nStakeMinAge < GetAdjustedTime());
    }
}

// WithCoin: sync-checkpoint master key
const std::string CSyncCheckpoint::strMasterPubKey = "";

std::string CSyncCheckpoint::strMasterPrivKey = "";

// WithCoin: verify signature of sync-checkpoint message
bool CSyncCheckpoint::CheckSignature()
{
    CKey key;
    if (!key.SetPubKey(ParseHex(CSyncCheckpoint::strMasterPubKey)))
        return error("CSyncCheckpoint::CheckSignature() : SetPubKey failed");
    if (!key.Verify(Hash(vchMsg.begin(), vchMsg.end()), vchSig))
        return error("CSyncCheckpoint::CheckSignature() : verify signature failed");

    // Now unserialize the data
    CDataStream sMsg(vchMsg, SER_NETWORK, PROTOCOL_VERSION);
    sMsg >> *(CUnsignedSyncCheckpoint*)this;
    return true;
}

// WithCoin: process synchronized checkpoint
bool CSyncCheckpoint::ProcessSyncCheckpoint(CNode* pfrom)
{
    if (!CheckSignature())
        return false;

    LOCK(Checkpoints::cs_hashSyncCheckpoint);
    if (!mapBlockIndex.count(hashCheckpoint))
    {
        // We haven't received the checkpoint chain, keep the checkpoint as pending
        Checkpoints::hashPendingCheckpoint = hashCheckpoint;
        Checkpoints::checkpointMessagePending = *this;
        printf("ProcessSyncCheckpoint: pending for sync-checkpoint %s\n", hashCheckpoint.ToString().c_str());
        // Ask this guy to fill in what we're missing
        if (pfrom)
        {
            pfrom->PushGetBlocks(pindexBest, hashCheckpoint);
            // ask directly as well in case rejected earlier by duplicate
            // proof-of-stake because getblocks may not get it this time
            pfrom->AskFor(CInv(MSG_BLOCK, mapOrphanBlocks.count(hashCheckpoint)? WantedByOrphan(mapOrphanBlocks[hashCheckpoint]) : hashCheckpoint));
        }
        return false;
    }

    if (!Checkpoints::ValidateSyncCheckpoint(hashCheckpoint))
        return false;

    CTxDB txdb;
    CBlockIndex* pindexCheckpoint = mapBlockIndex[hashCheckpoint];
    if (!pindexCheckpoint->IsInMainChain())
    {
        // checkpoint chain received but not yet main chain
        CBlock block;
        if (!block.ReadFromDisk(pindexCheckpoint))
            return error("ProcessSyncCheckpoint: ReadFromDisk failed for sync checkpoint %s", hashCheckpoint.ToString().c_str());
        if (!block.SetBestChain(txdb, pindexCheckpoint))
        {
            Checkpoints::hashInvalidCheckpoint = hashCheckpoint;
            return error("ProcessSyncCheckpoint: SetBestChain failed for sync checkpoint %s", hashCheckpoint.ToString().c_str());
        }
    }

    if (!Checkpoints::WriteSyncCheckpoint(hashCheckpoint))
        return error("ProcessSyncCheckpoint(): failed to write sync checkpoint %s", hashCheckpoint.ToString().c_str());
    Checkpoints::checkpointMessage = *this;
    Checkpoints::hashPendingCheckpoint = 0;
    Checkpoints::checkpointMessagePending.SetNull();
    printf("ProcessSyncCheckpoint: sync-checkpoint at %s\n", hashCheckpoint.ToString().c_str());
    return true;
}
