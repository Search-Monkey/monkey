/**
 * \file mul_test.cpp
 * \brief 
 * \author Andrew Bogdanov (AB), andreyb@dins.ru
 * \copyright Copyright (c) 1999-2017 RingCentral, Inc.
 *
 * CHANGE HISTORY
 * 
 * \date 
 * - 22.02.2017 created by AB(Andrew Bogdanov)
 *
 */


#include <iostream>
#include </home/semen/monkey/src/common/mul.h>
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_CASE( my_test )
{
BOOST_CHECK( mul(2,2)==4);

BOOST_REQUIRE( mul(2,3)==6);

}
