#include <iostream>
#include <cmath>
using namespace std;
/*
void saybye(string name, int age)
{
    cout << "tata " << name << "\nyou are " << age;
}
*/
/*
int cube(int num)
{
    int result = num * num * num;
    return result;
}
*/
int main()
{
    /*
    cout << "       *" << endl;
    cout << "      **" << endl;
    cout << "     ***" << endl;
    cout << "    ****" << endl;
    cout << "   *****" << endl;
    cout << "  ******" << endl;
    cout << " *******" << endl;
    cout << "********" << endl;
    */

    //  data types
    /*
        char letters = 'A';
        string sentence = "this should be in double qoute";
        int eveteager = 69;
        float goat = 69.69;
        double trouble = 69.69;
        bool cool = true;
        */

    // string stuff
    /*
        string sentence = "useless stuffs";

        // getting length
         cout << sentence.length();

        // getting idividual char
         cout << sentence[5];

        // getting index of a string or char
         cout << sentence.find("stuffs");

        // making suvstring from a string
        cout << sentence.substr(2, 4);
    */

    // numbers
    /*
    cout << pow(3, 3);
    cout << sqrt(25);
    cout << fmax(69, 59) << endl
        << fmin(69, 96);
*/

    // input
    /*
        cout <<"Enter your name: " << endl;
        string name;
        getline(cin, name);
        cout << "Get lost " << name;
    */
    // is_array
    /*
        int is_array[] = {65, 6565, 556, 5366, 5, 56, 55};

        cout << is_array;
    */

    // Function
    /*
        saybye("coders", 6565);
        return 0;
    */
    //  cout << cube(5);
    // if else
    /*
    string name;
    getline(cin, name);
    bool isMale = true;
    if (isMale)
    {
        if (name == "atik")
            cout << name << " is a sigma male";
    }
    */

    int num1, num2;
    char op;
    cout << "enter first number: ";
    cin >> num1;
    cout << "enter operator: ";
    cin >> op;
    cout << "enter second number: ";
    cin >> num2;

    if (op == '+')
    {
        cout << "your answer is : " << num1 + num2;
    }
    else if (op == '-')
    {
        cout << "your answer is : " << num1 - num2;
    }
    else if (op == '*')
    {
        cout << "your answer is : " << num1 * num2;
    }
    else if (op == '/')
    {
        cout << "your answer is : " << num1 / num2;
    }
    else
    {
        cout << "something was wrong :( ";
    }
}