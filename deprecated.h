#ifndef DEPRECATED_H
#define DEPRECATED_H

#ifdef __has_cpp_attribute
#if __has_cpp_attribute(deprecated)
#define DEPRECATED [[deprecated]]
#define DEPRECATED_MSG(msg) [[deprecated(msg)]]
#endif 
#else
#define DEPRECATED __attribute__((deprecated))
#define DEPRECATED_MSG(msg) __attribute__((deprecated(msg)))
#endif 

#endif 
