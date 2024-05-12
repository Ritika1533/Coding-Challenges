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
	Hero(){
		cout<<"default constructor"<<endl;
	}
	Hero(int health, char level){
		this->level=level;
		this->health=health;
	}
};
int main(){
	Hero h1(80,'A');
	h1.print();
	Hero h2(h1);
	h2.print();
}
/*health : 80
level : A
health : 80
level : A*/