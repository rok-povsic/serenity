/*
 * Copyright (c) 2020, the SerenityOS developers.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice, this
 *    list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#pragma once

#include <AK/FlyString.h>

namespace Web::Namespace {

#define ENUMERATE_NAMESPACES                                            \
    __ENUMERATE_NAMESPACE(HTML, "http://www.w3.org/1999/xhtml")         \
    __ENUMERATE_NAMESPACE(MathML, "http://www.w3.org/1998/Math/MathML") \
    __ENUMERATE_NAMESPACE(SVG, "http://www.w3.org/2000/svg")            \
    __ENUMERATE_NAMESPACE(XLink, "http://www.w3.org/1999/xlink")        \
    __ENUMERATE_NAMESPACE(XML, "http://www.w3.org/XML/1998/namespace")  \
    __ENUMERATE_NAMESPACE(XMLNS, "http://www.w3.org/2000/xmlns/")

#define __ENUMERATE_NAMESPACE(name, namespace_) extern FlyString name;
ENUMERATE_NAMESPACES
#undef __ENUMERATE_NAMESPACE

}
