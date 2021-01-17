
#include <iostream>
using namespace std;



class Modifiednode
{
public:
  int title;
  float rating;
  int voter;
  int id;
  Modifiednode *next;

  Modifiednode(int t,float r,int v)
  {
   title=t;
   rating=r;
   voter=v;

   next=NULL;
  }

  Modifiednode()
  {
   next=NULL;
  }

};
Modifiednode MyChaining[11][102];        //as to fit upto lac in 101 elemts and 102nd have greater than 1 lac votes.


class linkedlistModified
{
public:
  int size=11;

  void Insert(int ttl,float rate,int votes)
  {
    int tempRating=rate;
    int TempVotesGreater=(votes/2070726)*100;          //max vo
//  Modifiednode *tempo,*secondryTemp,*tem;
Modifiednode *t;

if (votes>100000) {
t=&MyChaining[tempRating%size][101];
}else{
  int votLocation=votes/1000;
  t=&MyChaining[tempRating%size][votLocation];}

Modifiednode *newnode=new Modifiednode(ttl,rate,votes);
         newnode->next=t->next;
         t->next=newnode;

/*if (votes<100||votes==100) {
  int TempVotesSmaller=votes%101;
t=&MyChaining[tempRating%size][TempVotesSmaller];
}else{t=&MyChaining[tempRating%size][TempVotesGreater];} */
    /* adding at end but thats not feasible.
    while (temp->next!=NULL) {
      temp=temp->next;

    }
    temp->next=new node(t,r,v);
    */
                                              //we also have to sort the linkedlists accring to the voters so whole data structure will be sorted into ratinsga nd voters
  }

