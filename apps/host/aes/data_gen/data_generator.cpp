#include "../inc/const.h"
// #include <cassert>
// #include <cstdlib>
#include <iostream>
// #include <omp.h>
// #include <string>
// #include <vector>

using namespace std;

char random_char() {
  int min_ascii = 65;
  int max_ascii = 90;
  return min_ascii + rand() % (max_ascii - min_ascii + 1);
}

int main() {
  ios::sync_with_stdio(false);

  FILE *filest = freopen("aes_input.txt", "w", stdout);

  for (int i = 0; i < FILE_ROW_NUM; i++) {
    string line = "";
    for (int j = 0; j < FILE_COL_NUM; j++) {
      line += random_char();
    }
    cout << line << endl;
  }
  fclose(stdout);

  return 0;
}
