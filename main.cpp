#include<iostream>
#include<vector>
using namespace std;
vector<string>nameVec;
vector<int>idVec;
vector<string>pwVec;
vector<int>balanceVec;

void openAccount(){
string name,password;
int id,balance;
cout<<"Enter User name:";
cin>>name;
cout<<"Enter User Id:";
cin>>id;
cout<<"Enter User Password:";
cin>>password;
nameVec.push_back(name);
idVec.push_back(id);
pwVec.push_back(password);
cout<<"Your Account Opened Successfully!"<<endl;
cout<<" "<<endl;
}

void deposit(){
  int id,amount;
  cout<<"Enter the Id:";
  cin>>id;
  cout<<"Enter the required depositing Cash:";
  cin>>amount;
  bool found=false;
  for(int i=0;i<idVec.size();i++){
    if(id==idVec[i]){
            found=true;
    balanceVec.push_back(amount);
    cout<<"Cash deposited!"<<endl;
    cout<<" "<<endl;
        break;
    }
  }
  if(!found){
    cout<<"Invalid User id"<<endl;
    cout<<" "<<endl;
  }
}
void withdrawfun(){
int id,amount;
string password;
cout<<"Enter the Id:";
cin>>id;
cout<<"enter your password:";
cin>>password;
bool idFound=false;
bool balAvail=false;
bool passwordFound=false;
for(int i=0;i<idVec.size();i++){
    if(id==idVec[i]){
        idFound=true;
        if(password==pwVec[i]){
            passwordFound=true;
            cout<<"Enter Amount:";
            cin>>amount;

            if(amount<=balanceVec[i]){
                    balAvail=true;
                balanceVec[i]-=amount;
                cout<<"Operation was successful"<<endl;
                cout<<" "<<endl;
            }
        }
    }
}
if(!idFound){
    cout<<"Invalid User Id"<<endl;
    cout<<" " <<endl;

}
else if(!passwordFound){
    cout<<"Incorrect user Password!"<<endl;
    cout<<" " <<endl;
}
else if(!balAvail){
    cout<<"Insufficient balance"<<endl;
    cout<<" "<<endl;
}
}

void balInquiry(){
string password;
int id;
cout<<"Enter User Id:";
cin>>id;
cout<<"Enter user password:";
cin>>password;
bool idFound=false;
bool passwordFound=false;
for(int i=0;i<idVec.size();i++){
    if(id==idVec[i]){
        idFound=true;
        if(password==pwVec[i]){
            passwordFound=true;
            cout<<"Mr/Mrs. " <<nameVec[i]<<"!Your available balance is:"<<balanceVec[i]<<endl;
            cout<<" "<<endl;
            break;
        }
    }
}
if(!idFound){
    cout<<"Invalid user ID!"<<endl;
    cout<<" " <<endl;
}
else if(!passwordFound){
    cout<<"Incorrect Password!"<<endl;
    cout<<" "<<endl;
}
}
int main(){
while(true){
cout<<"Bank Account Management"<<endl;
cout<<"======================="<<endl;
cout<<"1.Open Account"<<endl;
cout<<"2.Deposit Cash"<<endl;
cout<<"3.Withdraw Cash"<<endl;
cout<<"4.Balance Inquiry"<<endl;
cout<<"5.Exit."<<endl;
int choice;
cout<<"Enter Choice: ";
cin>>choice;
if(choice==1){
        //open
system("cls");
openAccount();
}
else if(choice==2){
//deposit
system("cls");
deposit();
}
else if(choice==3){
//withdraw
system("cls");
withdrawfun();
}
else if(choice==4){
        system("cls");
        balInquiry();
//inquiry
}
else if(choice==5){
        //exit
system("cls");
cout<<"Best of luck!"<<endl;
break;
}
else{
cout<<"Invalid Input!"<<endl;
}
}
}

