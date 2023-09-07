#pragma once

namespace fast_io
{

template<typename handletype,
	typename iobuffertraits,
	typename decoratorstp>
struct basic_io_deco_filter
{
public:
	using handle_type = handletype;
	using traits_type = iobuffertraits;
	using input_char_type = typename traits_type::input_char_type;
	using output_char_type = typename traits_type::output_char_type;

	using decorators_type = decoratorstp;

#ifndef __INTELLISENSE__
#if __has_cpp_attribute(msvc::no_unique_address)
[[msvc::no_unique_address]]
#elif __has_cpp_attribute(no_unique_address) >= 201803
[[no_unique_address]]
#endif
#endif
	handle_type handle;

#ifndef __INTELLISENSE__
#if __has_cpp_attribute(msvc::no_unique_address)
[[msvc::no_unique_address]]
#elif __has_cpp_attribute(no_unique_address) >= 201803
[[no_unique_address]]
#endif
#endif
	decorators_type decorators;
};

};
