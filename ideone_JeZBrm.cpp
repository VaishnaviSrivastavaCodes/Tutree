#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

void check(string &s1, string &s2){
   if(s2.length()>s1.length())
    {
       cout<<"Not possible";
    }
      int n= s2.length();
      sort(s2.begin(), s2.end());
    for(int i=0;i<=s1.size()-n;i++){
          string s3 = s1.substr(i, n);
          sort(s3.begin(), s3.end());
           if(s3 == s2)
            cout<<"substring "<<s1.substr(i,n)<<" present at " <<"index "<<i<<"\n";
}
}


int main()
{
string S1, S2;
cin>>S1>>S2;
  check(S1,S2);
}