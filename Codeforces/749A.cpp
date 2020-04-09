#include <bits/stdc++.h>

using namespace std;

int main(){
     int n;
     cin>>n;
     if(n%2){
          int no=n/2;
          cout<<no<<"\n";
          for(int i=0;i<no-1;i++){
               cout<<"2 ";
          }
          cout<<"3 ";
     }
     else{
          int no=n/2;
          cout<<no<<"\n";
          for(int i=0;i<no;i++){
               cout<<"2 ";
          }        
     }
     cout<<endl;
}
