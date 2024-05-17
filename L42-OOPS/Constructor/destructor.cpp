#include<iostream>
using namespace std;
class Hero {
	private : 
	int health;

	public : 
	char level;
	void print (){
		cout<<"health : "<<this->health<<endl;
		cout<<"level : "<<this->level<<endl;
	} 
	char getLevel(){
		return level ;
	}
	void setLevel(char level){
		this->level=level;
	}
	int getHealth(){
		return health;
	}
	void setHealth(int health){
		this->health=health;
	}
	//default
	Hero(){
		cout<<"default constructor called"<<endl;
	}
	//parametrised
	Hero(int health, char level){
		cout<<"parametrised constructor called"<<endl;
		this->level=level;
		this->health=health;
	}
	//copy
	Hero(Hero& temp){
		cout<<"copy constructor called"<<endl;
		this->level=temp.level;
		this->health=temp.health;
	}
		~Hero(){
		cout<<"destructor called"<<endl;
	}
};
int main(){

	Hero *h2=new Hero();
	delete h2;
}
/*default constructor called
default constructor called
destructor called
destructor called*/