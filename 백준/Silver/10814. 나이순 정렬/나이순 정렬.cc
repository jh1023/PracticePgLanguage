#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

bool comp(pair<int, string>a, pair<int, string>b) {
   return a.first < b.first;
}

int main(void) {
   int n;
   cin >> n;

   pair<int, string>mem_cop;
   vector<pair<int, string>>mem;

   for (int i = 0; i < n; i++) {
      cin >> mem_cop.first >> mem_cop.second;
      mem.push_back(mem_cop);
   }

   stable_sort(mem.begin(), mem.end(), comp);

   for (int i = 0; i < mem.size(); i++) {
      cout << mem.at(i).first << ' ' << mem.at(i).second << '\n';
   }
   return 0;
}  
