#ifndef ACTIVITY_H
#define ACTIVITY_H
#include <Person.h>
#include <vector>
#include <string>
#include <Date.h>
#include <Sub_Activity.h>

class Activity
{
public:


    Activity();
    ~Activity();


    void addPerson(string);
    void removePerson(string);
    void addSubActivity(string);
    void deleteSubActivity(string);


    string getDescription() const;
    void setDescription(const string &value);

    string getNameActivity() const;
    void setNameActivity(const string &value);

    bool getComplete() const;
    void setComplete(bool value);

    bool getImportant() const;
    void setImportant(bool value);

    Date getExpiration() const;
    void setExpiration(int,int,int);

private:
    bool important;
    bool complete;
    string description;
    Date expiration;
    string nameActivity;
    vector<Sub_Activity> subActivities;
    vector<Person> personIncl;

};

#endif // ACTIVITY_H
