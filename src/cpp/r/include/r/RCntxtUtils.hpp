/*
 * RCntxtUtils.hpp
 *
 * Copyright (C) 2009-16 by RStudio, Inc.
 *
 * Unless you have received this program directly from RStudio pursuant
 * to the terms of a commercial license agreement with RStudio, then
 * this program is licensed to you under the terms of version 3 of the
 * GNU Affero General Public License. This program is distributed WITHOUT
 * ANY EXPRESS OR IMPLIED WARRANTY, INCLUDING THOSE OF NON-INFRINGEMENT,
 * MERCHANTABILITY OR FITNESS FOR A PARTICULAR PURPOSE. Please refer to the
 * AGPL (http://www.gnu.org/licenses/agpl-3.0.txt) for more details.
 *
 */

#ifndef R_CONTEXT_UTILS_HPP
#define R_CONTEXT_UTILS_HPP

#include <core/Error.hpp>
#include "RCntxt.hpp"

namespace rstudio {
namespace r {
namespace context {

#define BROWSER_FUNCTION 0

RCntxt globalContext();
   
bool inBrowseContext();

bool inDebugHiddenContext();

RCntxt firstFunctionContext();

RCntxt getFunctionContext(const int depth, 
                          int* pFoundDepth = NULL,
                          SEXP* pEnvironment = NULL);

} // namespace context
} // namespace r
} // namespace rstudio

#endif
