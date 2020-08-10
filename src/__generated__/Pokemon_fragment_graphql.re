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
  "alias": null,
  "args": null,
  "kind": "ScalarField",
  "name": "name",
  "storageKey": null
},
v1 = {
  "alias": null,
  "args": null,
  "kind": "ScalarField",
  "name": "image",
  "storageKey": null
},
v2 = [
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
v3 = [
  (v0/*: any*/),
  {
    "alias": null,
    "args": null,
    "kind": "ScalarField",
    "name": "damage",
    "storageKey": null
  }
];
return {
  "argumentDefinitions": [],
  "kind": "Fragment",
  "metadata": null,
  "name": "Pokemon_fragment",
  "selections": [
    (v0/*: any*/),
    (v1/*: any*/),
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
      "selections": (v2/*: any*/),
      "storageKey": null
    },
    {
      "alias": null,
      "args": null,
      "concreteType": "PokemonDimension",
      "kind": "LinkedField",
      "name": "height",
      "plural": false,
      "selections": (v2/*: any*/),
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
          "selections": (v3/*: any*/),
          "storageKey": null
        },
        {
          "alias": null,
          "args": null,
          "concreteType": "Attack",
          "kind": "LinkedField",
          "name": "special",
          "plural": true,
          "selections": (v3/*: any*/),
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
        (v0/*: any*/),
        (v1/*: any*/)
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
        (v0/*: any*/)
      ],
      "storageKey": null
    }
  ],
  "type": "Pokemon",
  "abstractKey": null
};
})() |json}
];
