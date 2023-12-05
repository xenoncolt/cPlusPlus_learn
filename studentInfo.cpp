#include <iostream>
#include <string>
#include <chrono>
#include <ctime>

using std::cin;
using std::cout;

class inputStudentInfo{
    public:
        std::string name;
        std::string id;
        std::string birth;


    void input() {
        cout << "Enter name: ";
        //cin >> name;
        std::getline(std::cin, name);
        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter Birth Date (date-month-year | 00-00-0000): ";
        cin >> birth;
    }
};

class dateCalculator: public inputStudentInfo {
    public:
    // void moreInput() {
    //     input();
    // }
    
    int birthDate() {
        std::string date;
        date = birth.substr(0, 2);
        int birthDate =  std::stoi(date);
        return birthDate;
    }

    int birthMonth() {
        std::string month;
        month = birth.substr(3, 2);
        int birthMonth = std::stoi(month); 
        return birthMonth;
    }

    int birthYear() {
        std::string year;
        year = birth.substr(6, 4);
        int birthYear =  std::stoi(year);
        return birthYear;
    }

    std::string calculateAge() {
        auto nowTime = std::chrono::system_clock::now();
        std::time_t now_c = std::chrono::system_clock::to_time_t(nowTime);
        std::tm *now = std::localtime(&now_c);

        int nowYear = 1900 + now-> tm_year;
        int nowMonth = 1 + now-> tm_mon;
        int nowDate = now-> tm_mday;

        int birthYear = dateCalculator::birthYear();
        int birthMonth = dateCalculator::birthMonth();
        int birthDate = dateCalculator::birthDate();

        int ageYear, ageMonth, ageDate;


        
        ageYear = nowYear - birthYear;      //                2023-12-04
        if (nowMonth < birthMonth)          //                2004-10-07
        {
            nowMonth += 12;
            ageMonth = nowMonth - birthMonth;
            ageYear--;
        } else 
        {
            ageMonth = nowMonth - birthMonth;
        }

        if (nowDate < birthDate)
        {
            if (nowMonth == 1 || nowMonth == 3 || nowMonth == 5 || nowMonth == 7 || nowMonth == 8 || nowMonth == 10 || nowMonth == 12)
            {
                nowDate += 31;
                
            } else if (nowMonth == 2) {
                nowDate += 28;
                
            }
            else {
                nowDate += 30;
                
            }

            ageMonth--;
            ageDate = nowDate - birthDate;
        } else {
            ageDate = nowDate - birthDate;
        }

        // if (birthMonth == 1 || birthMonth == 3 || birthMonth == 5 || birthMonth == 7 || birthMonth == 8 || birthMonth == 10 || birthMonth == 12)
        // {
        //     ageDate++;
        // } else if (birthMonth == 2)
        // {
        //     ageDate -= 2;
        // }

        std::string age = std::to_string(ageYear) + " Years, " + std::to_string(ageMonth) + " Months, " + std::to_string(ageDate) + " Days";
        return age;
    }
};



class outputStudentInfo : public dateCalculator {
    public:

    // void input() {
    //     moreInput();
    // }

    void print() {
        cout << "Name: " << name << "\n";
        cout << "ID: " << id << "\n";
        std::string age = dateCalculator::calculateAge();
        cout << "Age: " << age << "\n";
        cout << "Email Address: " << id << "@student.aiub.edu\n";
    }
};

int main(){
    // inputStudentInfo studentInput;
    outputStudentInfo student;
    student.input();
    cout << "-----------------------STUDENT INFO--------------------\n";
    student.print();
    return 0;
}
