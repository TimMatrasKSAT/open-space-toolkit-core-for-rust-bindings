#include "../../include/OpenSpaceToolkitCoreRS/RustBehaviour.hpp"

namespace rust
{
namespace behavior
{

template <typename Try, typename Fail>
static void trycatch(Try &&func, Fail &&fail) noexcept try {
  func();
} catch (const std::exception &e) {
  fail(e.what());
}

} // namespace behavior
} // namespace rust