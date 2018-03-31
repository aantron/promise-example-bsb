# Repromise example repo

[Repromise][repromise] is a proposed Reason binding to JavaScript promises. This
repo shows how to use it!

[`main.re`][main] begins with a simplest-possible Repromise binding to
[`node-fetch`][fetch]. `main.re` then downloads its own source code from this
very repo on GitHub, and prints it to the terminal.

The other interesting files are [`package.json`][package] and
[`bsconfig.json`][bsconfig], which show how to depend on the Repromise
development repo.

To build and run it, do

```
git clone https://github.com/aantron/repromise-example-bsb.git
cd repromise-example-bsb
npm install
npm run build
npm run test
```

This may take a little while to build BuckleScript, but then you should see the
contents of [`main.re`][main].



[repromise]: https://github.com/aantron/repromise
[main]: https://github.com/aantron/repromise-example-bsb/blob/master/main.re
[package]: https://github.com/aantron/repromise-example-bsb/blob/master/package.json
[bsconfig]: https://github.com/aantron/repromise-example-bsb/blob/master/bsconfig.json
[fetch]: https://github.com/bitinn/node-fetch
