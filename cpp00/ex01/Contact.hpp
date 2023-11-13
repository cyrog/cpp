#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact {
private:
    std::string _fname;
    std::string _lname;
    std::string _nname;
    std::string _phone;
    std::string _secret;
public:
    Contact();
    ~Contact();
    int     index;
    int         getIndex() const;
    std::string getFName(int maxSize) const;
    std::string getLName(int maxSize) const;
    std::string getNName(int maxSize) const;
    std::string getPhone() const;
    std::string getSecret() const;

    void    setFName(std::string info);
    void    setLName(std::string info);
    void    setNName(std::string info);
    void    setPhone(std::string info);
    void    setSecret(std::string info);
    void    printInfo(void) const;
};

#endif