module Fragment = [%relay.fragment
  {|
fragment Pokemon_fragment on Pokemon {
    name
    image
    number
    weight {
      minimum
      maximum
    }
    height {
      minimum
      maximum
    }
    classification
    types
    resistant
    attacks {
      fast {
        name
        damage
      }
      special {
        name
        damage
      }
    }
    weaknesses
    fleeRate
    maxCP
    maxHP
    evolutions {
      name
      image
    }
    evolutionRequirements {
      amount
      name
    }
  }
|}
];
