/*
//Cap 7 Functions (page 305)
//Listing 7.1 calling.cpp
#include <iostream>
void simple(); //function prototype
void sheers(int n);
double returnFunc(double , double);
int main() {
    using namespace std;
    cout << "main() will call the simple() function: \n";
    simple(); //function call
    sheers(4);
    double returnValue = returnFunc(1.0, 2.5);
        cout << "main() is finished with the simple() function. \n";
        cout << "Return value: " << returnValue;

    return 0;
}

//function definition
void simple()
{
    using namespace std;
    cout << "I'm but a simple function.\n";

}

void sheers(int n){
    for (int i = 0; i < n; ++i) {
        std::cout << "Sheers!";
        std::cout << std::endl;

    }
}

double returnFunc(double first, double second){
    std::cout << "First: " << first << " second: " << second << "\n";

    return first + second;
}
 */
//Listing 7.6 arrfun2.cpp
// arrfun2.cpp -- functions with an array argument
#include <iostream>
const int ArSize = 8;
int sum_arr(int arr[], int n);
// use std:: instead of using directive
int main()
{
    using namespace std;
    int cookies [ArSize] = {1,2,4,8,16,32,64,128};
    // some systems require preceding int with static to
    // enable array initialization

    cout << cookies << " = array address, ";
    //some systems require a type cast: unsigned (cookies)
    cout << sizeof cookies << " = sizeof cookies\n";
    int sum = sum_arr(cookies,ArSize);
    cout << "Total cookies eaten: " << sum << endl;
    sum = sum_arr(cookies, 3); // a lie
    cout << "First three eaters ate " << sum << " cookies.\n";
    sum = sum_arr(cookies + 4, 4); // another lie
    cout << "Last four eaters ate " << sum << " cookies.\n";

    return 0;
}

// return the sum of an integer array
int sum_arr(int arr[], int n){
    int total = 0;
    std::cout << arr << " = arr, ";
    //some systems require a type cast: unsigned (arr)

    std::cout << sizeof arr << " = sizeof arr\n";
    for (int i = 0; i < n; ++i) {
        total = total + arr[i];
    }
    return total;
}