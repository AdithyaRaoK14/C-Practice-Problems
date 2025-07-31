#include <assert.h>
#include "day1.1.h"

int main() {
    assert(to_lowercase('A') == 'a');
    assert(to_lowercase('Z') == 'z');
    assert(to_lowercase('C') == 'c');
    assert(to_lowercase('a') == 'a'); // already lowercase
    assert(to_lowercase('1') == '1'); // not a letter
    return 0;
}