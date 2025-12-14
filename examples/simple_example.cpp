#include <iostream>
#include <memory>

struct Product { virtual ~Product() = default; virtual void use() const = 0; };
struct ConcreteA : Product { void use() const override { std::cout << "A\n"; } };
struct ConcreteB : Product { void use() const override { std::cout << "B\n"; } };

struct Creator { virtual ~Creator() = default; virtual std::unique_ptr<Product> create() const = 0; };
struct CreatorA : Creator { std::unique_ptr<Product> create() const override { return std::make_unique<ConcreteA>(); } };
struct CreatorB : Creator { std::unique_ptr<Product> create() const override { return std::make_unique<ConcreteB>(); } };

int main() {
    CreatorA a; CreatorB b;
    a.create()->use();
    b.create()->use();
}
