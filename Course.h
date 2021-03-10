#include <string>
#include <iostream>


class Course {
    //Méthodes
    public:
    std:: string getnomCourse();
    void afficherMeilleurScore();
    float moyenneTemps();
    
    // Attributs
    private:

    int m_score;
    std::string m_pseudo;
    std::string m_nomCourse;
};  