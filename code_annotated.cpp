// ============================================================
//   C++ REVISION FILE - BY KULDEEP PARMAR
//   Topic-wise annotated code with definitions
// ============================================================

#include <iostream>
#include <string>
using namespace std;

// ------------------------------------------------------------
// FUNCTIONS (defined before main so no forward declaration needed)
// DEFINITION: A function is a reusable block of code that performs
// a specific task. Syntax: returnType functionName(parameters) { body }
// ------------------------------------------------------------

int sum(int x, int y){
    // DEFINITION: This is a user-defined function that takes two integers
    // and returns their sum. Defined before main() so we can call it
    // without a prior declaration (prototype).
    return x + y;
}

// DEFINITION: Pass by Value - a COPY of the variable is passed to the function.
// Changes inside the function do NOT affect the original variable.
void passByValue(int x){
    x = x + 10;
    cout << "value of x inside passByValue function is " << x << endl;
}

// DEFINITION: Pass by Reference - the ACTUAL variable is passed using '&'.
// Changes inside the function DO affect the original variable.
void passByReference(int &y){
    y = y + 10;
    cout << "value of y inside passByReference function is " << y << endl;
}

// ------------------------------------------------------------
// CLASS AND OBJECT
// DEFINITION: A class is a blueprint/template for creating objects.
//             An object is an instance of a class.
//             Members declared as 'public' are accessible from outside the class.
// ------------------------------------------------------------
class Person {
    public:
        string name;
        int age;
        void display(){
            cout << "name: " << name << endl;
            cout << "age: "  << age  << endl;
        }
        // DEFINITION: Constructor - a special function called automatically
        // when an object is created. Same name as the class, no return type.
        // Default constructor has no parameters.
        Person(){
            name = "kuldeep parmar";
            age  = 0;
            cout << "default constructor called " << name << endl;
        }
        // DEFINITION: Destructor - a special function called automatically
        // when an object goes out of scope or is deleted. Prefix: '~'
        ~Person(){
            cout << "destructor called for " << name << endl;
        }
};

