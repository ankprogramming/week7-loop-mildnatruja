#include <iostream>

using namespace std;

int main() {

  cout << "For to while" << endl;

  // ตัวอย่างโปรแกรมที่ใช้ for

  int i = 0;
  for (i = 0; i < 10; i+1) {
    cout << "Run from for" << endl;
  }
  cout << "************END FOR************" << endl;

  // เขียนโปรแกรมที่ทำงานเหมือนด้านบนโดยใช้ while แทน for

    int u = 0;
    while (u < 10) {
        cout << "Run from while" << endl;
        u++;
    }

    cout << "************END while************" << endl;

  return 0;
}
