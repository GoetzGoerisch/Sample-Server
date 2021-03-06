#pragma once
#include "../TypeDefinition.hpp"
#include "../../src_generated/types_machinetool_generated.h"
#include "Constants.hpp"
#include <string>

namespace machineTool
{

struct ProductionPart_t
{
  BindableMemberValue<std::string> CustomerOrderIdentifier;
  BindableMemberValue<std::string> Identifier;
  BindableMemberValue<std::string> Name;
  BindableMemberValue<UA_PartQuality> PartQuality;
  BindableMemberValue<UA_ProcessIrregularity> ProcessIrregularity;
};

} // namespace machineTool

REFL_TYPE(machineTool::ProductionPart_t,
          UmatiServerLib::attribute::UaObjectType(UmatiServerLib::constexp::NodeId(constants::NsMachineToolUri, UA_MACHINETOOLID_PRODUCTIONPARTTYPE)))
REFL_FIELD(CustomerOrderIdentifier,
            UmatiServerLib::attribute::PlaceholderOptional(),
            UmatiServerLib::attribute::MemberInTypeNodeId(UmatiServerLib::constexp::NodeId(constants::NsMachineToolUri, UA_MACHINETOOLID_PRODUCTIONPARTTYPE_CUSTOMERORDERIDENTIFIER)))
REFL_FIELD(Identifier,
            UmatiServerLib::attribute::PlaceholderOptional(),
            UmatiServerLib::attribute::MemberInTypeNodeId(UmatiServerLib::constexp::NodeId(constants::NsMachineToolUri, UA_MACHINETOOLID_PRODUCTIONPARTTYPE_IDENTIFIER)))
REFL_FIELD(Name)
REFL_FIELD(PartQuality)
REFL_FIELD(ProcessIrregularity)
REFL_END
