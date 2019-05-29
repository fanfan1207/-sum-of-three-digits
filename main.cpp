#include <iostream>
#include <iomanip>

int main() {
	int a,n1,n2,n3;
	std::cin>>a;
	n1=a/10/10%10;
	n2=a/10%10;
	n3=a%10;
	a=n1+n2+n3;
	std::cout<<a;
	return 0;
}
