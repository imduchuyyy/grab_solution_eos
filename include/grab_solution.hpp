#include <eosio/eosio.hpp>
using namespace eosio;

CONTRACT grab_solution : public contract {
   public:
      using contract::contract;

      ACTION hi( name nm );

      using hi_action = action_wrapper<"hi"_n, &grab_solution::hi>;
};