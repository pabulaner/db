#include <iostream>
#include <string>
#include <map>
#include <unordered_map>
#include <vector>
#include <fmt/core.h>
#include <fmt/ranges.h>
#include <source_location>
#include <string>
#include <string_view>
#include <sstream>

#include "p2c/foundations.hpp"
#include "p2c/types.hpp"
#include "p2c/tpch.hpp"

using namespace std;
using namespace fmt;
using namespace p2c;

int main() {
   /*
   select count(*)
   from orders
   where o_orderdate < '1995-03-15'::date
   */
   {
      auto o = make_unique<Scan>("order");
      IU od = {"o_c_id", Type::Undefined};
      IU op = {"o_carrier_id", Type::Undefined};

      produceAndPrint(std::move(o), {&od, &op});
   }
}