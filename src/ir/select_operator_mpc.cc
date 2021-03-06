// Copyright (c) 2015 Ionel Gog <ionel.gog@cl.cam.ac.uk>

/*
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * THIS CODE IS PROVIDED ON AN *AS IS* BASIS, WITHOUT WARRANTIES OR
 * CONDITIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT
 * LIMITATION ANY IMPLIED WARRANTIES OR CONDITIONS OF TITLE, FITNESS FOR
 * A PARTICULAR PURPOSE, MERCHANTABLITY OR NON-INFRINGEMENT.
 *
 * See the Apache Version 2.0 License for specific language governing
 * permissions and limitations under the License.
 */

#include "ir/select_operator_mpc.h"

#include <limits>
#include <map>
#include <utility>

namespace musketeer {
namespace ir {

  OperatorType SelectOperatorMPC::get_type() {
    return SELECT_OP_MPC;
  }

  bool SelectOperatorMPC::isMPC() {
    return true;
  }

  OperatorInterface* SelectOperatorMPC::clone() {
    return new SelectOperatorMPC(get_input_dir(), get_condition_tree(), columns,
                                 get_relations(), get_output_relation());
  }

} // namespace ir
} // namespace musketeer
