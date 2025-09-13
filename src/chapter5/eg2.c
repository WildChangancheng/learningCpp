#include <stdio.h>
#include <stdbool.h>

int main(void) {
    bool condition = true;
    if (condition) printf("节点1触发成功\n");
    condition = false;
    if (condition) printf("节点2触发成功\n");
    return 0;
}