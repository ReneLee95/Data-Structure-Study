#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	string names[] = {"������","��ȫ��","������","�迵��","������","�ڹ̿�","������"};
	vector<string> as(&names[0],&names[7]);
	
	vector<string>::iterator it;
	it = find(as.begin(),as.end(),"������");
	if(it==as.end()) {
		cout<<"����"<<endl;
	}
	else
	{
		cout<<"�ִ�"<<endl;
	}
}
