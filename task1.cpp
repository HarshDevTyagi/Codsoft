#include<iostream.h>
#include <time.h>
 using namespace std;
void name(string name1)
{     
   system(" color 1a");
    cout<<endl<<"                                 "<<"Welcome "<<name1<<" to guess the number game of codsoft "<<endl;
}
int main()
{   string name1;
    cout<<endl<<"Enter player name :- " ;
    cin>> name1;
    name(name1);

    srand(time(0));
    int a=(rand()%9)+1;
 

      int guessnum;
      cout<<endl<<"                                       "<<name1<<" guess the number between  1 to 9"<<endl;
  int i=1;
  while(i!=0)
  { 
          cin>>guessnum;
          if(guessnum==a)
            {
                   cout<<endl<<"                                          "<< name1<< " you win the game your number is correct ";
                    cout<<"                                                    "<<"Nice play ";
            }
            else if(guessnum>a)
            {
               cout<<endl<<"                                            "<<name1<<"   your number is larger try again"<<endl;
            }
                else{
                    cout<<endl<<"                                            "<<name1<<"   your number is smaller try again"<<endl;
                  
                      }
  }   
return 0;
 }