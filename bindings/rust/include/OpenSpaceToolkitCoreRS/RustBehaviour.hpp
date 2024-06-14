#ifndef __OpenSpaceToolkit_Core_Type_RealRS__
#define __OpenSpaceToolkit_Core_Type_RealRS__amespace rust
namespace rust
{
namespace behavior
{

template <typename Try, typename Fail>
static void trycatch(Try &&func, Fail &&fail) noexcept;

} // namespace behavior
} // namespace rust

#endif
