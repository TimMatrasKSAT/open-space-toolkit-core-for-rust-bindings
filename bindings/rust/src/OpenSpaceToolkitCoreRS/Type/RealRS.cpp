/// Apache License 2.0

#include "../../../include/OpenSpaceToolkitCoreRS/Type/RealRS.hpp"
#include <OpenSpaceToolkit/Core/Type/Real.hpp>

namespace ostk
{
namespace core
{
namespace type
{


RealRS::RealRS(Real::ValueType aReal) : Real(aReal) {
}

bool type::RealRS::is_negative() const
{
    return this->isNegative();
}
bool type::RealRS::is_positive() const
{
    return this->isPositive();
}

std::unique_ptr<std::string> RealRS::to_string() const
{
    return std::unique_ptr<std::string>(new std::string(this->toString()));
}

std::unique_ptr<RealRS> new_real(const double number)
{
    return std::unique_ptr<RealRS>(new RealRS(number));
}

}  // namespace type
}  // namespace core
}  // namespace ostk