%raw
{| import './index.css' |};

switch (ReactDOMRe.Experimental.createRootWithId("root")) {
| Some(root) => ReactDOMRe.Experimental.render(root, <App />)
| None => Js.log("eRrOR Render with concurrent mode")
};

// Hot Module Replacement (HMR) - Remove this snippet to remove HMR.
// Learn more: https://www.snowpack.dev/#hot-module-replacement
[@bs.scope ("import", "meta")] [@bs.val] external hot: bool = "hot";

[@bs.scope ("import", "meta", "hot")] [@bs.val]
external accept: unit => unit = "accept";

if (hot) {
  accept();
};
