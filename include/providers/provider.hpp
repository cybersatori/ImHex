#pragma once

#include <hex.hpp>

namespace hex::prv {

    class Provider {
    public:
        Provider() { }
        virtual ~Provider() { }

        virtual bool isAvailable() = 0;
        virtual bool isReadable() = 0;
        virtual bool isWritable() = 0;

        virtual void read(u64 offset, void *buffer, size_t size) = 0;
        virtual void write(u64 offset, void *buffer, size_t size) = 0;
        virtual size_t getSize() = 0;
    };

}