#include <iostream>
#include <random>

int main()
{
    // 1. Get our hardware random number generator
    std::random_device rd{};

    // 2. Create a seed_seq using 8 separate hardware random numbers.
    // 8 * 32 bits = 256 bits of entropy, which is a great starting point.
    std::seed_seq ss{rd(), rd(), rd(), rd(), rd(), rd(), rd(), rd()};

    // 3. Hand the "blender" over to the Mersenne Twister
    std::mt19937 mt{ss};

    // 4. Use it to roll a die!!
    std::uniform_int_distribution<int> die6{1, 6};

    std::cout << "Properly seeded roll: " << die6(mt) << '\n';

    return 0;
}

// In mathematics, mersenne primes are prime numbers that can be expressed in the form 2^p - 1, where p is a prime number.
// The Mersenne Twister is a pseudorandom number generator (PRNG) that was developed by Makoto Matsumoto and Takuji Nishimura in 1997.
// It is named after the Mersenne primes because it uses a Mersenne prime as its modulus. The Mersenne Twister is widely used in various applications due to its high-quality random number generation and long period of 2^19937 - 1, which means it can generate a very large sequence of random numbers before repeating.

// properties of Mersenne Twister:
// 1. High-quality random numbers: The Mersenne Twister produces high-quality random numbers that pass various statistical tests for randomness
// 2. Long period: The Mersenne Twister has a long period of 2^19937 - 1, which means it can generate a very large sequence of random numbers before repeating.
// 3. Fast generation: The Mersenne Twister is designed to be fast and efficient, making it suitable for applications that require a large number of random numbers to be generated quickly.
// 4. Deterministic: The Mersenne Twister is a deterministic algorithm, which means that if you start with the same seed, it will produce the same sequence of random numbers. This can be useful for debugging and testing purposes

// applications of Mersenne Twister:
// 1. Simulations: The Mersenne Twister is commonly used in simulations, such as Monte Carlo simulations, where a large number of random numbers are needed to model complex systems and processes.
// 2. Games: The Mersenne Twister is often used in game development for generating random events, such as random enemy behavior, loot drops, or procedural content generation.
// 3. Statistical sampling: The Mersenne Twister can be used in statistical sampling methods, such as random sampling from a population or random shuffling of data, where high-quality random numbers are essential for accurate results.
// 4. Randomized algorithms: The Mersenne Twister can be used in randomized algorithms, which are algorithms that make random choices during their execution to achieve better performance or solve problems that are difficult to solve deterministically. Examples include randomized sorting algorithms, randomized search algorithms, and randomized optimization algorithms.
