#include <bits/stdc++.h>

using namespace std;

struct node{
    int data;
    char color;
};
void showList(list<node> l){
    list<node> :: iterator it;
    for(it = l.begin(); it != l.end(); ++it){
        cout<<it->data<<" ";
    }
    cout<<"\n";
}
int main() {
	list<node> al[3];
	al[1].push_back({2,'w'});
	al[0].push_back({3,'w'});al[0].push_back({4,'w'});
	al[1].push_back({1,'w'});
	al[2].push_back({7,'w'});
	al[0].pop_front();
	showList(al[0]);
	showList(al[1]);
	showList(al[2]);
	return 0;
}
