#include<iostream>
using namespace std;
int main(){

    char ch;
    cout<<"Enter the character :";
    cin>>ch;
    switch(ch){
        case 'a':
        case 'A':
        cout<<"Vowel";
        break;

        case 'e':
        case 'E':
        cout<<"Vowel";
        break;

        case 'i':
        case 'I':
        cout<<"Vowel";
        break;

        case 'o':
        case 'O':
        cout<<"Vowel";
        break;

        case 'u':
        case 'U':
        cout<<"Vowel";
        break;

        default:
        cout<<"Consonent";
    }
    return 0;
}