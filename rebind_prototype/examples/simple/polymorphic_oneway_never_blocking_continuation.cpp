#include <experimental/thread_pool>
#include <iostream>

namespace execution = std::experimental::execution;
using std::experimental::static_thread_pool;

int main()
{
  static_thread_pool pool{1};
  execution::executor ex = pool.executor().require(execution::never_blocking).require(execution::continuation);
  ex.execute([]{ std::cout << "we made it\n"; });
  pool.wait();
}
