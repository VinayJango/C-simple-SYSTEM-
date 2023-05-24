#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
int main()
{
    //dec all info below strings and etc
    string Full_name, Bank_name, Account_number, datet, dater;
    int get_user_input;
    string update_usr_info;
    string simple_usr_input;
    cout << "---------------------------------------------------------------------------------------------" <<endl;
    cout << "GHANASHALI ENTERPRISES SYSv0.1 --- {DEVELOPER-Vinay_jangam}" <<endl;
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
    cout << " -------------MENU------------- " <<endl;
    cout << " |ENTER {1} FOR VIEWING INFO    |" <<endl;
    cout << " |                              |" <<endl; 
    cout << " |ENTER {2} FOR QUITTING        |" <<endl;
    cout << " |                              |" <<endl;
    cout << " |ENTER {3} FOR UPDATING INFO   |" <<endl;
    cout << "  ------------------------------" <<endl;
//getting the user input here 
    cin >> get_user_input;
  // CORE LOGIC
    if (get_user_input == 1) 
    {
        cout << "Full name is " + Full_name <<endl;
        cout << "Bank name is " + Bank_name <<endl;
        cout << "Account number is " + Account_number <<endl;
        cout << "date of transfer is " + datet <<endl;
        cout << "date of reciving is " + dater <<endl;
    }
    else if (get_user_input == 2)
    {
        system("pause");
        cout << " Application closed, Bye~!" <<endl;
        exit(0);
    }
    //UPDATE USER INFO
    else if (get_user_input == 3)
    {
        cout << "Do you want to Update your Info ?: ";
        cin >> simple_usr_input;
        if (simple_usr_input == "yes")
        {
            string New_name, New_bank_name, New_acc_no, New_datet, New_dater;
            cout << "Enter New Name: ";
            cin >> New_name;
            cout << "Enter New Bank_Name: ";
            cin >> New_bank_name;
            cout << "Enter New Account_number: ";
            cin >> New_acc_no;
            cout << "Enter New Date_of_Transfer: ";
            cin >> New_dater;
            cout << "Enter New Date_of_Receiving: ";
            cin >> New_dater;
            system("pause");
            //DISPLAY AFTER UPDATING INFO 
            cout << " -------------MENU------------- "  <<endl;
            cout << " |ENTER {1} FOR VIEWING INFO    |" <<endl;
            cout << " |                              |" <<endl; 
            cout << " |ENTER {2} FOR QUITTING        |" <<endl;
            cout << " |                              |" <<endl;
            cout << " |ENTER {3} FOR UPDATING INFO   |" <<endl;
            cout << "  ------------------------------" <<endl;
            string input1;
            cin >> input1;
            if (input1 == "1")
            {
                cout << "New name is: " + New_name <<endl;
                cout << "Bank name is: " + New_bank_name <<endl;
                cout << "New Account Number is: " + New_acc_no <<endl;
                cout << "New Date_of_Transfer is: " + New_datet <<endl;
                cout << "New Date_of_Receiving is: " + New_dater <<endl;

            }
            else{
                cout << "Invalid input Process Terminated~!"<<endl;
            }

        }
    
    }
    else
    {
        cout << "INVALID OPTION~!" <<endl;
    }
    system("pause");
    return 0;
    
}
