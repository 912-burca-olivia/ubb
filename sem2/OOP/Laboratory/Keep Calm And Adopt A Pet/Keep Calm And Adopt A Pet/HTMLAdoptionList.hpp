#pragma once
#include "FileAdoptionList.hpp"
#include <iostream>
#include <string>

class HTMLAdoptionList : public FileAdoptionList
{
public:
    /*
     Writes the AdoptionList to file.
     Throws: FileException - if it cannot write.
     */
    void writeToFile() override;
    
    /*
     Displays the AdoptionList using Microsoft Excel.
     */
    void displayAdoptionList() const override;
};