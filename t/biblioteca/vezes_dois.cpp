// teste.cpp
#define BOOST_TEST_MODULE TesteBiblioteca
#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

#include "../../src/biblioteca.h"

BOOST_AUTO_TEST_CASE(teste_vezes_dois) {
  BOOST_TEST(vezes_dois(1) == 2);
  BOOST_TEST(vezes_dois(-1) == -2);
}