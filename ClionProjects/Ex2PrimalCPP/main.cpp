//
// Created by marcelocarvalho on 14/12/21.
//

/*
 * Write a short program that asks for your height in feet and inches and your weight
in pounds. (Use three variables to store the information.) Have the program report
your body mass index (BMI).To calculate the BMI, first convert your height in feet
and inches to your height in inches (1 foot = 12 inches).Then convert your height
in inches to your height in meters by multiplying by 0.0254.Then convert your
weight in pounds into your mass in kilograms by dividing by 2.2. Finally, compute
your BMI by dividing your mass in kilograms by the square of your height in
meters. Use symbolic constants to represent the various conversion factors.

#include <iostream>
#include <math.h>
int main(){
    int FETTININCH = 12;

    int heightInFeet;
    int heightInInches;
    int weightInPounds;
    std::cout << "Input your heigh in feet:";
    std::cin >> heightInFeet; //Ask for height and inches
    std::cout << "Input your heigh in inches:";
    std::cin >> heightInInches; //Ask for height and inches
    std::cout << "Input your heigh in pounds:";
    std::cin >> weightInPounds; //Ask for height and inches

    std::cout << heightInFeet;

    std::cout << heightInInches;

    std::cout << weightInPounds;
    //Calculate body mass index (BMI)
    int feetToInches;
    feetToInches = heightInFeet * FETTININCH;
    double inchesToM;
    inchesToM = (heightInInches + feetToInches) * 0.0254;

    double poundsToKg;
    poundsToKg = weightInPounds / 2.2;

    float bmi =poundsToKg / pow(inchesToM, 2) ;
    std::cout << "BMI: " << bmi;
    // convert your height in feet

    // and inches to your height in inches (1 foot = 12 inches)
    return 0;
}

// Ex 2
// Write a program that asks the user to enter a latitude in degrees, minutes, and sec-
// onds and that then displays the latitude in decimal format.There are 60 seconds of
// arc to a minute and 60 minutes of arc to a degree; represent these values with sym-
// bolic constants.You should use a separate variable for each input value.


#include <iostream>
int main(){

    const int min2sec = 60;
    const int deg2min = 60;
    std::cout << "Enter a latitude in degrees, minutes, and seconds:"<< std::endl<< "First, enter the degrees:";
    int degree;
    std::cin >> degree;
    std::cout << "Next, enter the minutes of arc:";
    int min;
    std::cin >> min;
    std::cout << "Finally, enter the seconds of arc:";
    int sec;
    std::cin >> sec;
    float min_f = min + float(sec) / min2sec;
    float deg_f = degree + min_f / deg2min;
    std::cout << deg_f;
    std::cout << std::endl<< degree<< " degrees, "<< min<< " minutes, "<< sec<< " seconds = "<< deg_f<< " degrees"<< std::endl;
    return 0;
}
// Ex4
 #include <iostream>
int main(){
    const int HRS_PER_DAY = 24;
    const int MIN_PER_HR = 60;
    const int SEC_PER_MIN = 60;

    long int seconds;
    int days,hours, minutes, secondsR;

    std::cout << "Enter the number of seconds: ";
    std::cin >> seconds;
    days = seconds / SEC_PER_MIN / MIN_PER_HR / HRS_PER_DAY;
    hours = (seconds / SEC_PER_MIN / MIN_PER_HR) % 24;
    minutes = (seconds / 60) % 60;
    secondsR = seconds % 60;

    std::cout << "days: " << days << " hours: "<< hours << " minutes: " << minutes << " seocnds: " << secondsR;


    return 0;

}



// Ex 5
#include <iostream>
int main(){

    long long worldPop;
    long long usPop;

    float percentUsPop;

    std::cout << "Enter world population: ";
    std::cin >> worldPop;

    std::cout << "Enter US population: ";
    std::cin >> usPop;
    percentUsPop = (100 * float(usPop))/ float(worldPop);
    std::cout << "The population of the US is " << percentUsPop <<  "% of the world population";
    return 0;

}



// Ex 6
#include <iostream>
int main(){

    long long kmMade;
    long long ltsUsed;

    float ltrPer100Km;

    std::cout << "How many Kilometers you have driven: ";
    std::cin >> kmMade;

    std::cout << "How many liter have you used: ";
    std::cin >> ltsUsed;

    ltrPer100Km =  (float(ltsUsed) / float(kmMade)) * 100;
    std::cout << "You make " << ltrPer100Km <<  "/100";
    return 0;

}


// Ex 6
#include <iostream>
int main(){

    long long kmMade;
    long long ltsUsed;

    float ltrPer100Km;
    float mpg;

    std::cout << "Enter automibile consumption lt/100km: ";
    std::cin >> ltrPer100Km;

    mpg = 235.2145 / ltrPer100Km;
    std::cout << ltrPer100Km << "l/100km in mpg : "<< mpg;
    return 0;

}

// Page 154 apontadores e variaveis

// Em c++ o apontador de uma variavel "home" é "&home"

//address.ccp -- using the & operator to find addresses
#include <iostream>
int main(){
    using namespace std;
    int donuts = 6;
    double cups = 4.5;

    cout<< "donuts value = " << donuts;
    cout<< " and donuts address = " << &donuts << endl;
    //Note: you may need to use unsigned (&donuts)
    //and unsigned (&cups)
    cout<< "cups value = " << cups;
    cout<< " and cups address = " << &cups << endl;
    return 0;

}
//page 156
#include <iostream>
int main(){
    using namespace std;
    int updates = 6; //declare a variable
    int *p_updates; //declare pointer to an int

        p_updates = &updates; //assign address of int to pointer

        //express values two ways
        cout << "Values: updates = " << updates;
        cout << ", *p_updates: " << *p_updates << endl;

        //express address two ways
        cout<< "Addresses: &updates = "<< &updates;
        cout<< ", p_updates = " << p_updates << endl;

        //use pointer to change value
        *p_updates = *p_updates + 1;
        cout<< "Now updates = " << updates << endl;
    return 0;
}

#include <iostream>
int main(){

    using namespace std;
    int higgens = 5;
    int * pt = &higgens;

    cout << "Value of higgens = " << higgens
        << "; Address of higgens = " << &higgens << endl;
    cout << "Value of *pt = " << *pt
        << "; Value of pt = " << pt << endl;

    return 0;
}

#include <iostream>
int main(){
    using namespace std;

    int nights = 1001;
    int * pt = new int;     //allocate space for an int
    *pt = 1001;             //store a value there

    cout<< "nights value = ";
    cout<< nights << ": location " << &nights << endl;
    cout << "int ";
    cout << "value = " << *pt << ": location = " << pt << endl;

    double * pd = new double; // allocate space for a double
    *pd = 10000001.0;         // store a double there

    cout << "double ";
    cout << "value = " << *pd << ": location = " << pd << endl;
    cout << "location of pointer pd: " << &pd << endl;
    cout << "size of pt = " << sizeof(pt);
    cout << " size of *pt = " << sizeof(*pt) << endl;
    cout << "size of pd = " << sizeof(pd);
    cout << " size of *pd = " << sizeof(*pd) << endl;

    return 0;
}

// Listing 4.18 arraynew.cpp (page 166)
#include <iostream>
int main(){
    using namespace std;

    double * p3 = new double [3]; // space for 3 doubles
    p3[0] = 0.2;
    p3[1] = 0.5;
    p3[2] = 0.8;
    cout<< "p3[1] is "<<p3[1]<<".\n";
    p3 = p3 +1;
    cout << "Now p3[0] is " << p3[0] << " and ";
    cout << "p3[1] is " << p3[1] << ".\n";
    delete [] p3;
    return 0;
}

// Listing 4.19 addpntrs.cpp C++ interpreta o nome de um array como o endereço do seu primeiro elemento
// Resumo: ao adicionar 1 a um apontador de um array
// este vai returnar a proxima posiçao do array

//Ex: arr[21,25]
//double * pointer = arr; (pointer prints: 21)
// pointer = pointer + 1; (pointer prints: 25)
//Caso arr nao contenha mais valores (tipo arr[21])
// pointer = pointer + 1; (pointer prints: 0)

#include <iostream>
int main(){
    using namespace std;
    double wages[3] = {10000.0, 20000.0, 30000.0};
    short stacks[3] = {3};

    // Here are two ways to get the address of an array
    double * pw = wages; // name of an array = address
    short * ps = &stacks[0]; // or use address operator
    // With array element
    cout << "pw = " << pw << ", *pw = " << *pw << endl;
    pw = pw +1;
    cout << "add 1 to the pw pointer:\n";
    cout << "pw = " << pw << ", *ps = " << *pw << "\n\n";

    cout << "ps = " << ps << ", *ps = " << *ps << endl;
    ps = ps + 1;
    cout << "add 1 to the ps pointer:\n";
    cout << "ps = " << ps << ", *( ps+1 ) = " << *ps << "\n\n";

    cout << "access two elements with array notation\n";
    //NOTA stacks[0] é igual a *(stacks)
    cout << "stacks[0] = " << stacks[0]
    //E stacks[1] é igual a *(stacks + 1)
    //NOTA 2: * lê-se, o valor de e & lê-se o endereço de
        << ", stacks[1] = " << stacks[1] << endl;
    cout << "access two elements with pointer notation\n";
    cout << "*stacks = " << *stacks
        << ", *(stacks + 1) = " << *(stacks + 1) << endl;
    cout << sizeof(wages) << " = size of wages array\n";
    cout << sizeof(pw) << " = size of pw pointer\n";

    //Notas Finais:
    //O endereço(&) do nome de um array retorna o endereço do de todo o array
    //O endereço(&) do apontador de um array retorna o endereço da primeira posição
    //O endereço(&) do nome de um array devolve o endereço da primeira posiçao tambem
    double array [] = { 1.0, 2.0, 3.0};
    //print(&array) devolve o endereço do todo o array
    //print(&apontadorDeArray) devolve o endereço de array[1] AKA da primeira posição
    //print(array) devolve o endereço de array[1] AKA da primeira posição

    //Adicionar 1; array + 1 adiciona 1 ao valor do endereço, devolvendo o endereço do segundo elemento do array
    //Adicionar 1; &array + 1 adiciona 3(pois o tamanho do array é 3) ao endereço do array, logo aumenta o tamanho do
    cout << &array<<"\n";
    // cout << &array + 1;

    return 0;
}

//Dynamic Binding page 173
//Para criar arrays dinamicos utiliza-se o "new"
#include <iostream>
int main(){
    int size;

    //Read size from user
    std::cin >> size;
    int * pz = new int [size];
    //Free the memory allocated
    delete [] pz;

}

//String and pointers
//null character (\0)
#include <iostream>
int main(){
    char flower[10] = "rose";
    std::cout << flower << "s are red\n";
}

//Listing 4.20 ptrstr.cpp
#include <iostream>
#include <cstring>

int main(){
    using namespace std;
    char animal[20] = "bear"; //animal holds bear
    const char * bird = "wren"; // birds holds address of string
    char * ps; // uninitialized

    cout << animal << " and "; // display bear
    cout << bird << "\n"; // display wren
    // cout << ps << "\n"; //may display garbage, may cause a crash

    cout << "Enter a kind of animal: ";
    cin >> animal;
    // cin >> ps; Too horrible a blunder to try; ps doesn't
    //              point to allocated space

    ps = animal;
    cout << ps <<"!\n";
    cout << "Before using strcpy():\n";
    cout << animal << " at " << (int * ) animal << endl;
    cout << ps << " at " << (int * ) ps << endl;

    ps = new char[strlen(animal) + 1];
    strcpy(ps, animal);

    cout << "After using strcpy():\n";
    cout << animal << " at " << (int * ) animal << endl;
    cout << ps << " at " << (int *) ps << endl;
    delete [] ps;

    return 0;

}

//Listing 4.21  newstrct.cpp
#include <iostream>
#include <cstring>

int main(){

    struct things
    {
        int good;
        int bad;
    };
    using namespace std;

    things grubnoose = {32, 254};
    things * pt = &grubnoose;

    //access grubnose by variable name( grubnoose.god)

    std::cout << "access by grubnoose.good: " << grubnoose.good << ", grubnoose.bad: " << grubnoose.bad << "\n";

    //access grubnose by ponter( grubnoose.god)
    std::cout << "access by pt->bad: " << pt->bad << ", pt->good: " << pt->good;

    return 0;
}

#include <iostream>
#include <cstring>

int *getValue(void);
void convertIntToChar(int decimal);
static int MAX_VALUE = 657;
static int MIN_VALUE = 1;

int main() {

       int * name;

       name = getValue();
       std::cout<< *name << " at " << name << "\n";
       convertIntToChar(*name);

       delete name;

        return 0;
    }

     // Get Value from cin and verify if its in accordance with the requirements
     // @return int * (value readed)
int *getValue() {

    int temp;
    std::cout << "Enter value: ";
    std::cin >> temp;
    if (temp < MAX_VALUE)
    {
        int *pn = new int;
        *pn = temp;

        return pn;
    } else
        {
           return getValue();
        }
    }

void getBiggestGap(int pt){
    std::cout<< "Value received";
    std::cout<< pt;

}

void convertIntToChar(int decimal){
    int binary = 0, remainder, product = 1;
    while (decimal != 0) {
        remainder = decimal % 2;
        binary = binary + (remainder * product);
        decimal = decimal / 2;
        product *= 10;
    }
    std::cout << "The number in the binary form is: " << binary ;
    //return binary;
}


//Listing 4.23  mixtypes.cpp
#include <iostream>
struct antartica_years_end{
    int year;
};

int main(){

    antartica_years_end s01, s02,s03;
    s01.year = 1998;
    antartica_years_end * pa = &s02;
    pa->year = 1999;
    antartica_years_end trio[3]; // array of 3 structs
    trio[0].year = 2003;
    std::cout << trio-> year <<std::endl;
    const antartica_years_end * arp[3] = {&s01, &s02, &s03};
    std::cout << arp[1]-> year << std::endl;
    const antartica_years_end ** ppa = arp;
    auto ppb = arp; // C++11 automatic type deduction
    //or else use const antartica_years_end ** ppb = arp;
    std::cout << (*ppa)->year << std::endl;
    std::cout << (*(ppb+1))->year <<std::endl;


    return 0;
}

// choices.cpp -- array variations
#include <iostream>
#include <vector> // STL C++98
#include <array> // C++11

int main(){
    using namespace std;
    //C, original C++
        double a1[4] = {1.2, 2.4, 3.6, 4.8};
    //C++98 STL
        vector<double> a2(4);
    // no simple way to initialize in C98
        a2[0]= 1.0/3.0;
        a2[1]= 1.0/5.0;
        a2[2]= 1.0/7.0;
        a2[3]= 1.0/9.0;

    //C++11 -- create and initialize array object
        array<double, 4> a3 = {3.14, 2.72, 1.62, 1.41};
        array<double, 4> a4;
        a4 = a3;

    // use array notation
        cout << "a1[2]: " << a1[2] << " at " << &a1[2] << endl;
        cout << "a2[2]: " << a2[2] << " at " << &a2[2] << endl;
        cout << "a3[2]: " << a3[2] << " at " << &a3[2] << endl;
        cout << "a4[2]: " << a4[2] << " at " << &a4[2] << endl;
    //misdeed

        a1[-2] = 20.2; // OU *(a1-2) = 20.2; Ao colocar dados em um local de memoria
        //fora do espaço de a1 é possivel alterar os valores do array preeviamente instanciado
        cout << "a1[-2]: " << a1[-2] <<" at " << &a1[-2] << endl;
        cout << "a3[2]: " << a3[2] << " at " << &a3[2] << endl;
        cout << "a4[2]: " << a4[2] << " at " << &a4[2] << endl;

    return 0;
}

//Exercises Chapter Review, page 191

//Ex 1 1. How would you declare each of the following?
//a. actors is an array of 30 char .
//b. betsie is an array of 100 short .
//c. chuck is an array of 13 float .
//d. dipsea is an array of 64 long double .
int main(){

    char actors[30];
    short betsie[100];
    float chuck[13];
    double dipsea[64];

    return 0;
}

//Ex 2. Does Chapter Review Question 1 use the array template class instead of built-in
//arrays.
#include <array> // C++11
using namespace std;
int main(){
    array<char, 4> actors;
    array<short, 100> betsie;
    array<float, 13> chuck;
    array<long double, 64> dipsea;
    return 0;
}

//3. Declare an array of five ints and initialize it to the first five odd positive integers.
#include <array> // C++11
#include <iostream>

using namespace std;
static int QUANTITY = 5;
array<int, 5> getOddNumbers(int);

int main(){

    array<int, 5> arr;

    arr = getOddNumbers(QUANTITY);
    for(int i = 0; i < arr.length(); i++){
    cout << arr.at(i);
    }
    return 0;
}

array<int, 5> getOddNumbers(int quantity){
    int start = 0;
    array<int, 5> temp_arr;
    int counter = 0;
    while (counter < quantity){
        if(start % 2 == 0 ){
            temp_arr.at(counter) = start;
            counter++;
            std::cout << "odd numbers: " << start << "\n";
        }
        start++;
    }
    return temp_arr;
}

//4. Write a statement that assigns the sum of the first and last elements of the array in
//Question 3 to the variable even .
#include <array> // C++11
#include <iostream>

using namespace std;
static int QUANTITY = 5;
array<int, 5> getOddNumbers(int);

int main(){

    array<int, 5> arr;

    arr = getOddNumbers(QUANTITY);
    for(int i = 0; i < arr.size(); i++){
        cout << arr.at(i) << "\n";
    }
    int even = (arr.at(0) + arr.at(arr.size()-1));
    cout << "even: " << even;
    return 0;
}

array<int, 5> getOddNumbers(int quantity){
    int start = 0;
    array<int, 5> temp_arr;
    int counter = 0;
    while (counter < quantity){
        if(start % 2 == 0 ){
            temp_arr.at(counter) = start;
            counter++;
            //std::cout << "odd numbers: " << start << "\n";
        }
        start++;
    }
    return temp_arr;
}

#include <array> // C++11
#include <iostream>

using namespace std;

int main(){
    float ideas[4];
    ideas[1] = 68;
    cout << "ideas[1](second element): " << ideas[1];
    return 0;
}


//6. Declare an array of char and initialize it to the string "cheeseburger" .
#include <array> // C++11
#include <iostream>

using namespace std;

int main(){
    char objects[] = "cheeseburger";
    //Access
    cout << "result: " << *(objects );
    return 0;
}

//7. Declare a string object and initialize it to the string "Waldorf Salad" .
#include <array> // C++11
#include <iostream>

using namespace std;

int main(){
    string b = "Waldorf Salad";
    cout << b;
    return 0;
}

//8. Devise a structure declaration that describes a fish.The structure should include the
//kind, the weight in whole ounces, and the length in fractional inches.
//9. Declare a variable of the type defined in Question 8 and initialize it.

#include <array> // C++11
#include <iostream>

using namespace std;

struct fish{
    int weight; //whole ounces ou kilos
    double length;// metros
    string color;
};
int main(){
    fish dolfin{400, 5.5, "blue" };

    return 0;
}

//10. Use enum to define a type called Response with the possible values Yes , No , and
//Maybe . Yes should be 1 , No should be 0 , and Maybe should be 2 .
#include <array> // C++11
#include <iostream>
int main(){
    enum RESPONSE{
        yes = 0, no = 1, maybe = 2
    };

    RESPONSE r = yes;
    std::cout << r;
    return 0;
}

//11. Suppose ted is a double variable. Declare a pointer that points to ted and use the
//pointer to display ted ’s value.

#include <array> // C++11
#include <iostream>
int main(){
    double ted = 55;
    double *pt;

    pt=&ted;

    std::cout << *pt;

    return 0;
}

//12. Suppose treacle is an array of 10 float s. Declare a pointer that points to the first ele-
//ment of treacle and use the pointer to display the first and last elements of the array.

#include <array> // C++11
#include <iostream>
static int ARRAY_LENGHT = 10;
int main(){

    float treacle[ARRAY_LENGHT];
    treacle[0] = 99;
    treacle[9] = 222;

    float *pt;
    pt = &treacle[0];

    std::cout << " First element: "<< *pt << "\n Last element: " << *(pt + ARRAY_LENGHT-1 );

    return 0;
}


//13. Write a code fragment that asks the user to enter a positive integer and then cre-
//ates a dynamic array of that many int s. Do this by using new , then again using a
//vector object.
#include <array> // C++11
#include <iostream>
static int ARRAY_LENGHT = 10;
int main(){

    int positive_integer;

    std::cout << "Enter a positive integer: ";

    std::cin >> positive_integer;

    //Dynamic array should be cast to pointers??
    int *dynamic_array = new int[positive_integer];

    //assign value 33 to dynamic_array[1]
    *(dynamic_array + 1) = 33;

    std::cout << "*(dynamic_array + 1):  " << *(dynamic_array + 1) << "\n";
    std::cout << "dynamic_array[1]: " << dynamic_array[1] << "\n";
    std::cout << "*(dynamic_array): " <<*(dynamic_array);

    return 0;
}


//14. Is the following valid code? If so, what does it print?
//cout << (int *) “Home of the jolly bytes”;
#include <array> // C++11
#include <iostream>
int main(){

    std::cout << (int *)"Home of the jolly bytes";

    std::cout <<" The expressin is valid it returns the address of the string Home...";

    return 0;
}

//15. Write a code fragment that dynamically allocates a structure of the type described
//in Question 8 and then reads a value for the kind member of the structure.
#include <array> // C++11
#include <iostream>

using namespace std;

struct fish{
    int weight; //whole ounces ou kilos
    double length;// metros
    string color;
};

fish *getAFish(void);
int main(){
    fish *pt = getAFish();

    cout << "Fish defined color: " << pt->color;
    delete pt;
    return 0;
}

fish *getAFish(){
    fish *n = new fish;

    cout << "define the fish weight: ";
    cin >> n->weight;

    cout << "define the fish length: ";
    cin >> n->length;

    cout << "define the fish color: ";
    cin >> n->color;



    return n;
}

//16. Listing 4.6 illustrates a problem created by following numeric input with line-ori-
//ented string input. How would replacing this:
//cin.getline(address,80);
//with this:
//cin >> address;
//affect the working of this program?
//Answer: Yes it will affet but not the perfect way because after insert a space
//cin will not add more character to de char[] address

#include <array> // C++11
#include <iostream>

int main(){

    using namespace std;
    cout << "What year was your house built?\n";
    int year;
    cin >> year;
    //Linha adicionada para não adicionar o enter ao proximo cin
    cin.get();
    cout << "What is its street address?\n";
    char address[80];
    //cin >> address;
    cin.getline(address, 80);
    cout << "Year built: " << year << endl;
    cout << "Address: " << address << endl;
    cout << "Done!\n";
    return 0;

}
//You never get the opportunity to enter the address.The problem is that when cin
//reads the year, it leaves the newline generated by the Enter key in the input queue.Then
//cin.getline() reads the newline as an empty line and assigns a null string to the
//address array.The fix is to read and discard the newline before reading the address.This
//can be done several ways, including by using get() with a char argument or with no
//argument, as described in the preceding example.You can make these calls separately:
//cin >> year;


//17. Declare a vector object of 10 string objects and an array object of 10 string
//objects. Show the necessary header files and don’t use using . Do use a const for
//the number of strings.

#include <array> // C++11
#include <iostream>
#include <vector> // STL C++98
#include <string>

int main(){

    std::vector<std::string> v1(10);
    std::string s1[10];

    return 0;
}

//Programming Exercises Page 192

//Ex 1
#include <array> // C++11
#include <iostream>
#include <vector> // STL C++98
#include <string>
using namespace std;
int main(){
    char firstName[80];
    char lastName[80];
    char grade;
    int age;

    cout << "What is your first name? ";
    cin.getline(firstName, 80);
    cout << "What is your last name? ";
    cin.getline(lastName, 80);
    cout << "What letter grade do you deserve? ";
    cin >> grade;
    cin.get();
    cout << "What is your age? ";
    cin >> age;
    cin.get();

    cout << "Name: " << lastName << ", " << firstName << "\nGrade: " << static_cast<char>(grade + 1) << "\nAge: " << age;
    return 0;
}

//Ex 2
#include <array> // C++11
#include <iostream>
#include <vector> // STL C++98
#include <string>
using namespace std;
int main(){

    using namespace std;
    const int ArSize = 20;
    string name;
    string dessert;
    cout << "Enter your name:\n";
    cin >>name; // reads through newline
    cout << "Enter your favorite dessert:\n";
    cin >> dessert;
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";

    return 0;

    return 0;
}

//Ex3
#include <array> // C++11
#include <iostream>
#include <vector> // STL C++98
#include <string>
#include <bits/stdc++.h>
using namespace std;
int main(){

    using namespace std;
    char name[80];
    char lastName[80];
    cout << "Enter first name: ";
    cin >>name; // reads through newline
    cout << "Enter your last name:\n";
    cin >> lastName;

    char result[200] = "\0";
    //strcat adiciona a string no final da primeira por isso é necessário dizer que a primeira posição é o
    //final da string com ="\0"
    strcat(result, name);
    strcat(result, ", ");
    strcat(result, lastName);
    cout << "Here’s the information in a single string: " << result;

    return 0;
}

//Ex4
#include <array> // C++11
#include <iostream>
#include <vector> // STL C++98
#include <string>
#include <bits/stdc++.h>
using namespace std;
int main(){

    using namespace std;
    string name;
    string lastName;
    cout << "Enter first name:\n";
    cin >>name; // reads through newline
    cout << "Enter your last name:\n";
    cin >> lastName;

    string result = name.append(", " + lastName);
    cout << "Here’s the information in a single string: " << result;

    return 0;
}


//Ex 5
#include <array> // C++11
#include <iostream>
#include <vector> // STL C++98
#include <string>
#include <bits/stdc++.h>
using namespace std;

struct CandyBar{
    string brand_name;
    double weigth;
    int calories;
};
int main() {
    using namespace std;

    CandyBar snack{"MochaMunch", 2.3, 350};

    cout << "snack: " << snack.brand_name << ", " << snack.weigth << ", " << snack.calories;

    return 0;
}

//Ex 6
#include <array> // C++11
#include <iostream>
#include <vector> // STL C++98
#include <string>
#include <bits/stdc++.h>
using namespace std;

struct CandyBar{
    string brand_name;
    double weigth;
    int calories;
};
int main() {
    using namespace std;

    CandyBar snack1{"MochaMunch", 2.3, 350};
    CandyBar snack2{"Mars", 5.2, 50};
    CandyBar snack3{"Snickers", 7.0, 750};

    CandyBar snacks[3];
    snacks[0] = snack1;
    snacks[1] = snack2;
    snacks[2] = snack3;

    cout << "snack: " << snacks[0].brand_name << ", " << snacks[0].weigth << ", " << snacks[0].calories << "\n";
    cout << "snack: " << snacks[1].brand_name << ", " << snacks[1].weigth << ", " << snacks[1].calories << "\n";;
    cout << "snack: " << snacks[2].brand_name << ", " << snacks[2].weigth << ", " << snacks[2].calories;

    return 0;
}


*/
//Ex 6

#include <array> // C++11
#include <iostream>
#include <vector> // STL C++98
#include <string>
#include <bits/stdc++.h>
using namespace std;

struct pizza{
    string name;
    double diameter;
    double weight;
};
int main() {

    using namespace std;

    pizza p1;

    cout << "Enter the pizza name\n";
    cin >> p1.name;
    cin.get();

    cout << "Enter the pizza diameter\n";
    cin >> p1.diameter;
    cin.get();

    cout << "Enter the pizza weight\n";
    cin >> p1.weight;
    cin.get();

    cout << "The pizza: name: " << p1.name << ", diameter: " << p1.diameter << ", weight: " << p1.weight;

    return 0;
}