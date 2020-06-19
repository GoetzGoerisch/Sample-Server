#pragma once
#include "../TypeDefiniton.hpp"
#include "Constants.hpp"
#include "BaseTool.hpp"
#include "../../src_generated/types_machinetool_generated.h"

namespace machineTool
{
  struct Tool_Locked_t
  {
    BindableMemberValue<bool> Value;
    BindableMemberValue<UA_ToolLocked> ReasonForLocking;
  };

  struct Tool_t : public BaseTool_t
  {
    BindableMemberValue<std::uint32_t> ControlIdentifier1;
    BindableMemberValue<std::uint32_t> ControlIdentifier2;
    BindableMemberValue<UA_ToolManagement> ControlIdentifierInterpretation;
    BindableMemberValue<open62541Cpp::DateTime_t> LastUsage;
    BindableMember<Tool_Locked_t> Locked;
    BindableMemberValue<bool> PlannedForOperating;
    //ToolLife;
    //Location;
  };

} // namespace machineTool

REFL_TYPE(machineTool::Tool_Locked_t,
          open62541Cpp::attribute::UaVariableType{
              .NodeId = open62541Cpp::constexp::NodeId(constants::NsMachineToolUri, UA_MACHINETOOLID_TOOLTYPE)})
REFL_FIELD(Value,
           open62541Cpp::attribute::MemberInTypeNodeId{
               .NodeId = open62541Cpp::constexp::NodeId(constants::NsMachineToolUri, UA_MACHINETOOLID_TOOLTYPE_LOCKED)},
           open62541Cpp::attribute::UaVariableTypeValue())
REFL_FIELD(ReasonForLocking,
           open62541Cpp::attribute::MemberInTypeNodeId{
               .NodeId = open62541Cpp::constexp::NodeId(constants::NsMachineToolUri, UA_MACHINETOOLID_TOOLTYPE_LOCKED_REASONFORLOCKING)})
REFL_END

REFL_TYPE(machineTool::Tool_t,
          Bases<machineTool::BaseTool_t>(),
          open62541Cpp::attribute::UaObjectType{
              .NodeId = open62541Cpp::constexp::NodeId(constants::NsMachineToolUri, UA_MACHINETOOLID_TOOLTYPE)})
REFL_FIELD(ControlIdentifier1,
           open62541Cpp::attribute::MemberInTypeNodeId{
               .NodeId = open62541Cpp::constexp::NodeId(constants::NsMachineToolUri, UA_MACHINETOOLID_TOOLTYPE_CONTROLIDENTIFIER1)})
REFL_FIELD(ControlIdentifier2,
           open62541Cpp::attribute::MemberInTypeNodeId{.NodeId = open62541Cpp::constexp::NodeId(constants::NsMachineToolUri, UA_MACHINETOOLID_TOOLTYPE_CONTROLIDENTIFIER2)},
           open62541Cpp::attribute::PlaceholderOptional())
REFL_FIELD(ControlIdentifierInterpretation,
           open62541Cpp::attribute::MemberInTypeNodeId{
               .NodeId = open62541Cpp::constexp::NodeId(constants::NsMachineToolUri, UA_MACHINETOOLID_TOOLTYPE_CONTROLIDENTIFIERINTERPRETATION)})
REFL_FIELD(LastUsage,
           open62541Cpp::attribute::MemberInTypeNodeId{.NodeId = open62541Cpp::constexp::NodeId(constants::NsMachineToolUri, UA_MACHINETOOLID_TOOLTYPE_LASTUSAGE)},
           open62541Cpp::attribute::PlaceholderOptional())
REFL_FIELD(Locked,
           open62541Cpp::attribute::MemberInTypeNodeId{
               .NodeId = open62541Cpp::constexp::NodeId(constants::NsMachineToolUri, UA_MACHINETOOLID_TOOLTYPE_LOCKED)})
REFL_FIELD(PlannedForOperating,
           open62541Cpp::attribute::MemberInTypeNodeId{
               .NodeId = open62541Cpp::constexp::NodeId(constants::NsMachineToolUri, UA_MACHINETOOLID_TOOLTYPE_PLANNEDFOROPERATING)},
           open62541Cpp::attribute::PlaceholderOptional())
REFL_END