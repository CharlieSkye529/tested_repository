#include <iostream>
#include <string>
#include <cmath>
using namespace std;
// means that we use the 'std' namespace


namespace Space1
{
    int ID = 1;
    void Display()
    {
        std::cout << "ID:namespace " << ID << std::endl;
    }
}

namespace Space2
{
    int ID = 2;
    void Display()
    {
        std::cout << "ID:namespace " << ID << std::endl;
    }
}



class Student
{
    double Final_score;
    double Score[3];

    public:
        string Name;
        int Number;
        Student()
        {
            Name = "Nameless";
            Number = 0;
            Final_score =Score[0]=Score[1]=Score[2]=60;
        }
        Student(string _Name, int _Number, double _Score[])
        {
            Name = _Name;
            Number = _Number;
            for(int i=0;i<3;i++)
            {
                Score[i]=_Score[i];
                Final_score+=Score[i];
            }
        }
        ~Student()
        {
            cout<<"I'm dead."<<endl;
        }
        void DisplayScore()
        {
            cout << "Final score: " << Final_score << endl;
            for (int i = 0; i < 3; i++)
                cout << "->" <<Score[i] << endl;
        }
        double GetFinalScore()
        {
            return Final_score;
        }
    
    
};


int main()
{ 
    Student Stu1;
    int a;







    return 0;
}
