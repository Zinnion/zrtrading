#include "zinnionAPI.h"

std::vector<int> simulate_student() {
  Student s = Student("bob", 10, true);
  return s.GetFavoriteNumbers();
}

void test() {
  cout << "mauro" << endl;
  cout << add_int(1,3) << endl;
}
