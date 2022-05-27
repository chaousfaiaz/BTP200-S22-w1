//I have done all the coding by myself and only copied the code 
//that my professor provided to complete my workshops and assignments.
//==============================================
// Name           : MD Faiaz
// Email          : mfaiaz@myseneca.ca
// Student ID     : 164899213
// Section        : NAA
// Date           : 05/24/2022
//==============================================

#ifndef SDDS_SHOPPINGREC_H
#define SDDS_SHOPPINGREC_H

namespace sdds
{
    // Constant Value
    const int MAX_QUANTITY_VALUE = 50;
    const int MAX_TITLE_LENGTH = 50;

    // Structure
    struct ShoppingRec
    {
        char m_title[MAX_TITLE_LENGTH + 1];
        int m_quantity;
        bool m_bought;
    };

    // Function Prototypes
    ShoppingRec getShoppingRec();
    void displayShoppingRec(const ShoppingRec *shp);
    void toggleBoughtFlag(ShoppingRec *rec);
    bool isShoppingRecEmpty(const ShoppingRec *shp);
}

#endif 
