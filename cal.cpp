#include<iostream>
using namespace std;
int main()
{
  int a,b;
  cout<<"Enter the 1st number:";
  cin>>a;
  cout<<"Enter the 2nd number:";
  cin>>b;
  char op;
  cout<<"Enter the operation:";
  cin>>op;
  switch(op)
  {
  	case '+':
  		cout<<"Addition of no.'s is:"<<a+b;
  		break;
  	case '-':
  		cout<<"Substraction of no.'s is:"<<a-b;
  		break;
  	case '*':
  		cout<<"Multiplication of no.'s is:"<<a*b;
  		break;
  	case '/':
  		cout<<"Division of no.'s is:"<<a/b;
  		break;
  	default:
  		cout<<"incorrect operation";
  }
}
