#include<iostream>
#include<fstream>
#include<string.h>
#include<cstdlib>
#include<conio.h>
#include<Windows.h>

using namespace std;
void menu();
//void ingreso();
//void mostrar();
//void salir();


int main() {
	menu();
	return 0;
	
}

	
		
void menu() {
				float  mhierba=10.00;
		float lan=20.00;
		float gus=30.00;
		float tod=50.00;
		float des=0.05;
		int totalservicio=0;
		int descuento=0;
		int hec=0, costo=0;
	int opcion = 0;
		ofstream servicios;
	servicios.open("serv.txt", ios::out | ios::app);
	while (opcion != 6) {
		system("cls");
	cout << "  _________________________________________\n";  	 	
	 cout << " |         --> MENU <--          			|\n";
	 cout << " | 1.MALA HIERBA	    	COSTO=10		|\n";
	 cout << " | 2.Langostas	   		COSTO=20        |\n";
	 cout << " | 3.Gusanos	       		COSTO=30 		|\n";
	 cout << " | 4.TODO	       	 		COSTO=50		|\n";
		cout << "Que deseas hacer? ";
		cin >> opcion;
		switch (opcion) {
		case 1:
		
			cout<<"______MALA HIERBA______\n"<<endl;
			cout<<"cuantas hectareas necesita?";
			cin>>hec;
		
				costo=(hec*mhierba);
		
			cout<<"EL COSTO TOTAL DE HECTARIAS SOLICITADAS ES  =   "<<costo<<endl;
			
			if(hec>500){
					totalservicio=(costo*des);
					
				cout<<"SU TOTAL A PAGAR POR EL DESCUENTO DE MAS DE 500 HECTAREAS ES : "<<totalservicio<<endl;
			
				
			 if (totalservicio>1500) 
			 	{
			 	descuento=totalservicio*0.10;
			 	cout<<"SU TOTAL A PAGAR EN Q. SI SE PASA DE 1500 ES :" <<descuento<<endl;
			
				}
				servicios<<"OPCION 1 MAHA HIERVBA"<<endl;
			servicios<<"HECTAREAS SOLICITADAS DE MALA HIERVA ES: "<<costo<<endl;
			servicios<<"TOTAL A PAGAR POR DESCUENTO DEL 5% ES : "<<totalservicio<<endl;
			servicios<<"TOTAL A PAGAR POR DESCUENTO CLIENTE PREFERIDO ES : "<<descuento<<"\n"<<endl;		
			}
			
			system("pause");
			break;
			
			case 2:
				cout<<"______LANGOSTAS______\n"<<endl;
			cout<<"cuantas hectareas necesita?";
			cin>>hec;
				costo=(hec*lan);
		
			cout<<"EL COSTO TOTAL DE HECTARIAS SOLICITADAS ES  =   "<<costo<<endl;
			
			if(hec>500){
					totalservicio=(costo*des);
					
				cout<<"SU TOTAL A PAGAR POR EL DESCUENTO DE MAS DE 500 HECTAREAS ES : "<<totalservicio<<endl;
			
				
			 if (totalservicio>1500) 
			 	{
			 	descuento=totalservicio*0.10;
			 	cout<<"SU TOTAL A PAGAR EN Q. SI SE PASA DE 1500 ES :" <<descuento<<endl;
			
				}
				servicios<<"OPCION 2 LANGOSTAS"<<endl;
			servicios<<"HECTAREAS SOLICITADAS DE LANGOSTAS ES: "<<costo<<endl;
			servicios<<"TOTAL A PAGAR POR DESCUENTO DEL 5% ES : "<<totalservicio<<endl;
			servicios<<"TOTAL A PAGAR POR DESCUENTO CLIENTE PREFERIDO ES : "<<descuento<<"\n"<<endl;		
			
			}
		
			system("pause");
				break;
				
			case 3:
					cout<<"______GUSANOS______\n"<<endl;
			cout<<"cuantas hectareas necesita?";
			cin>>hec;
				costo=(hec*gus);
		
			cout<<"EL COSTO TOTAL DE HECTARIAS SOLICITADAS ES  =   "<<costo<<endl;
			
			if(hec>500){
					totalservicio=(costo*des);
					
				cout<<"SU TOTAL A PAGAR POR EL DESCUENTO DE MAS DE 500 HECTAREAS ES : "<<totalservicio<<endl;
			
				
			 if (totalservicio>1500) 
			 	{
			 	descuento=totalservicio*0.10;
			 	cout<<"SU TOTAL A PAGAR EN Q. SI SE PASA DE 1500 ES :" <<descuento<<endl;
			
				}
				servicios<<"OPCION 3 GUSANOS"<<endl;
			servicios<<"HECTAREAS SOLICITADAS DE GUSANOS ES: "<<costo<<endl;
			servicios<<"TOTAL A PAGAR POR DESCUENTO DEL 5% ES : "<<totalservicio<<endl;
			servicios<<"TOTAL A PAGAR POR DESCUENTO CLIENTE PREFERIDO ES : "<<descuento<<"\n"<<endl;		
			}
				
			system("pause");
			break;
			
			case 4:
					cout<<"______TODOS LOS SERVICIOS______\n"<<endl;
			cout<<"cuantas hectareas necesita?";
			cin>>hec;
				costo=(hec*tod);
		
			cout<<"EL COSTO TOTAL DE HECTARIAS SOLICITADAS ES  =   "<<costo<<endl;
			
			if(hec>500){
					totalservicio=(costo*des);
					
				cout<<"SU TOTAL A PAGAR POR EL DESCUENTO DE MAS DE 500 HECTAREAS ES : "<<totalservicio<<endl;
			
				
			 if (totalservicio>1500) 
			 	{
			 	descuento=totalservicio*0.10;
			 	cout<<"SU TOTAL A PAGAR EN Q. SI SE PASA DE 1500 ES :" <<descuento<<endl;
			
				}
				servicios<<"OPCION 4 TODOS LOS SERVICIOS"<<endl;
			servicios<<"HECTAREAS SOLICITADAS DE TODOS LOS SERVICIOS ES: "<<costo<<endl;
			servicios<<"TOTAL A PAGAR POR DESCUENTO DEL 5% ES : "<<totalservicio<<endl;
			servicios<<"TOTAL A PAGAR POR DESCUENTO CLIENTE PREFERIDO ES : "<<descuento<<"\n"<<endl;		
				
			system("pause");
			}
			
				break;
			
	
		}
	}
		servicios.close();
	}	

	