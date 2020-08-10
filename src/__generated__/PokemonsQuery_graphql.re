/* @generated */

module Types = {
  [@ocaml.warning "-30"];

  type response = {
    fragmentRefs: ReasonRelay.fragmentRefs([ | `Pokemons_fragment]),
  };
  type rawResponse = response;
  type refetchVariables = {
    first: option(int),
    offset: option(int),
    after: option(string),
  };
  let makeRefetchVariables =
      (~first=?, ~offset=?, ~after=?, ()): refetchVariables => {
    first,
    offset,
    after,
  };
  type variables = {
    first: int,
    offset: option(int),
    after: option(string),
  };
};

module Internal = {
  type responseRaw;
  let responseConverter: Js.Dict.t(Js.Dict.t(Js.Dict.t(string))) = [%raw
    {json| {"__root":{"":{"f":""}}} |json}
  ];
  let responseConverterMap = ();
  let convertResponse = v =>
    v
    ->ReasonRelay._convertObj(
        responseConverter,
        responseConverterMap,
        Js.undefined,
      );

  type rawResponseRaw = responseRaw;
  let convertRawResponse = convertResponse;

  let variablesConverter: Js.Dict.t(Js.Dict.t(Js.Dict.t(string))) = [%raw
    {json| {"__root":{"offset":{"n":""},"after":{"n":""}}} |json}
  ];
  let variablesConverterMap = ();
  let convertVariables = v =>
    v
    ->ReasonRelay._convertObj(
        variablesConverter,
        variablesConverterMap,
        Js.undefined,
      );
};

type queryRef;

module Utils = {
  open Types;
  let makeVariables = (~first, ~offset=?, ~after=?, ()): variables => {
    first,
    offset,
    after,
  };
};

type operationType = ReasonRelay.queryNode;

let node: operationType = [%raw
  {json| (function(){
var v0 = {
  "defaultValue": null,
  "kind": "LocalArgument",
  "name": "after"
},
v1 = {
  "defaultValue": null,
  "kind": "LocalArgument",
  "name": "first"
},
v2 = {
  "defaultValue": null,
  "kind": "LocalArgument",
  "name": "offset"
},
v3 = {
  "alias": null,
  "args": null,
  "kind": "ScalarField",
  "name": "name",
  "storageKey": null
},
v4 = {
  "alias": null,
  "args": null,
  "kind": "ScalarField",
  "name": "image",
  "storageKey": null
},
v5 = [
  {
    "alias": null,
    "args": null,
    "kind": "ScalarField",
    "name": "minimum",
    "storageKey": null
  },
  {
    "alias": null,
    "args": null,
    "kind": "ScalarField",
    "name": "maximum",
    "storageKey": null
  }
],
v6 = [
  (v3/*: any*/),
  {
    "alias": null,
    "args": null,
    "kind": "ScalarField",
    "name": "damage",
    "storageKey": null
  }
],
v7 = {
  "alias": null,
  "args": null,
  "kind": "ScalarField",
  "name": "id",
  "storageKey": null
};
return {
  "fragment": {
    "argumentDefinitions": [
      (v0/*: any*/),
      (v1/*: any*/),
      (v2/*: any*/)
    ],
    "kind": "Fragment",
    "metadata": null,
    "name": "PokemonsQuery",
    "selections": [
      {
        "args": null,
        "kind": "FragmentSpread",
        "name": "Pokemons_fragment"
      }
    ],
    "type": "Query",
    "abstractKey": null
  },
  "kind": "Request",
  "operation": {
    "argumentDefinitions": [
      (v1/*: any*/),
      (v2/*: any*/),
      (v0/*: any*/)
    ],
    "kind": "Operation",
    "name": "PokemonsQuery",
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
              (v3/*: any*/),
              (v4/*: any*/),
              {
                "alias": null,
                "args": null,
                "kind": "ScalarField",
                "name": "number",
                "storageKey": null
              },
              {
                "alias": null,
                "args": null,
                "concreteType": "PokemonDimension",
                "kind": "LinkedField",
                "name": "weight",
                "plural": false,
                "selections": (v5/*: any*/),
                "storageKey": null
              },
              {
                "alias": null,
                "args": null,
                "concreteType": "PokemonDimension",
                "kind": "LinkedField",
                "name": "height",
                "plural": false,
                "selections": (v5/*: any*/),
                "storageKey": null
              },
              {
                "alias": null,
                "args": null,
                "kind": "ScalarField",
                "name": "classification",
                "storageKey": null
              },
              {
                "alias": null,
                "args": null,
                "kind": "ScalarField",
                "name": "types",
                "storageKey": null
              },
              {
                "alias": null,
                "args": null,
                "kind": "ScalarField",
                "name": "resistant",
                "storageKey": null
              },
              {
                "alias": null,
                "args": null,
                "concreteType": "PokemonAttack",
                "kind": "LinkedField",
                "name": "attacks",
                "plural": false,
                "selections": [
                  {
                    "alias": null,
                    "args": null,
                    "concreteType": "Attack",
                    "kind": "LinkedField",
                    "name": "fast",
                    "plural": true,
                    "selections": (v6/*: any*/),
                    "storageKey": null
                  },
                  {
                    "alias": null,
                    "args": null,
                    "concreteType": "Attack",
                    "kind": "LinkedField",
                    "name": "special",
                    "plural": true,
                    "selections": (v6/*: any*/),
                    "storageKey": null
                  }
                ],
                "storageKey": null
              },
              {
                "alias": null,
                "args": null,
                "kind": "ScalarField",
                "name": "weaknesses",
                "storageKey": null
              },
              {
                "alias": null,
                "args": null,
                "kind": "ScalarField",
                "name": "fleeRate",
                "storageKey": null
              },
              {
                "alias": null,
                "args": null,
                "kind": "ScalarField",
                "name": "maxCP",
                "storageKey": null
              },
              {
                "alias": null,
                "args": null,
                "kind": "ScalarField",
                "name": "maxHP",
                "storageKey": null
              },
              {
                "alias": null,
                "args": null,
                "concreteType": "Pokemon",
                "kind": "LinkedField",
                "name": "evolutions",
                "plural": true,
                "selections": [
                  (v3/*: any*/),
                  (v4/*: any*/),
                  (v7/*: any*/)
                ],
                "storageKey": null
              },
              {
                "alias": null,
                "args": null,
                "concreteType": "PokemonEvolutionRequirement",
                "kind": "LinkedField",
                "name": "evolutionRequirements",
                "plural": false,
                "selections": [
                  {
                    "alias": null,
                    "args": null,
                    "kind": "ScalarField",
                    "name": "amount",
                    "storageKey": null
                  },
                  (v3/*: any*/)
                ],
                "storageKey": null
              },
              (v7/*: any*/)
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
    ]
  },
  "params": {
    "cacheID": "2976f8bc8cb38547fe4aa627afc191f6",
    "id": null,
    "metadata": {},
    "name": "PokemonsQuery",
    "operationKind": "query",
    "text": "query PokemonsQuery(\n  $first: Int!\n  $offset: Int\n  $after: String\n) {\n  ...Pokemons_fragment\n}\n\nfragment Pokemon_fragment on Pokemon {\n  name\n  image\n  number\n  weight {\n    minimum\n    maximum\n  }\n  height {\n    minimum\n    maximum\n  }\n  classification\n  types\n  resistant\n  attacks {\n    fast {\n      name\n      damage\n    }\n    special {\n      name\n      damage\n    }\n  }\n  weaknesses\n  fleeRate\n  maxCP\n  maxHP\n  evolutions {\n    name\n    image\n    id\n  }\n  evolutionRequirements {\n    amount\n    name\n  }\n}\n\nfragment Pokemons_fragment on Query {\n  pokemons(first: $first, offset: $offset, after: $after) {\n    items {\n      ...Pokemon_fragment\n      id\n    }\n    first\n    offset\n    nextOffset\n  }\n}\n"
  }
};
})() |json}
];

include ReasonRelay.MakeLoadQuery({
  type variables = Types.variables;
  type loadedQueryRef = queryRef;
  type response = Types.response;
  let query = node;
  let convertVariables = Internal.convertVariables;
});
