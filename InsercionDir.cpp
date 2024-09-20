#include <iostream>

using namespace std;

int InsercionDir(int A[],int b){
	for(int i=1; i<b; i++){
		int aux=A[i];
		int c=i-1;
		while(c>-1 and aux<A[c]){
			A[c+1] = A[c];
			c = c-1; 
		}
		A[c+1] = aux; 
	}
}

int main(){
	int cant;
	cout<<"ingrese la cantidad de numeros: ";
	cin>>cant;
	int arreglo[cant];
	for(int m=0; m < cant ; m++){
		cout<<"num "<<m+1<<": ";
		cin>>arreglo[m];
	}
	InsercionDir(arreglo , cant);
	
	cout<<" su forma ordenada es: "<<endl;
	for(int n=0; n < cant ; n++){
		cout<<"num "<<n+1<<": "<<arreglo[n]<<endl;
	}
	return 0;
}