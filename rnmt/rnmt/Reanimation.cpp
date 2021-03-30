#include "Reanimation.h"
#include<iostream>
using namespace std;
void Reanimation::printperson() {
	
	cout <<" saxeli "<< name<<endl <<" gvari " << lastname<<endl <<"diagnosi " 
		<< diagnose<<endl<<"reanimaciashi yofnis dgeebi "<< rday<<endl 
		<< "palatashi yofnis dgeebi  " <<pday<<endl<<" gamoweris dgeebi  " << gday<<endl<<
		" saerto xarji  "<< totalprice()<<endl;
}
int Reanimation::totalprice() {
	
	if (gday == -1)
		gday = 0;
	 return rday * rprice + pday * pprice + gday * pprice;
}