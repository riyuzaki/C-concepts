#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<string, string> numbers;  //A map is basically doing mapping b/w the string and the number(also string) in this case
                                  //but more technically it is a Associative container or simply a data structure
                                 //in which the "keys" can be used to get the "values"
    numbers["Jones"] = "365";
    numbers["Smith"] = "467";
    numbers["Brown"] = "111";
    cout << "Jones: " << numbers["Jones"] << endl;
    cout << "number of numbers: " << numbers.size() << endl;
    numbers.erase("Smith");
    cout << "number of numbers: " << numbers.size() << endl;
    return 0;
}
