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
        //cout << current->data<<endl;
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

   // cout << sum << endl;

    // find the max and the min 

    // insert a new node: between d2 and d3 
    // create the new node
    nodeType n; n.data = 90;

    // insert the node (it will be inserted after index 1)
    int currentIndex = 0;
    current = first;// reset the current pointer 
    while (currentIndex != 1)
    {
        currentIndex += 1;
        current = current->link; 
    }

   //  cout << current->data << endl;
    n.link = current->link;
    current->link = &n;


    current = first;
    while (current != NULL)
    {
        cout << current->data<<endl;
        current = current->link;
    }


}
