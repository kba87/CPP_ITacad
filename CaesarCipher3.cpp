#include<iostream>
#include<string.h>


using namespace std;

int main() {
   cout<<"Enter the message:\n";
   char msg[100];

   cin.getline(msg,100);

   int i, j, length,choice,key;


   cout << "Enter Caesar key [1-25]: "<<endl;
   cin >> key;

   length = strlen(msg);
    cout<<"Enter your choice: "<<endl;
    cout<<" 1 Encryption "<<endl;
    cout<<" 2 Decryption "<<endl;

   cin>>choice;
   if (choice==1)

    {
      char ch;
      for(int i = 0; msg[i] != '\0'; ++i) {
        char ch = msg[i];
         
         if (ch >= 'a' && ch <= 'z'){
           char ch = ch + key;
            if (ch > 'z') {
               ch = ch - 'z' + 'a' - 1;
            }
            msg[i] = ch;
         }
         
         else if (ch >= 'A' && ch <= 'Z'){
            ch = ch + key;
            if (ch > 'Z'){
               ch = ch - 'Z' + 'A' - 1;
            }
            msg[i] = ch;
         }
      }
      cout<<("Encrypted message: %s", msg);

}   else if (choice == 2) { 
      char ch;
      for(int i = 0; msg[i] != '\0'; ++i) {
         ch = msg[i];
         
         if(ch >= 'a' && ch <= 'z') {
            ch = ch - key;
            if(ch < 'a'){
               ch = ch + 'z' - 'a' + 1;
            }
            msg[i] = ch;
         }
         
         else if(ch >= 'A' && ch <= 'Z') {
            ch = ch - key;
            if(ch < 'A') {
               ch = ch + 'Z' - 'A' + 1;
            }
            msg[i] = ch;
         }
      }
      cout << "Decrypted message: " << msg;
   }
}
