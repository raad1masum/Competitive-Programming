/*
ID: piraadw1
TASK: ride
LANG: C++                 
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ofstream fout ("ride.out");
    ifstream fin ("ride.in");
    string a, b;
    int out1=1, out2=1;
    fin >> a >> b;
    for (int i=0; i<a.size(); ++i)
    	out1*=a[i]-'A'+1;
   	for (int i=0; i<b.size(); ++i)
   		out2*=b[i]-'A'+1;
   	if (out1%47==out2%47)
   		fout << "GO" << endl;
   	else
   		fout << "STAY" << endl;
    return 0;
}