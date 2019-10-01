#include<iostream> 

struct CardAsStruct {
    int value;

    CardAsStruct(int v) : value(v) {}
};

class CardAsClass { 
    // default to private
    int value;
public:
    CardAsClass(int v) : value(v) {}
    
    void setValue(int v) {
        value = v;
    }

    // const member function
    int getValue() const {
        return value;
    }
}; 

int main() 
{ 
    CardAsStruct cardStruct(1);
    CardAsClass cardClass(2);

    // object size
    printf("size of cardStruct is %lu\n", sizeof(cardStruct));
    printf("size of cardClass is %lu\n", sizeof(cardClass));

    // reading member variable
    printf("cardStruct.value = %d\n", cardStruct.value);
    printf("cardClass.value = %d\n", cardClass.getValue());

    // writing member variable
    cardStruct.value = 3;
    printf("cardStruct.value = %d\n", cardStruct.value);

    cardClass.setValue(4);
    printf("cardClass.value = %d\n", cardClass.getValue());
}
