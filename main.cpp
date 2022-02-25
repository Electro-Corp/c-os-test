#include <iostream>
#include <string>
using namespace std;
#define n '\n'
string username = "Admin";
string pass = "";
string user = "";
string pas = "";
string e = "";
string directory [] = {"C++","System"};
//Function Define
void dir();
int main() {
  cout<<"C++ Operating System";
  cout<<n;
  while(user != username){
    cout<<"Username: ";
    cin>> user;
    if(user!=username){
      cout<<"Username not correct.";
      cout<<n;
    }
    cout<<n; 
  }
  while(pas != pass){
    cout<<"Password: ";
    cin>> pass;
    if(pas!=pass){
      cout<<"Password not correct.";
      cout<<n;
    }
    cout<<n;
  }
  cout<<"Starting..";
  cout<<n;
  while(e!="quit"){
    cout<<"E:/> ";
    cin>>e;
    if(e=="dir"){
      dir();
    }
  } 
}
void dir(){
  cout<<directory;
  cout<<n;    
}