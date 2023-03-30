#include <iostream>
#include <string>

using namespace std;

int main()
{
    //dec all info below strings and etc
    string Full_name, Bank_name, Account_number, datet, dater;
    int user_input;
    cout << "---------------------------------------------------------------------------------------------" <<endl;
    cout << "{ENTER NAME FOR ORG} SYSv0.1 --- {DEVELOPER-Vinay_jangam}" <<endl;
    cout << "---------------------------------------------------------------------------------------------" <<endl;
    cout << "Enter Name: ";
    cin >> Full_name;
    cout << "Enter Bank_name:  ";
    cin >> Bank_name;
    cout << "Enter Account_number:  ";
    cin >> Account_number;
    cout << "Enter DATE OF TRANSFER:  ";
    cin >> datet;
    cout << "ENTER DATE OF RECIVING:  ";
    cin >> dater;
    cout << "-------------------------- " <<endl;
    cout << "ENTER {1} FOR VIEWING INFO" <<endl; 
    cout << "ENTER {2} FOR QUITTING" <<endl;
    cout << "-------------------------- " <<endl;
//getting the user input here 
    cin >> user_input;
  
    if (user_input == 1)
    {
        cout << "Full name is " + Full_name <<endl;
        cout << "Bank name is " + Bank_name <<endl;
        cout << "Account number is " + Account_number <<endl;
        cout << "date of transfer is " + datet <<endl;
        cout << "date of reciving is " + dater <<endl;

    }
    else if (user_input == 2)
    {
        cout << "QUITED BYE ~" <<endl;
    }
    else
    {
        cout << "INVALID OPTION~!" <<endl;
    }
    system("pause");
    return 0;
}
