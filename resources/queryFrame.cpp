#include <functional>
#include <tuple>
#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <cassert>
#include <qp/common/perfevent.hpp>
#include "p2c/tpch.hpp"
#include "vmcache/vmcache.hpp"

using namespace std;
using namespace p2c;

#define DO_EXPAND(VAL)  VAL ## 1
#define EXPAND(VAL)     DO_EXPAND(VAL)
#define DO_QUOTE(X)     #X
#define QUOTE(X)        DO_QUOTE(X)

#if !defined(TASK_NAME) || (EXPAND(TASK_NAME) == 1)
#define TASK_NAME_OD "none"
#else
#define TASK_NAME_OD QUOTE(TASK_NAME)
#endif

#if !defined(VARIANT_NAME) || (EXPAND(VARIANT_NAME) == 1)
#define VARIANT_NAME_OD "default"
#else
#define VARIANT_NAME_OD QUOTE(VARIANT_NAME)
#endif

int main(int argc, char** argv) {
//   string tpch_folder = argc >= 2 ? argv[1] : "/opt/tpch-p2c/sf1";
//   unsigned run_count = argc >= 3 ? atoi(argv[2]) : 1;
//   auto tpch_scale = tpch_folder.substr(tpch_folder.find_last_of('/') + 1);
   TPCCWorkload<vmcacheAdapter>* dbptr = getTPCCWorkload(argc, argv);
   TPCCWorkload<vmcacheAdapter>& db = *dbptr;

   BenchmarkParameters params;
//   params.setParam("task", TASK_NAME_OD);
//   params.setParam("workload", tpch_scale);
//   params.setParam("variant", VARIANT_NAME_OD);
//   params.setParam("impl", "hyper");

  //  int** ptrArray = new int*[10];

  //  for (int i = 0; i < 10; i++) {
  //   ptrArray[i] = new int(i);
  //  }

  //  std::atomic_ref<int*> p(ptrArray[0]);
  //  int* expected = ptrArray[0];

  //  p.compare_exchange_strong(expected, ptrArray[1]);

  //  for (int i = 0; i < 10; i++) {
  //   cout << ":" << *ptrArray[i] << endl;
  //  }
  
  //  while (true);

  //  Hashtable<tuple<int>, int> ht(1024);

  //  for (int i = 0; i < 10; i++) {
  //   ht.insert(new Entry<tuple<int>, int>{{i}, i + 1});
  //  }

  //  for (int i = 0; i < 10; i++) {
  //   cout << "key: " << i << endl;
  //   for (auto range = ht.equal_range({i}); range.first != range.second; range.first++) {
  //     cout << "key + value" << i << " + " << *(range.first) << endl;
  //   }
  //  }

  //  while (true);

   // for (unsigned run = 0; run < run_count; ++run) {
    {
      // PerfEventBlock perf(0, params, run == 0);
      #include "query.cpp"
    }
   // }

   delete dbptr;
   return 0;
}
