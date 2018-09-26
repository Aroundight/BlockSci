//
//  witness_pubkeyhash_range_methods.cpp
//  blocksci
//
//  Created by Harry Kalodner on 4/11/18.
//
//

#include "witness_pubkeyhash_range_py.hpp"
#include "pubkey_py.hpp"
#include "scripts/address_py.hpp"
#include "caster_py.hpp"
#include "range_apply_py.hpp"

#include <blocksci/cluster/cluster.hpp>
#include <blocksci/chain/transaction.hpp>
#include <blocksci/chain/block.hpp>

using namespace blocksci;
namespace py = pybind11;

void applyMethodsToWitnessPubkeyHashRange(RangeClasses<script::WitnessPubkeyHash> &classes) {
	applyAllMethodsToRange(classes, AddAddressMethods<script::WitnessPubkeyHash>{});
    applyAllMethodsToRange(classes, AddPubkeyBaseMethods<script::WitnessPubkeyHash>{});
}