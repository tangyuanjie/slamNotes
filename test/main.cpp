#include <iostream>
#include "global.h"
#include "Transform.h"

int main(int argc, char **argv) {
std::cout << "Hello, world!" << std::endl;
std::cout << a<< std::endl;
int b[3];
b[0]=1;
b[1]=2;
b[2]=3;
line(b);
std::cout<<b[1]<<std::endl;
Transform t;
t(0,0)=2;
std::cout << t(0,0)<< std::endl;

return 0;
}
