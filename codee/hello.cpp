
#include <iostream>
using namespace std;
int main()
{
    cout << "amann" << endl;
    int amount1;
    int amount2;
    cin >> amount1;
    cin >> amount2;
    int total;
    total = amount1 + amount2;
    cout << total;
    return 0;
}



/*
Room Renovation:

You need to buy paint for the floor of a rectangular room.
The given program takes the room's length and width as input.

Task
Complete the program to calculate and output the area of the room.

Sample Input
5.4
2.3

Sample Output
12.42
*/
#include <iostream>
using namespace std;

int main()
{
    // sides of the room
    double length;
    double width;
    double outpot;
    cin >> length;
    cin >> width;

    // output the area
    outpot = length * width;
    cout << outpot;
    return 0;
}

/*
Robot Copywriter:

A robot can type 300 letters per minute.
The given program takes the text input time (in minutes).

Task
Complete the code to calculate and output the number of letters that will be typed in a given time.

Sample Input
20

Sample Output
6000
*/
#include <iostream>
using namespace std;

int main()
{
    int count = 300; // letter in a minute
    int time;
    cin >> time;

    // your code goes here
    count *= time;
    cout << count << endl;
    return 0;
}

/*
Transportation:

You are making a program for a bus service.
A bus can transport 50 passengers at once.
Given the number of passengers waiting in the bus station as input, you need to calculate and output how many empty seats the last bus will have.

Sample Input:
126

Sample Output:
24

Explanation: The first bus will transport 50 passengers, leaving 126-50=76 in the station. The next one will leave 26 in the station, thus, the last bus will take all of the 26 passengers, having 50-26=24 seats left empty.
*/

#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int input;
    cin >> input;
    int output;
    if (input <= 50)
    {
        output = 50 - input;
        cout << output;
    }
    else
    {
        output = input % 50;
        output = 50 - output;
        cout << output;
    }
    return 0;
}


#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    int a, x;
    double b, y;
    string text;

    cin >> a;
    cin >> b;
    cin >> text;
      x= a + i;
    cout << x << endl;

    y=b+d;
    cout<< fixed << setprecision(1) << y <<endl;

    text = s + "is the best place to learn and practice coding!";
    cout << text;

    return 0;