#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;
int main(){
	int vector[20], a=0, b=0, c=0, d=0, elem, opci;
	
	do{
		do{
			system("Title ¡MENU!");
			system("color e0");
			system("cls");
			cout<<"\tCodigo\n-Maria Guadalupe Sanchez Torres\n-Samuel Mares Barragan\n\n\n";
		    cout<<"O----O----O----O----O----O----O----O----O----O----O-----O"<<endl;
		    cout<<"|\t\tBIENVENIDOS AL MENU DE OPCIONES\t\t|"<<endl;
		    cout<<"|\t\t\t\t\t\t\t|"<<endl;
		    cout<<"|\t1.-Apilar un elemento\t\t\t\t|"<<endl;
	    	cout<<"O\t2.-Desapilar un elemento\t\t\tO"<<endl;
    		cout<<"|\t3.-Localizar un elemento en la pila\t\t|"<<endl;
    	    cout<<"|\t4.-Numerar los elementos de la pila\t\t|"<<endl;
    		cout<<"|\t5.-Salir del programa\t\t\t\t|"<<endl;
			cout<<"O----O----O----O----O----O----O----O----O----O----O-----O"<<endl;
			cout<<"\n<Escoge una opcion> ";
			cin>>opci;
	   }while(opci<1||opci>5);
	   switch(opci){
	   	case 1: {
	   		system("Title ¡APILAR!");
	   		system("color b0");
	   		system("cls");
	   		cout<<"\tCodigo\n-Maria Guadalupe Sanchez Torres\n-Samuel Mares Barragan\n\n\n";
	   		cout<<"\t\t°°°°°°°°°°\n\t\t°°APILAR°°\n\t\t°°°°°°°°°°\t\n"<<endl;
	   		if(a==0){
	   			cout<<"°\tcima-->null	//0 elementos\n";
			   }
			else{
				cout<<"°\t"<<vector[a-1]<<"-->cima//"<<a<<" elementos"<<endl;
				if(a>1){
					for(int cont=a-2;cont>=0;cont--){
						cout<<"°\t"<<vector[cont]<<endl;
					}
				}
			}
			cout<<"\n<Da elemento a apilar> ";
			cin>>vector[a];
			for(b=0; b<a; b++){
				if(vector[a]==vector[b]){
					cout<<"\nEl elemento ya existe en la pila :(";
					cout<<"\n<Da elemento a apilar> ";
					cin>>vector[a];
					b=-1;
				}
			}
			a++;
			cout<<"\n°\t"<<vector[a-1]<<"-->cima	//"<<a<<" elementos"<<endl;
			if(a>1){
				for(int cont=a-2;cont>=0;cont--){
					cout<<"°\t"<<vector[cont]<<endl;
				}
			}
			cout<<"\n\n°Presiona una tecla para volver al menu de inicio...°";
			getch();
			system("cls");
			break;
		   }
		case 2: {
			system("Title ¡DESAPILAR!");
			system("color 80");
			system("cls");
			cout<<"\tCodigo\n-Maria Guadalupe Sanchez Torres\n-Samuel Mares Barragan\n\n\n";
			cout<<"\t\t°°°°°°°°°°°°°\n\t\t°°DESAPILAR°°\n\t\t°°°°°°°°°°°°°\t\n";
			if(a==0){
				cout<<"\nLa pila esta vacia :(\nDirigete al menu->opcion 1 para llenarla :D\n"<<endl;
			}
			else{
				cout<<"°\t"<<vector[a-1]<<"-->cima//"<<a<<" elementos"<<endl;
				if(a>1){
					for(int cont=a-2;cont>=0;cont--){
						cout<<"°\t"<<vector[cont]<<endl;
					}
				}
			}
            if(a>0){
                cout<<"\n<Da elemento a desapilar> ";
                cin>>elem;
                 for(b=0; b<=a; b++){
                    if(elem!=vector[b]&&b==a){
						cout<<"\nEl elemento no existe en la pila :(";
                        cout<<"\n<Da elemento a desapilar> ";
                        cin>>elem;
                        b=0;
                    }
                    if(elem==vector[b])
                    break;
         	   }
         	   for(b=a-1; b>=0; b--){
         	   	if(vector[b]!=elem){
         	   		cout<<"\n~Desapilando...\n"<<endl;
         	   		a--;
					cout<<"°\t"<<vector[a-1]<<"-->cima//"<<a<<" elementos"<<endl;
					if(a>1){
						for(int cont=a-2;cont>=0;cont--){
							cout<<"°\t"<<vector[cont]<<endl;
						}
					}
         	   	}
         	   	else if(vector[b]==elem){
         	   		cout<<"\n~Desapilando...\n"<<endl;
         	   		a--;
         	   		break;
         	   	}
         	   }
        		if(a==0)
					cout<<"°\tcima-->null //0 elementos";
				else{
					cout<<"°\t"<<vector[a-1]<<"-->cima//"<<a<<" elementos"<<endl;
					if(a>1){
						for(int cont=a-2;cont>=0;cont--){
							cout<<"°\t"<<vector[cont]<<endl;
						}
					}
				}
			}
			cout<<"\n\n°Presiona una tecla para volver al menu de inicio...°";
			getch();
			system("cls");
			break;
		}
		case 3: {
			system("Title ¡LOCALIZAR ELEMENTO!");
			system("color 20");
			system("cls");
			cout<<"\tCodigo\n-Maria Guadalupe Sanchez Torres\n-Samuel Mares Barragan\n\n\n";
			cout<<"\t\t°°°°°°°°°°°°°°°°°°°°°°\n\t\t°°LOCALIZAR ELEMENTO°°\n\t\t°°°°°°°°°°°°°°°°°°°°°°\t\n";
			if(a==0){
				cout<<"\nLo sentimos, la pila esta vacia :(";
				cout<<"\nPor favor llena la pila desde menu->opcion 1 :D\n";
			}
			else{
				cout<<"\n<Que elemento deseas localizar> ";
				cin>>elem;
				 for(b=0; b<=a; b++){
                    if(elem!=vector[b]&&b==a){
						cout<<"\nLo siento, el elemento no existe en la pila :(";
                        cout<<"\n<Que elemento deseas localizar> ";
                        cin>>elem;
                        b=0;
                    }
                    if(elem==vector[b])
                    break;
				}
				if(elem==vector[a-1]){
					cout<<"\nLocalizamos tu elemento!!!";
					cout<<"\nTu elemento esta aqui abajo ^u^\n"<<endl;
				}
				cout<<"°\t"<<vector[a-1]<<"-->cima//"<<a<<" elementos"<<endl;
				if(a>1){
					for(int cont=a-2;cont>=0;cont--){
						if(elem==vector[cont]){
							cout<<"\nLocalizamos tu elemento!!!";
							cout<<"\nTu elemento esta aqui abajo ^u^"<<endl;
							cout<<"°\t"<<vector[cont]<<endl;
							cout<<"Tu elemento esta aqui arriba :D\n"<<endl;				
						}
						else
						cout<<"°\t"<<vector[cont]<<endl;
					}
				}
			}
			cout<<"\n\n°Presiona una tecla para volver al menu de inicio...°";
			getch();
			system("cls");
			break;
		}
		case 4: {
			system("Title ¡NUMERAR ELEMENTOS!");
			system("color 30");
			system("cls");
			cout<<"\tCodigo\n-Maria Guadalupe Sanchez Torres\n-Samuel Mares Barragan\n\n\n";
			cout<<"\t\t°°°°°°°°°°°°°°°°°°°°°\n\t\t°°NUMERAR ELEMENTOS°°\n\t\t°°°°°°°°°°°°°°°°°°°°°\n\n";
			if(a==0)
				cout<<"Esta pila esta vacia T-T\nLlenala desde menu->opcion 1!! :D"<<endl;      
			else{
				cout<<"°\t1.- "<<vector[a-1]<<"-->cima//"<<a<<" elementos"<<endl;
				if(a>1){
					c=2;
					for(int cont=a-2;cont>=0;cont--){
						cout<<"°\t"<<c<<".- "<<vector[cont]<<endl;
						c++;
					}
				}
			}
			cout<<"\nHay "<<a<<" elementos en esta pila!!! <3";
			cout<<"\n\n°Presiona una tecla para volver al menu de inicio...°";
			getch();
			system("cls");
			break;
		}
	   }
	}while(opci!=5);
	system("color 06");
	system("cls");
	cout<<"\tCodigo\n-Maria Guadalupe Sanchez Torres\n-Samuel Mares Barragan\n\n\n";
	cout<<"Gracias por usar este programa <3!!!\nHasta la proxima!";
	return 0;
}
