#include<iostream>
using namespace std;
class Hero {
	private :
	char level;
	public :
	int health;
	char getLevel(){
		return level;
	}
	void setLevel(char ch){
		level=ch;
	}
	//default constructor
	Hero(char level){
		cout<<"\t"<<this<<endl;
		cout<<"i am a parametrised constructor"<<endl;
		this->level=level;
	}
};
int main(){

   Hero h1('o');
   cout<<"address of object h1"<<&h1<<endl;
   cout<<h1.getLevel();
}  
/*        0x6ffe10
i am a parametrised constructor
address of object h10x6ffe10
o*/