# faustpp
faustpp is a post-processor for faust. Used to extract parameter information from generated code.

- [GitHub - jpcima/faustpp: A post-processor for faust, which allows to generate with more flexibility](https://github.com/jpcima/faustpp)

## Building
`faustpp/.travis.yml` has build command.

After `git clone`, run following command.

```bash
cd faustpp
mkdir build && cd build
cmake -DCMAKE_BUILD_TYPE=Release -DFAUSTPP_LINK_STATIC_BOOST=ON -DFAUSTPP_BUILD_EXAMPLES=ON ..
cmake --build . -j
```

On Fedora 32, `boost-static` package is separated from `boost-devel`.

faustpp is built into `build/faustpp`.

examples are built into `build/examples/`

## Template
`architectures` directory has faustpp templates.
