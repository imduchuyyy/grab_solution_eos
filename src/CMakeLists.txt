project(grab_solution)

set(EOSIO_WASM_OLD_BEHAVIOR "Off")
find_package(eosio.cdt)

add_contract( grab_solution grab_solution grab_solution.cpp )
target_include_directories( grab_solution PUBLIC ${CMAKE_SOURCE_DIR}/../include )
target_ricardian_directory( grab_solution ${CMAKE_SOURCE_DIR}/../ricardian )