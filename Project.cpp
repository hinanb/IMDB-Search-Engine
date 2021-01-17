#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string>
#include <chrono>
#include<cmath>

#include "windows.h"
#include "Headers\SeperateChaining.h"       //seperate chainuing implemented.
#include "ClassFiles\SeperateChaining.cpp"
                          //btree implemented
#include "ClassFiles\SeperateChainingModified.cpp"
#include "ClassFiles\LinkedList.cpp"
                                                   //it takes time to print the data so if we only fetch the data it will take
using namespace std;

SeperateChaining linkedl;         //so we can use it in whole prject file      i'll change the namse to SeperateChaining stuuf
  linkedlistModified myDataStructure;
LinkedList linkedlist;

int char_to_int(char Char_toInt)
{ int converted;
    switch(Char_toInt)
    {
        case '0':
            {
              converted=0;
              break;
            }
        case '1':
            {
                converted=1;
                break;
            }
        case '2':
            {
                converted=2;
                break;
            }
                    case '3':
            {
                converted=3;
                break;
            }

                    case '4':
            {
                converted=4;
                break;
            }
                    case '5':
            {
                converted=5;
                break;
            }
                    case '6':
            {
                converted=6;
                break;
            }
                    case '7':
            {
                converted=7;
                break;
            }
                    case '8':
            {
                converted=8;
                break;
            }
                    case '9':
            {
                converted=9;
                break;
            }
            default:
            converted=0;

    }
    return converted;
}
int str_toint(string StringConversion)
{
    int conversion=0;
    int index=8;
    for (int loop=0;loop<7; loop++)
    {
    //    cout<<res<<endl;
        conversion += char_to_int(StringConversion[index])* pow(10,loop);
      //  cout<<StringConversion[ind]<<endl;
        index--;
    }
    return conversion;
}


void QuestionAnalysis()
{
  //for the implementation of questions we'll make overloaded functions.
  int QuestionSelection,NumberOfVoters;
  float Rating;
while(true){
std::cout << "Select a question from the following:" << '\n';
std::cout << "1- Which one is	the	most popular movie?\n2- Which one is	the	least	popular	movie?\n3- How	many	movies	have	same	ratings?	 " << '\n';
std::cout << "4- Movies ratings greater than *int* \n5- Movies whose voters are greater than *Some int* \n6- Movies with rating greater than *Float* and Voters greater than *Some int* " << '\n';
std::cout << "7-Search Movie with title" << '\n';         //not implemented

std::cin >> QuestionSelection;
if (QuestionSelection==-1) {
  break;
}

if (QuestionSelection==1) {
  //std::cout << "Most popular movie is" << '\n';
 linkedl.search(QuestionSelection,-1,-1,-1);      //most popular
myDataStructure.search(QuestionSelection,-1,-1,-1);
linkedlist.search(QuestionSelection,-1,-1,-1);
}
else if (QuestionSelection==2) {
  std::cout << "Least popular movie is " << '\n';
     linkedl.search(QuestionSelection,-2,-2,-2);           //we'll send -1 or \n if we dont have to search for those traits
     myDataStructure.search(QuestionSelection,-2,-2,-2);
     linkedlist.search(QuestionSelection,-2,-2,-2);
}
else if (QuestionSelection==3) {
     linkedl.search(QuestionSelection,-3,-3,-3);           //we'll send -1 or \n if we dont have to search for those traits
    Sleep(3000);
     myDataStructure.search(QuestionSelection,-3,-3,-3);

}
else if (QuestionSelection==4) {
  std::cout << "Please enter desired Rating" << '\n';
  std::cin >>Rating ;
     linkedl.search(QuestionSelection,-4,Rating,-4);           //we'll send -1 or \n if we dont have to search for those traits
     Sleep(3000);
     myDataStructure.search(QuestionSelection,-4,Rating,-4);
     Sleep(3000);
     linkedlist.search(QuestionSelection,-4,Rating,-4);
}else if (QuestionSelection==5) {
  std::cout << "Please enter desired Voters" << '\n';
  std::cin >>NumberOfVoters;

  linkedl.search(QuestionSelection,-5,-5,NumberOfVoters);
Sleep(5000);
     myDataStructure.search(QuestionSelection,-5,-5,NumberOfVoters);
 Sleep(5000);
     linkedlist.search(QuestionSelection,-5,-5,NumberOfVoters);
}

else if (QuestionSelection==6) {
  std::cout << "Please enter Desired Rating" << '\n';
  std::cin >> Rating;

  std::cout << "Please enter Desired Voters" << '\n';
  std::cin >> NumberOfVoters;
     linkedl.search(QuestionSelection,-6,Rating,NumberOfVoters);
Sleep(3000);
     myDataStructure.search(QuestionSelection,-6,Rating,NumberOfVoters);
Sleep(3000);
         linkedlist.search(QuestionSelection,-6,Rating,NumberOfVoters);
}
else if (QuestionSelection==7) {
  std::cout << "Please enter Desired Movie Title" << '\n';
int  t;        //dont need to insert 'tt'
  std::cin >> t;

linkedl.search(QuestionSelection,t,-7,-7);

myDataStructure.search(QuestionSelection,t,-7,-7);

linkedlist.search(QuestionSelection,t,-7,-7);

}

}


//SeperateChaining(rating,voters) //we'll call these functions placed outside in tehir perosnal files and the'll show results as accordingly.
//TwoThreeFourTree(rating,voters)

}

int main ()
{
  string STRING;
  float rating;
   int voters;
   string title;              //we'll later on convert and insert it into the form of int so we can apply any search on it.
int ttl;

  ifstream infile;
  infile.open("data.txt");
  float counter=0;

std::cout << "Reading File and Preparing All datastructures" << '\n';
auto start = chrono::steady_clock::now();

  counter=0;
  int v=0,underHundred,UpperHundred=0;

  while(!infile.eof())
//while(counter<500000)
  {
    getline(infile,STRING); // Saves the line in STRING.
    infile>>STRING;
    //cout<<STRING<<" "; // Prints our STRING.
    ttl=str_toint(STRING);

  title=STRING;
  infile>>rating;
  infile>>voters;

  myDataStructure.Insert(ttl,rating,voters); //we are inserting inserting data simultanrously into all ds
  linkedl.Insert(ttl,rating,voters);
  linkedlist.Add(ttl,rating,voters);

  counter++;
}
//linkedlist.display();
std::cout << "File Reading Done. Data Inserted in all datastructures Successfully! in "  ;


auto stop = chrono::steady_clock::now();
cout << chrono::duration_cast<chrono::seconds>(stop - start).count() <<" sec" <<endl;
cout<<"\nTotal DataPoints "<<counter<<endl;

QuestionAnalysis();

cout<<counter;
infile.close();
}
