# Faust Benchmark
Faust benchmark tools are available at [`faust/tools/benchmark`](https://github.com/grame-cncm/faust/tree/master-dev/tools/benchmark).

- [Optimizing - Faust Documentation](https://faustdoc.grame.fr/manual/optimizing/)

## Command
`faustbench` is used to benchmark. Available at `faust/tools/benchmark/faustbench` in Faust repository.

```bash
/path/to/faustbench \
  -opt 3            \ # optimization level (-O option).
  -t 0 -time -midi  \ # Faust options
  component.dsp
```

Currently, `DigiDrie.dsp` takes long time to compile. Therefore to take benchmark, split component from `DigiDrie.dsp`, and run `faustbench`.

The result of component level benchmark may not be reliable, because C++ compiler optimization may work differently on merged code. Still, it's better than nothing.
