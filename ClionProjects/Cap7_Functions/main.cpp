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
  */
//Listing 7.15 arrobj.cpp
//arrobj.cpp -- functions with array objects (C++11)
#include <iostream>
#include <array>
#include <string>
#include <chrono>
#include <thread>
#include <cstring>

const int Seasons = 4;
const std::array<std::string, Seasons> Snames = {"Spring", "Summer", "Fall", "Winter"};
//function to modify array object
void fill(std::array<double, Seasons> * pa);
//function that uses array object without modifying it
void show(std::array<double, Seasons> da);
int sendData(const char *logName, const char *data);
int main() {
    int counter = 0;

    const int len = strlen("Hello");
    const int lenHex = sizeof(0xFF);
    const char lenHexChar[] = {0x00, 0x22};
    const int lenHexC = (*lenHexChar+1);
    std::cout<< "len: " << len << "\n";
    std::cout<< "lenHex: " << lenHex << "\n";
    std::cout<< "lenHexChar: " << lenHexC << "\n";

    /*
   while (1)
	{
       char command_x[] {static_cast<char>(0x80), 0x02, 0x72, 0x43, 0x00,  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x20, 0x10, 0x54, 0x65, 0x73, 0x74, 0x20, 0x54, 0x72, 0x61, 0x6E, 0x73, 0x61, 0x63, 0x74, 0x69, 0x6F, 0x6E, 0x05, 0x30, 0x20, 0x03, 0x0C, 0x00, 0x00, 0x38};
		if ((counter % 20 == 0) )
		{
			std::cout<< "random iteration\n";
            for (int i = 0; i < sizeof(command_x) /2; ++i) {
                std::cout<< command_x[i] << " " << command_x[i+1] << "\n";
            }
		}else{
            std::cout<< "idle iteration " << "counter: " << counter << "\n";
		}
		counter++;
        std::this_thread::sleep_for(std::chrono::milliseconds(600));
	}*/

}

void fill(std::array<double, Seasons> * pa){
    using namespace std;

    for (int i = 0; i < Seasons; ++i) {
         cout << "Enter " << Snames[i] << " expenses: ";
         cin >> (*pa)[i];
    }
}

void show(std::array<double, Seasons> da){
    using namespace std;
    double total = 0.0;
    cout << "\nExpenses\n";
    for (int i = 0; i < Seasons; ++i) {
        cout << Snames[i] << ": $" << da[i] << endl;
        total += da[i];
    }
    cout << "Total expenses: $" << total << endl;
}
int sendData(const char *logName, const char *data)
{

    const int len = sizeof(int) * (*(&data + 1) - data);
    std::cout << len << data;
    //const int len = strlen(data);
    //const int txBytes = uart_write_bytes(UART, data, len);
    //ESP_LOGI(logName, "Wrote %d bytes", txBytes);
    return 1;
}