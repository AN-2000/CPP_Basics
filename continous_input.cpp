#include <iostream>

using namespace std;

int main(){
    char ch = 'i';

    while(ch!='.'){
        // cin>>ch;

        ch = cin.get();

        cout<<ch;
    }

    //If you enter a character and press enter it will print the character 
    //If you enter a line of text and press enter it will print the line(without spaces)
    //This is because the input is only fedded to the program when enter is pressed
    //So if we type a line of text and press enter then each character of the line is passed through the loop one by one.
    //The whole thing is passed into input buffer

    //"cin>>" does not read white spaces, newlines from input buffer
    //If you want to read spaces and special characters , we can use cin.get() this takes input only when enter is pressed

    return 0;
}