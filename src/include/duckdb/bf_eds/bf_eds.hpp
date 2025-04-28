#pragma once

#include "limits.h"

#include "BF_EDS_NC/include/query_manager.hpp"
#include "BF_EDS_NC/include/private/seeding/keys.hpp"

namespace duckdb {
	//! Manages a global query manager
	class BFEDSConfig {
	protected:
		BFEDSConfig() : qm(ULLONG_MAX) {
		    this->qm.LoadKeys(seeds::keys_64_bit[0], seeds::keys_64_bit[1]);
	    }

		static BFEDSConfig* instance_;
	public:
	    BFEDSConfig(BFEDSConfig &other) = delete;
		void operator=(const BFEDSConfig &) = delete;
		static BFEDSConfig *GetInstance();

		//! Query Manager
		BF_EDS_NC::QueryManager qm;

	    //! Current query token, this is not safe as parallel reads can overwrite this token, but whatever
	    BF_EDS_NC::QueryToken query_token{};
	};
}
