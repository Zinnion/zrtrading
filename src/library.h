#pragma once

extern "C" {
  int init(char *token, char *account, char *subscriptions);
  void c_square(int n, const double *array_in, double *array_out);
  char * echo(char * what);
  int add_int(int a, int b);
  int greet(const char *name, int year, char *out);
}
