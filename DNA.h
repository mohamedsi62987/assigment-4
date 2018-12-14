#ifndef DNA_H
#define DNA_H
///********************
#include "sequence.h"
#include <iostream>
#include<cstring>
#include"RNA.h"
using namespace std;

class RNA;

enum DNA_Type{promoter, motif, tail, noncoding};//enum of the default state

class DNA :public sequence
{
protected:
        DNA_Type type[4] ;
        //DNA * complementary_strand;
        int startIndex;
        int endIndex;

    public:
        int len;
    //int length;
         	// constructors and destructor
        DNA();//empty constractor
        DNA(int length, DNA_Type atype[]);//allocate the char and enum type
        //DNA(char * seq, int start, int end){};
        DNA(const DNA& rhs);
        ~DNA();

        int get_size();//get size of sequence
        int checkdna();//check if the user enter sequence correct

        friend istream& operator>> (istream& in,   DNA &s); //take the sequence
        friend ostream& operator<< (ostream& out,  DNA &s);//out the sequence
        friend bool   operator== ( DNA &s,DNA &c);
        friend bool   operator!= ( DNA &s,DNA &c);
        friend DNA operator+  ( DNA &s,DNA &c);



        void default_state(); //the default state of sequence
 	 	// function printing DNA sequence information to user
        void Print();//virtal print function
        /// function to convert the DNA sequence to RNA sequence
        /// It starts by building the complementary_strand of the current
        /// DNA sequence (starting from the startIndex to the endIndex), then,
        /// it builds the RNA corresponding to that complementary_strand.
        RNA ConvertToRNA();
 	 	/// function to build the second strand/pair of DNA sequence
	    /// To build a complementary_strand (starting from the startIndex to
        /// the endIndex), convert each A to T, each T to A, each C to G, and
        /// each G to C. Then reverse the resulting sequence.
        void BuildComplementaryStrand();


};

#endif // DNA_H
