//Nicorici Adrian, 18.05.2014
/*Sa se scrie un program care citeste componentele a doi vectori precedate
de numarul lor si calculeaza vectorul suma si il afiseaza
utilizand pointeri.*/

#include <iostream>
using namespace std;

void citire(int *pn,int *n){
	for (int i=0;i<*n;i++){
		cout << "vector[" << i << "]=";
		cin >> pn[i];
	}

}

void suma(int *pn,int *pv, int *n){
	int vt[100];
	int *pt;
	pt=vt;
	for(int i=0;i<*n;i++){
		pt[i]=pn[i]+pv[i];
	}

	for(int i=0;i<*n;i++){
		cout << "vectorul suma[" << i << "]=" << pt[i];
		cout << endl;
	}
	

}

int main(){
	int v1[100],v2[100],n;
	int *pv1,*pv2;
	pv1=v1;
	pv2=v2;
	cout <<"Introduceti n: " << endl;
	cin >> n;

	cout << "Citirea primului vector: " << endl;
	citire(pv1,&n);
	cout << "\n Citirea celui de  al doilea vector: " << endl;
	citire(pv2, &n);
	
	cout << "Suma vectoruilor: " << endl;

	suma(pv1,pv2,&n);


	system("pause");
	return 0;
}