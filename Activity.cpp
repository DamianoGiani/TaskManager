#include "Activity.h"
#include "Person.h"
#include "Sub_Activity.h"

Activity::Activity()
{

}

Activity::~Activity()
{

}



void Activity::addPerson(string name)
{
    Person new_person;
    new_person.setName(name);
    personIncl.push_back(new_person);
}

void Activity::removePerson(string name)
{
    vector<Person>::iterator i;
    for(i=personIncl.begin();i!=personIncl.end();i++){
        if (name==i->getName()){
            personIncl.erase(personIncl.begin()+(i-personIncl.begin()));
            return;
        }
    }
}



string Activity::getDescription() const
{
    return description;
}

void Activity::setDescription(const string &value)
{
    description = value;
}

string Activity::getNameActivity() const
{
    return nameActivity;
}

void Activity::setNameActivity(const string &value)
{
    nameActivity = value;
}

bool Activity::getComplete() const
{
    return complete;
}

void Activity::setComplete(bool value)
{
    complete = value;
}

bool Activity::getImportant() const
{
    return important;
}

void Activity::setImportant(bool value)
{
    important = value;
}

Date Activity::getExpiration() const
{
    return expiration;
}

void Activity::setExpiration(int d, int m, int y)
{
    expiration.setDate(d,m,y);
    return;
}

void Activity::addSubActivity(string name)
{
    Sub_Activity new_SubAct;
    new_SubAct.setName_subActivity(name);
    subActivities.push_back(new_SubAct);

}

void Activity::deleteSubActivity(string name)
{
    vector<Sub_Activity>::iterator i;

    for(i= subActivities.begin(); i!= subActivities.end(); i++){
        if(name==i->getName_subActivity()){
            subActivities.erase(subActivities.begin()-(i-subActivities.begin()));
            return;
        }
    }
}
