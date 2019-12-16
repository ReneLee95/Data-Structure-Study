#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	string names[] = {"김정수","구홍녀","문병대","김영주","임재임","박미영","박윤자"};
	vector<string> as(&names[0],&names[7]);
	
	vector<string>::iterator it;
	it = find(as.begin(),as.end(),"김정수");
	if(it==as.end()) {
		cout<<"없다"<<endl;
	}
	else
	{
		cout<<"있다"<<endl;
	}
}
