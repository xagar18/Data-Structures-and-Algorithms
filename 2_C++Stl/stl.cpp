#include <bits\stdc++.h>
using namespace std;

int main()
{

    // Pairs
    pair<int, char> t = {1, 'a'};
    // cout<<t.first<<" "<<t.second<<endl; // 1 a

    pair<int, pair<int, char>> p = {1, {2, 'a'}};
    // cout<<p.first<<" "<<p.second.first<<" "<<p.second.second<<endl; // 1 2 a

    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};
    // cout<<arr[1].first<<" "<<arr[1].second<<endl; // 3 4

    // Vectors

    vector<int> u;

    u.push_back(1);
    u.emplace_back(2); // emplace_back is faster than push_back

    vector<pair<int, int>> v;

    v.push_back({1, 2});
    v.emplace_back(3, 4);

    vector<int> a(5, 1); // {1, 1, 1, 1, 1}

    vector<int> b(5); // {0, 0, 0, 0, 0} //push_back can be used to fill the vector

    vector<int> c(5);
    vector<int> d(c); // d is a copy of c

    vector<int> e{1, 2, 3, 4, 5}; // {1, 2, 3, 4, 5}

    // vector<int>::iterator it = e.begin();
    // it++;
    // cout<<*it<<endl; // 2

    // it = it + 2;
    // cout<<*it<<endl; // 4

    // vector<int>::iterator it = e.end(); // points to the next of the last element

    // cout<<e[1]<<endl; // 2
    // cout<<e.back()<<endl; // 5

    for (auto it = e.begin(); it != e.end(); it++)
    {                       // iterating through the address of the elements
        cout << *it << " "; // 1 2 3 4 5
    }
    for (int x : e)
    {
        cout << x << " "; // 1 2 3 4 5
    }

    e.erase(e.begin() + 1);                // {1, 3, 4, 5}
    e.erase(e.begin() + 1, e.begin() + 3); // {1, 5}

    vector<int> f(2, 100);          // {100, 100}
    f.insert(f.begin(), 300);       // {300, 100, 100}
    f.insert(f.begin() + 1, 2, 10); // {300, 10, 10, 100, 100}

    vector<int> newVec(2, 50);                         // {50, 50}
    f.insert(f.begin(), newVec.begin(), newVec.end()); // {50, 50, 300, 10, 10, 100, 100}

    // cout<<f.size()<<endl; // 7 {50, 50, 300, 10, 10, 100, 100}

    f.pop_back(); // removes the last element of the vector {50}

    vector<int> g1(5, 10); // {10, 10, 10, 10, 10}
    vector<int> g2(5, 20); // {20, 20, 20, 20, 20}

    swap(g1, g2); // g1 = {20, 20, 20, 20, 20} g2 = {10, 10, 10, 10, 10}
    g1.swap(g2);  // g1 = {10, 10, 10, 10, 10} g2 = {20, 20, 20, 20, 20}

    g1.clear(); // removes all the elements of the vector

    // cout<<g1.empty()<<endl; // 1 (true) if the vector is empty else 0 (false)

    // List

    list<int> l;

    l.push_back(1); // {1}
    l.push_back(2); // {1, 2}

    l.push_front(3); // {3, 1, 2}

    l.emplace_back(4);  // {3, 1, 2, 4} // emplace_back is faster than push_back
    l.emplace_front(5); // {5, 3, 1, 2, 4} // emplace_front is faster than push_front

    // rest of the functions are same as vector
    // list is a doubly linked list
    // list is faster than vector in insertion and deletion of elements
    // vector is faster than list in accessing elements

    // Stack - LIFO (Last In First Out)  - push, pop, top

    stack<int> s1;
    s1.push(1); // {1}
    s1.push(2); // {2, 1}
    s1.push(2); // {2, 2, 1}
    s1.push(3); // {3, 2, 2, 1}
    s1.push(5); // {5, 3, 2, 2, 1}

    // cout<<endl;
    // cout<<s1.top()<<endl; // 5 "  s1[1] is not allowed"
    s1.pop(); // {3, 2, 2, 1}

    // cout<<s1.size()<<endl; // 4

    // cout<<s1.empty()<<endl; // 0 (false) if the stack is empty else 1 (true)

    // time complexity of stack is O(1) for push, pop, top

    // Queue - FIFO (First In First Out) - push, pop, front, back

    queue<int> q1;
    q1.push(1); // {1}
    q1.push(2); // {1, 2}
    q1.push(3); // {1, 2, 3}
    q1.push(4); // {1, 2, 3, 4}

    // cout<<q1.front()<<endl; // 1
    // cout<<q1.back()<<endl; // 4

    q1.pop(); // {2, 3, 4}

    // time complexity of queue is O(1) for push, pop, front, back

    // Priority Queue - elements are sorted in descending order by default - push, pop, top

    priority_queue<int> pq1; // by default the elements are sorted in descending order - max heap
    pq1.push(1);             // {1}
    pq1.push(3);             // {3, 1}
    pq1.push(2);             // {3, 2, 1}
    pq1.push(5);             // {5, 3, 2, 1}
    pq1.push(1);             // {5, 3, 2, 1, 1}

    // cout<<pq1.top()<<endl; // 5
    pq1.pop(); // {3, 2, 1, 1}

    // to sort the elements in ascending order - min heap
    priority_queue<int, vector<int>, greater<int>> pq2; //  greater<int> is a function that sorts the elements in ascending order
    pq2.push(1);                                        // {1}
    pq2.push(3);                                        // {1, 3}
    pq2.push(2);                                        // {1, 2, 3}
    pq2.push(5);                                        // {1, 2, 3, 5}

    pq2.emplace(4); // {1, 2, 3, 4, 5}

    // cout<<pq2.top()<<endl; // 1

    // time complexity of priority queue is O(logn) for push, pop, top

    // Set - stores unique elements in sorted order - insert, erase, find

    set<int> s;
    s.insert(1);  // {1}
    s.insert(2);  // {1, 2}
    s.insert(3);  // {1, 2, 3}
    s.insert(3);  // {1, 2, 3} // 3 is not inserted as it is already present
    s.insert(6);  // {1, 2, 3, 6}
    s.emplace(4); // {1, 2, 3, 4, 6}

    // cout<<s.size()<<endl; // 5

    s.erase(3); // {1, 2, 4, 6}

    auto it = s.find(2); // returns the address of the element if found else returns the address of the last element
    // cout<<*it<<endl; // 2

    auto it1 = s.find(5); // returns the address of the last element as 5 is not present in the set
    if (it1 == s.end())
    {
        // cout<<"Element not found"<<endl;
    }

    int count = s.count(2);  // returns 1 as 2 is present in the set
    int count1 = s.count(5); // returns 0 as 5 is not present in the set

    auto it2 = s.count(2); // returns the address of the element if found else returns the address of the last element
    s.erase(it2);          // {1, 4, 6} // erases the element at the address it2

    auto it3 = s.find(4);
    auto it4 = s.find(6);
    s.erase(it3, it4); // {1} // erases the elements between it3 and it4 (it4 is not included)

    // time complexity of set is O(logn) for insert, erase, find

    // Multiset - stores multiple elements in sorted order - insert, erase, find ( not unique elements)

    multiset<int> ms;
    ms.insert(1); // {1}
    ms.insert(1); // {1, 1}
    ms.insert(4); // {1, 1, 4}
    ms.insert(2); // {1, 1, 2, 4}

    // ms.erase(1); // {2, 4} // erases all the elements with value 1

    int count2 = ms.count(1); // returns 2 as 1 is present twice in the multiset

    ms.erase(ms.find(1)); // {1, 2, 4} // erases the first element with value 1\
    ms.erase(ms.find(1)); // {2, 4} // erases the second element with value 1

    // ms.erase(ms.find(1), ms.find(1)+2); // {4} // erases the elements between the two addresses

    // time complexity of multiset is O(logn) for insert, erase, find

    // Unordered Set - stores unique elements in unsorted order - insert, erase, find ( random order)

    unordered_set<int> us;
    us.insert(1); // {1}
    us.insert(2); // {1, 2}
    us.insert(3); // {3, 1, 2}
    us.insert(3); // {3, 1, 2} // 3 is not inserted as it is already present
    us.insert(6); // {3, 1, 2, 6}

    // The time complexity of unordered set is O(1) for insert, erase, find as it uses hashing (but in worst case it is O(n))

    // Map - stores key value pairs in sorted order of keys - insert, erase, find ( key is unique)

    map<int, int> m;
    m[1] = 2; // {1: 2}
    m[2] = 3; // {1: 2, 2: 3}
    m[3] = 2; // {1: 2, 2: 3, 3: 2}

    // cout<<m[2]<<endl; // 3

    m.insert({4, 5}); // {1: 2, 2: 3, 3: 2, 4: 5}

    // cout<<m.size()<<endl; // 4

    m.erase(2); // {1: 2, 3: 2, 4: 5}

    auto it5 = m.find(3); // returns the address of the element if found else returns the address of the last element
    // cout<<*it5<<endl; // 2

    map<int, pair<int, int>> mp;
    mp[1] = {2, 3}; // {1: {2, 3}}

    mp.insert({2, {3, 4}}); // {1: {2, 3}, 2: {3, 4}}

    for (auto it : mp)
    { // {1: {2, 3}, 2: {3, 4}}
        // cout<<it.first<<" "<<it.second.first<<" "<<it.second.second<<endl; // 1 2 3 2 3 4
    }

    cout << m[2] << endl; // 0 as 2 is not present in the map

    map<int, int> m1;
    m1[1] = 2; // {1: 2}
    m1[2] = 3; // {1: 2, 2: 3}
    m1[3] = 4; // {1: 2, 2: 3, 3: 4}
    m1[4] = 3; // {1: 2, 2: 3, 3: 4, 4: 3}

    auto it6 = m1.find(2);
    cout << it6->first << " " << it6->second << endl; // 2 3

    m1.erase(it6); // {1: 2, 3: 4, 4: 3}

    // Extra is reamining

    // time complexity of map is O(logn) for insert, erase, find
}