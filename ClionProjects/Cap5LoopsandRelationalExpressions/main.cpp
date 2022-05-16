/*

//Listing 5.1 forloop.cpp
#include <iostream>

int main() {
    using namespace std;
    int i; //create counter
    for(i = 0; i < 5; i++)
        cout << "C++ knows loops.\n";
    cout << "C++ knows when to stop.\n";

    return 0;
}



//Listing 5.2 num_test.cpp
#include <iostream>

int main() {
    using namespace std;
    int i; //create counter
    for(i = 5; i > 0; i--)
        cout << "C++ knows loops.\n";
    cout << "C++ knows when to stop.\n";

    return 0;
}

//Listing 5.2 num_test.cpp
#include <iostream>

int main() {
    using namespace std;
    int i; //create counter
    for(i = 5; i > 0; i--)
        cout << "C++ knows loops.\n";
    cout << "C++ knows when to stop.\n";

    return 0;
}

//Listing 5.3 express.cpp
#include <iostream>

int main() {
    using namespace std;
    int x;

    cout << "The expression x = 100 has the value ";
    cout << (x = 100) << endl;
    cout << "Now x = " << x << endl;
    cout << "The expression x < 3 has the value ";
    cout << (x < 3) <<endl;
    cout << "The expression x > 3 has the value ";
    cout << (x > 3) <<endl;
    cout.setf(ios_base::boolalpha); // a newer C++ feature
    cout << "The expression x < 3 has the value ";
    cout << (x < 3) << endl;
    cout << "The expression x > 3 has the value ";
    cout << (x> 3) << endl;

    return 0;
}



//Listing 5.4 formore.cpp Calculate Factorial numbers
#include <iostream>

const int ArSize = 50;

int main() {
    using namespace std;

    long long factorials[ArSize];

    factorials[1] = factorials[0] = 1LL;
    for(int i = 2; i < ArSize; i++)
        factorials[i] = i * factorials[i - 1];
    for(int i = 0; i < ArSize; i++)
        std::cout << i << "! = " << factorials[i] << std::endl;

    return 0;
}

//Listing 5.4 formore.cpp INVERT STRING
#include <iostream>
#include <string>
int main() {
    using namespace std;

    cout << "Enter a word";
    string word;
    cin >> word;

    //display letters in reverse order
    for(int i = word.size() - 1; i >= 0; i--)
        cout << word[i];
    cout << "\nBye,\n";

    return 0;
}


//Listing 5.9 forstr2.cpp REVERT ARRAY
#include <iostream>
#include <string>
int main() {
    using namespace std;

    cout << "Enter a word";
    string word;
    cin >> word;

    char temp;
    int i,j;
    //display letters in reverse order
    for(j = 0, i = word.size() -1; j < i; --i, ++j)
    {
        temp = word[i];
        word[i] = word[j];
        word[j] = temp;
    }

    cout << word << "\nDone\n";

    return 0;
}

//Table 5.1 Combined Assignment Operators with pointers
//OperatorEffect (L=left operand, R=right operand)
//+=Assigns L + R to L
//-=Assigns L - R to L
//*=Assigns L * R to L
//=Assigns L / R to L
//%=Assigns L % R to L
//Listing 5.8 block.cpp
#include <iostream>
#include <string>
int main() {
    using namespace std;

    cout << "The amazing Accounto will sum and average";
    cout << "five numbers for you.\n";
    cout << "Please enter five values: \n";
    double number;
    double sum = 0.0;
    for (int i = 1; i <= 5 ; ++i) {
        cout <<"Value " << i << ": ";
        cin >> number;
        sum += number;
    }
    cout << "Five exquisite choices indeed! ";
    cout << "They sum to " << sum << endl;
    cout << "and average to " << sum / 5 << ".\n";
    cout << "The Amazing Accounto bids you adieu!\n";
    return 0;
}

//Listing 5.14 waiting.cpp
// waiting.cpp -- using clock() in a time-delay loop
#include <iostream>
#include <ctime> // describes clock() function, clock_t type
int main() {
    using namespace std;

    cout << "Enter the delay time, in seocnds: ";
    float secs;
    cin >> secs;
    clock_t delay = secs * CLOCKS_PER_SEC;
    cout << "starting\a\n";
    clock_t start = clock();
    while (clock() - start < delay)
        ;
    cout << "done \a\n";

    return 0;
}

//Listing 5.1 dowhile.cpp
// dowhile.cpp -- exit-condition loop
#include <iostream>
int main() {
    using namespace std;
    int n;

    cout << "Enter numbers in the range 1-10 to find";
    cout << "my favorite number\n";

    do {
        cin >> n;
    } while (n != 7);
    cout << "Yes, 7 is my favorite.\n";

    return 0;
}

//Listing 5.20 nested.cpp
// nested.cpp -- nested loops and 2-D array
#include <iostream>
const int Cities = 5;
const int Years = 4;
int main() {
    using namespace std;
    const char * cities[Cities] =
            {
                    "Gribble City",
                    "Gribbletown",
                    "New Gribble",
                    "San Gribble",
                    "Gribble Vista"
            };

    int maxtemps[Years] [Cities] =
            {
                    {96, 100, 87, 101, 105},
                    {96, 98, 91, 107, 104},
                    {97, 101, 93, 108, 107},
                    {98, 103, 95, 109, 108}
            };

    cout << "Maximum temperature for 2008 - 2011\n\n";
    for (int city = 0; city < Cities; ++city) {
        cout << cities[city] << ":\t";
        for (int year = 0; year < Years; ++year) {
            cout << maxtemps[year][city] <<"\t";
        }
        cout << endl;
    }
    return 0;
}

//250
//Chapter 5 Loops and Relational Expressions
//Chapter Review

//1. What’s the difference between an entry-condition loop and an exit-condition loop?
//Which kind is each of the C++ loops?
//R: Entry-condition test condition then execute(for, while), exit condition is reverse(do while)

//2. What would the following code fragment print if it were part of a valid program?
//int i;
//for (i = 0; i < 5; i++)
//cout << i;
//cout << endl;
//R: 01234

//3. What would the following code fragment print if it were part of a valid program?
//int j;
//for (j = 0; j < 11; j += 3)
//  cout << j;
//cout << endl << j << endl;
//R:0369
//  9

//4. What would the following code fragment print if it were part of a valid program?
//int j = 5;
//while ( ++j < 9)
//cout << j++ << endl;
//R: 6 8

//5. What would the following code fragment print if it were part of a valid program?
//int k = 8;
//do
//cout <<" k = " << k << endl;
//while (k++ < 5);
//R: K = 8

//6. Write a for loop that prints the values 1 2 4 8 16 32 64 by increasing the value of
//a counting variable by a factor of two in each cycle.

//Listing 5.20 nested.cpp
// nested.cpp -- nested loops and 2-D array
#include <iostream>
const int loops = 7;

int main() {
    int number = 1;
    using namespace std;

    for (int i = 0; i < loops; ++i) {
        cout << "Value: " << number;
        cout << endl;
        number = number * 2;
    }
    return 0;
}

*/
//7. How do you make a loop body include more than one statement?
//R: Else if?

//8. Is the following statement valid? If not, why not? If so, what does it do?
//int x = (1,024);
//R: prints 024
//What about the following?
//int y;
//y = 1,024;
//R: prints 1

//9. How does cin>>ch differ from cin.get(ch) and ch=cin.get() in how it views input?
//R: cin >> a will read from cin into variable a no matter what type a is, so float, int, std::string etc all work with >>. That's a simplification but close enough for now.
//a = cin.get() is for reading single characters only, it returns the next character in the input.
//What's happening in your first program is that a char value from get() is being converted to a float value.
//Skipping over the details but that's not something that makes a lot of sense,
//which is why you get the strange results.
//Another difference between >> and get() is that >> will skip whitespace but get() will not.
//So if you want to read a single character irrespective of whether it's whitespace or not then
//use get() otherwise use >>.



// 7 Functions: C++'s Programming Modules (page 305)
