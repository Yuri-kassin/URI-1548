#include<iostream>
#include<string.h>
#include<iomanip>
#include<cstdlib>
#include<list>


using namespace std;

int main(){
	int n,i,m,a,cont=0,j;
	list<int>not1;
	list<int>not2;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>m;
		for(j=0;j<m;j++){
			cin>>a;
			not1.push_back(a);
			not2.push_back(a);
		}
		not1.sort();

		while(!not1.empty()){
			if(not1.back()==not2.front()){
				cont++;
			}
			not1.pop_back();
			not2.pop_front();
		}
		cout<<cont<<endl;
		cont=0;
		
	}
	system("pause");
	return 0;
}
