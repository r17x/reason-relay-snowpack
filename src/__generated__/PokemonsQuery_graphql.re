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
var v0 = [
  {
    "kind": "LocalArgument",
    "name": "first",
    "type": "Int!",
    "defaultValue": null
  },
  {
    "kind": "LocalArgument",
    "name": "offset",
    "type": "Int",
    "defaultValue": null
  },
  {
    "kind": "LocalArgument",
    "name": "after",
    "type": "String",
    "defaultValue": null
  }
],
v1 = {
  "kind": "ScalarField",
  "alias": null,
  "name": "name",
  "args": null,
  "storageKey": null
},
v2 = {
  "kind": "ScalarField",
  "alias": null,
  "name": "image",
  "args": null,
  "storageKey": null
},
v3 = [
  {
    "kind": "ScalarField",
    "alias": null,
    "name": "minimum",
    "args": null,
    "storageKey": null
  },
  {
    "kind": "ScalarField",
    "alias": null,
    "name": "maximum",
    "args": null,
    "storageKey": null
  }
],
v4 = [
  (v1/*: any*/),
  {
    "kind": "ScalarField",
    "alias": null,
    "name": "damage",
    "args": null,
    "storageKey": null
  }
],
v5 = {
  "kind": "ScalarField",
  "alias": null,
  "name": "id",
  "args": null,
  "storageKey": null
};
return {
  "kind": "Request",
  "fragment": {
    "kind": "Fragment",
    "name": "PokemonsQuery",
    "type": "Query",
    "metadata": null,
    "argumentDefinitions": (v0/*: any*/),
    "selections": [
      {
        "kind": "FragmentSpread",
        "name": "Pokemons_fragment",
        "args": null
      }
    ]
  },
  "operation": {
    "kind": "Operation",
    "name": "PokemonsQuery",
    "argumentDefinitions": (v0/*: any*/),
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
              (v1/*: any*/),
              (v2/*: any*/),
              {
                "kind": "ScalarField",
                "alias": null,
                "name": "number",
                "args": null,
                "storageKey": null
              },
              {
                "kind": "LinkedField",
                "alias": null,
                "name": "weight",
                "storageKey": null,
                "args": null,
                "concreteType": "PokemonDimension",
                "plural": false,
                "selections": (v3/*: any*/)
              },
              {
                "kind": "LinkedField",
                "alias": null,
                "name": "height",
                "storageKey": null,
                "args": null,
                "concreteType": "PokemonDimension",
                "plural": false,
                "selections": (v3/*: any*/)
              },
              {
                "kind": "ScalarField",
                "alias": null,
                "name": "classification",
                "args": null,
                "storageKey": null
              },
              {
                "kind": "ScalarField",
                "alias": null,
                "name": "types",
                "args": null,
                "storageKey": null
              },
              {
                "kind": "ScalarField",
                "alias": null,
                "name": "resistant",
                "args": null,
                "storageKey": null
              },
              {
                "kind": "LinkedField",
                "alias": null,
                "name": "attacks",
                "storageKey": null,
                "args": null,
                "concreteType": "PokemonAttack",
                "plural": false,
                "selections": [
                  {
                    "kind": "LinkedField",
                    "alias": null,
                    "name": "fast",
                    "storageKey": null,
                    "args": null,
                    "concreteType": "Attack",
                    "plural": true,
                    "selections": (v4/*: any*/)
                  },
                  {
                    "kind": "LinkedField",
                    "alias": null,
                    "name": "special",
                    "storageKey": null,
                    "args": null,
                    "concreteType": "Attack",
                    "plural": true,
                    "selections": (v4/*: any*/)
                  }
                ]
              },
              {
                "kind": "ScalarField",
                "alias": null,
                "name": "weaknesses",
                "args": null,
                "storageKey": null
              },
              {
                "kind": "ScalarField",
                "alias": null,
                "name": "fleeRate",
                "args": null,
                "storageKey": null
              },
              {
                "kind": "ScalarField",
                "alias": null,
                "name": "maxCP",
                "args": null,
                "storageKey": null
              },
              {
                "kind": "ScalarField",
                "alias": null,
                "name": "maxHP",
                "args": null,
                "storageKey": null
              },
              {
                "kind": "LinkedField",
                "alias": null,
                "name": "evolutions",
                "storageKey": null,
                "args": null,
                "concreteType": "Pokemon",
                "plural": true,
                "selections": [
                  (v1/*: any*/),
                  (v2/*: any*/),
                  (v5/*: any*/)
                ]
              },
              {
                "kind": "LinkedField",
                "alias": null,
                "name": "evolutionRequirements",
                "storageKey": null,
                "args": null,
                "concreteType": "PokemonEvolutionRequirement",
                "plural": false,
                "selections": [
                  {
                    "kind": "ScalarField",
                    "alias": null,
                    "name": "amount",
                    "args": null,
                    "storageKey": null
                  },
                  (v1/*: any*/)
                ]
              },
              (v5/*: any*/)
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
  },
  "params": {
    "operationKind": "query",
    "name": "PokemonsQuery",
    "id": null,
    "text": "query PokemonsQuery(\n  $first: Int!\n  $offset: Int\n  $after: String\n) {\n  ...Pokemons_fragment\n}\n\nfragment Pokemon_fragment on Pokemon {\n  name\n  image\n  number\n  weight {\n    minimum\n    maximum\n  }\n  height {\n    minimum\n    maximum\n  }\n  classification\n  types\n  resistant\n  attacks {\n    fast {\n      name\n      damage\n    }\n    special {\n      name\n      damage\n    }\n  }\n  weaknesses\n  fleeRate\n  maxCP\n  maxHP\n  evolutions {\n    name\n    image\n    id\n  }\n  evolutionRequirements {\n    amount\n    name\n  }\n}\n\nfragment Pokemons_fragment on Query {\n  pokemons(first: $first, offset: $offset, after: $after) {\n    items {\n      ...Pokemon_fragment\n      id\n    }\n    first\n    offset\n    nextOffset\n  }\n}\n",
    "metadata": {}
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
