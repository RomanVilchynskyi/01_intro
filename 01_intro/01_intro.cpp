#include <iostream>
#include <string>

using namespace std;

const size_t MIN_POWER = 50;
const size_t MAX_POWER = 100;

const double MIN_VOLUME = 0.7;
const double MAX_VOLUME = 6;


const size_t MAX_SPEED_LOW = 100;
const size_t MAX_SPEED_UP = 350;

struct Date {
    size_t day, month, year;
    string getDate() {
        return (day < 10 ? "0" : "") + to_string(day) + "."+ (month < 10 ? "0" : "") + to_string(month) + "." + to_string(year);
    }
};

class Car {
private:
    string brand = "NoBrand";
    string color = "none";
    size_t power = MIN_POWER;
    double volume = MIN_VOLUME;
    size_t max_speed = MAX_SPEED_LOW;
    Date date{};

public:
    Car() = default;
    /*Car()
    {}*/

    //Car(const string& brand, const string& color, const Date& date)
    //{
    //    //this->brand = brand;
    //    setBrand(brand);
    //    this->color = color;
    //    this->date = date;
    //}
    Car(const string& brand, const string& color, const Date& date)
        :date{ date }
    {
        setBrand(brand);
        setColor(color);
    }
    string getBrand() {
        return this->brand;
    } 
    string getColor() {
        return this->color;
    }
    void setBrand(const string& brand) {
        if (brand.empty() || brand == " ") {
            cout << "Error! brand is empty"<<endl;
        }
        else {
            this->brand = brand;
        }
    }
    void setColor(const string& color) {
        if (!color.empty() || color != " ")
        {
            this->color = color;
        }
    }
    void print() {
        cout << "===================="<< this->brand<<"=======================" << endl;
        cout << "\t\t Color :: " << this->color << endl;
        cout << "\t\t Power :: " << this->power << endl;
        cout << "\t\t Volume :: " << this->volume << endl;
        cout << "\t\t Max speed :: " << this->max_speed << endl;
        cout << "\t\t Date :: " << this->date.getDate() << endl;
    }

    void input() {
        cout << "Brand :: "; getline(cin, this->brand);
        cout << "Color :: "; getline(cin, this->color);
        cout << "Power :: "; cin>>this->power;
        cout << "Volume :: "; cin>>this->volume;
        cout << "Max speed :: "; cin>>this->max_speed;
        cout << "Date :: "; cin>>this->date.day >> this->date.month >> this->date.year;
    }
};

//public - відкритий доступ, маємо доступ до полів і методів і за межами класу 
//private -  доступ закритий, доступ до полів і методів маємо лише в межах класу  
//protected - захищений доступ, маємо доступ в межах класу і класів наслідників

const size_t NUMBER = +380979997472;

struct Birthdate {
    size_t day, month, year;
    string getDate() {
        return (day < 10 ? "0" : "") + to_string(day) + "." + (month < 10 ? "0" : "") + to_string(month) + "." + to_string(year);
    }
};


class Student {
private:
    string name = "NOne";
    string lastname = "none";
    string middlename = "none";
    Birthdate date{};
    size_t number = NUMBER;
    string city = "Rivne";
    string country = "Ukraine";
    string edu_instit = "School no 12";
    string edu_instit_city = "Lviv";
    string edu_instit_country = "Ukraine";
    size_t no = 127;
public:
    Student() = default;
   
