#include <bits/stdc++.h>
#include <string>
using namespace std;

int sumarPuntajeLetras(string f){
	int cont=0;
	for(int i=0;i<f.size();i++){
		if(f[i]=='a'||f[i]=='e'){
		cont++;
		}
		else if(f[i]=='o'||f[i]=='s'){
		cont=cont+2;
		}
		else if(f[i]=='d'||f[i]=='i'||f[i]=='n'||f[i]=='r'){
		cont=cont+3;
		}
		else if(f[i]=='c'||f[i]=='l'||f[i]=='t'||f[i]=='u'){
		cont=cont+4;
		}
		else if(f[i]=='m'||f[i]=='p'){
		cont=cont+5;
		}
		else if(f[i]=='b'||f[i]=='f'||f[i]=='g'||f[i]=='h'||f[i]=='j'||f[i]=='q'||f[i]=='v'||f[i]=='x'||f[i]=='y'||f[i]=='z'){
		cont=cont+6;
		}
		else if(f[i]=='k'||f[i]=='w'){
		cont=cont+7;
		}
	}
	return cont;
}
int main( ){
	string f;
	int cont;
	
	cout<<"ingresar una frase"<<endl;
	
	getline(cin,f);

	cont=sumarPuntajeLetras	(f);
	cout<<cont<<endl;
return 0;
}
