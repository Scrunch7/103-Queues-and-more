#include <iostream>
#include <queue>
#include <array>

void printQ(std::queue<int> myQ) {
    while (!myQ.empty()) {
        std::cout << myQ.front();
        myQ.pop();
    }
}

void arrayFunc() {
    std::array<int, 6> name;
}

int main()
{
    std::queue<int> myQueue;
    myQueue.push(5);

    myQueue.empty(); //returns true if no content
    myQueue.size(); //returns number of elements
    myQueue.emplace(); //add new element at end
    myQueue.swap('n'); //switches content of two queues
    myQueue.front(); //returns firt value
    myQueue.back(); //returns last value
    myQueue.push(); //adds parameter to end of queue
    myQueue.pop(); //removes first element from queue

}
