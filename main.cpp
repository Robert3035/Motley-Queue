/*Robert Salyers
Computer Science 2
This program reads numbers from a queue*/
#include <iostream>
//include queue file
#include "queue.h"

using namespace std;

int main() {
  queue test;
  //put numbers in stack
  test.push(1);
  test.push(2);
  test.push(3);
  test.push(4);
  //print numbers from the front of queue while it has numbers in it
  while(!test.isEmpty()){
    cout << test.pop();
  }
}