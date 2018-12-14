#include "RNA.h"
#include "sequence.h"
#include<iostream>
#include<cstring>
#include "DNA.h"

using namespace std;
RNA::RNA():sequence()
{
}
RNA::RNA(int length, RNA_Type atype[]):sequence()
{

    seq=new char[length];
     for(int i=0; i<4; i++)
        {
            type[i]=atype[i];
        }
    this->length=length;



}
RNA::RNA(const RNA&rhs):sequence()
{

    for (int i =0 ; i<length; i++)
    {
        seq[i]=rhs.seq[i];

    }
}

void RNA:: Print()
{

}

ostream& operator<< (ostream& out, RNA &s)
{
    for (int i=0 ; i<strlen(s.seq) ; i++)
        out<<s.seq[i];
    return out;
}
istream& operator>> (istream& in, RNA &s)
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
bool   operator== ( RNA &s,RNA &c)
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


bool   operator!= ( RNA &s,RNA &c)
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

RNA operator+  ( RNA &s,RNA &c){

    s.seq[s.length+1]=0;
    c.seq[c.length+1]=0;


    char  add[s.length+c.length];
    add[s.length+c.length+1]=0;

    strcpy(add,s.seq);
    strcat(add,c.seq);
    cout<<add<<endl;


}
int RNA::get_size()
{

    length = strlen(seq);
    //cout<<length<<endl;
    return length;

}
int RNA::checkrna()
{   int x=1;
    for(int i=0; i<length; i++)
    {
        if(seq[i]!='A'  &&  seq[i]!='U' && seq[i]!='C' && seq[i]!='G' )
        {

            cout<<"invalid sequence"<<endl;
            x=0;
            break;


        }
    }
    return x;

}

        void RNA::default_state(){
        string  kind [4]= {"mRNA", "pre mRNA","mRNA exon", "mRNA intron"};
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

DNA RNA::ConvertToDNA()    ///seq = ATAGC >> TATCG
{



    /// RNA --> DNA
    for(int i=0 ; i<length ; i++)
    {
        if(seq[i] == 'U')
        {
            seq[i] = 'T';
        }

    }



}
RNA::~RNA(){


delete seq;}

//RNA::RNA()
//{
    //ctor
//}
