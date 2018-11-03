#include <iostream>
#include "PointGPS.h"

using namespace std;

int main()
{
    PointGPS point1;
    PointGPS point2("NANCY","4523.52364,N","01225.25641,E");
    PointGPS point3("PARIS");
    PointGPS point4=point2;
    point1.affichagePoints();
    point2.affichagePoints();
    point3.affichagePoints();
    point4.affichagePoints();
    point2.setNom("fecamp");
    point2.affichagePoints();
    point4.affichagePoints();
    return 0;
}
