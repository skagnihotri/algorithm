#include <iostream>
using namespace std;


void PrintMazePath(int sr, int sc, int er, int ec, string path){
	if (sr == er and sc == ec){
		cout<<path<<endl;
		return;
 	}
	if (sr > er or sc > ec)
	{
		return;
	}

	char ch_srf = sr+1 + '0';
	char ch_scf = sc+1 + '0';
	char ch_sr = sr + '0';
	char ch_sc = sc + '0'; 
	PrintMazePath(sr+1,sc,er,ec,path+ "-->" + "(" + ch_srf +"," + ch_sc + ")");
	PrintMazePath(sr,sc+1,er,ec,path+ "-->" + "(" + ch_sr +"," + ch_scf + ")");
	return;
}


int main(int argc, char const *argv[])
{
	PrintMazePath(0,0,2,2,"");
	return 0;
}