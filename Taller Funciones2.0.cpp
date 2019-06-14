#include <iostream>
using namespace std;
void Menu();
void MenuVolumen();
void MenuArea();
void fig7area();
void fig6area();
void fig7vol();
void fig6vol();
int main(){
	 Menu();
return 0;
}
void Menu(){
	int a;
	cout<<"Buenos Dias"<<endl;
	cout<<"Desea saber el area o el volumen de las figuras? "<<endl;
	cout<<"Si desea saber el volumen presione '1'\nSi desea saber el area presione '2'\nSi desea salir del programa presione '0'"<<endl;
	cin >> a;
switch(a){
	case 1: MenuVolumen();
	break;
	case 2: MenuArea(); 
	break;
	case 0: cout<<"Ejecucion Finalizada ";
	break;
	default:cout<<"Accion Incorrecta\nEjecucion Finalizada ";
}
system("PAUSE"); // return 0;
}
void MenuVolumen(){
	int figura;
	cout<<"Cual de las dos figuras desea saber el volumen?"<<endl;
	cout<<"Presione '1', o '2', dependiendo de la figura: ";
	cin>> figura;
	switch(figura){
		case 1: //fig7vol();
		break;
		case 2: //fig6vol();
		break;
		default:cout<<"Accion Incorrecta"<<endl;
		 MenuVolumen();
		 
	}
}
void MenuArea(){
	int figura2;
	cout<<"Cual de las dos figuras desea saber el area?"<<endl;
	cout<<"Presione '1', o '2', dependiendo de la figura: ";
	cin>> figura2;
		switch(figura2){
		case 1: fig7area();
		break;
		case 2: fig6area();
		break;
		default:cout<<"Accion Incorrecta"<<endl;
		system("PAUSE");
		
		 
	}
}
void fig7area(){
	float areaf,r,hcircle,qcircle,square,triangle,triangle2;
	cout<<"Ingrese el valor de 'r': ";
	cin>>r;
	hcircle = ((3,14)*(r*r))/2;
	qcircle = ((3,14)*(r*r))/4;
	square = (r+r+(r/2))*((3*r)/2);
	triangle = (((3*r)/2)*((3*r)/2))/2;
	triangle2 = (((3*r)/2)*(r))/2;
	areaf = (hcircle+qcircle+square+triangle+triangle2); 	
	cout<<"El area de la figura 1 es de: "<<areaf<<endl;
}
void fig6area(){
	float r,hcircle,qcircle,hcircle2,triangle,square,areaf;
	cout<<"Ingrese el valor de 'r': ";
	cin>>r;
	hcircle = ((3,14)*(r*r))/2;
	qcircle = ((3,14)*((r)*((3*r)/2)))/4;
	triangle = (((3*r)/2)*r)/2;
	hcircle2 = (r*r)-((3,14)*((r/2)*(r/2))/2);
	square = (r)*(((3*r)/2));
	areaf = (hcircle+qcircle+triangle,hcircle2,square);
	cout<<"El area de la figura 2 es de: "<<areaf<<endl;
	
}
