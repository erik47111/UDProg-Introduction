#include "std_lib_facilities.h"
int main() {
    double a=0;
    string mertekegyseg;
    string meter=" m";
    vector <double> szamok;
    vector <string> meretek;
    double sum=0;
    vector <double> joszamok;
    vector <string> jomertekegyseg;
    string kilepes;
    int db=0;
    
/*
    //Feladat: 1-5,

    double b=0;
    double c=0;
    cout << "Írj be 2 számot." << endl;
	while (cin >> b >> c)
    {
        if (b>c) cout << "A nagyobbik szám: " << b << endl;
        if (c>b) cout << "A nagyobbik szám: " << c << endl;
        if (b==c) cout << "A két szám egyenlő: " << b << " = " << c << endl;
        if (abs(b - c) <=0.01) cout << "Majdnem egyenlőek." << endl;
    }
*/

//a 15 m a 1600 cm a 80 ft a 50 in | bekérésnél írd be ezt <3
    while(kilepes !="|")
    {
        cout << "Ha le szeretnéd állítani akkor írj be egy | jelet(altgr w)! \n"; 
        cin >> kilepes;
        if(kilepes == "|")
        {
            break;
        }
    

        cout << "Írj be 1 számot.\n";
        cin >> a;
        szamok.push_back(a); 


        cout << "Kérlek adj meg egy mértékegységet amiben a számod van. (ft,cm,m,in):    \n";
        cin >> mertekegyseg;
        while(mertekegyseg!= "cm" and mertekegyseg!="m" and mertekegyseg!="ft" and mertekegyseg!="in" ){
        	cout <<"rossz mértékegység\n";
        	cin >> mertekegyseg;
        }
        

        if(mertekegyseg=="cm")
        {
            a=a/100;
            joszamok.push_back(a);
            jomertekegyseg.push_back(meter);
            db++;
        }
        if(mertekegyseg == "m")
        {
            a=a;
            joszamok.push_back(a);
            jomertekegyseg.push_back(meter);
            db++;
        }
        if(mertekegyseg == "ft")
        {
            a=((a*12)*2.54)/100;
            joszamok.push_back(a);
            jomertekegyseg.push_back(meter);
            db++;
        }
        if(mertekegyseg == "in")
        {
            a=a*0.0254;
            joszamok.push_back(a);
            jomertekegyseg.push_back(meter);
            db++;
        }
        

    }
    if (joszamok.size()==1)

    {
    	cout <<"az egyetlen értéked: \n";
   for (int i = 0; i < joszamok.size(); ++i)
        {
            cout << joszamok[i] << " " << jomertekegyseg[i] << "\n" <<"\n" ;
        }
    }
    
    if(joszamok.size()>1)
    {
        cout << endl << "A legkisebb szám a tömben: " << *min_element(joszamok.begin(), joszamok.end()) << " m" << "\n";
        cout << endl << "A legnagyobb szám a tömben: " << *max_element(joszamok.begin(), joszamok.end()) <<  " m" << "\n" <<"\n" ;
    }

    sort(joszamok);
    if(joszamok.size()>1)
    {
        cout << endl  << "A számok sorban:" << "\n" <<"\n" ;
        for (int i = 0; i < joszamok.size(); ++i)
        {
            cout << joszamok[i] << " " << jomertekegyseg[i] << "\n" <<"\n" ;
        }
    }
    
    if(joszamok.size()>1)
    {
        cout << endl  << "A számok összege (méterben): ";
        for (int i = 0; i < joszamok.size(); ++i)
        {
            sum=sum+joszamok[i];

        }
        cout << sum << "\n";
    }

    cout << "ennyi értéked van: "<< db << "\n";
    return 0;
}