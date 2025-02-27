#include <iostream>
using namespace std;
class Rpc {
    int a =1;
    string cop[3] = {"R","P","S"};
    public:
        string user;
        int index;
        void start(){
            cout<<"Enter R, P or S: ";
            cin>>user;
            if(user=="R" || user=="P" || user=="S"){
                Result();
            }
            else{
                cout<<"Enter valid name"<<endl;
                start();
            }
        }
        
        void Result(){

            index = rand()%3;
            if(cop[index]==user){

                cout<<"comp: "<<cop[index]<<" your: "<<user<<endl;
                cout<<"It's a tie"<<endl;

            } else if (cop[index]=="R" && user=="P"){

                cout<<"comp: "<<cop[index]<<" your: "<<user<<endl;
                cout<<"You Win"<<endl;

            } else if (cop[index]=="P" && user=="S"){

                cout<<"comp: "<<cop[index]<<" your: "<<user<<endl;
                cout<<"You Win"<<endl;

            } else if (cop[index]=="S" && user=="R"){

                cout<<"comp: "<<cop[index]<<" your: "<<user<<endl;
                cout<<"You Win"<<endl;

            } else if (cop[index]=="R" && user=="S"){

                cout<<"comp: "<<cop[index]<<" your: "<<user<<endl;
                cout<<"You Loose"<<endl;

            } else if (cop[index]=="P" && user=="R"){

                cout<<"comp: "<<cop[index]<<" your: "<<user<<endl;
                cout<<"You Loose"<<endl;

            } else if (cop[index]=="S" && user=="P"){

                cout<<"comp: "<<cop[index]<<" your: "<<user<<endl;
                cout<<"You Loose"<<endl;
                    
            }

            cout<<"To continue press 1 else 0"<<endl;
            cin>>a;

            if(a==1){
               start();
            }

        }  
        
};

int main(){

    Rpc obj;
    obj.start();
    return 0;
}
