#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>
#include <vector>
using namespace std;


class Human{
    private:
        string first_name;
        string last_name;

        static int num_of_humans;

    public:
        string GetFirstName(){return first_name;}

        string GetLastName(){return last_name;}



        Human(string, string);
        Human();
        ~Human();

        static int GetNumberOFHumans(){return num_of_humans;}
        virtual void IntroduceYourself();
        virtual void Drink(){};
        virtual void SetAll(string, string); //sets first_name, last_name in one function
};

int Human :: num_of_humans = 0;

void Human::SetAll(string name, string surname){
    this->first_name = name;
    this->last_name = surname;
    Human::num_of_humans++;
}

void Human :: IntroduceYourself(){
    cout<<"Human introduces himself: "<<this->first_name<<" "<<this->last_name<<endl;  // Basic introduction
}

Human::Human(string name, string surname){  //constructor if both parameters provided
    this->first_name = name;
    this->last_name = surname;
    Human::num_of_humans++;
}

Human::Human(){  //constructor when no parameters provided
    this->first_name = "default_first_name";
    this->last_name = "default_last_name";
    Human::num_of_humans++;
}

Human :: ~Human(){  //destructor
    cout<<"Human released:"<<this->first_name<<" "<<this -> last_name<<endl;
}


class Student : public Human{
    private:
        int student_id = 0;

    public:
        void SetStudentId(int id){this->student_id = id;};

        void Drink(){
            cout<<"Student named "<<this->GetFirstName()<<" with id: "<<this->student_id<<" is drinking"<<endl;
        }
        Student(string, string, int);
        Student(): Human(){};

        void IntroduceYourself();
};

Student::Student(string name, string surname, int id) : Human(name, surname){  //constructor of Student - inheritance from Human
    this -> student_id = id;
}

// Student introduces itself in different way than standard way declared for Human
void Student :: IntroduceYourself(){
    cout<<"Student introduces himself:"<<this->GetFirstName()<<" "<<this->GetLastName()<<" "<<this->student_id<<endl;
}


class Lecturer : public Human{
    public:
        void Drink(){
            cout<<"Lecturer named "<<this->GetFirstName()<<" "<<this->GetLastName()<<" is drinking."<<endl;
        }
    Lecturer(string, string);
    Lecturer() : Human(){};
};

Lecturer::Lecturer(string name, string surname):Human(name, surname){};  // constructor of Lecturer - inheritance from Human


int main()
{
    srand(time(NULL));

    int n;
    cout<<"Enter queue length: ";
    cin>>n;

    vector<Human*> humans;  // objects will be stored in vector of Humans
    // each iteration adds a lecturer or student to the vector. The addition is random, follows a uniform distribution 
    for(int i=0; i<n; ++i){
        if (rand()%100<50){ 
            humans.push_back(new Lecturer());
            humans[i]->SetAll("name"+to_string(i),"last_name"+to_string(i));
        }

        else{
            humans.push_back(new Student());
            humans[i]->SetAll("name"+to_string(i),"last_name"+to_string(i));
        }
    }
    // each object introduces itself and drinks 
    for(int i=0; i<n; ++i){
        humans[i]->IntroduceYourself();
        humans[i]->Drink();
        cout<<endl;
    }
}
