#include<iostream>

using namespace std;

void ShellSort(int A[],int b){
	int c = b;
	while(c>0){
		c = c/2;
		int cen = 1;
		while(cen==1){
			cen = 0;
			int i = 0;
			while(i+c<=b-1){
				if(A[i+c] < A[i]){
					int aux = A[i];
					A[i] = A[i+c];
					A[i+c] = aux;
					cen = 1;
				}
				i++;
			}
		}
	}
}

void Reduce(int A[],int inicio,int final){
	int izq = inicio;
	int der = final;
	int pos = izq;
	int cen = 1;
	while(cen == 1){
		cen = 0;
		while(A[pos]<=A[der] and pos != der){
			der = der - 1;
		}
		if(pos!=der){
			int aux = A[pos];
			A[pos] = A[der];
			A[der] = aux;
			pos = der;
			while(A[pos]>=A[izq] and pos != izq){
				izq = izq + 1;
			}
			if(pos != izq){
				aux = A[pos];
				A[pos] = A[izq];
				A[izq] = aux;
				pos = izq;
				cen = 1;
			}
		}
		if(pos-1 > inicio){
			Reduce(A, inicio, pos-1);
		}
		if(pos+1<final){
			Reduce(A, pos+1, final);
		}
	}
}

void QuickSort(int A[],int n){
	Reduce( A, 0, n);
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
	
	cout<<" Escoja el tipo de metodo de ordenacion"<<endl;
	cout<<" 1.- ShellSort"<<endl;
	cout<<" 2.- QuickSort"<<endl;
	cin>>select;
	
	switch(select){
		case 1:
			ShellSort(arreglo, cant);
			for(int y=0; y < cant ; y++){
				cout<<" num"<<y+1<<": "<<arreglo[y]<<endl;
			}
			break;
		case 2:
			QuickSort(arreglo, cant-1);
			for(int y=0; y < cant ; y++){
				cout<<" num"<<y+1<<": "<<arreglo[y]<<endl;
			}
			break;
		default:
			cout<<"escriba el numero correctamente"<<endl;
	}
	return 0;
}