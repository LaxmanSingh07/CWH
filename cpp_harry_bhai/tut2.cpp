#include <iostream> //it is used for input and output
int main()
{
std::cout << "Enter two numbers:" << std::endl;
//std:: menns that cout is defined in the standard namespace 
int v1 = 0, v2 = 0;
std::cin >> v1 >> v2;
std::cout << "The sum of " << v1 << " and " << v2
<< " is " << v1 + v2 << std::endl;
return 0;
}

