#include<iostream>
using namespace std;
int c=12;
int main() 
{
//********build in data types*************
    
// int a,b,c; // cout<<"enter the value of a:";
// cin>>a;
// cout<<"enter the value of b:";
// cin>>b;
// c=a+b;
// cout<<"sum is:"<<c<<endl;
// cout<<"value of glo is:"<<::c; //(:: this is for execute the global variable)
     
    
//*************float, double , long double literals*********
    
// float d = 12.1F;
// long double e= 13.1l;
// cout<<"enter the size of 12.1 is:"<<sizeof(12.1)<<endl; //sizeof memeory ka size batata hai in bytes
// cout<<"enter the size of 12.1f is:"<<sizeof(12.1f)<<endl;
// cout<<"enter the size of 12.1F is:"<<sizeof(12.1F)<<endl;
// cout<<"enter the size of 13.1l is:"<<sizeof(13.1l)<<endl;
// cout<<"enter the size of 13.1L is:"<<sizeof(13.1L)<<endl;
// cout<<"enter the value of float is :"<<d<<"\nenter the value of long double is: "<<e<<endl; 
   
//*************references variables********//

//rohan----rohu----monty----sabh ek hi hai 

 float x = 234;
 float & y = x;
 int a = 14;
 int & b = a;
 cout<<b<<"\n"<<a<<endl;
 cout<<x<<"\n"<<y<<endl;
// ***************type casting*********
int s = 97;
float g = 34.56;
char ascii = 'j';
cout<<"the value of ascii is "<<int(ascii)<<endl;
cout<<"the value of s is :"<<char(s)<<endl;
cout<<"the value of s is:"<<float(s)<<endl;
cout<<"the value of g is :"<<int(g)<<endl;
int c = int(g);
cout<<"the value of c is :"<<c<<endl;

cout<<"the expression is:"<<s+int(g)<<endl;
cout<<"the expression is:"<<s+float(s)<<endl;

return (0);
}