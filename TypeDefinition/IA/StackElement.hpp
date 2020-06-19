#pragma once
#include "../TypeDefiniton.hpp"
#include "Constants.hpp"
#include "../ns0/IOrderedObject.hpp"
#include <cstdint>

namespace ia
{

  struct StackElement_t : public ns0::IOrderedObject_t<std::uint16_t>
  {
    BindableMemberValue<bool> IsPartOfBase;
    BindableMemberValue<bool> SignalOn;
  };

} // namespace ia

REFL_TYPE(ia::StackElement_t,
          Bases<ns0::IOrderedObject_t<std::uint16_t>>(),
          open62541Cpp::attribute::UaObjectType{
              .NodeId = open62541Cpp::constexp::NodeId(constants::NsIAUri, UA_INDUSTRIAL_AUTOMATIONID_STACKELEMENTTYPE)})
REFL_END