#include <queue>
#include <iostream>

using namespace std;


struct comparator
{
    bool operator()(int a, int b)
    {
        return a > b;
    }
};


int main()
{
    priority_queue<int, vector<int>, comparator> pq;
    pq.push(10);
	pq.push(30);
	pq.push(20);
	pq.push(70);
	pq.push(40);
	pq.push(50);
	pq.push(80);
	pq.push(90);
	pq.push(32);

    while (!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }

    return 0;
}
