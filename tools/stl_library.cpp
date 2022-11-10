#include <bits/stdc++.h>
using namespace std;

// ? STL have 4 types:
// 1. Algorithm
// 2. Containers
// 3. Functions
// 4. Iterators

// * Pairs
void explain_pairs()
{
    pair<int, int> p = {1, 2};
    // cout << p.first << " " << p.second <<"\n";

    pair<int, pair<int, int>> p1 = {1, {2, 3}};
    // cout << p1.first << " " << p1.second.first << " " << p1.second.second <<endl;

    pair<int, int> a[] = {{3, 4}, {6, 8}, {1, 2}, {0, 1}};
    for (int i = 0; i < 4; i++)
    {
        cout << a[i].first << " " << a[i].second << "\n";
    }
}

// * Vectors
void explain_vector()
{
    // declaration
    vector<int> v;
    v.push_back(2);
    v.emplace_back(3);

    vector<pair<int, int>> vp;
    vp.push_back({4, 5});
    vp.emplace_back(5, 6);

    vector<int> vc = {2, 3, 5, 6};
    vector<int> vcopy(vc); // copying the array

    // printing or access
    vector<int> p = {10, 20, 30, 40};

    for (auto it = p.begin(); it != p.end(); it++)
    {
        // cout << *(it) << " ";
    }
    // cout << p.back(); // 40

    // delete
    // 10,20,30,40
    p.erase(p.begin(), p.begin() + 2); // [start, end) // end is not included

    for (auto it = p.begin(); it != p.end(); it++)
    {
        // cout << *(it) << " ";
    }

    // insert
    vector<int> pp(2, 100);
    pp.insert(pp.begin(), 300);
    pp.insert(pp.begin() + 1, 3, 50);

    for (auto ppal : pp)
    {
        cout << ppal << " ";
    }

    // extra function
    v.size();
    v.pop_back();
    v.clear();
    v.empty();
}

void explain_list()
{
    list<int> ls;
    ls.push_back(2);
    ls.emplace_back(4);

    ls.push_front(1);
    ls.emplace_front(6);
    ls.pop_front();
    for (auto l : ls)
    {
        cout << l << " ";
    }
}

void explain_deque()
{
    // same as list
    deque<int> dq;
    dq.push_back(2);
    dq.emplace_back(4);

    dq.push_front(1);
    dq.emplace_front(6);
    dq.pop_front();
    for (auto l : dq)
    {
        cout << l << " ";
    }
}

void explain_stack()
{
    // LIFO
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    cout << st.top() << " ";
    st.pop();
    cout << st.top() << " ";
}

void explain_queue()
{
    // FIFO
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    // 10 20 30
    q.front(); // 10
    q.back();  // 30

    q.pop(); // 10 ❌
}

void explain_priority_queue()
{
    // max heap
    priority_queue<int> pq;
    pq.push(2);
    pq.push(5);
    pq.push(1);
    pq.push(6);

    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;
    cout << "min heap \n";

    // min heap

    priority_queue<int, vector<int>, greater<int>> pq1;

    pq1.push(2); // ln(n)
    pq1.push(5);
    pq1.push(1);
    pq1.push(6);
    while (!pq1.empty())
    {
        cout << pq1.top() << " "; // O(1)
        pq1.pop();
    }
}

void explain_set()
{
    // sorted and unique element

    set<int> st;
    st.insert(1);
    st.insert(2);
    st.insert(3);
    st.insert(3);

    auto it = st.find(10);
    cout << *(it) << " ";
    auto it1 = st.lower_bound(2);
    cout << *(it1) << " ";
    auto it2 = st.upper_bound(3);
    cout << *(it2) << " ";
}

void explain_multiset()
{
    multiset<int> ms;
    ms.insert(2);
    ms.insert(2);
    ms.insert(3);
    ms.insert(4);
    ms.insert(4);

    ms.erase(2);
    int cnt = ms.count(4);
    ms.erase(ms.find(4));
}

void explain_unordered_set()
{
    unordered_set<int> st; // unique but not sorted
    // lower and upper bound does'nt work
}

void explain_map()
{
    map<int, int> mpp;
    mpp[1] = 5;
    mpp.insert({4, 5});
    map<pair<int, int>, int> mp;
    mp[{2, 5}] = 5;
    mp[{1, 5}] = 15;
    mp[{12, 52}] = 45;
    cout << mp[{1, 5}];
}

void explain_multimap() {}      // duplicate keys are allowed
void explain_unordered_map() {} // unique key but no sorted

// comparetor function
bool comp(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.second < p1.second)
        return true;
    else
        return false;
    if (p1.first > p2.first)
        return true;
    return false;
}

// ? Algorithms
void explain_algo()
{
    vector<int> v = {54, 32, 312, 4, 326, 2};
    sort(begin(v), end(v));

    pair<int, int> a[] = {{4, 1}, {3, 2}, {6, 1}};
    int n = 3;
    sort(a, a + n, comp);

    int num = 5;
    int cnt = __builtin_popcount(num);

    string s = "123";
    do{
        cout << s << " ";
    } while(next_permutation(s.begin(),s.end()));

    int maxi = *max_element(v.begin(), v.end());
    cout << maxi;
}

int main()
{
    // pairs
    // explain_pairs();
    // vector
    // explain_vector();

    // list
    //  explain_list();

    // stack
    //  explain_stack();

    // priority_queue
    // explain_priority_queue();

    // set
    //  explain_set();

    // explain_multiset
    //  explain_multiset();

    // stack
    //  explain_stack();

    // algo
    explain_algo();

    // explain_map
    //  explain_map();
}