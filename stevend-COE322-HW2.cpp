#include<iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
//Initiate inputs
int K;
string choice;
string text;
char alphabet [26] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H',
'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W',
'X', 'Y', 'Z'};

//Asking questions
cout<<"Please enter the message you are encrypting/decrypting"<<endl;
getline(cin,text);
cout<<"Would you like to encrypt or decrypt?"<<endl;
cin>>choice;
cout<<"How much is the code shifted?"<<endl;
cin>>K;

//Creating the shift
if (choice == "encrypt")
  K = K*-1;
else if (choice == "decrypt")
  K = K*1;
char alphabetShift [26];
for (int i = 0; i<26; i++)
     {
	alphabetShift[i] = alphabet[(i+K)%26];
     }
//Setting up text input
string alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

char newText[text.length()] ;
for(int i = 0; i<text.length();i++)
{if ((alpha.find_first_of(text[i]) > 25) == 1 )
 {
   newText[i] = {' '};
 }
 else
 { 	
   newText[i] = alphabetShift[alpha.find_first_of(text[i])];
 } 
}
cout<<"Before: "<<text<<endl;
cout<<"After: "<<newText<<endl;
}
