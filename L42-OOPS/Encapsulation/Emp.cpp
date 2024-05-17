#include<iostream>
using namespace std;
class Employee {
	
	private : 
	int id ;
	string name;
	int age ;
	
	public :	
	int getAge(){
		return age;
	}
	int getId(){
		return id;
	}
	string getName(){
		return name;
	}
	void setAge(int age){
		this->age =age;
	}
	void setName(string name) {
		this->name=name;
	}
	void setId(int id){
		this->id=id;
	}

};
int main (){
	Employee E1;
	E1.setName("raman bhalla");
	E1.setAge(43);
	E1.setId(3454);
	cout<<"name of employee : "<<E1.getName()<<endl;
	cout<<"employee age : "<<E1.getAge()<<endl;
	cout<<"employee id : "<<E1.getId()<<endl;
}
/*name of employee : raman bhalla
employee age : 43
employee id : 3454*/