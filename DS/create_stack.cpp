#include<bits/stdc++.h>
using namespace std;

class MinStack {
public:
    
    vector<int> v;
    
    MinStack() {
        
    }
    
    void push(int val) {
        v.push_back(val);
    }
    
    void pop() {
        v.pop_back();
    }
    
    int top() {
        return *v.end();
    }
    
    int getMin() {
        return *min_element (v.begin(), v.end());
    }
};

int main(){
    MinStack* obj = new MinStack();
    int val = 3;
    obj->push(val);
    obj->pop();
    int param_3 = obj->top();
    int param_4 = obj->getMin();
    vector<string> v {"MinStack","push","push","push","getMin","pop","top","getMin"};
    vector<int> t {NULL,-2,0,-3,NULL,NULL,NULL,NULL};
    // for(auto x: v){
    //     if(x == "push")
    // }
}