#include <iostream>
using namespace std;

int main()
{
    int marks;
    cout << "Enter Your Marks : ";
    cin >> marks;

    if(marks >= 95){
        cout << "O\n";
    }
    else if (marks >= 85 && marks <95){
        cout << "A+\n";
    }
    else if (marks >= 75 && marks <85){
        cout << "A\n";
    }
    else if (marks >= 65 && marks <75){
        cout << "B\n";
    }
    else if (marks >= 55 && marks <65){
        cout << "C\n";
    }
    else if (marks >= 45 && marks <55){
        cout << "D\n";
    }
    else if (marks >= 35 && marks <45){
        cout << "E\n";
    }else{
        cout << "Failed\n";
    }
}