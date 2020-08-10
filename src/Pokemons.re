module Fragment = [%relay.fragment
  {|
fragment Pokemons_fragment on Query {
  pokemons(first: $first, offset: $offset, after: $after) {
      items {
        ...Pokemon_fragment
      }
      first
      offset
      nextOffset
    }
}

|}
];

module Query = [%relay.query
  {|
query PokemonsQuery ($first: Int!, $offset: Int, $after: String) {
  ...Pokemons_fragment
}
|}
];

[@react.component]
let make = () => {
  let pokemonListData =
    Query.use(~variables={first: 1, offset: None, after: None}, ());
  Js.log(pokemonListData);
  <div> "Hello"->React.string </div>;
};
