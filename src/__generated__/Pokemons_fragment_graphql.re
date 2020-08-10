/* @generated */

module Types = {
  [@ocaml.warning "-30"];
  type fragment_pokemons = {
    items: option(array(option(fragment_pokemons_items))),
    first: int,
    offset: option(int),
    nextOffset: option(int),
  }
  and fragment_pokemons_items = {
    fragmentRefs: ReasonRelay.fragmentRefs([ | `Pokemon_fragment]),
  };

  type fragment = {pokemons: option(fragment_pokemons)};
};

module Internal = {
  type fragmentRaw;
  let fragmentConverter: Js.Dict.t(Js.Dict.t(Js.Dict.t(string))) = [%raw
    {json| {"__root":{"pokemons":{"n":""},"pokemons_items":{"n":"","na":"","f":""},"pokemons_offset":{"n":""},"pokemons_nextOffset":{"n":""}}} |json}
  ];
  let fragmentConverterMap = ();
  let convertFragment = v =>
    v
    ->ReasonRelay._convertObj(
        fragmentConverter,
        fragmentConverterMap,
        Js.undefined,
      );
};

type t;
type fragmentRef;
external getFragmentRef:
  ReasonRelay.fragmentRefs([> | `Pokemons_fragment]) => fragmentRef =
  "%identity";

module Utils = {};

type operationType = ReasonRelay.fragmentNode;

let node: operationType = [%raw
  {json| {
  "argumentDefinitions": [
    {
      "kind": "RootArgument",
      "name": "after"
    },
    {
      "kind": "RootArgument",
      "name": "first"
    },
    {
      "kind": "RootArgument",
      "name": "offset"
    }
  ],
  "kind": "Fragment",
  "metadata": null,
  "name": "Pokemons_fragment",
  "selections": [
    {
      "alias": null,
      "args": [
        {
          "kind": "Variable",
          "name": "after",
          "variableName": "after"
        },
        {
          "kind": "Variable",
          "name": "first",
          "variableName": "first"
        },
        {
          "kind": "Variable",
          "name": "offset",
          "variableName": "offset"
        }
      ],
      "concreteType": "PokemonList",
      "kind": "LinkedField",
      "name": "pokemons",
      "plural": false,
      "selections": [
        {
          "alias": null,
          "args": null,
          "concreteType": "Pokemon",
          "kind": "LinkedField",
          "name": "items",
          "plural": true,
          "selections": [
            {
              "args": null,
              "kind": "FragmentSpread",
              "name": "Pokemon_fragment"
            }
          ],
          "storageKey": null
        },
        {
          "alias": null,
          "args": null,
          "kind": "ScalarField",
          "name": "first",
          "storageKey": null
        },
        {
          "alias": null,
          "args": null,
          "kind": "ScalarField",
          "name": "offset",
          "storageKey": null
        },
        {
          "alias": null,
          "args": null,
          "kind": "ScalarField",
          "name": "nextOffset",
          "storageKey": null
        }
      ],
      "storageKey": null
    }
  ],
  "type": "Query",
  "abstractKey": null
} |json}
];
