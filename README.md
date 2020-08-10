# Tinkering Project

> ✨ Bootstrapped with Create Snowpack App (CSA).

# Prerequisite
- [x] [ReasonReact](https://github.com/reasonml/reason-react)
- [x] [ReasonRelay](https://github.com/zth/reason-relay)
- [x] [Snowpack](https://github.com/pikapkg/snowpack)
- [x] [Graphql Server](https://github.com/adeyahya/pokedex-2020) by [@adeyahya](https://github.com/adeyahya)

# Issue

- [ ] The `compilation` layer both of `reason-relay-compiler` and `bs-platform` is success but still `error` when run in `browser`.
* Console `Error`
```bash
Uncaught TypeError: Cannot read property '__internal' of undefined
    at ReasonRelay.bs.js:422
```
* Source file `Error`
```diff
// ReasonRelay.bs.js
422 var createRelayContext = relayRuntime.__moduleExports.__internal.createRelayContext;
```

# Project Bootstrapped

> Using `npm`

```sh
npx create-snowpack-app new-dir --template app-template-reason-react
```

> Using `yarn`

```sh
npx create-snowpack-app new-dir --template app-template-reason-react --use-yarn
```

Thanks
