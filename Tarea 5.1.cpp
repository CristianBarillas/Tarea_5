#include <iostream>
using namespace std;

//punteros con asignacion de memoria dinamica;
//new=reservar un espacio en memoria
//delete []=liberar la memoria

main (){
	int fila=0, col=0,**pm_notas;
	cout<<"Ingrese la cantidad de Estudiantes:";
	cin>>fil;
	cout<<"Ingrese la cantidad de notas por Estudiante : ";
	cin>>col;
	
	pm_notas=new int *[fil];
	for(int i=0;i<fil;i++){
	
	}
	
for (int i=0,i<fil;i++){
	cout<<"Estudiante"<<i<<",Nota:"<<ii<<"  :  ";
	cin>>*(*(pm_notas))
	cout<<"___________"<<endl;
}
	for(int i=0;i<fil;i++){
		delete []pm_notas[i];
	}
	delete []pm_notas;
	int total=0,*p_notas;
	char res;
	int *p_notas=notas;
	
	do{
		cout<<"Ingrese nota "<<total<<": ";
		cin>>notas[total];
		total ++;
		cout<<"Desea Ingresar otro valor (s/n): ";
		cin>>res;
	}while(res=='s' || res=='S' );
	
	
cout<<"------Mostrar notas------"<<endl;
for (int i=0;i<total;i++){
	cout<<"Nota ("<<i<<"): "<<*p_notas<<endl;
	p_notas++;
}
delete[]p_notas;

	
	
	
	
	system("pause");
}
