/***************************************************************************
* Copyright (c) 2018, Martin Renou, Johan Mabille, Sylvain Corlay and      *
* Wolf Vollprecht                                                          *
*                                                                          *
* Distributed under the terms of the BSD 3-Clause License.                 *
*                                                                          *
* The full license is in the file LICENSE, distributed with this software. *
****************************************************************************/

#ifndef XPYT_LINECACHE_HPP
#define XPYT_LINECACHE_HPP

#include "pybind11/pybind11.h"
#include "pybind11/functional.h"

namespace py = pybind11;

namespace xpyt
{
    py::module get_linecache_module();
}

#endif