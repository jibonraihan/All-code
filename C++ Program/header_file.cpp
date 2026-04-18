#include <iostream>
#include <vector>
#include <optional>
#include <variant>
#include <any>
#include <memory>
#include <functional>

template <typename T>
concept Addable = requires(T a, T b) {
    { a + b } -> std::same_as<T>; // সঠিক সিনট্যাক্স
};

// Concept ব্যবহার করে টেমপ্লেট ফাংশন
template <Addable T>
T add(T a, T b)
{
    return a + b;
}

// Structured binding (C++17)
auto getTuple()
{
    return std::make_tuple(42, "Hello", 3.14);
}

// Fold expression (C++17)
template <typename... Args>
auto sum(Args... args)
{
    return (args + ...);
}

// if constexpr (C++17)
template <typename T>
auto process(T value)
{
    if constexpr (std::is_pointer_v<T>)
    {
        return *value;
    }
    else
    {
        return value;
    }
}

int main()
{
    // Structured binding
    auto [num, str, dbl] = getTuple();
    std::cout << num << ", " << str << ", " << dbl << std::endl;

    // Concept ব্যবহার
    std::cout << "Add ints: " << add(5, 7) << std::endl;
    std::cout << "Add doubles: " << add(3.14, 2.71) << std::endl;

    // Fold expression
    std::cout << "Sum: " << sum(1, 2, 3, 4, 5) << std::endl;

    // if constexpr
    int x = 42;
    int *ptr = &x;
    std::cout << "Process pointer: " << process(ptr) << std::endl;
    std::cout << "Process value: " << process(x) << std::endl;

    // std::variant (C++17)
    std::variant<int, std::string, double> v;
    v = "Hello variant";
    std::visit([](auto &&arg)
               { std::cout << "Variant holds: " << arg << std::endl; }, v);

    // std::any (C++17)
    std::any anything = 42;
    anything = std::string("Hello any");
    std::cout << "Any holds string: " << std::any_cast<std::string>(anything) << std::endl;

    return 0;
}