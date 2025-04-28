add_library_unity(
        duckdb_main_bf_eds
        OBJECT
        bf_eds.cpp)
set(ALL_OBJECT_FILES
        ${ALL_OBJECT_FILES} $<TARGET_OBJECTS:duckdb_main_bf_eds>
        PARENT_SCOPE)

link_BF_EDS_NC_Lib(duckdb_main_bf_eds PUBLIC)