/* @generated */

module Types = {
  [@ocaml.warning "-30"];
  type fragment_weight = {
    minimum: option(string),
    maximum: option(string),
  }
  and fragment_height = {
    minimum: option(string),
    maximum: option(string),
  }
  and fragment_attacks = {
    fast: option(array(option(fragment_attacks_fast))),
    special: option(array(option(fragment_attacks_special))),
  }
  and fragment_attacks_fast = {
    name: option(string),
    damage: option(int),
  }
  and fragment_attacks_special = {
    name: option(string),
    damage: option(int),
  }
  and fragment_evolutions = {
    name: option(string),
    image: option(string),
  }
  and fragment_evolutionRequirements = {
    amount: option(int),
    name: option(string),
  };

  type fragment = {
    name: option(string),
    image: option(string),
    number: option(string),
    weight: option(fragment_weight),
    height: option(fragment_height),
    classification: option(string),
    types: option(array(option(string))),
    resistant: option(array(option(string))),
    attacks: option(fragment_attacks),
    weaknesses: option(array(option(string))),
    fleeRate: option(float),
    maxCP: option(int),
    maxHP: option(int),
    evolutions: option(array(option(fragment_evolutions))),
    evolutionRequirements: option(fragment_evolutionRequirements),
  };
};

module Internal = {
  type fragmentRaw;
  let fragmentConverter: Js.Dict.t(Js.Dict.t(Js.Dict.t(string))) = [%raw
    {json| {"__root":{"name":{"n":""},"image":{"n":""},"number":{"n":""},"weight":{"n":""},"weight_minimum":{"n":""},"weight_maximum":{"n":""},"height":{"n":""},"height_minimum":{"n":""},"height_maximum":{"n":""},"classification":{"n":""},"types":{"n":"","na":""},"resistant":{"n":"","na":""},"attacks":{"n":""},"attacks_fast":{"n":"","na":""},"attacks_fast_name":{"n":""},"attacks_fast_damage":{"n":""},"attacks_special":{"n":"","na":""},"attacks_special_name":{"n":""},"attacks_special_damage":{"n":""},"weaknesses":{"n":"","na":""},"fleeRate":{"n":""},"maxCP":{"n":""},"maxHP":{"n":""},"evolutions":{"n":"","na":""},"evolutions_name":{"n":""},"evolutions_image":{"n":""},"evolutionRequirements":{"n":""},"evolutionRequirements_amount":{"n":""},"evolutionRequirements_name":{"n":""}}} |json}
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
  ReasonRelay.fragmentRefs([> | `Pokemon_fragment]) => fragmentRef =
  "%identity";

module Utils = {};

type operationType = ReasonRelay.fragmentNode;

let node: operationType = [%raw
  {json| (function(){
var v0 = {
  "kind": "ScalarField",
  "alias": null,
  "name": "name",
  "args": null,
  "storageKey": null
},
v1 = {
  "kind": "ScalarField",
  "alias": null,
  "name": "image",
  "args": null,
  "storageKey": null
},
v2 = [
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
v3 = [
  (v0/*: any*/),
  {
    "kind": "ScalarField",
    "alias": null,
    "name": "damage",
    "args": null,
    "storageKey": null
  }
];
return {
  "kind": "Fragment",
  "name": "Pokemon_fragment",
  "type": "Pokemon",
  "metadata": null,
  "argumentDefinitions": [],
  "selections": [
    (v0/*: any*/),
    (v1/*: any*/),
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
      "selections": (v2/*: any*/)
    },
    {
      "kind": "LinkedField",
      "alias": null,
      "name": "height",
      "storageKey": null,
      "args": null,
      "concreteType": "PokemonDimension",
      "plural": false,
      "selections": (v2/*: any*/)
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
          "selections": (v3/*: any*/)
        },
        {
          "kind": "LinkedField",
          "alias": null,
          "name": "special",
          "storageKey": null,
          "args": null,
          "concreteType": "Attack",
          "plural": true,
          "selections": (v3/*: any*/)
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
        (v0/*: any*/),
        (v1/*: any*/)
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
        (v0/*: any*/)
      ]
    }
  ]
};
})() |json}
];
