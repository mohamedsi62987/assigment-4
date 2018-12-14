#ifndef RNA_H
#define RNA_H
#include "sequence.h"
#include <iostream>
#include<cstring>
#include<string>
#include "codonstable.h"
#include "DNA.h"


using namespace std;
class Protein;
class codonstable;
class DNA;
enum RNA_Type  {mRNA, pre_mRNA, mRNA_exon, mRNA_intron};//enum of the default state

class RNA : public sequence
{
protected:
    RNA_Type type[4] ;
    //DNA * complementary_strand;

public:
    //int length;
    // constructors and destructor
    RNA();//empty constractor
    RNA(int length, RNA_Type atype[]);//allocate the char and enum type
    RNA(const RNA& rhs);
    ~RNA() ;


    int get_size();
    int checkrna();

    friend istream& operator>> (istream& in,   RNA &s);
    friend ostream& operator<< (ostream& out,  RNA &s);
    friend bool   operator== ( RNA &s,RNA &c);
    friend bool   operator!= ( RNA &s,RNA &c);
    friend RNA operator+  ( RNA &s,RNA &c);
    void Print();
    Protein ConvertToProtein(const codonstable & table);
    DNA ConvertToDNA();


    void default_state();
};

/*  RNA(char * seq, RNA_Type atype);
  RNA(RNA& rhs);
  ~RNA();
// function to be overridden to print all the RNA information
  void Print();
// function to convert the RNA sequence into protein sequence
  // using the codonsTable object
  Protein ConvertToProtein(const CodonsTable & table);
// function to convert the RNA sequence back to DNA
  DNA ConvertToDNA();
  #include "sequence.h"
#include<iostream>
#include<string>
#include<cstring>

using namespace std ;


enum RNA_Type  {mRNA, pre_mRNA, mRNA_exon, mRNA_intron};

class RNA : public sequence
{
protected:
    RNA_Type type[4] ;

public:
void Print(){};
    string  kind [4]= {"mRNA", "pre mRNA","mRNA exon", "mRNA intron"};
    RNA():sequence(){



    };
    // constructors and destructor
    RNA(RNA_Type e[]):sequence()
    {
        for(int i=0; i<4; i++)
        {
            type[i]=e[i];
        }
        string x="4";
        cout<<"if you need to change statement press 1 or any number to complete"<<endl;
        cout<< kind [0]<<endl;
        cin>>x;
        if(x=="1")
        {
            cout<<"press the num of statement you need "<<endl;
            for (int i=1; i<4; i++)
            {
                cout<<type[i]<<"-"<<kind [i]<<endl;
            }
            int x;

            for (int i=0 ; i<1000; i++)
            {
                cin>>x;
                if (x>0 && x<4)
                {
                    cout<<kind[x]<<endl;
                    break;
                }
                else
                    cout<<"enter number correct"<<endl;;
            }
        }

  */



#endif // RNA_H
