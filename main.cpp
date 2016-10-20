#include<iostream>
using namespace std;
void lista();
void viteza();
void capacitate();
void pret();
void consum1();
void consum2();
struct masina
{
	char marca[50];
	char model[50];
    unsigned CP;
	unsigned viteza;
	unsigned pret;
};
masina m[50];
int main()
{
	int o;
	do
	{
	    cout<<""<<endl;
	    cout<<"                 Cazuri"<<endl;
	cout<<""<<endl;
	cout<<"1)Lista masinilor disponibile in showroom...."<<endl;
	cout<<"2)Viteza maxima/minima dintre mai multe masini..."<<endl;
	cout<<"3)Capacitatea cilindrica maxima/minima...."<<endl;
	cout<<"4)Pretul maxim/minim a unei masini..."<<endl;
	cout<<"5)Consumul pe distanta indrodusa de dvs......"<<endl;
	cout<<"6)Calculati cat combustibil consumati pe distanta indrodusa de dvs....."<<endl;
	cout<<""<<endl;
	cout<<"Introduceti optiunea:"<<endl;
	cout<<"Nr:";cin>>o;
        switch(o)
        {
            case 1:{
				    lista();
				   }
				   break;
            case 2:{
				    viteza();
				   }
				   break;
            case 3:{
				    capacitate();
				   }
				   break;
            case 4:{
				    pret();
				   }
				   break;
            case 5:{
                    consum1();
                   }
                   break;
            case 6:{
                    consum2();
                   }
                   break;
            case 7:{
                   }
                   break;
            default:cout<<"";
        }
    }
    while(o!=7);
    return 0;
}
void lista()
{
    cout<<""<<endl;
	cout<<"Nume          "<<"Model  "<<"C.P  "<<"Viteza   "<<"Pret     ";cout<<endl;
	cout<<"              "<<"       "<<"     "<<"         "<<"         ";cout<<endl;
	cout<<"Volkswagen    "<<"Golf   "<<"2000 "<<" 220km/h "<<" 10.000$ ";cout<<endl;
	cout<<"Mercedes-Benz "<<"Vito   "<<"2500 "<<" 240km/h "<<" 15.000$ ";cout<<endl;
	cout<<"BMW           "<<"X6     "<<"3000 "<<" 260km/h "<<" 20.000$ ";cout<<endl;
	cout<<"Ford          "<<"Focus  "<<"1500 "<<" 200km/h "<<" 5.000$  ";cout<<endl;
	cout<<"Dacia         "<<"Logan  "<<"1600 "<<" 220km/h "<<" 4.500$  ";cout<<endl;
	cout<<"Chevrolet     "<<"Camaro "<<"5000 "<<" 280km/h "<<" 100.000$";cout<<endl;
	cout<<"Mitsubishi    "<<"Evo 10 "<<"4500 "<<" 260km/h "<<" 55.500$ ";cout<<endl;
	cout<<"Toyota        "<<"Yaris  "<<"1200 "<<" 200km/h "<<" 3.556$  ";cout<<endl;
	cout<<"Nissan        "<<"Juke   "<<"1800 "<<" 220km/h "<<" 7.500$  ";cout<<endl;
	cout<<"FIAT          "<<"Punto  "<<"1100 "<<" 180km/h "<<" 1.500$  ";cout<<endl;
}
void viteza()
{
	unsigned int n,i,max,min;
	cout<<"Introduceti numarul de masini...."<<endl;
	cout<<"Nr:";cin>>n;
	cout<<"Introduceti datele masinilor...."<<endl;
	for(i=0;i<n;i++)
	{
		cout<<"Marca:";cin>>m[i].marca;
		cout<<"Viteza:";cin>>m[i].viteza;
	}
	max=min=m[0].viteza;
	for(i=1;i<n;i++)
	{
		if (m[i].viteza>max)
			max=m[i].viteza;
	}
	for(i=1;i<n;i++)
	{
		if (m[i].viteza<min)
			min=m[i].viteza;
	}
	cout<<"Masina cu cea mai mare viteza..."<<endl;
	for(i=0;i<n;i++)
	{
		if(m[i].viteza==max)
		{
			cout<<"Marca: "<< m[i].marca<<" Viteza: "<< m[i].viteza<<endl;
		}
	}
	cout<<"Masina cu cea mai mica viteza..."<<endl;
	for(i=0;i<n;i++)
	{
		if(m[i].viteza==min)
		{
			cout<<"Marca: "<<m[i].marca<<" Viteza: "<<m[i].viteza<<endl;
		}
	}
}
void capacitate()
{
	int n,i,cpmax,cpmini;
	cout<<"Introduceti numarul de masini...."<<endl;
	cout<<"Nr:";cin>>n;
    cout<<"Introduceti datele masinilor...."<<endl;
    	for(i=0;i<n;i++)
	{
		cout<<"Marca:";cin>>m[i].marca;
		cout<<"CP:";cin>>m[i].CP;
	}
	cpmax=cpmini=m[0].CP;
	for(i=1;i<n;i++)
	{
		if (m[i].CP>cpmax)
			cpmax=m[i].CP;
	}
	for(i=1;i<n;i++)
	{
		if (m[i].CP<cpmini)
			cpmini=m[i].CP;
	}
	cout<<"Masina cu cea mai mare capacitate cilindrica..."<<endl;
	for(i=0;i<n;i++)
	{
		if(m[i].CP==cpmax)
		{
			cout<<"Marca: "<< m[i].marca<<" CP: "<< m[i].CP<<endl;
		}
	}
	cout<<"Masina cu cea mai mica capacitate cilindrica..."<<endl;
	for(i=0;i<n;i++)
	{
		if(m[i].CP==cpmini)
		{
			cout<<"Marca: "<<m[i].marca<<" CP: "<<m[i].CP<<endl;
		}
	}
}
void pret()
{
	int n,i,pretmax,pretmini;
	cout<<"Introduceti numarul de masini..."<<endl;
	cout<<"Nr:";cin>>n;
	cout<<"Introduceti datele masinilor...."<<endl;
    	for(i=0;i<n;i++)
	{
		cout<<"Marca:";cin>>m[i].marca;
		cout<<"Pret:";cin>>m[i].pret;
	}
	pretmax=pretmini=m[0].pret;
	for(i=1;i<n;i++)
	{
		if (m[i].pret>pretmax)
			pretmax=m[i].pret;
	}
	for(i=1;i<n;i++)
	{
		if (m[i].pret<pretmini)
			pretmini=m[i].pret;
	}
	cout<<"Masina cea mai scumpa..."<<endl;
	for(i=0;i<n;i++)
	{
		if(m[i].pret==pretmax)
		{
			cout<<"Marca: "<< m[i].marca<<" Pret: "<< m[i].pret<<endl;
		}
	}
	cout<<"Masina cea mai ieftina..."<<endl;
	for(i=0;i<n;i++)
	{
		if(m[i].pret==pretmini)
		{
			cout<<"Marca: "<<m[i].marca<<" Pret: "<<m[i].pret<<endl;
		}
	}
}
void consum1()
{
    unsigned x1,x2,x4;
    const int x3=100;
    cout<<"Introduceti consumul mediu la 100km.."<<endl;
    cin>>x1;
    cout<<"Introduceti distanta in km"<<endl;
    cin>>x2;
    x4=(x1*x2)/x3;
    cout<<"Litri consumati:"<<x4<<"(+,-)"<<endl;
}
void consum2()
{
   unsigned y1,y2,y4;
   const int y3=100;
   cout<<"Introduceti consumul mediu la 100km..."<<endl;
   cin>>y1;
   cout<<"Introduceti maxim 60 litir in rezervor.."<<endl;
   cin>>y2;
   y4=(y3*y2)/y1;
   cout<<"Cu "<<y2<<"litri poti parcurge "<<y4<<"(+,-)km"<<endl;

}