    Student(const string& name, const string& lastname, const string& middlename, const Birthdate& date, const string& city, const string& country, const string& edu_instit, const string & edu_instit_city, const string& edu_instit_country)
    {
        this->name = name;
        this->lastname = lastname;
        this->middlename = middlename;
        this->date = date;
        this->city = city;
        this->country = country;
        this->edu_instit = edu_instit;
        this->edu_instit_city = edu_instit_city;
        this->edu_instit_country = edu_instit_country;
    }
    string getName() {
        return this->name;
    }
    string getLastname() {
        return this->lastname;
    }
    string getMiddlename() {
        return this->middlename;
    }
    string getCity() {
        return this->city;
    }
    string getCountry() {
        return this->country;
    }
    string getEduinstit() {
        return this->edu_instit;
    }
    string getEduinstitcity() {
        return this->edu_instit_city;
    }
    string getEduinstitcountry() {
        return this->edu_instit_country;
    }
    void setName(const string& name) {
        if (!name.empty() || name != " ") {
            this->name = name;
        }
    }
    void setLastname(const string& lastname) {
        if (!lastname.empty() || lastname != " ") {
            this->lastname = lastname;
        }
    }
    void setMiddlename(const string& middlename) {
        if (!middlename.empty() || middlename != " ") {
            this->middlename = middlename;
        }
    }
    void setCity(const string& city) {
        if (!city.empty() || city != " ")
        {
            this->city = city;
        }
    }
    void setCountry(const string& contry) {
        if (!country.empty() || country != " ")
        {
            this->country = contry;
        }
    }
    void setEduinstit(const string& edu_instit) {
        if (!edu_instit.empty() || edu_instit != " ")
        {
            this->edu_instit = edu_instit;
        }
    }
    void setEduinstitcity(const string& edu_instit_city) {
        if (!edu_instit_city.empty() || edu_instit_city != " ")
        {
            this->edu_instit_city = edu_instit_city;
        }
    }
    void setEduinstitcountry(const string& edu_instit_country) {
        if (!edu_instit_country.empty() || edu_instit_country != " ")
        {
            this->edu_instit_country = edu_instit_country;
        }
    }

    void print_stud() {
        cout << "====================" << this->name << "=======================" << endl;
        cout << "====================" << this->lastname << "=======================" << endl;
        cout << "====================" << this->middlename << "=======================" << endl;
        cout << "\t\t Birthdate :: " << this->date.getDate() << endl;
        cout << "\t\t Number :: " << this->number << endl;
        cout << "\t\t City :: " << this->city << endl;
        cout << "\t\t Country :: " << this->country << endl;
        cout << "\t\t Educational institutions :: " << this->edu_instit << endl;
        cout << "\t\t Educational institutions (city) :: " << this->edu_instit_city << endl;
        cout << "\t\t Educational institutions (country) :: " << this->edu_instit_country << endl;
        cout << "\t\t Number of class :: " << this->no << endl;
    }

    void input_stud() {
        cout << "Name :: "; getline(cin, this->name);
        cout << "Last name :: "; getline(cin, this->lastname);
        cout << "middle name :: "; getline(cin, this->middlename);
        cout << "Birthdate :: ";cin>>  this->date.day >> this->date.month>>this->date.year;
        cout << "Number :: "; cin >> this->number;
        cout << "City :: "; getline(cin, this->city);
        cout << "Country :: "; getline(cin, this->country);
        cout << "Educational institution :: "; getline(cin, this->edu_instit);
        cout << "Educational institution (city):: "; getline(cin, this->edu_instit_city);
        cout << "Educational institution (country):: "; getline(cin, this->edu_instit_country);
        cout << "Number of class :: "; cin>> this->no;
    }
};

int main()
{
    Date date = { 2 , 5, 2020 };
    cout << date.getDate() << endl;

    Car ford;
    Car bmw("BMW", "black", { 5,8,2012 });
    cout << "Brand :: " << bmw.getBrand()<<endl;
    bmw.setBrand("Mazda");
    cout << "Brand :: " << bmw.getBrand()<<endl;
    ford.setColor("red");
    cout << "Color ford :: " << ford.getColor() << endl;

    bmw.print();
    ford.input();
    ford.print();

    Birthdate bdate = { 23,7,2006 };
    Student one;
    Student two("Petro","Tkach","Romanovich",{23,7,2006},"Rivne","Ukraine",)

}
