#include <list>
#include <iostream>
#include <string>
#include <unordered_map>
#include "functions.h"
using namespace std;

string username = "Admin";
string pass = "";
string user = "";
string pas = "";
string e = "";
string currentdir = "e";
list<string> directory = {"C++","System"};

//Function Define
void dir();
void mkdir();
int cddir();
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
    if(e=="mkdir"){
      mkdir();
    }
  } 
}
void dir(){
  // for (auto v : directory){
  //   cout<<directory;
  //   cout<<n;  
  // }
  cout<<"Directory List:";
  cout<<n;
  for (auto v : directory)
    std::cout << v << "\n";
  
}
void mkdir(){
  string newdir;
  cout<<"Create New directory \n";
  cout<<"Directory Name: ";
  cin>>newdir; 
  int length;
  length = directory.size()+1;
  //cout<<length;
  
  directory.insert(directory.end(),1,newdir);
}
int cddir(){

  
  
  
}