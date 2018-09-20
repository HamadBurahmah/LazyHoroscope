//Authors:
#include<iostream>
#include<string>

using namespace std;

int main()
{
  //declare variabless
  string firstname;
 string lastname;
 
 //get user input
 
cout << "What's your first name?"<<endl;
cin >> firstname;
cout << "What's your lastname?"<<endl;
cin >> lastname;
cout << "Welcome, "<< firstname[0] << "."  << lastname[0] << "., here is your fortune..."<<endl;
cout << firstname.size() << endl;

  //tell fortune

  return 0;
}
