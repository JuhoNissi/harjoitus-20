/******************************************
Teht�v�:Harjoitus 20
Tekij�: Juho Nissi - IIO14S2
Kuvaus: Kuten harjoitus 19, mutta toteuta k�ytt�en taulukkoa ja osoitinta
tiedon k�sittelyyn.

P�iv�ys:9.12.2014
Versio 2.0
******************************************/



#include <iostream>
using namespace std;

int main(){
	int change[10] = { 0 };
	int speed = (change[0] + change[1] + change[2] + change[3] + change[4]) / 5;
	
	cout << "Startting speed: " << speed << "kmph.\nGive a new speed: ";

	while (change[0] >= 0){
		for (int s = 4; s > 0; s--){
			int*spd = new int;
			*spd = change[s - 1];
			change[s] = *spd;
			delete spd;
			spd = NULL;
		}
		cin >> change[0];
		if (change[0] >= 0){
			int speed = (change[0] + change[1] + change[2] + change[3] + change[4]) / 5;
			cout << " ===> " << speed << " kmph.\n Next Speed: ";
		}
	}
}



