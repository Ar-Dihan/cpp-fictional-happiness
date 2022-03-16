
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
    // my code goes here
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

/*
David and Alex each have aquariums. There are 8 Rainbowfishes in David’s aquarium, and 11 Angelfishes in Alex’s aquarium. Help them exchange their fishes between them.

Complete the code to swap the values of variables between aquariumDavid and aquariumAlex.
*/

#include <iostream>
using namespace std;

int main()
{
    int aquariumDavid = 8;
    int aquariumAlex = 11;
    int extraone;
    // your code goes here

    extraone = aquariumDavid;
    aquariumDavid = aquariumAlex;
    aquariumAlex = extraone;

    cout << "David's aquarium: " << aquariumDavid << endl;
    cout << "Alex's aquarium: " << aquariumAlex;
    return 0;
}

/*
You need to make a countdown app.
Given a number N as input, output numbers from N to 1 on separate lines.
Also, when the current countdown number is a multiple of 5, the app should output "Beep".

Sample Input:
12

Sample Output:
12
11
10
Beep
9
8
7
6
5
Beep
4
3
2
1
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n > 0)
    {
        cout << n << endl;
        if (n % 5 == 0)
        {
            cout << "beep" << endl;
        }
        n--;
    }
    return 0;
}

/*
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
