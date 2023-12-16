#include <iostream>
#include <string>
using namespace std;
/*int main(){
int V[]={12,21,13,10,45,11,16,12,30,22,4,18,14,41,43},j,T_Normal[15],T_Elevado[15];
j=0;
while(j<15){
	if (V[j]<=16)
	{T_Normal[j]=V[j];}
	else 
	{T_Normal[j]=123456123;}
	
	if (V[j]>16)
	{T_Elevado[j]=V[j];}	
	else 
	{T_Elevado[j]=123456123;}
	j++;
}

	cout<<"El vector V es: "<<endl;
	j=0;
	while(j<15){
	cout<<V[j]<<"\t";
	j++;}
	
	cout<<"\nLas temperaturas normales son"<<endl;
	j=0;
	while(j<15){
	if (T_Normal[j]!=123456123)
	{cout<<T_Normal[j]<<"\t";}
	j++;}
	
	cout<<"\n\nLas temperaturas altas son"<<endl;
	j=0;
	while(j<15){
	if (T_Elevado[j]!=123456123)
	{cout<<T_Elevado[j]<<"\t";}
	j++;}
}*/
/*int main(){
int V[4][4],O[16];
int i=0,j=0,m=0,suma=0,total=0;
	while(i<4 && j==0)
	{cout<<"ingrese los numeros de la primera linea de la cartilla:		";cin>>V[i][j];
	i++;}
	j++;	
	cout<<endl;
	
	i=0;
	while(i<4 && j==1)
	{cout<<"ingrese los numeros de la segunda linea de la cartilla:		";cin>>V[i][j];
	i++;}
	j++;
cout<<endl;

	i=0;	
	while(i<4 && j==2)
	{cout<<"ingrese los numeros de la tercera linea de la cartilla:		";cin>>V[i][j];
	i++;}
	j++;
	cout<<endl;	
	
	i=0;	
	while(i<4 && j==3)
	{cout<<"ingrese los numeros de la cuarta linea de la cartilla:		";cin>>V[i][j];
	i++;}
	j++;	
	
		
	
	cout<<"\nel vector O es:"<<endl;
	
	j=0;
	i=0;
	m=0;
	while(i<4 && j==0)
		{O[m]=V[i][j];
		suma=suma+V[i][j];
		total=total+1;
		cout<<V[i][j]<<"\t";
		i++;m++;}
	j++;	
		
		
	i=0;
	while(i<4 && j==1 )
		{if(i==0 || i==3)
		{O[m]=V[i][j];
		suma=suma+V[i][j];
		total=total+1;
		cout<<V[i][j]<<"\t";}
		else {O[m]=0;}
		i++;m++;}
	j++;
	

	i=0;
	while(i<4 && j==2 )
		{if(i==0 || i==3)
		{O[m]=V[i][j];
		suma=suma+V[i][j];
		total=total+1;
		cout<<V[i][j]<<"\t";}
			else {O[m]=0;}
		i++;m++;}
	j++;
	

	i=0;
	while(i<4 && j==3)
		{O[m]=V[i][j];
		suma=suma+V[i][j];
		total=total+1;
		cout<<V[i][j]<<"\t";
		i++;m++;}
	j++;	
	
	cout<<"\nla suma del vector es "<<suma<<endl;
	
	cout<<"El vector O es: "<<endl;
	m=0;
	while(m<16)
	{if(O[m]!=0)
	{cout<<O[m]<<"\t";}
	m++;
	}
		
}*/
int main(){
	int V[15]={12,21,13,10,45,11,16,12,30,22,4,18,14,41,43},T_Normal[15],T_Elevado[15],i,j,x;
	i=1;
	j=1;
	x=1;
	while(i<16){
		
		if(V[i-1]<=16){
			j++;
			do{
				T_Normal[j-2]=V[i-1];
				
			}while(j>17);
			i++;
		}
		else{
			x++;
			do{
				T_Elevado[x-2]=V[i-1];
				
			}while(x>17);
			i++;
		}
	}
	cout<<"El Arreglo es: "<<endl;
	cout<<" Elemento "<<" Valor"<<"   Normal"<<"   Elevado"<<endl;
		i=1;
		j=1;
		x=1;
		while(i<16){
			//cout<<"\t"<<i<<"\t" <<X[i]<<endl;}
		if(V[i-1]<=16){
			j++;
			do{
				cout<<"\t"<<i-1<<"\t" <<V[i-1]<<"\t"<<T_Normal[j-2]<<endl;
				
			}while(j>17);
			i++;
		}
		else{
			x++;
			do{
					cout<<"\t"<<i-1<<"\t" <<V[i-1]<<"\t"<<"\t"<<T_Elevado[x-2]<<endl;
				
			}while(x>17);
			i++;
		}
	}
	system("PAUSE");
	return 0;
}


