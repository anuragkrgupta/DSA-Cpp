// lets solve this problem : a gaming company runs an online tournament where thousands of players compete simultaneously. All players score are collected into a single array -- completely unsorted, since score stream in form different servers in real time.

// goal: given The score, array, and rank K. Find the score of player who finished in the Kth position, highest to lowest, without fully sorting. Duplicate score count as separate ranks.

// input format :
// line 1: n (number of players)
// line 2: n integer(scores)
// line 3: k (rank to find)

// output formatL: A single integer -- the score  of the player at rank k

#include<bits/stdc++.h>
using namespace std;
int kthLargest(vector<int>& scores, int k) {
     priority_queue<int, vector<int>, greater<int>> pq; //min_heap queue;
    for(int score : scores){
        pq.push(score);
        if(pq.size() > k){
            pq.pop();
        }
    }
    return pq.top();

}

int main() {
    int n;
    cout<<"enter the number of player: " << endl;
    cin >> n;
    vector<int> scores(n);
    cout<< " enter the scores: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> scores[i];
    }
    int k;
    cout<<"enter Kth element to find: ";
    cin >> k;
    cout << kthLargest(scores, k);
    return 0;
}