#include <stdio.h>

// دالة تحسب عدد المرات التي تم استدعاؤها فيها
void visit_counter() {
    // static تعني أن المتغير لا يُعاد تصفيره كل مرة، بل يحتفظ بقيمته
    static int count = 0; 
    count++;
    printf("You have visited this page %d times.\n", count);
}

int main() {
    visit_counter(); // المرة الأولى
    visit_counter(); // المرة الثانية
    visit_counter(); // المرة الثالثة
    return 0;
}