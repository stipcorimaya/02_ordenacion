#include <iostream>

using namespace std;

void InsercionDir(int A[],int b){
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

void InsercionBin(int A[],int b){
	for(int i=1;i<b;i++){
		int aux = A[i];
		int izq = 0;
		int der = i - 2;
		while(izq<=der){
			int m = (izq + der)/2;
			if(aux<A[m]){
				der = m - 1;
			}else{
				izq = m + 1;
			}
		}
		int j = i - 1;
		while(j>=izq){
			A[j+1] = A[j];
			j = j - 1;
		}
		A[izq] = aux;
	}
}

int main(){
	int cant;
	int select;
	cout<<"ingrese la cantidad de numeros: ";
	cin>>cant;
	int arreglo[cant];
	
	for(int x=0; x < cant ; x++){
		cout<<" num"<<x+1<<": ";
		cin>>arreglo[x];
	}
	                             
	cout<<" Escoja el metodo de ordenacion: "<<endl<<" 1.- metodo Insercion Directa"<<endl<<" 2.- metodo Insercion Binaria"<<endl;
	cin>>select;
	switch(select){
		case 1:
			InsercionDir(arreglo , cant);
			cout<<" su forma ordenada es: "<<endl;
			for(int n=0; n < cant ; n++){
				cout<<"num "<<n+1<<": "<<arreglo[n]<<endl;
			}
			break;
		case 2:
			InsercionBin(arreglo , cant);
			cout<<" su forma ordenada es: "<<endl;
			for(int n=0; n < cant ; n++){
				cout<<"num "<<n+1<<": "<<arreglo[n]<<endl;
			}
			break;
		default:
			cout<<"escoger bien la opcion";
	}
	return 0;
}