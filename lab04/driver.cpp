// TO DO: Implement the driver main() function to test your code.
#include "LinkedList.hpp"
#include <iostream>
using namespace std;

int main()
{
    LinkedList<int> list;
    LinkedList<string> strList;

    list.append(10);
    list.append(20);
    cout << list;

    list.replace(1, 50);
    cout << list;

    try
    {
        list.replace(30, 50);
    }
    catch (const string &e)
    {
        cout << e << endl;
    }

    cout << list.getElement(1) << endl;

    try
    {
        list.getElement(5);
    }
    catch (const string &e)
    {
        cout << e << endl;
    }

    list.clear();
    cout << list;

    strList.append("hi");
    strList.append("col");

    strList.replace(0, "bye");
    cout << strList;

    try
    {
        strList.replace(3, "ln");
    }
    catch (const string &e)
    {
        cout << e << endl;
    }

    cout << strList.getElement(0) << endl;

    try
    {
        cout << strList.getElement(8) << endl;
    }
    catch (const string &e)
    {
        cout << e << endl;
    }

    strList.clear();
    cout << strList;

    return 0;
}
