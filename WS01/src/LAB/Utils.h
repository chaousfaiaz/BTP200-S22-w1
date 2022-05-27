//I have done all the coding by myself and only copied the code 
//that my professor provided to complete my workshops and assignments.
//==============================================
// Name           : MD Faiaz
// Email          : mfaiaz@myseneca.ca
// Student ID     : 164899213
// Section        : NAA
// Date           : 05/24/2022
//==============================================

#ifndef SDDS_UTILS_H
#define SDDS_UTILS_H

namespace sdds{
    // Function Prototypes
    void flushkeys();
    bool ValidYesResponse(char ch);
    bool yes();
    void readCstr(char cstr[], int len);
    int readInt(int min, int max);
}

#endif 