#include<iostream>
using namespace std;
class print{
public:
void show(int i){
  cout<<"integer:"<<i<<endl;
}
void show(float a){
  cout<<"Floating value:"<<a<<endl;
}
void show(int b,float c){
  cout<<"integer:<<"\tFloating value:"<<c<<endl;
}
};
int main() {
  print obj;
obj.show(56);
obj.show(34.26f);
obj.show(120,32.67f);
return 0;
}
