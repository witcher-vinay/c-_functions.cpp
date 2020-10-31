#include<bits/stdc++.h>
using namespace std;
void vector__()
{
	vector <int> v,v1(n); // v1 of size n
	v.push_back(10);
	v.pop_back();
	sort(v.begin(),v.end());
	reverse(v.begin(), v.end());
    random_shuffle(v.begin(), v.end());

	
	for (auto x : v)
	{
		cout << x << "\n";
    }

    vec.insert(vec.begin() + i, 7); // insert 7 at i index

    vector<int> myvector{ 1, 2, 3, 4, 5 }; 
    auto it1, it2; 
    it1 = myvector.begin(); 
    it2 = myvector.end(); 
    it2--; 
    it2--; 
  
    myvector.erase(it1, it2);  // delete elements are 1,2,3



}

void map__()
{
	map<string,int> m;
	m["monkey"] = 4;
	m["banana"] = 3;
	m["harpsichord"] = 9;
	cout << m["banana"] << "\n"; // 3


	if (m.count("aybabtu"))
			 {
		       // key exists
			 }

	for (auto x : m)   // every element in map
	{
		cout << x.first << " " << x.second << "\n";
	}
}


void bitmap__() // bitmap only store 0's and 1's
{

	bitset<10> s;
	s[1] = 1;
	s[3] = 1;
	s[4] = 1;
	s[7] = 1;
	cout << s[4] << "\n"; // 1
	cout << s[5] << "\n"; // 0



	bitset<10> s(string("0010011010")); // from right to left
	cout << s[4] << "\n"; // 1
	cout << s[5] << "\n"; // 0
}

void deque__()//A deque is a dynamic array whose size can be efficiently changed at both ends of the array
{
	deque<int> d;
	d.push_back(5); // [5]
	d.push_back(2); // [5,2]
	d.push_front(3); // [3,5,2]
	d.pop_back(); // [3,5]
	d.pop_front(); // [5]
}
void stack__()
{
//   A stack is a data structure that provides two O(1) time operations: adding an
//   element to the top, and removing an element from the top
		
	stack<int> s;
	s.push(3);
	s.push(2);
	s.push(5);
	cout << s.top(); // 5
	s.pop();
	cout << s.top(); // 2	
}


void queue__()
{
	//  A queue also provides two O(1) time operations: adding an element to the end
//      of the queue, and removing the first element in the queue.	

	queue<int> q;
	q.push(3);
	q.push(2);
	q.push(5);
	cout << q.front(); // 3
	q.pop();
	cout << q.front(); // 2
}

void priority__queue()
{
	/*   A priority queue maintains a set of elements. The supported operations are
insertion and, depending on the type of the queue, retrieval and removal of either
the minimum or maximum element.   */

	priority_queue<int> q;
	q.push(3);
	q.push(5);
	q.push(7);
	q.push(2);
	cout << q.top() << "\n"; // 7
	q.pop();
	cout << q.top() << "\n"; // 5
	q.pop();
	q.push(6);
	cout << q.top() << "\n"; // 6
	q.pop();

}

bool is_prime(int a1)
  {
  	bool b1=false;
  	for(int i=2;i<=a1/2 ; i++){
  		if(a1%i==0)
  		{
  			b1=true;
  			break;
  		}
  	}
  	if(b1)
  		return false;
  	return true;
 }
