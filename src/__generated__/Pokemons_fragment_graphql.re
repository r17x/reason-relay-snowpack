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
  "kind": "Fragment",
  "name": "Pokemons_fragment",
  "type": "Query",
  "metadata": null,
  "argumentDefinitions": [
    {
      "kind": "RootArgument",
      "name": "first",
      "type": "Int!"
    },
    {
      "kind": "RootArgument",
      "name": "offset",
      "type": "Int"
    },
    {
      "kind": "RootArgument",
      "name": "after",
      "type": "String"
    }
  ],
  "selections": [
    {
      "kind": "LinkedField",
      "alias": null,
      "name": "pokemons",
      "storageKey": null,
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
      "plural": false,
      "selections": [
        {
          "kind": "LinkedField",
          "alias": null,
          "name": "items",
          "storageKey": null,
          "args": null,
          "concreteType": "Pokemon",
          "plural": true,
          "selections": [
            {
              "kind": "FragmentSpread",
              "name": "Pokemon_fragment",
              "args": null
            }
          ]
        },
        {
          "kind": "ScalarField",
          "alias": null,
          "name": "first",
          "args": null,
          "storageKey": null
        },
        {
          "kind": "ScalarField",
          "alias": null,
          "name": "offset",
          "args": null,
          "storageKey": null
        },
        {
          "kind": "ScalarField",
          "alias": null,
          "name": "nextOffset",
          "args": null,
          "storageKey": null
        }
      ]
    }
  ]
} |json}
];
