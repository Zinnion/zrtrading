#include <Rcpp.h>
#include "Student.h"
#include "library.h"
#include <iostream>

using namespace Rcpp;
using namespace std;

// [[Rcpp::export]]
void test();

// [[Rcpp::export]]
std::vector<int> simulate_student();
