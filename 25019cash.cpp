#include <iostream>

using namespace std;

int main() {
  int money;
  cout << "請輸入金錢數量:";
  cin >> money;
  cout << money/50 << "個伍拾元。\n"
       << money%50/10 << "個拾元。\n"
       << money%50%10/5 << "個伍元。\n"
       << money%50%10%5 <<"個壹元。\n總共"
       << money/50+money%50/10+money%50%10/5+money%50%10%5 << "個硬幣。";
}
