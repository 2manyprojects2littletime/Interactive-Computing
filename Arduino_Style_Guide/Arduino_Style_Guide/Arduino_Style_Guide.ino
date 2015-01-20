/*
    This is a multi-line comment, also called a block comment.
    Its start is demarked by the token '/*' and it will end with the token:
 */
    
/*
    This is a new block comment.
    The computer read the block-comment end token on line 4 so
    we had to start a new one.
    The computer ignores everything you put in comments.  
    Comments are there for people to read, not machines.
 */
 
 // This is a single-line comment, or inline comment.
 // An inline comment starts at the token '//' and goes to the end of that line.

/*
    This file is a style guide for 'Interactive Computing.'
    It will have a short example of the concepts we will use in our programs
    in a context similar to how they will be used.
    This is a living document, feel free to refer, edit,
    or extend it as you see fit.
    It is not intedended to be a definitive reference,
    It covers the basics: just enough to be dangerous.
 */

const boolean TRUE = true;  // This is statement; statements end with 
                            //  a ';' token.
                            // There are a few things to note:
                            // 1: the 'const' declaration means that 
                            //  this value is constant, it can't 
                            //  be changed or reassigned by the
                            //  program 
                            // 2: the type of this data is 'boolean,'
                            //  booleans represent binary values, 
                            //  like True/False, On/Off, High/Low
                            // 3: the reference that we are making is
                            //  named 'TRUE' the convention in the
                            //  'C' family of languages is to use 
                            //  ALL_UPPERCASE_WITH_UNDERSCORES
                            //  to name references that are constant.
                            // 4: the operation is an assignment, denoted
                            //  by the '=' operator; the assignment
                            //  operation assigns the RHS to the LHS
                            // 5: the value we are assigning to the 
                            //  reference 'TRUE' is the boolean value
                            //  'true'
                            // 6: in this statement 'const,' 'boolean,' 
                            //  and 'true' are language keywords, so 
                            //  they are dispayed with special 
                            //  formatting in most IDEs
    
char eh = 'a';  // Of note:
                // 1: the type of the data is 'char,' chars represent 
                //  character values (i.e. letters of the alphabet, 
                //  punctuation, and 'special' characters)
                // 2: the reference 'eh' is a variable: the reference can
                //  be reassigned by the program as it runs. We know 
                //  the reference is a variable because we haven't put
                //  any other declarations and variable is the default.

int sum;        // In this statement we are creating a reference called 
                //  'sum,' we aren't initializing the reference with
                //  a value like we have above

sum = 1 + 2;    // There are two operations in this statement.
                // First, the RHS is evaluated:
                //  the RHS in this statement is the addition operation
                //  the result of the operation is then assigned to the
                //  reference 'sum' that was made above.


