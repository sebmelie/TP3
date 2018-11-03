#include "PointGPS.h"
#include <iostream>
#include <string.h>

using namespace std;

PointGPS::PointGPS(const char* const pnom,const char* const platitude,const char* const plongitude){

    this->nom=new char[30];
    if (nomValide(pnom)){       //revopie le contenue de la chaine qui se trouve a
        strcpy(this->nom,pnom); //l'adresse du pointeur passe en paramètre à
    }                           //l'adresse contenue dans l'attribut
    else {
        cout<<"le nom n'est pas valide"<<endl;
        strcpy(this->nom,"vide");//copie la chaine "vide" à l'adresse contenu
    }                            //dans l'attribut nom

    this->latitude=new char[13];
    strcpy(this->latitude,platitude);
    this->longitude=new char[14];
    strcpy(this->longitude,plongitude);
}

PointGPS::~PointGPS(){
    delete[] this->nom;
    delete[] this->latitude;
    delete[] this->longitude;
}

char* PointGPS::getNom() const{
    return this->nom;
}

char* PointGPS::getLatitude() const{
    return this->latitude;
}

char* PointGPS::getLongitude() const{
    return this->longitude;
}

void PointGPS::setNom(const char* const autreNom){
    if (nomValide(autreNom)){
        strcpy(this->nom,autreNom);
    }
    else {
      cout<<"le nom n'est pas valide"<<endl;
    }
}

void PointGPS::setLatitude(const char* const platitude){
    strcpy(this->latitude,platitude);
}

void PointGPS::setLongitude(const char* const plongitude){
    strcpy(this->longitude,plongitude);
}

void PointGPS::affichagePoints(void) const{
    cout<<"les coordonnees du point "<< this->nom<<" sont:"<<endl;
    cout<<this->latitude<<endl;
    cout<<this->longitude<<endl<<endl;
}

bool PointGPS::nomValide(const char* const testNom){
    bool resultat=false;
    if (strlen(testNom)<30) resultat=true;
    return resultat;
}

float PointGPS::capPoint(const PointGPS& pointAAtteindre){
    return 0.0;
}

float PointGPS::distancePoint(const PointGPS& pointAAtteindre){
    return 0.0;
}
