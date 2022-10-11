#include <iostream>
#include <sstream>

using std::cout;    using std::endl;
using std::cin;     using std::string;


string IntegerToString(int myInt) {
    /*
     * We'll specifically use an ostringstream, which is just a
     * stringstream that you can only put things into.
     */
    std::ostringstream convert;
    /*
     * Putting the int into the ostringstream will convert
     * it into a string format.
     */
    convert<<myInt<<endl;

    /* Ask for the string inside the ostringstream. */
    return convert.str();
}

int StringToInteger(const string& str) {
    /*
     * We'll specifically use an istringstream, which is just a
     * stringstream that you can only get things from.
     *
     * You can set its internal string when creating it or by doing
     * converter.str("string_to_set");
     */
    std::istringstream convert2;

    /*
     * Try getting an int from the stream. If this is not succesful
     * then user input was not a valid input.
     */
    int value;
    if(convert2>>value){
        char judge;
        if(convert2>>judge)
            throw std::domain_error(string("something went wrong"));
        return value;
    }

        /*
         * See if we can extract a char from the stream.
         * If so, the user had junk after a valid int in their input.
         */
        
            /*
             * Throwing an error is a way of propogating up the funcion
             * callstack that something went wrong. Previous functions can
             * anticipate such an error and catch it. In this case, we will
             * just let the thrown domain_error propogate up until it terminates
             * the program.
             *
             * A domain_error is defined in the standard namespace as an error
             * to signal that the input arguments to the function were not valid.
             */
            
    else{
        throw std::domain_error(string("fail to concert"));
    }

    
    /* If read unsuccessful, throw a domain error with a helpful error message. */
    return 0;
}

int getInteger() {
        /* First we get a line of input from the user. */
    while(true){
        string line;
        std::getline(cin,line);
        std::istringstream getting(line);
        int data;
        if(getting>>data){
            char data2;
            if(getting>>data2)
                cout<<"unsuccesful input"<<endl;
            else
                return data2;
        }
        else
            cout<<"invalid input."<<endl;
    }
        /*
         * We'll  use an istringstream because we only want to pull data
         * out of the stream once we have put the string's contents in it.
         */
        

        /*
         * Try getting an int from the stream. If this is not succesful
         * then user input was not a valid input.
         */
        
            /*
             * See if we can extract a char from the stream.
             * If so, the user had junk after a valid int in their input.
             */
            
            /*
             * Input was succesfully converted to int with no
             * trailing stuff at the end.
             */
                
    return 0;
}

int main() {
   int x = getInteger();
   cout << "We got: " << x << endl;

}
