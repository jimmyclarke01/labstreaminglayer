
// (C) Copyright Tobias Schwinger
//
// Use modification and distribution are subject to the lslboost Software License,
// Version 1.0. (See http://www.lslboost.org/LICENSE_1_0.txt).

//------------------------------------------------------------------------------

#ifndef BOOST_FT_FUNCTION_TYPE_HPP_INCLUDED
#define BOOST_FT_FUNCTION_TYPE_HPP_INCLUDED

#include <lslboost/function_types/detail/synthesize.hpp>
#include <lslboost/function_types/detail/to_sequence.hpp>

namespace lslboost 
{ 
  namespace function_types 
  {
    template<typename Types, typename Tag = null_tag> struct function_type
      : detail::synthesize_func<typename detail::to_sequence<Types>::type, Tag>
    {
      BOOST_MPL_AUX_LAMBDA_SUPPORT(2,function_type,(Types,Tag))
    };
  }
  BOOST_TT_AUX_TEMPLATE_ARITY_SPEC(2,function_types::function_type)
}

#endif
 
