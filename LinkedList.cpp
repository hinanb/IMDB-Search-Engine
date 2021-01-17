#include <iostream>

//using namespace std;

class LinkedListnode
{


  public:
    LinkedListnode *next;

    int title;
    int voter;
    float rating;

        LinkedListnode(int t,float r,int v)
        {
            title=t;
            rating=r;
            voter=v;

            next=NULL;
        }
};



class LinkedList
{
    public:
        LinkedListnode *head;
        int userInput,midCounter=0;
        int midCheck=1;



        LinkedList()
        {
            head=NULL;
        }


        void Add(int ttl,float rat,int vot)
        {
           LinkedListnode *newnode=new LinkedListnode(ttl,rat,vot);
            newnode->next=head;
            head=newnode;
        }

        void display()
        {
            cout<<"elements in list\n";
            LinkedListnode *temp;
            temp=head;

            while(temp!=NULL)
            {
              cout<<"tt"<<temp->title<<" "<<temp->rating<<" "<<temp->voter<<endl;
                temp=temp->next;
            }
        }

        void search(int QuestionNumber,int title,float ratingKey,int voterskey)
        {
          LinkedListnode *searchKey;
          searchKey=head;


          int counter=0,mostPopularCounter;
if (QuestionNumber==1) {
      LinkedListnode *MostPopular=new LinkedListnode(0,0,0);

          while (searchKey!=NULL) {
            if(searchKey->rating*searchKey->voter>MostPopular->rating*MostPopular->voter){
               MostPopular=searchKey;
       mostPopularCounter=counter;
               }
           searchKey=searchKey->next;
     counter++;
             }
               std::cout << "Most popular movie Through LinkedList" <<"tt"<<MostPopular->title<<" "<<MostPopular->rating<<" "<< MostPopular->voter<<" In "<<mostPopularCounter<<" iterations"<< '\n';
      }

      if (QuestionNumber==2) {
            LinkedListnode *leastPopular=new LinkedListnode(0,10,1000);
counter=0;
                while (searchKey!=NULL) {
                  if(searchKey->rating*searchKey->voter<leastPopular->rating*leastPopular->voter){
                     leastPopular=searchKey;
                  mostPopularCounter=counter;
                     }
                 searchKey=searchKey->next;
counter++;
                   }
                     std::cout << "Most popular movie Through LinkedList" <<"tt"<<leastPopular->title<<" "<<leastPopular->rating<<" "<< leastPopular->voter<<" In "<<mostPopularCounter<<" iterations"<< '\n';
            }

            if(QuestionNumber==4)
            {  //ratingkey

            cout<<"Movies rating greater than "<<ratingKey<<" by LinkedList\n";


                while (searchKey!=NULL) {
                if(searchKey->rating>ratingKey)
                cout<<"tt"<<searchKey->title<<" "<<searchKey->rating<<" "<< searchKey->voter<<endl;
            searchKey=searchKey->next;
                }

              }

              if(QuestionNumber==5)
              {  //ratingkey

              cout<<"Movies voters greater than "<<voterskey<<" by LinkedList\n";

int ValidSearches=0;
int totalSearchedVoters=0;

                  while (searchKey!=NULL) {
                  if(searchKey->voter>voterskey){
                  cout<<"tt"<<searchKey->title<<" "<<searchKey->rating<<" "<< searchKey->voter<<endl; ValidSearches++;}
              searchKey=searchKey->next;
totalSearchedVoters++;
                  }
                  float VoteAccuracy=(ValidSearches/totalSearchedVoters)*100;
                  cout<<"Accuracy "<<VoteAccuracy<<" "<<totalSearchedVoters<<" "<<ValidSearches<<endl;
                }


                if(QuestionNumber==6)
                {  //ratingkey
                std::cout << "Movies rating and voters Greater than limit by LinkedList " << '\n';
                    while (searchKey!=NULL) {
                      if(searchKey->voter>voterskey&&searchKey->rating>ratingKey)
                    cout<<"tt"<<searchKey->title<<" "<<searchKey->rating<<" "<< searchKey->voter<<endl;
                searchKey=searchKey->next;
                    }

                  }

                  if(QuestionNumber==7)
                  {
                  int ttl= searchKey->title;
                  std::cout << "Movies Title search by LinkedList " <<title<< '\n';
int counterForSearch=0;
                      while (searchKey!=NULL) {
                    //ttl=  searchKey->title;
                        if(ttl==title)
                  {std::cout << "Movie found Detail" << '\n';    cout<<"tt"<<searchKey->title<<" "<<searchKey->rating<<" "<< searchKey->voter<<"In "<<counterForSearch<<" Iterations"<<endl; break;}
                  else if(ttl<title){std::cout << "Not found" << '\n';break;}
else if(ttl>title){ searchKey=searchKey->next; ttl=searchKey->title;}//std::cout <<searchKey->title <<" "<<ttl<<" "<<title<< '\n';}
counterForSearch++;
                      }

                    }
















    }




};
/*
int main()
{
    LinkedList myList;
    myList.addatStart();
    myList.addatStart();

myList.displayallStudents();
myList.SearchElement();


myList.addInMiddle();
myList.displayallStudents();


myList.addatEnd();
    myList.displayallStudents();

myList.deletefromStart();
myList.displayallStudents();

myList.deleteFromMiddle();
myList.displayallStudents();

myList.deleteFromEnd();
myList.displayallStudents();

myList.displayallStudents();

    return 0;
}
*/
