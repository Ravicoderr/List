#include <iostream>
#include <list>
using namespace std;
void display(list<int> lst)
{
    list<int>::iterator iter;
    for (iter = lst.begin(); iter != lst.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout << endl;
}
int main()
{
    list<int> list1;
    list1.push_back(6);
    list1.push_back(9);
    list1.push_back(5);
    list1.push_back(4);
    list1.push_back(8);
    list1.push_back(3);
    list1.sort(); // acsending order m print hojynge
    display(list1);
    list1.pop_back();  // ye last vale element ko print nhi krega
    list1.pop_front(); // ye first vale elemnt ko print nhi krega
    list1.remove(5);   // ye uss elemnt ko remove krdega jo 5 h
    display(list1);

    list<int> list2(3);
    list<int>::iterator iter = list2.begin();
    *iter = 2;
    iter++;
    *iter = 8;
    iter++;
    *iter = 3;
    iter++;
    display(list2);

    return 0;
}
