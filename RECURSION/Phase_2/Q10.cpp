//Find nCr (Combination formula) recursively using Pascal’s relation.
#include<iostream>
using namespace std;

int pascal(int n,int r){
    if(r==0 ||r==n ) return 1;
    return pascal(n-1,r-1)+pascal(n-1,r);
}

int main(){
   cout<<pascal(5,5)<<" ";
   cout<<endl;
   cout<<pascal(5,4)<<" ";
   cout<<endl; 
   cout<<pascal(5,3)<<" ";
   cout<<endl; 
   return 0;
}

//Logic here is
//The pascal's relation formula is nCr = (n-1)C(r-1) + (n-1)Cr
//So for the base case we need the we have to check whether the r is 0 or r is equal to n then we will return 1 because nC0 and nCn is always 1.
// then apply the pascal's relation formula recursively to calculate the value of nCr.
// i.e pascal(n,r) = pascal(n-1,r-1) + pascal(n-1,r)