#include <iostream>


class ClassA{
	public:
		void myFunction(){
			std::cout << "Hello World!!!" << std::endl;
		}
};
int main()
{
	// Creating an object
	ClassA t;

	// Calling function
	t.myFunction();

	return 0;
}

extern "C" {
        ClassA* Geek_new(){ return new ClassA(); }
        void Geek_myFunction(ClassA* geek){ geek -> myFunction(); }
}

