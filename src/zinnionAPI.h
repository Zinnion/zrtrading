#include <Rcpp.h>
#include "Student.h"
#include "library.h"
#include <iostream>

using namespace Rcpp;
using namespace std;

//' Multiply a number by two
//'
//' @param x A single integer.
//' @export
// [[Rcpp::export]]
void test();

//' Multiply a number by two
//'
//' @param x A single integer.
//' @export
// [[Rcpp::export]]
std::vector<int> simulate_student();
