#include <iostream>

using namespace std;

//Hauptfunktion

int main(void)
{
	int kmStand;
	int wartung;
	int dwartung;

	wartung = 20000;
	dwartung = 25000;

	cout << "Seit letzer Wartung gefahrene Kilometer:" << endl;         //Abfrage des Kilometerstandes
	cin >> kmStand;

	if  (kmStand < wartung)                                             //KM-Stand ist kleiner als 20000km, also keine Wartung
    {
        cout << "Keine Wartung ben\x94tigt. Gute Fahrt!" << endl;
        cout << "Wartung in: " << wartung - kmStand << "km" << endl;
	}

	else
    {                                                               //KM-Stand ist größer 20000km, also Wartung nötig. Bestimmung wie dringend nötig

        if (kmStand < dwartung)                          //wartung nicht sehr dringend
        {
        cout << "Wartung erforderlich! Bitte bei n\x84 \bchster Gelegenheit warten lassen!" << endl;
        }

        else                                                                //Wartung sehr dringend
        {
        cout << "Wartung dringend erforderlich! Bitte SOFORT zur n\x84 \bchsten Werkstatt begeben!" << endl;
        }
	}

	return 0;
}
