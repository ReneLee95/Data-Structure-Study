#include <iostream>

#include <string>

#include <vector>

#include <algorithm>

using namespace std;

 

bool HasYoung(string who)

{

     return (who.find("��") != string::npos);

}

 

int main()

{

     string names[]={"������","��ȫ��","������",

          "�迵��","������","�ڹ̿�","������"};
          

     vector<string> as(&names[0],&names[7]);

 

     vector<string>::iterator it;

     for (it=as.begin();;it++) {

          it=find_if(it,as.end(),HasYoung);

          if (it==as.end()) break;

          cout << *it << "��(��) �ִ�." << endl;

     }

}

