# Custom Deleters for C++ Smart Pointers
Heya!:D  In this guide, we'll explore the world of custom deleters for C++ smart pointers. Custom deleters are a powerful tool that allows resource management to be controlled beyond what the standard smart pointers, like std::unique_ptr and std::shared_ptr, offer.

## What Are Custom Deleters?
In C++, custom deleters are used when more control over resource cleanup is needed. These deleters are callables that can be associated with a smart pointer. They define how the resource pointed to by the smart pointer should be cleaned up when it's time to release the resource.

## When to Use Custom Deleters?
Custom deleters are perfect for various scenarios:

- Resource Management Beyond Memory: Smart pointers handle memory well, but custom deleters allow other resource types, such as file handles, network connections, or database connections, to be managed effectively.

- Non-default Cleanup Logic: In situations where the resource requires unique cleanup logic not provided by the default deleter, a custom deleter can be employed to define a custom cleanup process.

- ## Integration with External APIs: When working with third-party libraries or external APIs that mandate custom cleanup procedures, a custom deleter ensures resources are properly released.

## How to Use Custom Deleters
Incorporating custom deleters with smart pointers is relatively straightforward. A custom deleter function or callable object is defined, and then it's associated with a smart pointer when the pointer is created.

Example:
Here's a simple example of using a custom deleter with std::unique_ptr to manage a custom resource:

```cpp
#include <iostream>
#include <memory>

class CustomResource {
public:
    CustomResource(const std::string& name) : name(name) {
        std::cout << "CustomResource " << name << " created." << std::endl;
    }

    ~CustomResource() {
        std::cout << "CustomResource " << name << " destroyed." << std::endl;
    }

private:
    std::string name;
}

void customDeleter(CustomResource* resource) {
    std::cout << "Custom deleter called for " << resource->name << std::endl;
    delete resource;
}

int main() {
    std::unique_ptr<CustomResource, void(*)(CustomResource*)> customPtr(new CustomResource("MyResource"), customDeleter);

    // customPtr will be automatically cleaned up using the customDeleter.

    return 0;
}
```
In this example, a custom deleter function customDeleter is defined and used to manage a CustomResource object.

## Conclusion
Custom deleters provide the flexibility to manage resources according to specific needs. They are particularly valuable when dealing with non-memory resources or when the default cleanup logic falls short.

With custom deleters in your toolkit, you have the power to take control of resource management and ensure that your code is as clean as it is efficient. cya Again ^-^!

For more details, check out the C++ documentation on custom deleters and also other stuff below.
(https://en.cppreference.com/w/cpp/memory/shared_ptr/shared_ptr#Custom_deleter)

