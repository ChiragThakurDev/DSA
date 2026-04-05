//Take a character and check if it’s a vowel or consonant
//vowel a,e,o,i,u
//consonant b,c,d,f,g,h,j,k,l,m,n,p,q,r,s,t,v,w,x,y,z
#include<iostream>
using namespace std;
void check(char val){
    if(val=='a'||val=='e'||val=='i'||val=='o'||val=='u'||
    val=='A'||val=='E'||val=='I'||val=='O'||val=='U'){
        cout<<"The letter is vowel: "<<val<<endl;
    }
    else{
        cout<<"The letter is consonant: "<<val<<endl;
    }
}

int main(){
    check('a');
    check('l');
    check('u');
    check('k');
    check('i');
    check('s');
    check('j');
    check('e');
    return 0;
}