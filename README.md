# TestCase-Generator
It generates the any number of test cases with input-output files separately. 




/*---------------------------------TestCase_Main Changes---------------------------------*/
1. T -> change T to total input-output files wants to generate.

/*---------------------------------TestCase_Generator Changes---------------------------------*/
1. Write your generator code as per your problem.

/*---------------------------------TestCase_Solution Changes---------------------------------*/
1. Add below code in the starting of your main function.

string in_s="input"+to_string(atoi(argv[1]))+".txt";
const char *input=in_s.c_str();

string out_s="output"+to_string(atoi(argv[1]))+".txt";
const char *output=out_s.c_str();

#ifndef ONLINE_JUDGE
freopen(input,"r",stdin); 
freopen(output,"w",stdout); 
#endif



