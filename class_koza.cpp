/*
 * class_koza.cpp
 *
 *  Created on: Jun 26, 2020
 *      Author: shun
 */

class Class_koza
{
	public:
		Class_koza(void);
		void spoon(void);

	private:
		void eat(int);
		static int food;
};

int Class_koza::food = 0;

Class_koza::Class_koza(void)
{
	this->spoon();
	this->eat(this->food);
}

void Class_koza::spoon(void)
{
	printf("スプーンで\n");
}


void Class_koza::eat(int some)
{
	if(some == 0){
		printf("食べ物を");
	} else {
		printf("何かを");
	}

	printf("食べる\n");
}

int main(int argc, char** argv)
{
	Class_koza *class_koza = new Class_koza();

}