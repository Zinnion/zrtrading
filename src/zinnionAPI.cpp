#include "zinnionAPI.h"

std::vector<int> simulate_student() {
  Student s = Student("bob", 10, true);
  return s.GetFavoriteNumbers();
}

void test() {
  cout << "mauro" << endl;
  cout << add_int(1,3) << endl;
  char *a = "abc"; // valid and safe in either C or C++.
  char *b = "abc"; // valid and safe in either C or C++.
  char *c = "trade:COINBASEPRO:BTC-USD"; // valid and safe in either C or C++.
  init(a,b,c);
}