  bool search(int QuestionNumber,int t,float rat,int vot)           //the very first int argument will be send which will signal which question has been asked and the same question checks will be used in all classes of datastructures
{

//Modifiednode *search=&MyChaining[tempRating%size][votes%100];
int mostPopularCounter;
int counterForSearch=0;
  Modifiednode *searchKey;
  int tempKey=rat;
int vv=0;
int ForQOneTwo=0,ForloopShift;
//////////////////////////////////////////////Q1
if (QuestionNumber==1) {
  Modifiednode *MostPopular=new Modifiednode(0,0,0);

  for(int Qone=10;Qone>7;Qone--){                   //i'll have to change the whole structure if switch rom 1 to q 2
   for(int Qoneb=101;Qoneb>80;Qoneb--){
  searchKey=&MyChaining[Qone%size][Qoneb];
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
} //endoing fora loop
} //endoing fora loop
  std::cout << "Most popular movie through self built ds " <<"tt"<<MostPopular->title<<" "<<MostPopular->rating<<" "<< MostPopular->voter<<" After "<<mostPopularCounter<<" searches"<< '\n';
return 1;
  } //ending if for q1
   else if(QuestionNumber==2){         //There are 2 movies 1 with rating 1 votr 5 and other having rating 1.3 voters 5 by my method i'm having 1 5 is least. by sirs method 1.3 5 is least popular.

Modifiednode *leastPopular=new Modifiednode(1,10,100);
for(int Qone=0;Qone<3;Qone++){                   //i'll have to change the whole structure if switch rom 1 to q 2
 for(int Qoneb=0;Qoneb<1;Qoneb++){
searchKey=&MyChaining[Qone%size][Qoneb];
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
}//endoing for loopb
} //endoing for loopa
std::cout << "Least popular movie " <<"tt"<<leastPopular->title<<" "<<leastPopular->rating<<" "<< leastPopular->voter<<" After "<<mostPopularCounter<<" searches"<< '\n';
return 1;
} //ending if for q2


else if (QuestionNumber==3) {
  int PointZero=0,PointOne=0,PointTwo=0,PointThree=0,PointFour=0,PointFive=0,PointSix=0,PointSeven=0,PointEight=0,PointNine=0;
  int rat=0;
  std::cout << "Movies having same rating by self designed ds" << '\n';
  for(int QThree=0;QThree<size-1;QThree++)
  {for(int QThreeb=0;QThreeb<101;QThreeb++){
    searchKey=&MyChaining[QThree%size][QThreeb];
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

}//smaller for loop
cout<<rat<<"PointZero "<< PointZero<<endl<<rat<<" PointOne "<<PointOne<<endl<<rat<<" PointTwo "<<PointTwo<<endl<<rat<<" PointThree "<<PointThree<<endl<<rat<<" PointFour "<<PointFour<<endl<<rat<<" PointFive "<<PointFive<<endl<<rat<<" PointSix "<<PointSix<<endl<<rat<<" PointSeven "<<PointSeven<<endl<<rat<<" PointEight "<<PointEight<<endl<<rat<<" PointNine "<<PointNine<<endl<<endl;
PointZero=0,PointOne=0,PointTwo=0,PointThree=0,PointFour=0,PointFive=0,PointSix=0,PointSeven=0,PointEight=0,PointNine=0;
}//bigger for loop

}//q ends
else if(QuestionNumber==4)
{  //ratingkey
int rateTemp=rat;
cout<<"Movies rating greater than "<<rat<<" by self designed ds\n";

  for(int Qfour=rateTemp;Qfour<size;Qfour++)
  {
    for(int Qfourb=0;Qfourb<102;Qfourb++){
    searchKey=&MyChaining[Qfour%size][Qfourb];
    searchKey=searchKey->next;

    while (searchKey!=NULL) {

    if(searchKey->rating>rat)
    cout<<"tt"<<searchKey->title<<" "<<searchKey->rating<<" "<< searchKey->voter<<endl;
searchKey=searchKey->next;
    }
  }

}
}
else if (QuestionNumber==5) {  //voters are not sorted so we can t do anything in seperate chaining.
float totalSearchedVoters=0,ValidSearches=0;

cout<<"Movies voters greater than "<<vot<<" by Self designed ds\n";
    for(int Qfive=0;Qfive<size;Qfive++)
    {
      int vottemp=vot/1000;

      for(int Qfiveb=vottemp;Qfiveb<102;Qfiveb++){
      searchKey=&MyChaining[Qfive%size][Qfiveb];
      searchKey=searchKey->next;

      while (searchKey!=NULL) {
      if(searchKey->voter>vot){
      cout<<"tt"<<searchKey->title<<" "<<searchKey->rating<<" "<< searchKey->voter<<endl;
    ValidSearches++;}

    searchKey=searchKey->next;
    totalSearchedVoters++;
      }
    }
    }
float VoteAccuracy=(ValidSearches/totalSearchedVoters)*100;
cout<<"Accuracy "<<VoteAccuracy<<" "<<totalSearchedVoters<<" "<<ValidSearches<<endl;

}
else if (QuestionNumber==6) {
  int tempR=rat;
  cout<<" by self designed ds\n";

  for(int QSix=tempR;QSix<size;QSix++)
   {
     int vottempp=vot/1000;
     for(int QSixb=vottempp;QSixb<102;QSixb++){
    searchKey=&MyChaining[QSix%size][QSixb];
    searchKey=searchKey->next;

    while (searchKey!=NULL) {
    if(searchKey->voter>vot&&searchKey->rating>rat)
    cout<<"tt"<<searchKey->title<<" "<<searchKey->rating<<" "<< searchKey->voter<<endl;
   searchKey=searchKey->next;
    }
  }
  }
}else if (QuestionNumber==7) {
int ttl;
cout<<"By Self designed ds\n";
counterForSearch=0;

  for(int QSeven=0;QSeven<size;QSeven++)
  {
    for(int QSevenb=0;QSevenb<101;QSevenb++){

    searchKey=&MyChaining[QSeven%size][QSevenb];
    searchKey=searchKey->next;

    while (searchKey!=NULL) {
      if(searchKey->title==t)
{std::cout << "Movie found Detail" << '\n';    cout<<"tt"<<searchKey->title<<" "<<searchKey->rating<<" "<< searchKey->voter<<"In "<<counterForSearch<<" Iterations"<<endl; break; return 1;}
else if(searchKey->title<t){break;}
else if(searchKey->title>t){ searchKey=searchKey->next; }//std::cout <<searchKey->title <<" "<<ttl<<" "<<title<< '\n';}
counterForSearch++;
    }

  }
  }
  return 0;
}
return 1;
}

  void display()
  {

      for(int loopma=0;loopma<11;loopma++){
        for(int loopmb=0;loopmb<102;loopmb++){           //hundred in 2nd dimentions.
          Modifiednode *temp=&MyChaining[loopma][loopmb];
                                                  //al the ekenents are being clustring in 1 2 3 2d array gotts distribute them anywhere.
        while (temp!=NULL) {
            cout<<"Movie name "<<"tt"<<temp->title<<" Rating="<<temp->rating<<" Voters="<<temp->voter<<"Second dimention "<<loopmb<<endl;
            temp=temp->next;
        }
      }
        std::cout << endl << '\n';
      }

  }
};
