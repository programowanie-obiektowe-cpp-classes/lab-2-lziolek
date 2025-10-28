#pragma once

#include "Resource.hpp"

class ResourceManager
{
    // Twoja implementacja tutaj
    Resource* resource_;
public:
    ResourceManager(): resource_(new Resource()) {};

    ResourceManager(const ResourceManager& other)
        : resource_{other.resource_}{}

    ResourceManager& operator=(const ResourceManager& other)
    {
        if (this == &other) return *this;
        Resource* new_resource = new Resource(*other.resource_);
        delete resource_;
        resource_ = new_resource;
        return *this;
    }


    double get() { return resource_->get(); }

    ~ResourceManager() {delete resource_; }

};
