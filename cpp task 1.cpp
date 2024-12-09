#include <iostream>
#include <string>
using namespace std;
int main()
{
string A,B;
cout<<"Enter A , B"<<endl;
cin>>A>>B;
int si_a = A.size();
int si_b = B.size();
cout << si_a<<" "<<si_b<<endl;
string C= A +B;
cout<< C<<endl;
swap (A[0] ,B[0]);
cout <<A<<" "<<B<<endl;
return 0;
}

