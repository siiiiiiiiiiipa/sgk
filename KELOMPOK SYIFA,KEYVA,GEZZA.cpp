#include <iostream>
using namespace std;
int main()
{
int i,n, jumlah=0, rerata = 0;
i = 2;

cout << "masukan banyak nilai:";
cin >> n;

/*perulangan*/
while (i<n){
	
	cout << i*7 << "+";
	jumlah = jumlah + (i*7);
	i++;
}	 
jumlah = jumlah + (i*7);
cout << i*7 << " ";
cout << "="<< jumlah << endl;
	rerata = jumlah / n;
	cout << "rerata = " << jumlah << "/" << n ;
	cout << "="<< rerata;
	
}
