#include <iostream>

using namespace std;

int main(){
    char ch;

    while(ch!='.'){
        cin>>ch;
        cout<<ch;
    }

    //If you enter a character and press enter it will print the character 
    //If you enter a line of text and press enter it will print the line(without spaces)
    //This is because the input if only fedded to the program when enter is pressed
    //So if we type a line of text and press enter then each character of the line is passed through the loop one by one.
    
    return 0;
}