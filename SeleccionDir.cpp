#include <iostream>

using namespace std;

int SeleccionDir(int A[],int b){
	for(int i=0; i<b-1 ; i++){
		int menor = A[i];
		int c=i;
		for(int j=i;j<b;j++){
			if(A[j]<menor){
				menor = A[j];
				c=j;
			}
		}
		A[c]= A[i];
		A[i]= menor;
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
	SeleccionDir(arreglo , cant);
	
	for(int n=0; n < cant ; n++){
		cout<<"num "<<n+1<<": "<<arreglo[n]<<endl;
	}
	return 0;
}