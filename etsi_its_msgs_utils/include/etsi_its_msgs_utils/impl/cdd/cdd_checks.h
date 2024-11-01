/*
=============================================================================
MIT License

Copyright (c) 2023-2024 Institute for Automotive Engineering (ika), RWTH Aachen University

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
=============================================================================
*/

/**
 * @file impl/cdd/cdd_checks.h
 * @brief Sanity-check functions etc. for the ETSI ITS Common Data Dictionary (CDD)
 */

#ifndef ETSI_ITS_MSGS_UTILS_IMPL_CDD_CDD_CHECKS_H
#define ETSI_ITS_MSGS_UTILS_IMPL_CDD_CDD_CHECKS_H

template <typename T1, typename T2>
void throwIfOutOfRange(const T1& val, const T2& min, const T2& max, const std::string val_desc) {
  if (val < min || val > max)
    throw std::invalid_argument(val_desc + " value is out of range (" + std::to_string(min) + "..." +
                                std::to_string(max) + ")!");
}

#endif  // ETSI_ITS_MSGS_UTILS_IMPL_CDD_CDD_CHECKS_H