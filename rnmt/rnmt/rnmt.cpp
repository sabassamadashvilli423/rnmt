#include <iostream>
#include"Reanimation.h"
#include<vector>
using namespace std;
void mySort(vector<Reanimation> a) {
	for (int j = 0; j < a.size(); j++) {
		for (int i = 0; i < a.size() - 1; i++) {
			if (a[i].totalprice() < a[i + 1].totalprice())
				swap(a[i], a[i + 1]);
		}
	}

}
int main()
{
	vector<Reanimation> a;
	vector<Reanimation> b;
	Reanimation t;
	cout << " sheitanet erti dge reanimaciashi fasi,erti dge palatashi fasi" << endl;
	cin >> t.rprice >> t.pprice;
	while (cin >> t.name >> t.lastname >> t.diagnose >> t.rday >> t.pday >> t.gday) {
		if (t.gday != -1)
			a.push_back(t);
		else b.push_back(t);
	}
	mySort(a);
	for (int i = 0; i < a.size(); i++) {
		a[i].printperson();
	}
}

