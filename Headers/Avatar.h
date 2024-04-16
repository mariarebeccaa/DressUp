#ifndef OOP_AVATAR_H
#define OOP_AVATAR_H

#include <string>
#include <iostream>
#include <vector>
#include <memory>
#include "Features.h"
#include "Clothing.h"
#include "AvailableClothing.h"

class Avatar {
private:

    std::string name, gender;
    int age;
    std::vector<Features*> features;
    std::vector<Clothing*> clothing;

public:
    //Avatar(const string& name, const string& gender, int age, const vector<shared_ptr<Features>>& features, const vector<Clothing*>& clothing);
    Avatar(const std::string& name, const std::string& gender, int age, const std::vector<Features*>& features, const std::vector<Clothing*>& clothing);

    Avatar(const Avatar& other);

    Avatar();

    Avatar& operator=(const Avatar& other);

    virtual ~Avatar();

    void addFeature(Features* feature);

    // Funcție pentru a accesa detaliile trăsăturilor
    void printFeaturesDetails() const;

    friend std::ostream &operator<<(std::ostream &os, const Avatar &avatar);

    void setClothing(const vector<Clothing *> &clothing);

    [[nodiscard]] const vector<Clothing *> &getClothing() const;

    void setFeatures(const vector<Features *> &features);

    [[nodiscard]] const vector<Features *> &getFeatures() const;
};

#endif //OOP_AVATAR_H
