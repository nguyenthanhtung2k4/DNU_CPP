#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
   clock_t begin = clock(); //ghi l?i th?i gian d?u

   //�o?n chuong tr�nh c?n do

   clock_t end = clock(); //ghi l?i th?i gian l�c sau
   cout<<"Time run: "<<(float)(end-begin)/CLOCKS_PER_SEC<<" s"<<endl;
   return 0;
}
