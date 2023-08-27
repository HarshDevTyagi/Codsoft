#include<iostream.h>
#include<bits/stdc++.h>
#include<iomanip>
#include<string.h>
using namespace std;
vector<char> h(9 ) ;
 int i;
  char symbol;
 int structure ()
 {
   cout<<"           "<<h[0]<<" |    "<<h[1]<<"    |"<<"  " << h[2]<<endl;
    cout<<"          ___________________   "<<endl;
    cout<<"           "<<h[3]<<" |    "<<h[4]<<"    |"<<"  " << h[5]<<endl;
    cout<<"          ___________________   "<<endl;
    cout<<"           "<<h[6]<<" |    "<<h[7]<<"    |"<<"  " << h[8]<<endl;
    }
int player1()
 {
    string name;
    cout<<"Enter the name of first player "<<endl;
    getline(cin,name);
    cout<<endl<<"Welcome "<<name<<" your symbol is (X)"<<endl<<endl;
 }
 int player2()
 {
    string name;
    cout<<"Enter the name of Second  player "<<endl;
    getline(cin,name);
    cout<<endl<<"Welcome "<<name<<" your symbol is (O)"<<endl<<endl;
 } 
int input( )
 {   int n=1;
     int count=0;
              while( n>0)
               {              harh:
                           cout<<"player1 enter the poisition  "<<endl;
                        cin>>i;
                       h[i]='X';
                       count++;
                        system("CLS");
                          structure();                  
        if((h[0]=='X'&&h[1]=='X'&&h[2]=='X')||(h[0]=='X'&&h[3]=='X'&&h[6]=='X')||(h[0]=='X'&&h[4]=='X'&&h[8]=='X') ||(h[6]=='X'&&h[7]=='X'&&h[8]=='X')|| (h[2]=='X'&&h[5]=='X'&&h[8]=='X') || (h[1]=='X'&&h[4]=='X'&&h[7]=='X')||(h[3]=='X'&&h[4]=='X'&&h[5]=='X')||(h[2]=='X'&&h[4]=='X'&&h[6]=='X'))
        {                
                      system("CLS");
                       structure();
                        cout<<"player 1 is winner";
                        break;
            }
      
     

          else
          {      ha:
                  cout<<"player2 enter the poisition  and symbol"<<endl;
                cin>>i;
                               h[i]='O';
                                count++;
                if((h[0]=='O'&&h[1]=='O'&&h[2]=='O')||(h[0]=='O'&&h[3]=='O'&&h[6]=='O')||(h[0]=='O'&&h[4]=='O'&&h[8]=='O') ||(h[6]=='O'&&h[7]=='O'&&h[8]=='O')|| (h[2]=='O'&&h[5]=='O'&&h[8]=='O')|| (h[1]=='O'&&h[4]=='O'&&h[7]=='O')||(h[3]=='O'&&h[4]=='O'&&h[5]=='O')||(h[2]=='O'&&h[4]=='O'&&h[6]=='O'))
                 { 
                     system("CLS");
                     structure();
                  cout<<"          "<<"player 2 is winner";
                  break;
                  }
                   system("CLS");
                  structure();
                               if(count>7)
                                   {
                                cout<<"            "<<"match drow"<<endl;
                                        break;
                                     }
             } 
       }
 }
int main()
 {
   player1();
   player2();
   input();
}