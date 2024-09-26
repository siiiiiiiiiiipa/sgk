#include <iostream>
using namespace std;
int main()
{
int i,n, jumlah=0;
i = 0;

cout << "masukan banyak nilai:";
cin >> n;
jumlah = jumlah + n;
	if (n%2==0){
	cout << n << "-";
	n= n-2;
}
/*perulangan*/
while (n>i){
	if (n%2==0){
	cout << n << "-";
	jumlah = jumlah - (n);
}
n--;
}	 
jumlah = jumlah - (n);
cout << n << " ";
cout << "="<< jumlah;
}
