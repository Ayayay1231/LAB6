#include<iostream>
using namespace std;

int main(){
    int num ,odd = 0 ,even = 0;
    cout << "Enter an integer: ";
    cin >> num;
    while(num != 0){
        if(num %2 == 0 and num != 0){
            even++;     
        }else{
            odd++;
        }
        cout << "Enter an integer: ";
        cin >> num;
    }
    
    cout << "#Even numbers = "<< even << endl;
    cout << "#Odd numbers = " << odd << endl;
    return 0;
}