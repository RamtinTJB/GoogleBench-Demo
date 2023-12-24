#include <benchmark/benchmark.h>

long long factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n-1);
}

static void Factorial(benchmark::State& state) {
    for (auto _ : state)
       auto res = factorial(state.range(0)); 
}

BENCHMARK(Factorial)->DenseRange(0, 20, 4);

BENCHMARK_MAIN();
