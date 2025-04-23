#pragma once

#include "duckdb.h"

namespace duckdb {
	enum class BloomFilterType : uint8_t {
		REGULAR = 1,
		ENCRYPTED_RANGES = 2,
	};
}