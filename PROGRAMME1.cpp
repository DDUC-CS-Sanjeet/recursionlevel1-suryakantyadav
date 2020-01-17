#include<iostream>
using namespace std;
int recursive_gcd(int a,int b)
{   
   int temp=0;
   while(b!=0)
   {
   	temp=a;
   	a=b;
   	b=temp%b;
   }
   return a;
   
}
   
int iterative_gcd(int a,int b)   
{     if(a<0||b<0)
      throw "cannot find";
      else if(b==0)
	return a;
	else
	return iterative_gcd(b,a%b) 
    
}

int iterative_fact(int num)
{
	if(num<0)
	throw"invalid argument";
	if(num==0)
	return 1;
	else
	return num*fact(num-1);
}

int recursive_fact(int n)
{
	if (n==0)
	return 1;
	else
	return n*fact(n-1);
}



int main(choice)
{
	int choice,hcfr,hcfi,factorialr,factoriali,poweri,powerr,p=1,fib,fibi;
	
	cout<<"1. gcd recursive";
	cout<<"\n 2. gcd iterative";
	cout<<"\n 3. fact recursive";
	cout<<"\n 4. fact iterative";
	cout<<"\n 5. power recursive";
	cout<<"\n 6. power iterative";
	cout<<"\n 7. fibo nrecursive";
	cout<<"\n 8. fibo iterative";
}
