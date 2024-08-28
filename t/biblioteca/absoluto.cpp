// teste.cpp
#define BOOST_TEST_MODULE TesteBiblioteca
#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

#include "../../src/biblioteca.h"

BOOST_AUTO_TEST_CASE(teste_absoluto) {
  BOOST_TEST(absoluto(1) == 1);
  BOOST_TEST(absoluto(-1) == 1);
}