// ============================================================
//   MAIN FUNCTION
//   DEFINITION: Entry point of every C++ program. Execution starts here.
// ============================================================
int main() {
    cout << "Hello Kuldeep" << endl;

    // ----------------------------------------------------------
    // DATA TYPES AND VARIABLES
    // DEFINITION: A variable is a named storage location in memory.
    // A data type tells the compiler what kind of data will be stored.
    // ----------------------------------------------------------
    int mark = 80;
    cout << "my marks in maths is "   << mark << endl;
    mark = 90;
    cout << "my marks in physics is " << mark << endl;

    // int    - stores whole numbers (4 bytes)
    // float  - stores decimal numbers with ~6 digits precision (4 bytes)
    // double - stores decimal numbers with ~15 digits precision (8 bytes)
    // char   - stores a single character (1 byte)
    // bool   - stores true (1) or false (0) (1 byte)
    int    a = 10;
    float  b = 3.14f;
    double c = 3.14159265358979323846;
    char   d = 'k';
    bool   e = true;

    cout << "integer value is " << a << endl;
    cout << "float value is "   << b << endl;
    cout << "double value is "  << c << endl;
    cout << "char value is "    << d << endl;
    cout << "boolean value is " << e << endl;

    // sizeof() operator: returns the size of a variable or type in bytes
    cout << "size of int is " << sizeof(a) << " bytes" << endl;

    // ----------------------------------------------------------
    // INPUT FROM USER
    // DEFINITION: cin is the standard input stream used to read data.
    //             '>>' is the extraction operator.
    // ----------------------------------------------------------
    int age;
    cout << "enter your age: " << endl;
    cin  >> age;
    cout << "your age is " << age << endl;

    char name;
    cout << "enter name's first letter: " << endl;
    cin  >> name;
    cout << "your first letter of name is: " << name << endl;

    // ----------------------------------------------------------
    // CONTROL FLOW - IF / ELSE
    // DEFINITION: if-else allows the program to make decisions.
    //             Code inside 'if' runs when condition is true,
    //             code inside 'else' runs when condition is false.
    // ----------------------------------------------------------
    int age1;
    cout << "enter your age: " << endl;
    cin  >> age1;
    if(age1 >= 18){
        cout << "you are eligible to vote" << endl;
    } else {
        cout << "you are not eligible to vote" << endl;
    }

    // DEFINITION: if-else if ladder checks multiple conditions in sequence.
    int marks;
    cout << "enter your marks: " << endl;
    cin  >> marks;
    if     (marks >= 90) cout << "grade A" << endl;
    else if(marks >= 80) cout << "grade B" << endl;
    else if(marks >= 70) cout << "grade C" << endl;
    else if(marks >= 60) cout << "grade D" << endl;

    // Same ladder with a final else (catches all remaining cases)
    int marks1;
    cout << "enter your marks: " << endl;
    cin  >> marks1;
    if     (marks1 >= 90) cout << "grade A"  << endl;
    else if(marks1 >= 80) cout << "grade B"  << endl;
    else if(marks1 >= 70) cout << "grade C"  << endl;
    else if(marks1 >= 60) cout << "grade D"  << endl;
    else                  cout << "failed"   << endl;

    // DEFINITION: Nested if - an if statement placed inside another if.
    int age2;
    cout << "enter your age: " << endl;
    cin  >> age2;
    if(age2 >= 18){
        cout << "you are eligible to vote" << endl;
        if(age2 >= 60)
            cout << "you are senior citizen" << endl;
        else
            cout << "you are not senior citizen" << endl;
    } else {
        cout << "you are not eligible to vote" << endl;
    }

    // ----------------------------------------------------------
    // SWITCH-CASE
    // DEFINITION: switch compares a variable against multiple constant
    //             values (cases). 'break' exits the switch after a match.
    //             'default' runs when no case matches.
    // ----------------------------------------------------------
    int day;
    cout << "enter day number (1-7): " << endl;
    cin  >> day;
    switch(day){
        case 1: cout << "Monday"    << endl; break;
        case 2: cout << "Tuesday"   << endl; break;
        case 3: cout << "Wednesday" << endl; break;
        case 4: cout << "Thursday"  << endl; break;
        case 5: cout << "Friday"    << endl; break;
        case 6: cout << "Saturday"  << endl; break;
        case 7: cout << "Sunday"    << endl; break;
        default:cout << "invalid day number" << endl;
    }

    // ----------------------------------------------------------
    // TERNARY OPERATOR
    // DEFINITION: Short form of if-else.
    //             Syntax: (condition) ? valueIfTrue : valueIfFalse
    // ----------------------------------------------------------
    int age3 = 20;
    (age3 >= 18) ? cout << "eligible to vote" << endl
                 : cout << "not eligible to vote" << endl;

    // ----------------------------------------------------------
    // CONTINUE AND BREAK STATEMENTS
    // DEFINITION: 'continue' skips the rest of the current loop iteration
    //             and moves to the next one.
    //             'break' immediately exits the loop.
    // ----------------------------------------------------------
    for(int i = 1; i <= 10; i++){
        if(i % 2 == 0) continue;   // skip even numbers
        cout << "odd number is " << i << endl;
    }

    for(int i = 1; i <= 10; i++){
        if(i == 5) break;           // stop when i reaches 5
        cout << "number is " << i << endl;
    }

    // ----------------------------------------------------------
    // LOOPS
    // DEFINITION: Loops repeat a block of code multiple times.
    //
    //   for loop   - used when number of iterations is known.
    //                Syntax: for(init; condition; update){ }
    //   while loop - checks condition BEFORE executing body.
    //   do-while   - executes body ONCE first, then checks condition.
    // ----------------------------------------------------------

    // for loop
    for(int count = 1; count <= 5; count++){
        cout << "the number is " << count << endl;
    }

    // while loop
    int count1 = 1;
    while(count1 <= 5){
        cout << "the number is " << count1 << endl;
        count1++;
    }

    // do-while loop
    int count2 = 1;
    do{
        cout << "the number is " << count2 << endl;
        count2++;
    } while(count2 <= 5);

    // DEFINITION: Nested loops - a loop inside another loop.
    //             Inner loop completes all iterations for each iteration of outer loop.
    for(int i = 1; i <= 3; i++){
        for(int j = 1; j <= 3; j++){
            cout << "i = " << i << " and j = " << j << endl;
        }
    }

    // ----------------------------------------------------------
    // OPERATORS
    // ----------------------------------------------------------

    // UNARY OPERATORS - operate on a single operand
    // x++  (post-increment): uses current value, then increments
    // ++x  (pre-increment) : increments first, then uses new value
    // x--  (post-decrement): uses current value, then decrements
    // --x  (pre-decrement) : decrements first, then uses new value
    int x = 5;
    cout << "value of x is "                     << x   << endl;
    cout << "value of x after post-increment is " << x++ << endl;
    cout << "value of x after pre-increment is "  << ++x << endl;
    cout << "value of x after post-decrement is " << x-- << endl;
    cout << "value of x after pre-decrement is "  << --x << endl;

    // ARITHMETIC OPERATORS: +  -  *  /  %
    // NOTE: '/' between two ints does integer division (drops remainder)
    //       '%' gives the remainder (modulus)
    int num1 = 10, num2 = 3;
    cout << "num1 + num2 = " << num1 + num2 << endl;
    cout << "num1 - num2 = " << num1 - num2 << endl;
    cout << "num1 * num2 = " << num1 * num2 << endl;
    cout << "num1 / num2 = " << num1 / num2 << endl;  // integer division => 3
    cout << "num1 % num2 = " << num1 % num2 << endl;  // remainder => 1

    // RELATIONAL (COMPARISON) OPERATORS: == != > < >= <=
    // DEFINITION: Compare two values and return 1 (true) or 0 (false).
    int a1 = 10, b1 = 20;
    cout << "a1 == b1 is " << (a1 == b1) << endl;
    cout << "a1 != b1 is " << (a1 != b1) << endl;
    cout << "a1 >  b1 is " << (a1 >  b1) << endl;
    cout << "a1 <  b1 is " << (a1 <  b1) << endl;
    cout << "a1 >= b1 is " << (a1 >= b1) << endl;
    cout << "a1 <= b1 is " << (a1 <= b1) << endl;

    // LOGICAL OPERATORS: &&  ||  !
    // &&  (AND) : true only if BOTH operands are true
    // ||  (OR)  : true if AT LEAST ONE operand is true
    // !   (NOT) : reverses the boolean value
    bool p = true, q = false;
    cout << "p && q is " << (p && q) << endl;
    cout << "p || q is " << (p || q) << endl;
    cout << "!p is "     << (!p)     << endl;
    cout << "!q is "     << (!q)     << endl;

    // ASSIGNMENT OPERATORS: =  +=  -=  *=  /=  %=
    // DEFINITION: Shorthand to perform an operation and assign the result back.
    int c1 = 10;
    cout << "value of c1 is "            << c1 << endl;
    c1 += 5;  cout << "after += 5  : "   << c1 << endl;
    c1 -= 3;  cout << "after -= 3  : "   << c1 << endl;
    c1 *= 2;  cout << "after *= 2  : "   << c1 << endl;
    c1 /= 4;  cout << "after /= 4  : "   << c1 << endl;
    c1 %= 3;  cout << "after %= 3  : "   << c1 << endl;

    // BITWISE OPERATORS: &  |  ^  ~  <<  >>
    // DEFINITION: Operate directly on binary (bit-level) representation.
    // &  - AND  : bit is 1 only if both bits are 1
    // |  - OR   : bit is 1 if at least one bit is 1
    // ^  - XOR  : bit is 1 if bits are different
    // ~  - NOT  : flips all bits (result = -(n+1))
    // << - Left shift  : multiplies by 2 for each shift
    // >> - Right shift : divides by 2 for each shift
    int m = 5;  // binary: 0101
    int n = 3;  // binary: 0011
    cout << "m & n  = " << (m & n)  << endl;  // 0001 = 1
    cout << "m | n  = " << (m | n)  << endl;  // 0111 = 7
    cout << "m ^ n  = " << (m ^ n)  << endl;  // 0110 = 6
    cout << "~m     = " << (~m)     << endl;  // -6
    cout << "m << 1 = " << (m << 1) << endl;  // 1010 = 10
    cout << "m >> 1 = " << (m >> 1) << endl;  // 0010 = 2

    // ----------------------------------------------------------
    // NUMBER SYSTEMS
    // DEFINITION: Computers work in binary (base-2). C++ supports
    //   Decimal (base-10) : normal numbers e.g. 10
    //   Binary  (base-2)  : prefix 0b, e.g. 0b1010
    //   Octal   (base-8)  : prefix 0,  e.g. 012
    //   Hexadecimal(base-16): prefix 0x, e.g. 0xA
    // ----------------------------------------------------------
    int decimalNum = 10;
    int binaryNum  = 0b1010;  // same value as 10 in decimal
    cout << "decimal number is " << decimalNum << endl;
    cout << "binary number is "  << binaryNum  << endl;

    // Print binary representation using bit-shifting
    int num = 10;
    cout << "binary of " << num << " is ";
    for(int i = 7; i >= 0; i--){
        cout << ((num >> i) & 1);
    }
    cout << endl;

    // Decimal → Binary (user input)
    int decimalNumber;
    cout << "enter a decimal number: " << endl;
    cin  >> decimalNumber;
    cout << "binary of " << decimalNumber << " is ";
    for(int i = 7; i >= 0; i--){
        cout << ((decimalNumber >> i) & 1);
    }
    cout << endl;

    // Binary → Decimal
    // DEFINITION: Multiply each binary digit by its place value (power of 2)
    //             and add them all together.
    int binaryNumber;
    cout << "enter a binary number: " << endl;
    cin  >> binaryNumber;
    int decimalNumber1 = 0;
    int base = 1;  // starts at 2^0 = 1
    while(binaryNumber > 0){
        int lastDigit    = binaryNumber % 10;
        decimalNumber1  += lastDigit * base;
        base            *= 2;
        binaryNumber    /= 10;
    }
    cout << "decimal representation is " << decimalNumber1 << endl;

    // ----------------------------------------------------------
    // TYPE CASTING
    // DEFINITION: Converting a variable from one data type to another.
    //
    //   Implicit (automatic) - done by compiler when types are compatible.
    //   Explicit (manual)    - programmer forces the conversion using (type).
    // ----------------------------------------------------------

    // Implicit: int + float → compiler auto-converts int to float
    int   i = 10;
    float f = 1.0f;
    float result = i + f;
    cout << "result of i + f is " << result << endl;

    // Explicit: (int)b2 truncates the decimal part
    int   a2 = 10;
    float b2 = 3.14f;
    int   result1 = a2 + (int)b2;  // 3.14 becomes 3
    cout << "result of a2 + (int)b2 is " << result1 << endl;

    // ----------------------------------------------------------
    // FUNCTIONS - calling the sum() function defined above main()
    // ----------------------------------------------------------
    int r1 = 5, r2 = 10;
    int result2 = sum(r1, r2);
    cout << "sum of " << r1 << " and " << r2 << " is " << result2 << endl;

    // ----------------------------------------------------------
    // ARRAYS
    // DEFINITION: An array is a collection of elements of the SAME data type
    //             stored in contiguous memory locations.
    //             Syntax: dataType arrayName[size] = { values };
    //             Index starts from 0.
    // ----------------------------------------------------------
    int arr[5] = {1, 2, 3, 4, 5};
    cout << "elements of array are: " << endl;
    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    // BUG FIX: loop condition was 'index <= 5' which causes out-of-bounds
    //          (valid indices are 0 to 4). Corrected to 'index < 5'.
    int arr1[5];
    cout << "enter 5 elements of array: " << endl;
    for(int index = 0; index < 5; index++){
        cout << "enter element[" << index << "]: " << endl;
        cin  >> arr1[index];
        cout << "you entered " << arr1[index] << endl;
    }

    // ----------------------------------------------------------
    // CHAR ARRAYS AND STRINGS
    // DEFINITION: A char array stores a sequence of characters ending
    //             with '\0' (null character). cin>> reads one word only.
    // ----------------------------------------------------------
    char str[20];
    cout << "enter a string: " << endl;
    cin  >> str;
    cout << "you entered " << str << endl;

    // DEFINITION: std::string is a class that manages character sequences.
    //             Useful built-in methods:
    //   .length()        - returns number of characters
    //   .append(s)       - adds string s at the end
    //   .insert(pos, s)  - inserts string s at position pos
    //   .erase(pos, len) - removes 'len' characters starting at pos
    //   .replace(pos, len, s) - replaces 'len' chars at pos with s
    string str1 = "Hello Kuldeep";
    cout << "length of str1 is "             << str1.length() << endl;
    cout << "string str1 is "                << str1 << endl;
    str1.append(" welcome to c++ programming");
    cout << "after append: "                 << str1 << endl;
    str1.insert(5, " Mr.");
    cout << "after insert: "                 << str1 << endl;
    str1.erase(5, 4);
    cout << "after erase: "                  << str1 << endl;
    str1.replace(0, 5, "Hi");
    cout << "after replace: "                << str1 << endl;

    // ----------------------------------------------------------
    // PASS BY VALUE vs PASS BY REFERENCE (demonstration)
    // ----------------------------------------------------------
    int x1 = 10;
    cout << "x1 before passByValue:     " << x1 << endl;
    passByValue(x1);
    cout << "x1 after  passByValue:     " << x1 << endl;  // unchanged

    int y1 = 10;
    cout << "y1 before passByReference: " << y1 << endl;
    passByReference(y1);
    cout << "y1 after  passByReference: " << y1 << endl;  // changed to 20

    // ----------------------------------------------------------
    // POINTERS
    // DEFINITION: A pointer is a variable that stores the MEMORY ADDRESS
    //             of another variable.
    //   &variable  - address-of operator, gives the address
    //   *pointer   - dereference operator, gives the value at that address
    //   int *ptr   - declares a pointer to int
    // ----------------------------------------------------------
    int number = 10;
    int *ptr   = &number;
    cout << "value of number is "              << number  << endl;
    cout << "address of number is "            << &number << endl;
    cout << "ptr holds address "               << ptr     << endl;
    cout << "value at that address (*ptr) is " << *ptr    << endl;

    // DYNAMIC MEMORY ALLOCATION
    // DEFINITION: 'new' allocates memory on the HEAP at runtime.
    //             'delete' frees that memory to avoid memory leaks.
    int *ptr2 = new int;
    *ptr2 = 20;
    cout << "value in dynamic memory is " << *ptr2 << endl;
    delete ptr2;  // always free memory allocated with new

    // ----------------------------------------------------------
    // CLASSES AND OBJECTS - using Person class defined above
    // ----------------------------------------------------------
    Person person1;         // default constructor called automatically
    person1.name = "Kuldeep";
    person1.age  = 25;
    person1.display();
    cout << "size of person1 object is " << sizeof(person1) << " bytes" << endl;

    Person person2;         // another object, default constructor sets name
    person2.display();

    // Destructors for person1 and person2 are called automatically here
    // when main() ends and objects go out of scope.

    return 0;
}
