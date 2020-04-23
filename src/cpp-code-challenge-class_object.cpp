//============================================================================
// Name        : cpp-code-challenge-class_object.cpp
// Author      : Aman Ranjan
// Version     :v1.0
// Copyright   : This code is freeware and can be used without prior notice.
// Description : Program to apply class and object based function method.
//============================================================================

#include <iostream>
#include <string>
#include <unistd.h>
#include <conio.h>
#include <process.h>

using namespace std;

class Pet
{
public:

	string name;
	string breed;
	string color;
	int age;
	int id=1;

	string nickname()
	{										//M- I inside the class declaration and definition
		string nick = name + breed;
		return nick;
	};

		void Printdetail();			//Method- II declaration (out of the class)
};

void Pet :: Printdetail()
	{
		cout <<"Identity: "<<id<< "\nName of the pet: "<<name<<		//Method- II definition
				"\nThe breed is: "<<breed<<"\n colour of the pet "
						"is : "<<color<<"\nThe age is: "<<age<<endl;
		++id;
		while((getchar()='\n'));
	}

int main()
{
	setbuf(stdout,NULL);
	{
	 Pet dog1, dog2;
	 dog1.name = "stiffen";
	 dog1.breed = "javen";
	 dog1.color = "white";
	 dog1.age = 3;

	 while((getchar()='\n'));

	 dog1.Printdetail();

	 string name= dog1.nickname();

	 cout <<"Nickname: "<<name<<endl;

	///////////////////////			//////////////////////////
			cout<<endl<<endl<<endl<<endl;
	///////////////////////////////////////////////////////////////////////////
			dog2.name = "James";
			dog2.breed = "loren";
			dog2.color = "spoty white";
			dog2.age = 7;

			while((getchar()='\n'));

			dog2.Printdetail();

			string name2= dog2.nickname();

					cout <<"Nickname: "<<name2<<endl;
	}

return 0;
}
