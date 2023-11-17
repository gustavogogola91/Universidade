#include <stdio.h>

typedef struct {
    int id;
    char usuario[20];
    float espaco;
} func;

int main() {

    func f[6];
    char nomes[6][12] = {{"alexandre"}, {"anderson"}, {"antonio"}, {"carlos"}, {"cesar"}, {"rosemary"}};
    int espacos[6] = {456123789, 1245698456, 123456456, 91257581, 987458, 7894561125};

    for(int i = 0; i < 6; i++) {
        f[i].id = i + 1;
        
    }

    return 0;
}