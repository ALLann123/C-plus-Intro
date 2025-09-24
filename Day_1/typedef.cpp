#include <iostream>
#include <vector>

// typedef std::vector<std::pair<std::string, int>> pairlist_t;
typedef std::string text_t;
typedef int number_t;

int main()
{
    /*
    typedef= reserved keyword used to create an additional name
    (alias)for another data type/
    New identifier for an existing types
    helps with redability and reduces typos
    Use when there is clear benefit
    Replaced with 'using'(work beter w/templates)
    */
    // pairlist_t pairlist;

    // use the data type above
    text_t firstName = "Allan";

    std::cout << "First Name: " << firstName << std::endl;

    number_t age = 23;
    std::cout << "AGE: " << age;

    return 0;
}