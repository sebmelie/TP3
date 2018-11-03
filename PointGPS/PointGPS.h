#ifndef POINTGPS_H
#define POINTGPS_H

class PointGPS {
     private:
        char* nom;
        char* latitude;
        char* longitude;
        bool nomValide(const char* const nomPoint); //methode privée utilisée par la classe

    public:
        PointGPS(const char* = "Lycee_Raymond_Queneau_Yvetot",const char* = "0000.00000,N",const char* ="00000.00000,E");
        ~PointGPS();
        char* getNom() const;
        void setNom(const char* const adressePoint);
        char* getLatitude() const;
        void setLatitude(const char* const adressePoint);
        char* getLongitude() const;
        void setLongitude (const char* const adressePoint);
        void affichagePoints (void) const ;
        float capPoint(const PointGPS& pointAAtteindre);
        float distancePoint(const PointGPS& pointAAtteindre);


};
#endif

