// LinkedLists.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


struct nodeType
{
    int data;

    nodeType* link;

};


#include <iostream>
using namespace std; 
int main()
{
   // create a list manually

    nodeType* first; // pointer to the first node

    nodeType d1;d1.data = 5;

    nodeType d2; d2.data = 10;

    nodeType d3; d3.data = 30; 

    // first->d1->d2->d3; 

    first = &d1; 
    d1.link = &d2;
    d2.link = &d3;
    d3.link = NULL;

    // Traversal 
    nodeType* current = first; 

    while (current != NULL)
    {
        cout << current->data<<endl;
        current = current->link;
    }

    // find the sum of the data items in the list

    current = first;
    int sum = 0;
    while (current != NULL)
    {
        sum += current->data;
        current = current->link;

    }

    cout << sum << endl;



}
