#include "DNA.h"
#include "sequence.h"
#include<iostream>
#include<cstring>

using namespace std;
RNA_Type en3[4]=  {mRNA, pre_mRNA, mRNA_exon, mRNA_intron};

DNA::DNA():sequence()
{
}
DNA::DNA(int length, DNA_Type atype[]):sequence()
{

    seq=new char[length];
    for(int i=0; i<4; i++)
    {
        type[i]=atype[i];
    }
    this->length=length;



}
DNA::DNA(const DNA&rhs):sequence()
{

    for (int i =0 ; i<length; i++)
    {
        seq[i]=rhs.seq[i];

    }
}

void DNA:: Print()
{

}

ostream& operator<< (ostream& out, DNA &s)
{
    for (int i=0 ; i<strlen(s.seq) ; i++)
        out<<s.seq[i];
    return out;
}
istream& operator>> (istream& in, DNA &s)
{
    string x;
    in>>x;
    s.length=x.size();
    s.seq = new char[x.size()+1];
    s.seq[x.size()]='\0';
    for(int i = 0 ; i<s.length ; i++)
        s.seq[i]=x[i];
    return in;
    // seq->len = strlen(seq->seq);


}
bool   operator== ( DNA &s,DNA &c)
{

    int x=1;
    if (s.length==c.length)
    {
        for (int i=0; i<s.length ; i++)
        {

            if ( s.seq[i]!=c.seq[i])
            {
                x=0;

            }

        }
    }
    else
        x=0;
    return x;


};


bool   operator!= ( DNA &s,DNA &c)
{
    int x=0;
    if (s.length!=c.length)
    {
        x=1;
    }
    else
    {
        for (int i=0; i<s.length ; i++)
        {

            if ( s.seq[i]!=c.seq[i])
            {
                x=1;

            }

        }



    }
    return x;
}

DNA operator+  ( DNA &s,DNA &c){

    s.seq[s.length+1]=0;
    c.seq[c.length+1]=0;


    char  add[s.length+c.length];
    add[s.length+c.length+1]=0;

    strcpy(add,s.seq);
    strcat(add,c.seq);
    cout<<add<<endl;


}
DNA::~DNA(){
delete seq;}
int DNA::get_size()
{

    length = strlen(seq);
    //cout<<length<<endl;
    return length;

}
int DNA::checkdna()
{
    int x=1;
    for(int i=0; i<length; i++)
    {
        if(seq[i]!='A'  &&  seq[i]!='T' && seq[i]!='C' && seq[i]!='G' )
        {

            cout<<"invalid sequence"<<endl;
            x=0;
            break;


        }
    }
    return x;

}
RNA DNA::ConvertToRNA()     ///seq = ATAGC >> TATCG
{
RNA rna1(2,en3);
rna1.length=length;


    /// DNA --> RNA
    for(int i=0 ; i<length ; i++)
    {
        if(seq[i] == 'T')
        {
            seq[i] = 'U';
        }

    }
return rna1;


}

void DNA::BuildComplementaryStrand()
{
    char* result;
    int sizee =length; /// the size of the seq
    result = new char[sizee];
    for(int i=0 ; i<sizee ; i++)
    {
        if(seq[i] == 'A')
            result[i] = 'T';
        else if(seq[i] == 'T')
            result[i] = 'A';
        else if(seq[i] == 'C')
            result[i] = 'G';
        else if(seq[i] == 'G')
            result[i] = 'C';
        cout << result[i];
    }

    ///reverse(result.begin(), result.end());



}
void DNA::default_state()
{
    string  kind [4]= {"promoter", "motif", "tail", "noncoding"};
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





};

