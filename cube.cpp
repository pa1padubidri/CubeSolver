#include<iostream>
#include<string>

std::string getSol(char letter)
{
    std::string b = "RD' RU' R'U' RU R'F' RU R'U' R'FR DR'      ";
    std::string c = "F RU' R'U' RU R'F' RU R'U' R'FR F'         ";
    std::string d = "FU' R'U' RU R'F' RU R'U' R'FR2F'           ";
    std::string e = "F'D RU' R'U' RU R'F' RU R'U' R'FR D'F      ";
    std::string f = "F2D RU' R'U' RU R'F' RU R'U' R'FR D'F2     ";
    std::string g = "RF RU' R'U' RU R'F' RU R'U' R'FR F'R'      ";
    std::string h = "D RU' R'U' RU R'F' RU R'U' R'FR D'         ";
    std::string i = "U' R'U' RU R'F' RU R'U' R'FR R             ";
    std::string j = "R'U' R'U' RU R'F' RU R'U' R'FR R2          ";
    std::string k = "R2U' R'U' RU R'F' RU R'U' R'F              ";
    std::string l = "RU' R'U' RU R'F' RU R'U' R'FR              ";
    std::string m = "D2 RF RU' R'U' RU R'F' RU R'U' R'FR F'R' D2";
    std::string o = "D'RU' R'U' RU R'F' RU R'U' R'FR D          ";
    std::string p = "R'F RU' R'U' RU R'F' RU R'U' R'FR F'R      ";
    std::string r = "F2 RU' R'U' RU R'F' RU R'U' R'FR F2        ";
    std::string s = "DR F RU' R'U' RU R'F' RU R'U' R'FR F' R'D' ";
    std::string t = "D2 RU' R'U' RU R'F' RU R'U' R'FR D2        ";
    std::string u = "F RU' R'U' RU R'F' RU R'U' R'FR F'         ";
    std::string v = "D'F RU' R'U' RU R'F' RU R'U' R'FR F'D      ";
    std::string w = "D2F RU' R'U' RU R'F' RU R'U' R'FR F'D2     ";
    std::string x = "DF RU' R'U' RU R'F' RU R'U' R'FR F'D'      ";

    switch(letter)
    {
        case 'b': return b;
        case 'c': return c;
        case 'd': return d;
        case 'e': return e;
        case 'f': return f;
        case 'g': return g;
        case 'h': return h;
        case 'i': return i;
        case 'j': return j;
        case 'k': return k;
        case 'l': return l;
        case 'm': return m;
        case 'o': return o;
        case 'p': return p;
        case 'r': return r;
        case 's': return s;
        case 't': return t;
        case 'u': return u;
        case 'v': return v;
        case 'w': return w;
        case 'x': return x;
        default: return "Please Enter Correct sequence";
    }
}

int main()
{
    int i = 0;
    char seq[50];
    std::string solution;
    std::cout<<"-----------------------------------------------\n" 
               "|            Cube Solver 2x2 v1.0             |\n" 
               "|            Developed by Pavan P             |\n" 
               "-----------------------------------------------\n\n"
               "Enter the Sequence in small letters: ";
    std::cin.clear();
    std::cin>>seq;
    while(seq[i]!='\0')
    {
        i++;
    }
    std::cout<<"-----------------------------------------------\n"
               "|    This may be a solution, try buddy        |\n";
    for(int j=0;j<i;j++)
    {
        solution = getSol(seq[j]);
        std::cout<<"| "<<solution<<" |\n";
    }
    std::cout<<"-----------------------------------------------\n"
           "Thank You\n";
    std::cin.get();
        std::cin.get();
    return 0;
}