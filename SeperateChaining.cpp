#include <iostream>

using namespace std;
//#include "SeperateChaining.h"

node::node()
{
  next=NULL;
}
             //if we're taking mod with 10 total size of the array must also be 10 and seperate linkedlist chains shall be implemented with each node.

node::node(int t,float r,int v)
{
title=t;
rating=r;
voter=v;

next=NULL;
}

SeperateChaining::SeperateChaining()
{
  for(int loop=0;loop<size;loop++)
  {
    node *temp=&array[loop];
    temp->id=loop;
  }
}



void SeperateChaining::Insert(int t,float r,int v)
{

int tempRating=r;
node *temp,*secondryTemp,*tem;
temp=&array[tempRating%size];


/* adding at end but thats not feasible.
while (temp->next!=NULL) {
  temp=temp->next;

}
temp->next=new node(t,r,v);
*/
node *newnode=new node(t,r,v);
         newnode->next=temp->next;
         temp->next=newnode;
                                          //we also have to sort the linkedlists accring to the voters so whole data structure will be sorted into ratinsga nd voters
}

bool SeperateChaining::search(int QuestionNumber,int titleKey,float ratingKey,int voterskey)                    //keping the key float as it can be flexibly used for incase when we've to search ratings/voters/title.
{
int counterForSearch=0;
  node *searchKey;
  int mostPopularCounter;
  int tempKey=ratingKey;
int vv=0;
int ForQOneTwo=0,ForloopShift;
//////////////////////////////////////////////Q1
if (QuestionNumber==1) {
  node *MostPopular=new node(-1,0,0);

  for(int Qone=10;Qone>7;Qone--){                   //i'll have to change the whole structure if switch rom 1 to q 2
  searchKey=&array[Qone%size];
  searchKey=searchKey->next;
  while (searchKey!=NULL) {
      //if (searchKey->rating>mostPopular->rating && searchKey->voter>mostPopular->voter) {
   if(searchKey->rating*searchKey->voter>MostPopular->rating*MostPopular->voter){
      MostPopular=searchKey;
       mostPopularCounter=counterForSearch;
      }
    counterForSearch++;
    searchKey=searchKey->next;
  } //ending while loop

  } //endoing for loop
  std::cout << "Most popular movie Through SeperateChaining" <<"tt"<<MostPopular->title<<" "<<MostPopular->rating<<" "<< MostPopular->voter<<" After "<<mostPopularCounter<<" searches"<< '\n';
return 1;
  } //ending if for q1
   else if(QuestionNumber==2){

node *leastPopular=new node(-1,10,100);
for(int Qone=0;Qone<3;Qone++){                   //i'll have to change the whole structure if switch rom 1 to q 2
searchKey=&array[Qone%size];
searchKey=searchKey->next;
while (searchKey!=NULL) {
    //if (searchKey->rating>mostPopular->rating && searchKey->voter>mostPopular->voter) {
 if(searchKey->rating*searchKey->voter<leastPopular->rating*leastPopular->voter){
//if(searchKey->rating<leastPopular->rating && searchKey->voter<leastPopular->voter){
    leastPopular=searchKey;
     mostPopularCounter=counterForSearch;
    }

counterForSearch++;
  searchKey=searchKey->next;
} //ending while loop

} //endoing for loop
std::cout << "Least popular movie " <<"tt"<<leastPopular->title<<" "<<leastPopular->rating<<" "<< leastPopular->voter<<" After "<<mostPopularCounter<<" searches"<< '\n';
return 1;
} //ending if for q2

else if (QuestionNumber==3) {
  int PointZero=0,PointOne=0,PointTwo=0,PointThree=0,PointFour=0,PointFive=0,PointSix=0,PointSeven=0,PointEight=0,PointNine=0;
  int rat=0;
std::cout << "Movies having same rating by SeperateChaining" << '\n';
  for(int QSeven=0;QSeven<size;QSeven++)
  {
    searchKey=&array[QSeven%size];
  searchKey=searchKey->next;

  while (searchKey!=NULL) {
     rat=searchKey->rating;
    float ratin=searchKey->rating;
float rOne=searchKey->rating-0.1;
  if(rOne==rat){PointOne++;}
//std::cout << rat<<searchKey->rating<<" "<<ratin-0.2<< '\n';

//cout<<searchKey->rating<<"After cut "<<searchKey->rating-0.4<<" "<<rat<<endl;
float rTwo= ratin-0.2;
  if(rTwo==rat)
  {PointTwo++;//cout<<searchKey->rating<<endl;
  }

float rThree=searchKey->rating-0.3;
  if(rThree==rat){PointThree++;
  //  cout<<searchKey->rating<<endl;
  }

float rFour=searchKey->rating-0.4;
  if(rFour==rat){PointFour++;
    //cout<<searchKey->rating<<endl;}
}

float rFive=searchKey->rating-0.5;
  if(rFive==rat){PointFive++;
    //cout<<searchKey->rating<<endl;}
}

float rSix=searchKey->rating-0.6;
  if(rSix==rat){PointSix++;
     //cout<<searchKey->rating<<endl;}
}

float rSeven=searchKey->rating-0.7;
  if(rSeven==rat){PointSeven++;
    //cout<<searchKey->rating<<endl;}
}

float rEight=searchKey->rating-0.8;
  if(rEight==rat){PointEight++;
    //cout<<searchKey->rating<<endl;}
}

float rNine=searchKey->rating-0.9;
  if(rNine==rat){PointNine++;
    //cout<<searchKey->rating<<endl;}
}

//float rTen=searchKey->rating-1;
  if(searchKey->rating==rat){PointZero++;
    //cout<<searchKey->rating<<endl;}
}

  searchKey=searchKey->next;


  }
  cout<<rat<<"PointZero "<< PointZero<<endl<<rat<<" PointOne "<<PointOne<<endl<<rat<<" PointTwo "<<PointTwo<<endl<<rat<<" PointThree "<<PointThree<<endl<<rat<<" PointFour "<<PointFour<<endl<<rat<<" PointFive "<<PointFive<<endl<<rat<<" PointSix "<<PointSix<<endl<<rat<<" PointSeven "<<PointSeven<<endl<<rat<<" PointEight "<<PointEight<<endl<<rat<<" PointNine "<<PointNine<<endl<<endl;
  }
PointZero=0,PointOne=0,PointTwo=0,PointThree=0,PointFour=0,PointFive=0,PointSix=0,PointSeven=0,PointEight=0,PointNine=0;
  }
else if(QuestionNumber==4)
{  //ratingkey
int rateTemp=ratingKey;

cout<<"Movies rating greater than "<<ratingKey<<" by SeperateChaining\n";

  for(int Qfour=rateTemp;Qfour<size;Qfour++)
  {
    searchKey=&array[Qfour%size];
    searchKey=searchKey->next;

    while (searchKey!=NULL) {
    if(searchKey->rating>ratingKey)
    cout<<"tt"<<searchKey->title<<" "<<searchKey->rating<<" "<< searchKey->voter<<endl;
searchKey=searchKey->next;
    }
  }
}
else if (QuestionNumber==5) {  //voters are not sorted so we can t do anything in seperate chaining.
float totalSearchedVoters=0,ValidSearches=0;
cout<<"Movies voters greater than "<<voterskey<<" by SeperateChaining\n";

    for(int Qfive=0;Qfive<size;Qfive++)
    {
      searchKey=&array[Qfive%size];
      searchKey=searchKey->next;

      while (searchKey!=NULL) {
      if(searchKey->voter>voterskey){
      cout<<"tt"<<searchKey->title<<" "<<searchKey->rating<<" "<< searchKey->voter<<endl;
    ValidSearches++;}
    searchKey=searchKey->next;
totalSearchedVoters++;
      }
}
float VoteAccuracy=(ValidSearches/totalSearchedVoters)*100;
cout<<"Accuracy "<<VoteAccuracy<<" "<<totalSearchedVoters<<" "<<ValidSearches<<endl;
}
else if (QuestionNumber==6) {
  int tempR=ratingKey;
cout<<" by SeperateChaining\n";

  for(int QSix=tempR;QSix<size;QSix++)
  {
    searchKey=&array[QSix%size];
    searchKey=searchKey->next;

    while (searchKey!=NULL) {
    if(searchKey->voter>voterskey&&searchKey->rating>ratingKey)
    cout<<"tt"<<searchKey->title<<" "<<searchKey->rating<<" "<< searchKey->voter<<endl;
   searchKey=searchKey->next;
    }
  }
}else if (QuestionNumber==7) {

  counterForSearch=0;
cout<<"By SeperateChaining\n";

  for(int QSeven=0;QSeven<size;QSeven++)
  {
    searchKey=&array[QSeven%size];
    searchKey=searchKey->next;

    while (searchKey!=NULL) {
     if(searchKey->title==titleKey)
{std::cout << "Movie found Detail" << '\n';    cout<<"tt"<<searchKey->title<<" "<<searchKey->rating<<" "<< searchKey->voter<<"In "<<counterForSearch<<" Iterations"<<endl;  return 1;}
else if(searchKey->title<titleKey){break;}
else if(searchKey->title>titleKey){ searchKey=searchKey->next; }//std::cout <<searchKey->title <<" "<<ttl<<" "<<title<< '\n';}

counterForSearch++;
//searchKey=searchKey->next;
  }

  }





  return 0;
}











return 0;

}





void SeperateChaining::display()
{
  for(int loopb=0;loopb<size;loopb++)
  {node *temp=&array[loopb];

    while (temp!=NULL) {
        cout<<"Movie name "<<temp->title<<" Rating="<<temp->rating<<" Voters="<<temp->voter<<endl;
        temp=temp->next;
    }

  }
}
