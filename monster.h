#include <iomanip>
class monster{
private:
	string name;
	int hp,potion;
public:
//	void Attack(moster &);
 // void heal();
	monster(string="no name", int=0,int=0);
  ~monster();
};

monster::~monster(){
  cout<<"Destruct....";
  cout<<"Monster: "<<name<<" HP: "<<hp<<" POT: "<<potion<<endl;
}

monster::monster(string n, int h, int p){
  name = n;
  hp = h;
  potion = p;
  cout<<"Monster: "<<n<<" HP: "<<h<<" POT: "<<p<<endl;
}
