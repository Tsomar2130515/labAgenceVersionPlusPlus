

#include <iostream>
#include <ctime>
#include "VaisseauTransport.h"
#include "VaisseauGuerre.h"
#include "VaisseauLivraison.h"
#include "Vaisseau.h"
#include "Faction.h"
using namespace std;


int main()
{
    VaisseauTransport* vaisseauTransport1 = new VaisseauTransport(10, 20, 30, 40, "Vaisseau1", 50, 60,10);
    cout << vaisseauTransport1->to_string();
    delete vaisseauTransport1;

    
}
