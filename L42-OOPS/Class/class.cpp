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
};
int main(){
	Hero h1;
	//dynamic class
	Hero *h2=new Hero;
	h1.health=50;
	cout<<sizeof(h1)<<endl;
	cout<<h1.health<<endl;
	cout<<(*h2).health<<endl;
	//	h1.level='k' we can't do like this;
	h1.setLevel('k');
	(*h2).setLevel('j');
	cout<<h1.getLevel()<<endl;
	cout<<(*h2).getLevel()<<endl;
}  