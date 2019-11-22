#include <iostream>
using namespace std;

int main() {
  float fahrenheit;
  cout << "請輸入華氏溫度：";
  cin >> fahrenheit;
  
  cout << "攝氏溫度為：" << (fahrenheit - 32) * 5 / 9 << "\n";
}
