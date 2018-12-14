#ifndef PROTEIN_H
#define PROTEIN_H
#include "sequence.h"
#include <iostream>
#include<cstring>
#include "DNA.h"
#include "Protein.h"


class DNA;
enum Protein_Type {Hormon, Enzyme, TF, Cellular_Function};

class Protein:public sequence
{   private:
    Protein_Type type[4];


    public:
        Protein();
        Protein(int length, Protein_Type atype[]);
        void Print();
        void default_state();
        friend istream& operator>> (istream& in,   Protein &s); //take the sequence
        friend ostream& operator<< (ostream& out,  Protein &s);//out the sequence
        friend bool   operator== ( Protein &s,Protein &c);
        friend bool   operator!= ( Protein &s,Protein &c);
        friend Protein operator+  ( Protein &s,Protein &c);



};

#endif // PROTEIN_H
