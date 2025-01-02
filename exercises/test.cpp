#include <iostream>
#include <memory> // std::unique_ptr

int main() {
    // 创建 std::unique_ptr
    std::unique_ptr<int> ptr(new int(42));

    // 访问指针
    std::cout << "Value: " << *ptr << std::endl; // 输出：Value: 42

    // 重置指针
    ptr.reset(new int(100));
    std::cout << "Value after reset: " << *ptr << std::endl; // 输出：Value after reset: 100

    // 释放所有权
    int* rawPtr = ptr.release();
    std::cout << "Value after release: " << *rawPtr << std::endl; // 输出：Value after release: 100
    delete rawPtr; // 需要手动释放

    return 0;
}