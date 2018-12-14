#ifndef CODONSTABLE_H
#define CODONSTABLE_H
///********************
#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

struct codon
{
  	char value[4];    	    // 4th location for null character
    char AminoAcid;  	    /// corresponding AminoAcid according to Table
};



class codonstable
{
    private:
   	public:
        codon codons[64];

   	    void loadfile(string codonsfilename);///********************************************************loadfile
 	 	// constructors and destructor
        codonstable(){};
        ~codonstable(){};
 	 	/// function to load all codons from the given text file

        codon getAminoAcid(char * value);
        void setcodon(char * value, char AminoAcid, int index);
        void co();
};

#endif // CODONSTABLE_H
