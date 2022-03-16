
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
