//print hellop world
#include <iostream>
#include <vector>
int main(){
int x;
std::cout<<"enter something: "<<std::endl;
std::cin>>x;
std::cout<<"no. is:__"<<x<<std::endl;
std::cout<<"no. is:__"<<x+8<<std::endl;
// vector....
std::vector<int> v;
v.push_back(23);
v.push_back(36);
v.push_back(8);
v.push_back(98);
v.push_back(46);
for(auto c:v){
std::cout<<c<<" ";
}
return 0;
} 

