#include <iostream>

using namespace std;

int aux;

int interdirder(int a[], int b){
	
	for(int i=0;i<b-2;i++){
		for(int j=0;j<b-i-1;j++){
			if(a[j]>a[j+1]){
				aux=a[j];
				a[j]=a[j+1];
				a[j+1]=aux;
			}
		}
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
	//interdirder(arreglo , cant);
	
	for(int n=0; n < cant ; n++){
		cout<<"num "<<n+1<<": "<<arreglo[n]<<endl;
	}
	return 0;
}