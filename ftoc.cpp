#include <iostream>
using namespace std;

int main() {
  float celsius;
  cout << "請輸入攝氏溫度：";
  cin >> celsius;
  
  cout << "華氏溫度為：" << celsius * 9 / 5 + 32 << "\n";
}
