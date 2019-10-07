#ifndef TINYREFL_ENTITIES_FREE_FUNCTION_HPP_INCLUDED
#define TINYREFL_ENTITIES_FREE_FUNCTION_HPP_INCLUDED

#include <tinyrefl/entities/entity.hpp>
#include <tinyrefl/entities/function_arguments.hpp>
#include <tinyrefl/entities/invokable.hpp>

namespace tinyrefl
{

namespace entities
{

template<
    typename Name,
    typename FullName,
    typename Parent,
    typename SourceLocation,
    typename DisplayName,
    typename FullDisplayName,
    typename Signature,
    typename ArgNames,
    typename Pointer,
    typename Attributes>
struct free_function
    : public tinyrefl::entities::entity_with_attributes<
          Attributes,
          tinyrefl::entities::entity_kind::FUNCTION,
          Name,
          FullName,
          Parent,
          tinyrefl::entities::no_children,
          SourceLocation,
          DisplayName,
          FullDisplayName>,
      public tinyrefl::entities::invokable<Pointer, Signature, ArgNames>
{
    constexpr free_function() = default;
};
} // namespace entities
} // namespace tinyrefl

#endif // TINYREFL_ENTITIES_FREE_FUNCTION_HPP_INCLUDED