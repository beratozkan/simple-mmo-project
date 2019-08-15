#include<iostream>
using namespace std;
const int g = 10;
class Plinformation{
	public:
		int kutle = 0;
		int weigth;
		string race,age,length,clas,name;
		char badge;
		double getmoney(){
			return money;
		}
		void setmoney(Plinformation pl1, double money1);
		double getpoint();
		friend struct mekaniks;
	private:

		double money,nakit,point;
		string pass;

};
struct nerede{
public:
	friend struct mekaniks;
	double pointx,pointy = 0.0;
			int hareket(){
			while(0!=1){
			char yon;
			cin>>yon;
			switch (yon) {
				case 'a':
				pointx -=1;
				break;
				case 'd':
				pointx += 1;
				break;
				case 'w':
				pointy+=1;
				break;
				case 's':
				pointy-=1;
				break;
			};
			cout<<pointx<<" "<<pointy;
		};
	};
};


double Plinformation::getpoint(){
		return Plinformation::point;
};
struct mekaniks{
	Plinformation pl1;
	double netkutle = pl1.weigth * g;
	

};
void Plinformation::setmoney(Plinformation pl1 ,double money1){

	pl1.money = money1;};
int main(int argc, char const *argv[]) {

nerede ner1;

cout<<ner1.hareket();


	return 0;
};
