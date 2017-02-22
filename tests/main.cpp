/**
 * \file main.cpp
 * \brief 
 * \author Andrew Bogdanov (AB), andreyb@dins.ru
 * \copyright Copyright (c) 1999-2017 RingCentral, Inc.
 *
 * CHANGE HISTORY
 * 
 * \date 
 * - 21.02.2017 created by AB(Andrew Bogdanov)
 *
 */

#define BOOST_TEST_MODULE helltest

#include <iostream>
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(helltest)

BOOST_AUTO_TEST_CASE(test1)
{
  //BOOST_CHECK(1, 2);
}

BOOST_AUTO_TEST_SUITE_END()
