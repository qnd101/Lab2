#include<iostream>
#include<vector>

using namespace std;

int N,M;
vector<int> vec;

void func(int cnt) {
   vec = vector<int>();
   for(int i=1; i<=M; i++) vec.push_back(i);
   while (true) {
      for(int j=0;j<M;j++) cout << vec[j];
      cout << " ";
      int i=M-1;
      while(i>=0 && vec[i]==N-M+i+1) i--; 
      if (i==-1) break;
      vec[i]++;
      for (int j=i+1;j<M;j++) vec[j]=vec[i]+(j-i);
   }
   cout << endl;
}

int main() {
   cin >> N >> M;
   func(0);
}
