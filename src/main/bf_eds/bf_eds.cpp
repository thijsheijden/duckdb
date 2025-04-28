#include "duckdb/bf_eds/bf_eds.hpp"

namespace duckdb {
	BFEDSConfig* BFEDSConfig::instance_ = nullptr;

	BFEDSConfig *BFEDSConfig::GetInstance() {
		if(instance_ == nullptr){
			instance_ = new BFEDSConfig();
		}

		return instance_;
	}
}