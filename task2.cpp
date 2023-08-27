#include<iostream.h>
 using namespace std;
void  add(int num1)
 {   int number2;
   cout<<"Enter the second number "<<endl;
   cin>>number2;
   cout<< "Answer ="<<num1+number2;
}
void  sub(int num1)
 {   int number2;
   cout<<"Enter the second number "<<endl;
   cin>>number2;
   cout<< "Answer ="<<num1-number2;
}
void  mul(int num1)
 {   int number2;
   cout<<"Enter the second number "<<endl;
   cin>>number2;
   cout<< "Answer ="<<num1*number2;
}
void  div(int num1)
 {   int number2;
   cout<<"Enter the second number "<<endl;
   cin>>number2;
   cout<< "Answer ="<<num1/number2;
}
int  main()
{
     string  s;
     
     cin>>s;
     cout<<"hello "<< s<<endl;;
     int number1;
     cout<<"Enter your first number"<<endl; 
     cin>>number1;
     cout<<" Enter you operator as ....(like := Add,Sub,Mul,Div)"<<endl;
     string  operation;
     cin>>operation;
     if(operation== "Add")
     {
        add(number1);
     }
     if(operation== "Sub")
     {
        sub(number1);
     }
     if(operation== "Mul")
     {
        mul(number1);
     }
     if(operation== "Div")
     {
        div(number1);
     }
}