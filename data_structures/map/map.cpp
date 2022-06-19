#include <iostream>
#include <map>
#include <iterator>
using namespace std;

int main()
{

    //also use 
    // if(memo[x]){
    //     // then this
    // }else{

    // }

    map<int, int> mymap;

    //inserting into map
    mymap.insert(pair<int,int>(1,3));
    mymap.insert(pair<int,int>(2,4));

    //printing all map values
    for (auto it=mymap.begin(); it!=mymap.end(); it++)
        std::cout << it->first << " " << it->second << '\n';

    //finding a given element (input the key in paranthesis)
    auto p = mymap.find(10);
	if(p != mymap.end()){	//IMP: to check if an element is there or not, p!=end means an element 
								//	is found before the whole map is traversed
		cout << true;
	}
    cout << "\n";
    auto i = mymap.begin();
    i++;
    cout << i->first;

//    if(p->first)
//        cout<<"true";
//    cout<<p->second;

//    cout<<memo.begin()->first;

    return 0;
}
