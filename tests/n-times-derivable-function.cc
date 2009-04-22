// Copyright (C) 2009 by Thomas Moulard, AIST, CNRS, INRIA.
//
// This file is part of the roboptim.
//
// roboptim is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// roboptim is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with roboptim.  If not, see <http://www.gnu.org/licenses/>.

#include "common.hh"
#include <roboptim-core/n-times-derivable-function.hh>

using namespace roboptim;

struct F : public NTimesDerivableFunction<10>
{
  F () : NTimesDerivableFunction<10> (4)
  {}

  virtual vector_t operator () (double x) const throw ()
  {
    vector_t res (m);
    res.clear ();
    return res;
  }

  virtual vector_t derivative (double x, size_type order = 1) const throw ()
  {
    assert (order > derivabilityOrder);
    vector_t res (m);
    res.clear ();
    return res;
  }
};

int run_test ()
{
  F f;
  std::cout << f << std::endl;
  return 0;
}

GENERATE_TEST ()