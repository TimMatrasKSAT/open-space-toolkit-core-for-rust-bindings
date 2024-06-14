/// Apache License 2.0

#ifndef __OpenSpaceToolkit_Core_Type_RealRS__
#define __OpenSpaceToolkit_Core_Type_RealRS__

#include <OpenSpaceToolkit/Core/Type/Real.hpp>
#include <memory>
// #include "../RustBehaviour.hpp

namespace ostk
{
namespace core
{
namespace type
{

/// @brief                      RealRS type

class RealRS : Real
{
    public:
        RealRS(Real::ValueType aReal);

        bool is_negative() const;
        bool is_positive() const;

        std::unique_ptr<std::string> to_string() const;
    // private:
        // Real real_;
    
};

std::unique_ptr<RealRS> new_real(const double number);

}  // namespace type
}  // namespace core
}  // namespace ostk

#endif