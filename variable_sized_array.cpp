#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<vector<int>> a;
    vector<int> toDisplay;
    int n, q; //n amount of arrays, q amount of queries
    
    cin >> n >> q;
    
    for(int i=0; i<n; i++){
        vector<int> insideVec;
        int vecSize;
        
        cin >> vecSize;
        
        for(int j=0; j<vecSize; j++){
            int vecElement;
            cin >> vecElement;
            insideVec.push_back(vecElement);
        }
        
        a.push_back(insideVec);
    }
    
    for(int i=0; i<q; i++){
        int aIndex, insideIndex;
        cin >> aIndex >> insideIndex;
        toDisplay.push_back(a[aIndex][insideIndex]);
    }

    for(int i=0; i<toDisplay.size();i++){
        cout << toDisplay[i] << endl;
    }
    
    
    return 0;
}